/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/CacheClusterSize.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/CanarySettings.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to create a <a>Stage</a> resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateStageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateStageRequest : public APIGatewayRequest
  {
  public:
    CreateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStage"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline CreateStageRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline CreateStageRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline CreateStageRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline CreateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline CreateStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name for the <a>Stage</a> resource. Stage names can only
     * contain alphanumeric characters, hyphens, and underscores. Maximum length is 128
     * characters.</p>
     */
    inline CreateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>Deployment</a> resource for the
     * <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Whether cache clustering is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }

    /**
     * <p>Whether cache clustering is enabled for the stage.</p>
     */
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }

    /**
     * <p>Whether cache clustering is enabled for the stage.</p>
     */
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }

    /**
     * <p>Whether cache clustering is enabled for the stage.</p>
     */
    inline CreateStageRequest& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}


    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline const CacheClusterSize& GetCacheClusterSize() const{ return m_cacheClusterSize; }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline bool CacheClusterSizeHasBeenSet() const { return m_cacheClusterSizeHasBeenSet; }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = std::move(value); }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline CreateStageRequest& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline CreateStageRequest& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(std::move(value)); return *this;}


    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }


    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline CreateStageRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline CreateStageRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the associated API documentation.</p>
     */
    inline CreateStageRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}


    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline const CanarySettings& GetCanarySettings() const{ return m_canarySettings; }

    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }

    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline void SetCanarySettings(const CanarySettings& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = value; }

    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline void SetCanarySettings(CanarySettings&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::move(value); }

    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline CreateStageRequest& WithCanarySettings(const CanarySettings& value) { SetCanarySettings(value); return *this;}

    /**
     * <p>The canary deployment settings of this stage.</p>
     */
    inline CreateStageRequest& WithCanarySettings(CanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}


    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }

    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline bool TracingEnabledHasBeenSet() const { return m_tracingEnabledHasBeenSet; }

    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }

    /**
     * <p>Specifies whether active tracing with X-ray is enabled for the
     * <a>Stage</a>.</p>
     */
    inline CreateStageRequest& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}


    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateStageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_cacheClusterEnabled;
    bool m_cacheClusterEnabledHasBeenSet;

    CacheClusterSize m_cacheClusterSize;
    bool m_cacheClusterSizeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet;

    CanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet;

    bool m_tracingEnabled;
    bool m_tracingEnabledHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
