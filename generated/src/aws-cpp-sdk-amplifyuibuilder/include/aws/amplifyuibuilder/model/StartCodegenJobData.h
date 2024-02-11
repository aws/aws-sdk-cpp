/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/CodegenJobRenderConfig.h>
#include <aws/amplifyuibuilder/model/CodegenJobGenericDataSchema.h>
#include <aws/amplifyuibuilder/model/CodegenFeatureFlags.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>The code generation job resource configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/StartCodegenJobData">AWS
   * API Reference</a></p>
   */
  class StartCodegenJobData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData();
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline const CodegenJobRenderConfig& GetRenderConfig() const{ return m_renderConfig; }

    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline bool RenderConfigHasBeenSet() const { return m_renderConfigHasBeenSet; }

    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline void SetRenderConfig(const CodegenJobRenderConfig& value) { m_renderConfigHasBeenSet = true; m_renderConfig = value; }

    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline void SetRenderConfig(CodegenJobRenderConfig&& value) { m_renderConfigHasBeenSet = true; m_renderConfig = std::move(value); }

    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline StartCodegenJobData& WithRenderConfig(const CodegenJobRenderConfig& value) { SetRenderConfig(value); return *this;}

    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline StartCodegenJobData& WithRenderConfig(CodegenJobRenderConfig&& value) { SetRenderConfig(std::move(value)); return *this;}


    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline const CodegenJobGenericDataSchema& GetGenericDataSchema() const{ return m_genericDataSchema; }

    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline bool GenericDataSchemaHasBeenSet() const { return m_genericDataSchemaHasBeenSet; }

    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline void SetGenericDataSchema(const CodegenJobGenericDataSchema& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = value; }

    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline void SetGenericDataSchema(CodegenJobGenericDataSchema&& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = std::move(value); }

    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline StartCodegenJobData& WithGenericDataSchema(const CodegenJobGenericDataSchema& value) { SetGenericDataSchema(value); return *this;}

    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline StartCodegenJobData& WithGenericDataSchema(CodegenJobGenericDataSchema&& value) { SetGenericDataSchema(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline bool GetAutoGenerateForms() const{ return m_autoGenerateForms; }

    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline bool AutoGenerateFormsHasBeenSet() const { return m_autoGenerateFormsHasBeenSet; }

    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline void SetAutoGenerateForms(bool value) { m_autoGenerateFormsHasBeenSet = true; m_autoGenerateForms = value; }

    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline StartCodegenJobData& WithAutoGenerateForms(bool value) { SetAutoGenerateForms(value); return *this;}


    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline const CodegenFeatureFlags& GetFeatures() const{ return m_features; }

    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline void SetFeatures(const CodegenFeatureFlags& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline void SetFeatures(CodegenFeatureFlags&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline StartCodegenJobData& WithFeatures(const CodegenFeatureFlags& value) { SetFeatures(value); return *this;}

    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline StartCodegenJobData& WithFeatures(CodegenFeatureFlags&& value) { SetFeatures(std::move(value)); return *this;}


    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline StartCodegenJobData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    CodegenJobRenderConfig m_renderConfig;
    bool m_renderConfigHasBeenSet = false;

    CodegenJobGenericDataSchema m_genericDataSchema;
    bool m_genericDataSchemaHasBeenSet = false;

    bool m_autoGenerateForms;
    bool m_autoGenerateFormsHasBeenSet = false;

    CodegenFeatureFlags m_features;
    bool m_featuresHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
