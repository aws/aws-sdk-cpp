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
    AWS_AMPLIFYUIBUILDER_API CodegenJob();
    AWS_AMPLIFYUIBUILDER_API CodegenJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CodegenJob& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CodegenJob& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CodegenJob& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline CodegenJob& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CodegenJob& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CodegenJob& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline CodegenJob& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline CodegenJob& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline CodegenJob& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    
    inline const CodegenJobRenderConfig& GetRenderConfig() const{ return m_renderConfig; }
    inline bool RenderConfigHasBeenSet() const { return m_renderConfigHasBeenSet; }
    inline void SetRenderConfig(const CodegenJobRenderConfig& value) { m_renderConfigHasBeenSet = true; m_renderConfig = value; }
    inline void SetRenderConfig(CodegenJobRenderConfig&& value) { m_renderConfigHasBeenSet = true; m_renderConfig = std::move(value); }
    inline CodegenJob& WithRenderConfig(const CodegenJobRenderConfig& value) { SetRenderConfig(value); return *this;}
    inline CodegenJob& WithRenderConfig(CodegenJobRenderConfig&& value) { SetRenderConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CodegenJobGenericDataSchema& GetGenericDataSchema() const{ return m_genericDataSchema; }
    inline bool GenericDataSchemaHasBeenSet() const { return m_genericDataSchemaHasBeenSet; }
    inline void SetGenericDataSchema(const CodegenJobGenericDataSchema& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = value; }
    inline void SetGenericDataSchema(CodegenJobGenericDataSchema&& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = std::move(value); }
    inline CodegenJob& WithGenericDataSchema(const CodegenJobGenericDataSchema& value) { SetGenericDataSchema(value); return *this;}
    inline CodegenJob& WithGenericDataSchema(CodegenJobGenericDataSchema&& value) { SetGenericDataSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to autogenerate forms in the code generation job.</p>
     */
    inline bool GetAutoGenerateForms() const{ return m_autoGenerateForms; }
    inline bool AutoGenerateFormsHasBeenSet() const { return m_autoGenerateFormsHasBeenSet; }
    inline void SetAutoGenerateForms(bool value) { m_autoGenerateFormsHasBeenSet = true; m_autoGenerateForms = value; }
    inline CodegenJob& WithAutoGenerateForms(bool value) { SetAutoGenerateForms(value); return *this;}
    ///@}

    ///@{
    
    inline const CodegenFeatureFlags& GetFeatures() const{ return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    inline void SetFeatures(const CodegenFeatureFlags& value) { m_featuresHasBeenSet = true; m_features = value; }
    inline void SetFeatures(CodegenFeatureFlags&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }
    inline CodegenJob& WithFeatures(const CodegenFeatureFlags& value) { SetFeatures(value); return *this;}
    inline CodegenJob& WithFeatures(CodegenFeatureFlags&& value) { SetFeatures(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the code generation job.</p>
     */
    inline const CodegenJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CodegenJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CodegenJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CodegenJob& WithStatus(const CodegenJobStatus& value) { SetStatus(value); return *this;}
    inline CodegenJob& WithStatus(CodegenJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline CodegenJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline CodegenJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline CodegenJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline const CodegenJobAsset& GetAsset() const{ return m_asset; }
    inline bool AssetHasBeenSet() const { return m_assetHasBeenSet; }
    inline void SetAsset(const CodegenJobAsset& value) { m_assetHasBeenSet = true; m_asset = value; }
    inline void SetAsset(CodegenJobAsset&& value) { m_assetHasBeenSet = true; m_asset = std::move(value); }
    inline CodegenJob& WithAsset(const CodegenJobAsset& value) { SetAsset(value); return *this;}
    inline CodegenJob& WithAsset(CodegenJobAsset&& value) { SetAsset(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CodegenJob& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CodegenJob& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CodegenJob& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CodegenJob& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CodegenJob& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CodegenJob& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CodegenJob& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CodegenJob& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CodegenJob& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline CodegenJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CodegenJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline CodegenJob& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline CodegenJob& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline const Aws::Vector<CodegenDependency>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<CodegenDependency>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<CodegenDependency>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline CodegenJob& WithDependencies(const Aws::Vector<CodegenDependency>& value) { SetDependencies(value); return *this;}
    inline CodegenJob& WithDependencies(Aws::Vector<CodegenDependency>&& value) { SetDependencies(std::move(value)); return *this;}
    inline CodegenJob& AddDependencies(const CodegenDependency& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline CodegenJob& AddDependencies(CodegenDependency&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
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

    bool m_autoGenerateForms;
    bool m_autoGenerateFormsHasBeenSet = false;

    CodegenFeatureFlags m_features;
    bool m_featuresHasBeenSet = false;

    CodegenJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CodegenJobAsset m_asset;
    bool m_assetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::Vector<CodegenDependency> m_dependencies;
    bool m_dependenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
