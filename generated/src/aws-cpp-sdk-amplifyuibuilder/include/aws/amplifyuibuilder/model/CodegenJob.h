/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenJobRenderConfig.h>
#include <aws/amplifyuibuilder/model/CodegenJobGenericDataSchema.h>
#include <aws/amplifyuibuilder/model/CodegenFeatureFlags.h>
#include <aws/amplifyuibuilder/model/CodegenJobStatus.h>
#include <aws/amplifyuibuilder/model/CodegenJobAsset.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/CodegenDependency.h>
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
   * <p>Describes the configuration for a code generation job that is associated with
   * an Amplify app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenJob">AWS
   * API Reference</a></p>
   */
  class CodegenJob
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenJob() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CodegenJob& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CodegenJob& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    CodegenJob& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CodegenJobRenderConfig& GetRenderConfig() const { return m_renderConfig; }
    inline bool RenderConfigHasBeenSet() const { return m_renderConfigHasBeenSet; }
    template<typename RenderConfigT = CodegenJobRenderConfig>
    void SetRenderConfig(RenderConfigT&& value) { m_renderConfigHasBeenSet = true; m_renderConfig = std::forward<RenderConfigT>(value); }
    template<typename RenderConfigT = CodegenJobRenderConfig>
    CodegenJob& WithRenderConfig(RenderConfigT&& value) { SetRenderConfig(std::forward<RenderConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CodegenJobGenericDataSchema& GetGenericDataSchema() const { return m_genericDataSchema; }
    inline bool GenericDataSchemaHasBeenSet() const { return m_genericDataSchemaHasBeenSet; }
    template<typename GenericDataSchemaT = CodegenJobGenericDataSchema>
    void SetGenericDataSchema(GenericDataSchemaT&& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = std::forward<GenericDataSchemaT>(value); }
    template<typename GenericDataSchemaT = CodegenJobGenericDataSchema>
    CodegenJob& WithGenericDataSchema(GenericDataSchemaT&& value) { SetGenericDataSchema(std::forward<GenericDataSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline bool GetAutoGenerateForms() const { return m_autoGenerateForms; }
    inline bool AutoGenerateFormsHasBeenSet() const { return m_autoGenerateFormsHasBeenSet; }
    inline void SetAutoGenerateForms(bool value) { m_autoGenerateFormsHasBeenSet = true; m_autoGenerateForms = value; }
    inline CodegenJob& WithAutoGenerateForms(bool value) { SetAutoGenerateForms(value); return *this;}
    ///@}

    ///@{
    
    inline const CodegenFeatureFlags& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = CodegenFeatureFlags>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = CodegenFeatureFlags>
    CodegenJob& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the code generation job.</p>
     */
    inline CodegenJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CodegenJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CodegenJob& WithStatus(CodegenJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    CodegenJob& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline const CodegenJobAsset& GetAsset() const { return m_asset; }
    inline bool AssetHasBeenSet() const { return m_assetHasBeenSet; }
    template<typename AssetT = CodegenJobAsset>
    void SetAsset(AssetT&& value) { m_assetHasBeenSet = true; m_asset = std::forward<AssetT>(value); }
    template<typename AssetT = CodegenJobAsset>
    CodegenJob& WithAsset(AssetT&& value) { SetAsset(std::forward<AssetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CodegenJob& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CodegenJob& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CodegenJob& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    CodegenJob& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline const Aws::Vector<CodegenDependency>& GetDependencies() const { return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    template<typename DependenciesT = Aws::Vector<CodegenDependency>>
    void SetDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::forward<DependenciesT>(value); }
    template<typename DependenciesT = Aws::Vector<CodegenDependency>>
    CodegenJob& WithDependencies(DependenciesT&& value) { SetDependencies(std::forward<DependenciesT>(value)); return *this;}
    template<typename DependenciesT = CodegenDependency>
    CodegenJob& AddDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies.emplace_back(std::forward<DependenciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    CodegenJobRenderConfig m_renderConfig;
    bool m_renderConfigHasBeenSet = false;

    CodegenJobGenericDataSchema m_genericDataSchema;
    bool m_genericDataSchemaHasBeenSet = false;

    bool m_autoGenerateForms{false};
    bool m_autoGenerateFormsHasBeenSet = false;

    CodegenFeatureFlags m_features;
    bool m_featuresHasBeenSet = false;

    CodegenJobStatus m_status{CodegenJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CodegenJobAsset m_asset;
    bool m_assetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Vector<CodegenDependency> m_dependencies;
    bool m_dependenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
