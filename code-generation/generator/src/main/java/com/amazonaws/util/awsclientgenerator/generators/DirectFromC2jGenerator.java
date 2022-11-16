/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOption;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionModifier;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionJsonDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOptionModifierJsonDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.DefaultClientConfigs;

import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValue;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointParameterValueDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTestParamsDeserializer;
import com.amazonaws.util.awsclientgenerator.domainmodels.endpoints.EndpointTests;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.OutputStream;


public class DirectFromC2jGenerator {

    private final MainGenerator mainClientGenerator;

    public DirectFromC2jGenerator(final MainGenerator mainClientGenerator) {
       this.mainClientGenerator = mainClientGenerator;
    }

    public ByteArrayOutputStream generateServiceSourceFromJson(String rawJson, String endpointRuleSet, String endpointRulesTests,
                                                               String languageBinding, String serviceName, String namespace,
                                                               String licenseText, boolean generateStandalonePackage,
                                                               boolean enableVirtualOperations) throws Exception {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(EndpointTests.EndpointTestParams.class, new EndpointTestParamsDeserializer());
        gsonBuilder.registerTypeAdapter(EndpointParameterValue.class, new EndpointParameterValueDeserializer());
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(serviceName);
        c2jServiceModel.setEndpointRules(endpointRuleSet);
        if (endpointRulesTests != null) {
            EndpointTests endpointTestsModel = gson.fromJson(endpointRulesTests, EndpointTests.class);
            c2jServiceModel.setEndpointTests(endpointTestsModel);
        }
        return mainClientGenerator.generateSourceFromC2jModel(c2jServiceModel, serviceName, languageBinding, namespace,
                licenseText, generateStandalonePackage, enableVirtualOperations);
    }

    /**
     * A function to generate C++ source for core partitions
     *
     * @param rawJson
     * @param languageBinding
     * @param serviceName, dummy argument for interoperability with service generator
     * @param namespace
     * @param licenseText
     * @param generateStandalonePackage, dummy
     * @param enableVirtualOperations, dummy
     * @return C++ generated code
     * @throws Exception
     */
    public ByteArrayOutputStream generatePartitionsSourceFromJson(String rawJson, String languageBinding, String serviceName,
                                                                 String namespace, String licenseText,
                                                                 boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        PartitionsModel partitionsBom = new PartitionsModel();
        partitionsBom.setPartitionsBlob(rawJson);

        return mainClientGenerator.generatePartitionsSourceFromStrBlob(partitionsBom, languageBinding, namespace, licenseText);
    }

    /**
     * A function to generate C++ source for client config defaults
     *
     * @param rawJson
     * @param languageBinding
     * @param serviceName, dummy argument for interoperability with service generator
     * @param namespace
     * @param licenseText
     * @param generateStandalonePackage, dummy
     * @param enableVirtualOperations, dummy
     * @return C++ generated code
     * @throws Exception
     */
    public ByteArrayOutputStream generateDefaultsSourceFromJson(String rawJson, String languageBinding, String serviceName,
                                                                String namespace, String licenseText,
                                                                boolean generateStandalonePackage, boolean enableVirtualOperations) throws Exception {
        DefaultClientConfigs clientConfigBom = parseRawJson(rawJson);

        return mainClientGenerator.generateDefaultsSourceFromModel(clientConfigBom, languageBinding, namespace, licenseText);
    }

    /**
     * Helper function to parse raw json str into a structured BOM.
     *
     * @param rawJson
     * @return
     */
    public static DefaultClientConfigs parseRawJson(final String rawJson) {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(BaseOption.class, new BaseOptionJsonDeserializer());
        gsonBuilder.registerTypeAdapter(BaseOptionModifier.class, new BaseOptionModifierJsonDeserializer());
        Gson gson = gsonBuilder.create();

        // Read raw JSON into structured BOM
        /* Input raw JSON model contains (check json model for example):
            version (string, required) the version of the JSON file
            base (required) contains the actual configuration values
            modes (required), maps the mode name to the modification of configuration options.
            documentation (required) contains the documentation for modes and configuration options
         */
        DefaultClientConfigs clientConfigBom = gson.fromJson(rawJson, DefaultClientConfigs.class);
        return clientConfigBom;
    }

    /**
     * A function to generate C++ source for service client tests
     *
     * @throws Exception
     */
    public ByteArrayOutputStream generateServiceTestSourceFromModels(String rawJson, String endpointRuleSet, String endpointRulesTests,
                                                         String languageBinding, String serviceName, String namespace,
                                                         String licenseText) throws Exception {
        GsonBuilder gsonBuilder = new GsonBuilder();
        gsonBuilder.registerTypeAdapter(EndpointTests.EndpointTestParams.class, new EndpointTestParamsDeserializer());
        gsonBuilder.registerTypeAdapter(EndpointParameterValue.class, new EndpointParameterValueDeserializer());
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(serviceName);
        c2jServiceModel.setEndpointRules(endpointRuleSet);
        if (endpointRulesTests != null) {
            EndpointTests endpointTestsModel = gson.fromJson(endpointRulesTests, EndpointTests.class);
            c2jServiceModel.setEndpointTests(endpointTestsModel);
        }
        return mainClientGenerator.generateTestSourceFromModel(c2jServiceModel, serviceName, languageBinding, namespace,
                licenseText);
    }
}
