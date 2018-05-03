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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/LogConfig.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/UserPoolConfig.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API CreateGraphqlApiRequest : public AppSyncRequest
  {
  public:
    CreateGraphqlApiRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGraphqlApi"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline CreateGraphqlApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline CreateGraphqlApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name for the <code>GraphqlApi</code>.</p>
     */
    inline CreateGraphqlApiRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon CloudWatch logs configuration.</p>
     */
    inline const LogConfig& GetLogConfig() const{ return m_logConfig; }

    /**
     * <p>The Amazon CloudWatch logs configuration.</p>
     */
    inline void SetLogConfig(const LogConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }

    /**
     * <p>The Amazon CloudWatch logs configuration.</p>
     */
    inline void SetLogConfig(LogConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }

    /**
     * <p>The Amazon CloudWatch logs configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithLogConfig(const LogConfig& value) { SetLogConfig(value); return *this;}

    /**
     * <p>The Amazon CloudWatch logs configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithLogConfig(LogConfig&& value) { SetLogConfig(std::move(value)); return *this;}


    /**
     * <p>The authentication type: API key, IAM, or Amazon Cognito User Pools.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type: API key, IAM, or Amazon Cognito User Pools.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type: API key, IAM, or Amazon Cognito User Pools.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type: API key, IAM, or Amazon Cognito User Pools.</p>
     */
    inline CreateGraphqlApiRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type: API key, IAM, or Amazon Cognito User Pools.</p>
     */
    inline CreateGraphqlApiRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline const UserPoolConfig& GetUserPoolConfig() const{ return m_userPoolConfig; }

    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline void SetUserPoolConfig(const UserPoolConfig& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }

    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline void SetUserPoolConfig(UserPoolConfig&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }

    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithUserPoolConfig(const UserPoolConfig& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithUserPoolConfig(UserPoolConfig&& value) { SetUserPoolConfig(std::move(value)); return *this;}


    /**
     * <p>The Open Id Connect configuration configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }

    /**
     * <p>The Open Id Connect configuration configuration.</p>
     */
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }

    /**
     * <p>The Open Id Connect configuration configuration.</p>
     */
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }

    /**
     * <p>The Open Id Connect configuration configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}

    /**
     * <p>The Open Id Connect configuration configuration.</p>
     */
    inline CreateGraphqlApiRequest& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    LogConfig m_logConfig;
    bool m_logConfigHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;

    UserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
