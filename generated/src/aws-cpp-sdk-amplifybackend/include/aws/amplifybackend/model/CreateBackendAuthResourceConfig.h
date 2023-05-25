/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/AuthResources.h>
#include <aws/amplifybackend/model/CreateBackendAuthIdentityPoolConfig.h>
#include <aws/amplifybackend/model/Service.h>
#include <aws/amplifybackend/model/CreateBackendAuthUserPoolConfig.h>
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
   * <p>Defines the resource configuration when creating an auth resource in your
   * Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthResourceConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthResourceConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline const AuthResources& GetAuthResources() const{ return m_authResources; }

    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline bool AuthResourcesHasBeenSet() const { return m_authResourcesHasBeenSet; }

    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline void SetAuthResources(const AuthResources& value) { m_authResourcesHasBeenSet = true; m_authResources = value; }

    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline void SetAuthResources(AuthResources&& value) { m_authResourcesHasBeenSet = true; m_authResources = std::move(value); }

    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline CreateBackendAuthResourceConfig& WithAuthResources(const AuthResources& value) { SetAuthResources(value); return *this;}

    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline CreateBackendAuthResourceConfig& WithAuthResources(AuthResources&& value) { SetAuthResources(std::move(value)); return *this;}


    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const CreateBackendAuthIdentityPoolConfig& GetIdentityPoolConfigs() const{ return m_identityPoolConfigs; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline bool IdentityPoolConfigsHasBeenSet() const { return m_identityPoolConfigsHasBeenSet; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetIdentityPoolConfigs(const CreateBackendAuthIdentityPoolConfig& value) { m_identityPoolConfigsHasBeenSet = true; m_identityPoolConfigs = value; }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetIdentityPoolConfigs(CreateBackendAuthIdentityPoolConfig&& value) { m_identityPoolConfigsHasBeenSet = true; m_identityPoolConfigs = std::move(value); }

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline CreateBackendAuthResourceConfig& WithIdentityPoolConfigs(const CreateBackendAuthIdentityPoolConfig& value) { SetIdentityPoolConfigs(value); return *this;}

    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline CreateBackendAuthResourceConfig& WithIdentityPoolConfigs(CreateBackendAuthIdentityPoolConfig&& value) { SetIdentityPoolConfigs(std::move(value)); return *this;}


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
    inline CreateBackendAuthResourceConfig& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline CreateBackendAuthResourceConfig& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const CreateBackendAuthUserPoolConfig& GetUserPoolConfigs() const{ return m_userPoolConfigs; }

    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline bool UserPoolConfigsHasBeenSet() const { return m_userPoolConfigsHasBeenSet; }

    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetUserPoolConfigs(const CreateBackendAuthUserPoolConfig& value) { m_userPoolConfigsHasBeenSet = true; m_userPoolConfigs = value; }

    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline void SetUserPoolConfigs(CreateBackendAuthUserPoolConfig&& value) { m_userPoolConfigsHasBeenSet = true; m_userPoolConfigs = std::move(value); }

    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline CreateBackendAuthResourceConfig& WithUserPoolConfigs(const CreateBackendAuthUserPoolConfig& value) { SetUserPoolConfigs(value); return *this;}

    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline CreateBackendAuthResourceConfig& WithUserPoolConfigs(CreateBackendAuthUserPoolConfig&& value) { SetUserPoolConfigs(std::move(value)); return *this;}

  private:

    AuthResources m_authResources;
    bool m_authResourcesHasBeenSet = false;

    CreateBackendAuthIdentityPoolConfig m_identityPoolConfigs;
    bool m_identityPoolConfigsHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;

    CreateBackendAuthUserPoolConfig m_userPoolConfigs;
    bool m_userPoolConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
