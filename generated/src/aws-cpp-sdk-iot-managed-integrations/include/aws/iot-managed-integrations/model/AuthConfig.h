/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/OAuthConfig.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>The authentication configuration details for a connector destination,
   * including OAuth settings and other authentication parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AuthConfig">AWS
   * API Reference</a></p>
   */
  class AuthConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth configuration settings used for authentication with the third-party
     * service.</p>
     */
    inline const OAuthConfig& GetOAuth() const { return m_oAuth; }
    inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }
    template<typename OAuthT = OAuthConfig>
    void SetOAuth(OAuthT&& value) { m_oAuthHasBeenSet = true; m_oAuth = std::forward<OAuthT>(value); }
    template<typename OAuthT = OAuthConfig>
    AuthConfig& WithOAuth(OAuthT&& value) { SetOAuth(std::forward<OAuthT>(value)); return *this;}
    ///@}
  private:

    OAuthConfig m_oAuth;
    bool m_oAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
