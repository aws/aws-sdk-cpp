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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/LogConfig.h>
#include <aws/appsync/model/UserPoolConfig.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a GraphQL API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GraphqlApi">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API GraphqlApi
  {
  public:
    GraphqlApi();
    GraphqlApi(const Aws::Utils::Json::JsonValue& jsonValue);
    GraphqlApi& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The API name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline GraphqlApi& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GraphqlApi& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The authentication type.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type.</p>
     */
    inline GraphqlApi& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type.</p>
     */
    inline GraphqlApi& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline const LogConfig& GetLogConfig() const{ return m_logConfig; }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline void SetLogConfig(const LogConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline void SetLogConfig(LogConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline GraphqlApi& WithLogConfig(const LogConfig& value) { SetLogConfig(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs configuration.</p>
     */
    inline GraphqlApi& WithLogConfig(LogConfig&& value) { SetLogConfig(std::move(value)); return *this;}


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
    inline GraphqlApi& WithUserPoolConfig(const UserPoolConfig& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p>The Amazon Cognito User Pool configuration.</p>
     */
    inline GraphqlApi& WithUserPoolConfig(UserPoolConfig&& value) { SetUserPoolConfig(std::move(value)); return *this;}


    /**
     * <p>The Open Id Connect configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }

    /**
     * <p>The Open Id Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }

    /**
     * <p>The Open Id Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }

    /**
     * <p>The Open Id Connect configuration.</p>
     */
    inline GraphqlApi& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}

    /**
     * <p>The Open Id Connect configuration.</p>
     */
    inline GraphqlApi& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN.</p>
     */
    inline GraphqlApi& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN.</p>
     */
    inline GraphqlApi& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN.</p>
     */
    inline GraphqlApi& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The URIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUris() const{ return m_uris; }

    /**
     * <p>The URIs.</p>
     */
    inline void SetUris(const Aws::Map<Aws::String, Aws::String>& value) { m_urisHasBeenSet = true; m_uris = value; }

    /**
     * <p>The URIs.</p>
     */
    inline void SetUris(Aws::Map<Aws::String, Aws::String>&& value) { m_urisHasBeenSet = true; m_uris = std::move(value); }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& WithUris(const Aws::Map<Aws::String, Aws::String>& value) { SetUris(value); return *this;}

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& WithUris(Aws::Map<Aws::String, Aws::String>&& value) { SetUris(std::move(value)); return *this;}

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const Aws::String& key, const Aws::String& value) { m_urisHasBeenSet = true; m_uris.emplace(key, value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, const Aws::String& value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const Aws::String& key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const char* key, Aws::String&& value) { m_urisHasBeenSet = true; m_uris.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(Aws::String&& key, const char* value) { m_urisHasBeenSet = true; m_uris.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URIs.</p>
     */
    inline GraphqlApi& AddUris(const char* key, const char* value) { m_urisHasBeenSet = true; m_uris.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;

    LogConfig m_logConfig;
    bool m_logConfigHasBeenSet;

    UserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_uris;
    bool m_urisHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
