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
   * <p>Request to describe an existing <a>Method</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetMethodRequest : public APIGatewayRequest
  {
  public:
    GetMethodRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline GetMethodRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline GetMethodRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline GetMethodRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline GetMethodRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
