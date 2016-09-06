/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests Amazon API Gateway to create a <a>Stage</a> resource.</p>
   */
  class AWS_APIGATEWAY_API CreateStageRequest : public APIGatewayRequest
  {
  public:
    CreateStageRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline CreateStageRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline CreateStageRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Stage</a> resource
     * to create.</p>
     */
    inline CreateStageRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name for the <a>Stage</a> resource.</p>
     */
    inline CreateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource for the <a>Stage</a>
     * resource.</p>
     */
    inline CreateStageRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>Stage</a> resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline CreateStageRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

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
    inline void SetCacheClusterSize(const CacheClusterSize& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline void SetCacheClusterSize(CacheClusterSize&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline CreateStageRequest& WithCacheClusterSize(const CacheClusterSize& value) { SetCacheClusterSize(value); return *this;}

    /**
     * <p>The stage's cache cluster size.</p>
     */
    inline CreateStageRequest& WithCacheClusterSize(CacheClusterSize&& value) { SetCacheClusterSize(value); return *this;}

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
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = value; }

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
    inline CreateStageRequest& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(value); return *this;}

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

    /**
     * <p>A map that defines the stage variables for the new <a>Stage</a> resource.
     * Variable names can have alphanumeric and underscore characters, and the values
     * must match <code>[A-Za-z0-9-._~:/?#&amp;=,]+</code>.</p>
     */
    inline CreateStageRequest& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables[key] = value; return *this; }

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
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
