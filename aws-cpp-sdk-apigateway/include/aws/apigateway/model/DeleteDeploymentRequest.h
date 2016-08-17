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

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests Amazon API Gateway to delete a <a>Deployment</a> resource.</p>
   */
  class AWS_APIGATEWAY_API DeleteDeploymentRequest : public APIGatewayRequest
  {
  public:
    DeleteDeploymentRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> resource for the <a>Deployment</a>
     * resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the <a>Deployment</a> resource to delete.</p>
     */
    inline DeleteDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
