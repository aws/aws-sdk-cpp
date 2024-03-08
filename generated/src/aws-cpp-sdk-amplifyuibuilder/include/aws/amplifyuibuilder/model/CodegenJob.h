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


    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline CodegenJob& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline CodegenJob& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the code generation job.</p>
     */
    inline CodegenJob& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline CodegenJob& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline CodegenJob& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amplify app associated with the code generation job.</p>
     */
    inline CodegenJob& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline CodegenJob& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline CodegenJob& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment associated with the code generation
     * job.</p>
     */
    inline CodegenJob& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    
    inline const CodegenJobRenderConfig& GetRenderConfig() const{ return m_renderConfig; }

    
    inline bool RenderConfigHasBeenSet() const { return m_renderConfigHasBeenSet; }

    
    inline void SetRenderConfig(const CodegenJobRenderConfig& value) { m_renderConfigHasBeenSet = true; m_renderConfig = value; }

    
    inline void SetRenderConfig(CodegenJobRenderConfig&& value) { m_renderConfigHasBeenSet = true; m_renderConfig = std::move(value); }

    
    inline CodegenJob& WithRenderConfig(const CodegenJobRenderConfig& value) { SetRenderConfig(value); return *this;}

    
    inline CodegenJob& WithRenderConfig(CodegenJobRenderConfig&& value) { SetRenderConfig(std::move(value)); return *this;}


    
    inline const CodegenJobGenericDataSchema& GetGenericDataSchema() const{ return m_genericDataSchema; }

    
    inline bool GenericDataSchemaHasBeenSet() const { return m_genericDataSchemaHasBeenSet; }

    
    inline void SetGenericDataSchema(const CodegenJobGenericDataSchema& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = value; }

    
    inline void SetGenericDataSchema(CodegenJobGenericDataSchema&& value) { m_genericDataSchemaHasBeenSet = true; m_genericDataSchema = std::move(value); }

    
    inline CodegenJob& WithGenericDataSchema(const CodegenJobGenericDataSchema& value) { SetGenericDataSchema(value); return *this;}

    
    inline CodegenJob& WithGenericDataSchema(CodegenJobGenericDataSchema&& value) { SetGenericDataSchema(std::move(value)); return *this;}


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
    inline CodegenJob& WithAutoGenerateForms(bool value) { SetAutoGenerateForms(value); return *this;}


    
    inline const CodegenFeatureFlags& GetFeatures() const{ return m_features; }

    
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    
    inline void SetFeatures(const CodegenFeatureFlags& value) { m_featuresHasBeenSet = true; m_features = value; }

    
    inline void SetFeatures(CodegenFeatureFlags&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    
    inline CodegenJob& WithFeatures(const CodegenFeatureFlags& value) { SetFeatures(value); return *this;}

    
    inline CodegenJob& WithFeatures(CodegenFeatureFlags&& value) { SetFeatures(std::move(value)); return *this;}


    /**
     * <p>The status of the code generation job.</p>
     */
    inline const CodegenJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the code generation job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the code generation job.</p>
     */
    inline void SetStatus(const CodegenJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the code generation job.</p>
     */
    inline void SetStatus(CodegenJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the code generation job.</p>
     */
    inline CodegenJob& WithStatus(const CodegenJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the code generation job.</p>
     */
    inline CodegenJob& WithStatus(CodegenJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline CodegenJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline CodegenJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The customized status message for the code generation job.</p>
     */
    inline CodegenJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline const CodegenJobAsset& GetAsset() const{ return m_asset; }

    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline bool AssetHasBeenSet() const { return m_assetHasBeenSet; }

    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline void SetAsset(const CodegenJobAsset& value) { m_assetHasBeenSet = true; m_asset = value; }

    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline void SetAsset(CodegenJobAsset&& value) { m_assetHasBeenSet = true; m_asset = std::move(value); }

    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline CodegenJob& WithAsset(const CodegenJobAsset& value) { SetAsset(value); return *this;}

    /**
     * <p>The <code>CodegenJobAsset</code> to use for the code generation job.</p>
     */
    inline CodegenJob& WithAsset(CodegenJobAsset&& value) { SetAsset(std::move(value)); return *this;}


    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the code generation job.</p>
     */
    inline CodegenJob& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline CodegenJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the code generation job was created.</p>
     */
    inline CodegenJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline CodegenJob& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time that the code generation job was modified.</p>
     */
    inline CodegenJob& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline const Aws::Vector<CodegenDependency>& GetDependencies() const{ return m_dependencies; }

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline void SetDependencies(const Aws::Vector<CodegenDependency>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline void SetDependencies(Aws::Vector<CodegenDependency>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline CodegenJob& WithDependencies(const Aws::Vector<CodegenDependency>& value) { SetDependencies(value); return *this;}

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline CodegenJob& WithDependencies(Aws::Vector<CodegenDependency>&& value) { SetDependencies(std::move(value)); return *this;}

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline CodegenJob& AddDependencies(const CodegenDependency& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }

    /**
     * <p>Lists the dependency packages that may be required for the project code to
     * run.</p>
     */
    inline CodegenJob& AddDependencies(CodegenDependency&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }

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
