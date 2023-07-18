package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.DefaultsModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.defaults.BaseOption;
import com.amazonaws.util.awsclientgenerator.generators.DefaultsGenerator;
import com.amazonaws.util.awsclientgenerator.generators.exceptions.SourceGenerationFailedException;
import org.apache.commons.lang.WordUtils;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;
import org.apache.velocity.app.VelocityEngine;
import org.apache.velocity.runtime.RuntimeConstants;
import org.apache.velocity.runtime.resource.loader.ClasspathResourceLoader;
import org.slf4j.helpers.NOPLoggerFactory;

import java.io.IOException;
import java.io.StringWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CppDefaultsGenerator implements DefaultsGenerator {

    private static String DEFAULTS_INCLUDE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/DefaultsHeader.vm";
    private static String DEFAULTS_SOURCE_TEMPLATE = "/com/amazonaws/util/awsclientgenerator/velocity/cpp/DefaultsSource.vm";
    private static String DEFAULTS_HEADER_DIR_PATH = "include/aws/core/config/defaults/ClientConfigurationDefaults.h";
    private static String DEFAULTS_SOURCE_DIR_PATH = "source/config/defaults/ClientConfigurationDefaults.cpp";

    /* If a specific option is not supported in a given SDK, it MUST be omitted.
     * This map defines what we actually support in C++ SDK from a generic defaults config.
     * Mapping generic json config value name to a C++ variable name
     * */
    private static final Map<String, String> JSON_DEFAULTS_MODEL_TO_CPP_MODEL;
    static {
        Map<String, String> aMap = new HashMap<>();
        aMap.put("retryMode", "retryMode"); // Will have to deal with it in template itself
        /* The amount of time after making an initial connect attempt on a socket, where if
           the client does not receive a completion of the connect handshake, the client gives up and fails the operation.
         * */
        aMap.put("connectTimeoutInMillis", "connectTimeoutMs");
        aMap.put("httpRequestTimeoutInMillis", "httpRequestTimeoutMs");

        // C++ SDK does not support following:

        /* STS client itself tries to use regional endpoint if region is defined,
         * there is no centralized way NOW to config Creds Provider per service clients that uses STS
         * */
        // aMap.put("stsRegionalEndpoints", "");

        /* This is service-specific client config while we are generating SDK-generic/global defaults
         * */
        // aMap.put("s3UsEast1RegionalEndpoints", "");

        /* These are simply not supported by C++ SDK:
         * */
        // aMap.put("tlsNegotiationTimeoutInMillis", "");
        // aMap.put("timeToFirstByteTimeoutInMillis", "");
        JSON_DEFAULTS_MODEL_TO_CPP_MODEL = Collections.unmodifiableMap(aMap);
    }

    protected final VelocityEngine velocityEngine;

    public CppDefaultsGenerator() throws Exception {
        velocityEngine = new VelocityEngine();
        velocityEngine.setProperty(RuntimeConstants.RESOURCE_LOADERS, "classpath");
        velocityEngine.setProperty("resource.loader.classpath.class", ClasspathResourceLoader.class.getName());
        velocityEngine.addProperty(RuntimeConstants.RUNTIME_LOG_INSTANCE, new NOPLoggerFactory().getLogger(""));
        velocityEngine.setProperty("context.scope_control.template", true);
        // Migration from 1.7 to 2.3:: https://velocity.apache.org/engine/2.3/upgrading.html
        // # Use backward compatible space gobbling
        velocityEngine.setProperty(RuntimeConstants.SPACE_GOBBLING, RuntimeConstants.SpaceGobbling.BC.toString());

        velocityEngine.init();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(final DefaultsModel defaultsModel) throws Exception {
        final DefaultsModel cppModel = genericDefaultsToCppSdkDefaults(defaultsModel);

        List<SdkFileEntry> fileList = new ArrayList<>();
        fileList.addAll(generateModelHeaderFiles(cppModel));
        fileList.addAll(generateModelSourceFiles(cppModel));

        SdkFileEntry[] retArray = new SdkFileEntry[fileList.size()];
        return fileList.toArray(retArray);
    }

    /**
     * Translate generic defaults model (common to all language SDKs) to a C++ specific model
     *   (basically, translate generic config variable name to ones already present/used in C++ SDK).
     * @param genericDefaults, DefaultsModel
     * @return DefaultsModel
     */
    private static DefaultsModel genericDefaultsToCppSdkDefaults(final DefaultsModel genericDefaults) {
        DefaultsModel cppDefaults = new DefaultsModel();

        cppDefaults.setVersion(genericDefaults.getVersion());
        cppDefaults.setService(genericDefaults.getService());
        for (DefaultsModel.DefaultsMode genericMode : genericDefaults.getDefaultsModes()) {
            DefaultsModel.DefaultsMode cppMode = new DefaultsModel.DefaultsMode();
            cppMode.setName(genericMode.getName());
            if (null != genericMode.getDocumentation()) {
                String tmpStr = genericMode.getDocumentation().replace("<p>", "");
                StringBuilder builder = new StringBuilder();
                for (String paragraph : tmpStr.split("</p>")) {
                    if (builder.length() != 0) {
                        builder.append(System.lineSeparator().concat(System.lineSeparator()));
                    }
                    paragraph = paragraph.replaceAll("<.*>(.*)</.*>", "$1");
                    final int DOC_LINE_LEN = 80;
                    paragraph = WordUtils.wrap(paragraph, DOC_LINE_LEN);
                    builder.append(paragraph);
                    if (!(paragraph.endsWith(".") || paragraph.endsWith(":") || paragraph.endsWith(";"))) {
                        builder.append(".");
                    }

                    cppMode.setDocumentation(builder.toString());
                }
            } else {
                cppMode.setDocumentation("");
            }

            for (Map.Entry<String, BaseOption> genericConfigVal : genericMode.getConfigurationValues().entrySet()) {
                String cppSrcVariableName = JSON_DEFAULTS_MODEL_TO_CPP_MODEL.get(genericConfigVal.getKey());
                if (null != cppSrcVariableName) {
                    cppMode.getConfigurationValues().put(cppSrcVariableName, genericConfigVal.getValue());
                }
            }
            cppDefaults.getDefaultsModes().add(cppMode);
        }
        return cppDefaults;
    }

    protected List<SdkFileEntry> generateModelHeaderFiles(final DefaultsModel defaultsModel) throws Exception {
        VelocityContext context = createContext(defaultsModel);

        Template template = velocityEngine.getTemplate(DEFAULTS_INCLUDE_TEMPLATE, StandardCharsets.UTF_8.name());
        context.put("defaultsModel", defaultsModel);
        context.put("serviceModel", defaultsModel); // for compatibility with generic template (Attribution.vm)

        String outputFileName = DEFAULTS_HEADER_DIR_PATH;
        SdkFileEntry headerFile = makeFile(template, context, outputFileName);
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();
        sdkFileEntries.add(headerFile);

        return sdkFileEntries;
    }

    protected List<SdkFileEntry> generateModelSourceFiles(final DefaultsModel defaultsModel) throws Exception {

        VelocityContext context = createContext(defaultsModel);

        Template template = velocityEngine.getTemplate(DEFAULTS_SOURCE_TEMPLATE, StandardCharsets.UTF_8.name());
        context.put("defaultsModel", defaultsModel);
        context.put("serviceModel", defaultsModel); // for compatibility with generic template (Attribution.vm)

        String outputFileName = DEFAULTS_SOURCE_DIR_PATH;
        SdkFileEntry headerFile = makeFile(template, context, outputFileName);
        List<SdkFileEntry> sdkFileEntries = new ArrayList<>();
        sdkFileEntries.add(headerFile);

        return sdkFileEntries;
    }

    protected static final VelocityContext createContext(final DefaultsModel serviceModel) {
        VelocityContext context = new VelocityContext();
        context.put("nl", System.lineSeparator());
        context.put("input.encoding", StandardCharsets.UTF_8.name());
        context.put("output.encoding", StandardCharsets.UTF_8.name());
        return context;
    }

    protected static final SdkFileEntry makeFile(Template template, VelocityContext context, String path) throws IOException {
        StringWriter sw = new StringWriter();
        template.merge(context, sw);

        try {
            sw.close();
        } catch (IOException e) {
            throw new SourceGenerationFailedException(String.format("Generation of template failed for template %s", template.getName()), e);
        }
        sw.flush();
        StringBuffer sb = new StringBuffer();
        sb.append(sw.toString());

        SdkFileEntry file = new SdkFileEntry();
        file.setPathRelativeToRoot(path);
        file.setSdkFile(sb);
        return file;
    }
}
