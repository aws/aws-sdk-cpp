/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/AuthorizationConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Configurations related to the security configuration for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SecurityConfigurationData">AWS
   * API Reference</a></p>
   */
  class SecurityConfigurationData
  {
  public:
    AWS_EMRCONTAINERS_API SecurityConfigurationData() = default;
    AWS_EMRCONTAINERS_API SecurityConfigurationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SecurityConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline const AuthorizationConfiguration& GetAuthorizationConfiguration() const { return m_authorizationConfiguration; }
    inline bool AuthorizationConfigurationHasBeenSet() const { return m_authorizationConfigurationHasBeenSet; }
    template<typename AuthorizationConfigurationT = AuthorizationConfiguration>
    void SetAuthorizationConfiguration(AuthorizationConfigurationT&& value) { m_authorizationConfigurationHasBeenSet = true; m_authorizationConfiguration = std::forward<AuthorizationConfigurationT>(value); }
    template<typename AuthorizationConfigurationT = AuthorizationConfiguration>
    SecurityConfigurationData& WithAuthorizationConfiguration(AuthorizationConfigurationT&& value) { SetAuthorizationConfiguration(std::forward<AuthorizationConfigurationT>(value)); return *this;}
    ///@}
  private:

    AuthorizationConfiguration m_authorizationConfiguration;
    bool m_authorizationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
