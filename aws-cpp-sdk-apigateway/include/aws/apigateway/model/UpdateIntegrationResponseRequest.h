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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/PatchOperation.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an update integration response request.</p>
   */
  class AWS_APIGATEWAY_API UpdateIntegrationResponseRequest : public APIGatewayRequest
  {
  public:
    UpdateIntegrationResponseRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's resource identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline UpdateIntegrationResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline UpdateIntegrationResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies an update integration response request's HTTP method.</p>
     */
    inline UpdateIntegrationResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline UpdateIntegrationResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline UpdateIntegrationResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies an update integration response request's status code.</p>
     */
    inline UpdateIntegrationResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateIntegrationResponseRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateIntegrationResponseRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateIntegrationResponseRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateIntegrationResponseRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
