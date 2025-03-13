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
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData() = default;
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code generation configuration for the codegen job.</p>
     */
    inline const CodegenJobRenderConfig& GetRenderConfig() const { return m_renderConfig; }
    inline bool RenderConfigHasBeenSet() const { return m_renderConfigHasBeenSet; }
    template<typename RenderConfigT = CodegenJobRenderConfig>
    void SetRenderConfig(RenderConfigT&& value) { m_renderConfigHasBeenSet = true; m_renderConfig = std::forward<RenderConfigT>(value); }
    template<typename RenderConfigT = CodegenJobRenderConfig>
    StartCodegenJobData& WithRenderConfig(RenderConfigT&& value) { SetRenderConfig(std::forward<RenderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data schema to use for a code generation job.</p>
     */
    inline const CodegenJobGenericDataSchema& GetGenericDataSchema() const { return m_genericDataSchema; }
    inline bool GenericDataSchemaHasBeenSet() const { return m_genericDataSchemaHasBeenSet; }
    template<typename GenericDataSchemaT = CodegenJobGenericDataSchema>
    void SetGenericDataSchema(GenericDataSchemaT&& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = std::forward<GenericDataSchemaT>(value); }
    template<typename GenericDataSchemaT = CodegenJobGenericDataSchema>
    StartCodegenJobData& WithGenericDataSchema(GenericDataSchemaT&& value) { SetGenericDataSchema(std::forward<GenericDataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline bool GetAutoGenerateForms() const { return m_autoGenerateForms; }
    inline bool AutoGenerateFormsHasBeenSet() const { return m_autoGenerateFormsHasBeenSet; }
    inline void SetAutoGenerateForms(bool value) { m_autoGenerateFormsHasBeenSet = true; m_autoGenerateForms = value; }
    inline StartCodegenJobData& WithAutoGenerateForms(bool value) { SetAutoGenerateForms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature flags for a code generation job.</p>
     */
    inline const CodegenFeatureFlags& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = CodegenFeatureFlags>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = CodegenFeatureFlags>
    StartCodegenJobData& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the code generation job
     * data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartCodegenJobData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartCodegenJobData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    CodegenJobRenderConfig m_renderConfig;
    bool m_renderConfigHasBeenSet = false;

    CodegenJobGenericDataSchema m_genericDataSchema;
    bool m_genericDataSchemaHasBeenSet = false;

    bool m_autoGenerateForms{false};
    bool m_autoGenerateFormsHasBeenSet = false;

    CodegenFeatureFlags m_features;
    bool m_featuresHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
