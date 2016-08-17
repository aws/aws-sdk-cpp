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
   * <p>Request to describe an existing <a>Authorizer</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetAuthorizerRequest : public APIGatewayRequest
  {
  public:
    GetAuthorizerRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of the <a>Authorizer</a> resource.</p>
     */
    inline GetAuthorizerRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
