﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYV2_API DeleteAuthorizerRequest : public ApiGatewayV2Request
  {
  public:
    DeleteAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAuthorizer"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The authorizer identifier.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
