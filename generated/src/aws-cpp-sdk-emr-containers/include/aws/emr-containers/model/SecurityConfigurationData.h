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
    AWS_EMRCONTAINERS_API SecurityConfigurationData();
    AWS_EMRCONTAINERS_API SecurityConfigurationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API SecurityConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline const AuthorizationConfiguration& GetAuthorizationConfiguration() const{ return m_authorizationConfiguration; }

    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline bool AuthorizationConfigurationHasBeenSet() const { return m_authorizationConfigurationHasBeenSet; }

    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline void SetAuthorizationConfiguration(const AuthorizationConfiguration& value) { m_authorizationConfigurationHasBeenSet = true; m_authorizationConfiguration = value; }

    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline void SetAuthorizationConfiguration(AuthorizationConfiguration&& value) { m_authorizationConfigurationHasBeenSet = true; m_authorizationConfiguration = std::move(value); }

    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline SecurityConfigurationData& WithAuthorizationConfiguration(const AuthorizationConfiguration& value) { SetAuthorizationConfiguration(value); return *this;}

    /**
     * <p>Authorization-related configuration input for the security configuration.</p>
     */
    inline SecurityConfigurationData& WithAuthorizationConfiguration(AuthorizationConfiguration&& value) { SetAuthorizationConfiguration(std::move(value)); return *this;}

  private:

    AuthorizationConfiguration m_authorizationConfiguration;
    bool m_authorizationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
