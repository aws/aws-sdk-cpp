/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/AuthResources.h>
#include <aws/amplifybackend/model/UpdateBackendAuthIdentityPoolConfig.h>
#include <aws/amplifybackend/model/Service.h>
#include <aws/amplifybackend/model/UpdateBackendAuthUserPoolConfig.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Defines the resource configuration when updating an authentication resource
   * in your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthResourceConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthResourceConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline const AuthResources& GetAuthResources() const{ return m_authResources; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline bool AuthResourcesHasBeenSet() const { return m_authResourcesHasBeenSet; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline void SetAuthResources(const AuthResources& value) { m_authResourcesHasBeenSet = true; m_authResources = value; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline void SetAuthResources(AuthResources&& value) { m_authResourcesHasBeenSet = true; m_authResources = std::move(value); }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithAuthResources(const AuthResources& value) { SetAuthResources(value); return *this;}

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithAuthResources(AuthResources&& value) { SetAuthResources(std::move(value)); return *this;}


    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const UpdateBackendAuthIdentityPoolConfig& GetIdentityPoolConfigs() const{ return m_identityPoolConfigs; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline bool IdentityPoolConfigsHasBeenSet() const { return m_identityPoolConfigsHasBeenSet; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetIdentityPoolConfigs(const UpdateBackendAuthIdentityPoolConfig& value) { m_identityPoolConfigsHasBeenSet = true; m_identityPoolConfigs = value; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetIdentityPoolConfigs(UpdateBackendAuthIdentityPoolConfig&& value) { m_identityPoolConfigsHasBeenSet = true; m_identityPoolConfigs = std::move(value); }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithIdentityPoolConfigs(const UpdateBackendAuthIdentityPoolConfig& value) { SetIdentityPoolConfigs(value); return *this;}

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithIdentityPoolConfigs(UpdateBackendAuthIdentityPoolConfig&& value) { SetIdentityPoolConfigs(std::move(value)); return *this;}


    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline void SetService(const Service& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline void SetService(Service&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const UpdateBackendAuthUserPoolConfig& GetUserPoolConfigs() const{ return m_userPoolConfigs; }

    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline bool UserPoolConfigsHasBeenSet() const { return m_userPoolConfigsHasBeenSet; }

    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetUserPoolConfigs(const UpdateBackendAuthUserPoolConfig& value) { m_userPoolConfigsHasBeenSet = true; m_userPoolConfigs = value; }

    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetUserPoolConfigs(UpdateBackendAuthUserPoolConfig&& value) { m_userPoolConfigsHasBeenSet = true; m_userPoolConfigs = std::move(value); }

    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithUserPoolConfigs(const UpdateBackendAuthUserPoolConfig& value) { SetUserPoolConfigs(value); return *this;}

    /**
     * <p>Describes the authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline UpdateBackendAuthResourceConfig& WithUserPoolConfigs(UpdateBackendAuthUserPoolConfig&& value) { SetUserPoolConfigs(std::move(value)); return *this;}

  private:

    AuthResources m_authResources;
    bool m_authResourcesHasBeenSet = false;

    UpdateBackendAuthIdentityPoolConfig m_identityPoolConfigs;
    bool m_identityPoolConfigsHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;

    UpdateBackendAuthUserPoolConfig m_userPoolConfigs;
    bool m_userPoolConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
