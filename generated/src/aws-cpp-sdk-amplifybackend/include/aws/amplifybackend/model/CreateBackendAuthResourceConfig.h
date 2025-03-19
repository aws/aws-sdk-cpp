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
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig() = default;
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines whether you want to configure only authentication or both
     * authentication and authorization settings.</p>
     */
    inline AuthResources GetAuthResources() const { return m_authResources; }
    inline bool AuthResourcesHasBeenSet() const { return m_authResourcesHasBeenSet; }
    inline void SetAuthResources(AuthResources value) { m_authResourcesHasBeenSet = true; m_authResources = value; }
    inline CreateBackendAuthResourceConfig& WithAuthResources(AuthResources value) { SetAuthResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the authorization configuration for the Amazon Cognito identity
     * pool, provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const CreateBackendAuthIdentityPoolConfig& GetIdentityPoolConfigs() const { return m_identityPoolConfigs; }
    inline bool IdentityPoolConfigsHasBeenSet() const { return m_identityPoolConfigsHasBeenSet; }
    template<typename IdentityPoolConfigsT = CreateBackendAuthIdentityPoolConfig>
    void SetIdentityPoolConfigs(IdentityPoolConfigsT&& value) { m_identityPoolConfigsHasBeenSet = true; m_identityPoolConfigs = std::forward<IdentityPoolConfigsT>(value); }
    template<typename IdentityPoolConfigsT = CreateBackendAuthIdentityPoolConfig>
    CreateBackendAuthResourceConfig& WithIdentityPoolConfigs(IdentityPoolConfigsT&& value) { SetIdentityPoolConfigs(std::forward<IdentityPoolConfigsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the service name to use when configuring an authentication resource
     * in your Amplify project.</p>
     */
    inline Service GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(Service value) { m_serviceHasBeenSet = true; m_service = value; }
    inline CreateBackendAuthResourceConfig& WithService(Service value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes authentication configuration for the Amazon Cognito user pool,
     * provisioned as a part of your auth resource in the Amplify project.</p>
     */
    inline const CreateBackendAuthUserPoolConfig& GetUserPoolConfigs() const { return m_userPoolConfigs; }
    inline bool UserPoolConfigsHasBeenSet() const { return m_userPoolConfigsHasBeenSet; }
    template<typename UserPoolConfigsT = CreateBackendAuthUserPoolConfig>
    void SetUserPoolConfigs(UserPoolConfigsT&& value) { m_userPoolConfigsHasBeenSet = true; m_userPoolConfigs = std::forward<UserPoolConfigsT>(value); }
    template<typename UserPoolConfigsT = CreateBackendAuthUserPoolConfig>
    CreateBackendAuthResourceConfig& WithUserPoolConfigs(UserPoolConfigsT&& value) { SetUserPoolConfigs(std::forward<UserPoolConfigsT>(value)); return *this;}
    ///@}
  private:

    AuthResources m_authResources{AuthResources::NOT_SET};
    bool m_authResourcesHasBeenSet = false;

    CreateBackendAuthIdentityPoolConfig m_identityPoolConfigs;
    bool m_identityPoolConfigsHasBeenSet = false;

    Service m_service{Service::NOT_SET};
    bool m_serviceHasBeenSet = false;

    CreateBackendAuthUserPoolConfig m_userPoolConfigs;
    bool m_userPoolConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
