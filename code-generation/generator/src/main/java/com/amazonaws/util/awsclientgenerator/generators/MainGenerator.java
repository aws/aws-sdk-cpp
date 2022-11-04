/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.SdkSpec;
import com.amazonaws.util.awsclientgenerator.config.ServiceGeneratorConfig;
import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.DefaultsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOption;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionModifier;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.DefaultClientConfigs;
import com.amazonaws.util.awsclientgenerator.generators.cpp.CppDefaultsGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.CppPartitionsGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.CppServiceClientTestGenerator;
import com.amazonaws.util.awsclientgenerator.transform.C2jModelToGeneratorModelTransformer;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.Map;
import java.util.zip.ZipEntry;
import java.util.zip.ZipOutputStream;

public class MainGenerator {

    public ByteArrayOutputStream generateSourceFromC2jModel(C2jServiceModel c2jModel,
                                                            String serviceName, String languageBinding,
                                                            String namespace, String licenseText, boolean generateStandalonePackage,
                                                            boolean enableVirtualOperations) throws Exception {

        SdkSpec spec = new SdkSpec(languageBinding, serviceName, null);
        // Transform to ServiceModel
        ServiceModel serviceModel = new C2jModelToGeneratorModelTransformer(c2jModel, generateStandalonePackage).convert();

        serviceModel.setRuntimeMajorVersion("@RUNTIME_MAJOR_VERSION@");
        serviceModel.setRuntimeMajorVersionUpperBound("@RUNTIME_MAJOR_VERSION_UPPER_BOUND@");
        serviceModel.setRuntimeMinorVersion("@RUNTIME_MINOR_VERSION@");
        serviceModel.setNamespace(namespace);
        serviceModel.setLicenseText(licenseText);
        serviceModel.setEnableVirtualOperations(enableVirtualOperations);

        spec.setVersion(serviceModel.getMetadata().getApiVersion());

        String protocol = serviceModel.getMetadata().getProtocol();
        ClientGenerator clientGenerator = ServiceGeneratorConfig.findGenerator(spec, protocol);

        //use serviceName and version to convert the json over.
        SdkFileEntry[] apiFiles = clientGenerator.generateSourceFiles(serviceModel);
        String sdkOutputName = String.format("aws-%s-sdk-%s", spec.getLanguageBinding(), serviceModel.getMetadata().getProjectName());

        return compressFilesToZip(apiFiles, sdkOutputName);
    }

    public ByteArrayOutputStream generateDefaultsSourceFromModel(final DefaultClientConfigs model,
                                                String languageBinding,
                                                String namespace,
                                                String licenseText) throws Exception {

        // Process bom to a final models as input model is a base modification imperatives model
        // i.e. just a list of actual target ClientConfig modes and their parameters
        DefaultsModel processedModel = processDefaultsInputModel(model);
        CppDefaultsGenerator cppDefaultsGenerator = new CppDefaultsGenerator();
        SdkFileEntry[] apiFiles = cppDefaultsGenerator.generateSourceFiles(processedModel);
        String componentOutputName = String.format("aws-cpp-sdk-core");

        return compressFilesToZip(apiFiles, componentOutputName);
    }

    public ByteArrayOutputStream generatePartitionsSourceFromStrBlob(final PartitionsModel partitionsBom,
                                                                     String languageBinding,
                                                                     String namespace,
                                                                     String licenseText) throws Exception {
        CppPartitionsGenerator cppPartitionsGenerator = new CppPartitionsGenerator();
        SdkFileEntry[] apiFiles = cppPartitionsGenerator.generateSourceFiles(partitionsBom);
        String componentOutputName = String.format("aws-cpp-sdk-core");

        return compressFilesToZip(apiFiles, componentOutputName);
    }

    public ByteArrayOutputStream generateTestSourceFromModel(C2jServiceModel c2jModel,
                                                             String serviceName, String languageBinding,
                                                             String namespace, String licenseText) throws Exception {
        SdkSpec spec = new SdkSpec(languageBinding, serviceName, null);
        // Transform to ServiceModel
        ServiceModel serviceModel = new C2jModelToGeneratorModelTransformer(c2jModel, false).convert();

        serviceModel.setRuntimeMajorVersion("@RUNTIME_MAJOR_VERSION@");
        serviceModel.setRuntimeMajorVersionUpperBound("@RUNTIME_MAJOR_VERSION_UPPER_BOUND@");
        serviceModel.setRuntimeMinorVersion("@RUNTIME_MINOR_VERSION@");
        serviceModel.setNamespace(namespace);
        serviceModel.setLicenseText(licenseText);
        serviceModel.setEnableVirtualOperations(true);

        spec.setVersion(serviceModel.getMetadata().getApiVersion());
        CppServiceClientTestGenerator cppTestGenerator = new CppServiceClientTestGenerator();
        SdkFileEntry[] apiFiles = cppTestGenerator.generateSourceFiles(serviceModel);
        String componentOutputName = String.format("%s-gen-tests", serviceModel.getMetadata().getProjectName());

        return compressFilesToZip(apiFiles, componentOutputName);
    }

    private static ByteArrayOutputStream compressFilesToZip(final SdkFileEntry[] apiFiles, final String componentOutputName) throws IOException {
        //we need to add a BOM to accommodate MSFT compilers.
        //as specified here https://blogs.msdn.microsoft.com/vcblog/2016/02/22/new-options-for-managing-character-sets-in-the-microsoft-cc-compiler/
        byte[] bom = {(byte)0xEF,(byte)0xBB,(byte)0xBF};
        ByteArrayOutputStream outputStream = new ByteArrayOutputStream();
        try (ZipOutputStream zipOutputStream = new ZipOutputStream(outputStream, StandardCharsets.UTF_8)) {
            for (SdkFileEntry apiFile : apiFiles) {
                if (apiFile != null && apiFile.getPathRelativeToRoot() != null) {
                    ZipEntry zipEntry = new ZipEntry(String.format("%s/%s", componentOutputName, apiFile.getPathRelativeToRoot()));
                    zipOutputStream.putNextEntry(zipEntry);

                    if(apiFile.isNeedsByteOrderMark()) {
                        zipOutputStream.write(bom);
                    }

                    zipOutputStream.write(apiFile.getSdkFile().toString().getBytes(StandardCharsets.UTF_8));
                    zipOutputStream.closeEntry();
                }
            }
        }

        return outputStream;
    }

    /**
     * A helper function to build actual default configuration models from a base + modifications model
     * @param defaultClientConfig
     * @return Map of Maps of Options
     * @throws Exception
     */
    public static DefaultsModel processDefaultsInputModel(DefaultClientConfigs defaultClientConfig) throws Exception {
        DefaultsModel processedClientConfig = new DefaultsModel();
        processedClientConfig.setService("global"); //hardcoded so far
        processedClientConfig.setVersion(defaultClientConfig.getVersion());

        Map<String, BaseOption> baseConfig = defaultClientConfig.getBase();

        Map<String, String> documentationModes = defaultClientConfig.getDocumentation().get("modes");

        // Firstly, inject fake auto and legacy modes that are not present in defaults modes but present in documentation
        DefaultsModel.DefaultsMode currentMode;
        String[] fakeModes = {"auto", "legacy"};
        for (String fakeModeName : fakeModes) {
            currentMode = buildClientConfigDefaultMode(null, null);
            currentMode.setName(fakeModeName);
            if (null != documentationModes) {
                currentMode.setDocumentation(documentationModes.get(fakeModeName));
            }
            processedClientConfig.getDefaultsModes().add(currentMode);
        }
        // Secondly, process standard defaults, as most used to be on top
        currentMode = buildClientConfigDefaultMode(baseConfig, defaultClientConfig.getModes().get("standard"));
        currentMode.setName("standard");
        if (null != documentationModes) {
            currentMode.setDocumentation(documentationModes.get("standard"));
        }
        processedClientConfig.getDefaultsModes().add(currentMode);

        // Process rest in original lexicographical order
        for (Map.Entry<String, Map<String, BaseOptionModifier>> modeEntry : defaultClientConfig.getModes().entrySet()) {
            if (modeEntry.getKey().equals("standard")) {
                continue;
            }
            currentMode = buildClientConfigDefaultMode(baseConfig, modeEntry.getValue());
            currentMode.setName(modeEntry.getKey());
            if (null != documentationModes) {
                currentMode.setDocumentation(documentationModes.get(modeEntry.getKey()));
            }
            processedClientConfig.getDefaultsModes().add(currentMode);
        }
        return processedClientConfig;
    }

    /**
     * A helper function to build a single default configuration from a base + modification model
     * @param baseConfig, a Map of base defaults
     * @param modeEntry, a Map of modifications to apply to a base set
     * @return Map of BaseOption
     * @throws Exception
     */
    private static DefaultsModel.DefaultsMode buildClientConfigDefaultMode(final Map<String, BaseOption> baseConfig,
                                                                           final Map<String, BaseOptionModifier> modeEntry)
            throws Exception {

        DefaultsModel.DefaultsMode currentMode = new DefaultsModel.DefaultsMode();
        if (null != baseConfig) {
            for (Map.Entry<String, BaseOption> baseConfigEntry : baseConfig.entrySet()) {
                // if base.<stsRegionalEndpoints> is modified by modes.<standard>.<stsRegionalEndpoints>
                // Process modification, otherwise set original
                if (modeEntry.containsKey(baseConfigEntry.getKey())) {
                    BaseOptionModifier currentModification = modeEntry.get(baseConfigEntry.getKey());
                    currentMode.getConfigurationValues()
                            .put(baseConfigEntry.getKey(), currentModification.applyModificationOn(baseConfigEntry.getValue()));
                } else {
                    currentMode.getConfigurationValues()
                            .put(baseConfigEntry.getKey(), baseConfigEntry.getValue());
                }
            }
        }
        return currentMode;
    }
}
