/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RadiusAuthenticationProtocol.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about a Remote Authentication Dial In User Service
   * (RADIUS) server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RadiusSettings">AWS
   * API Reference</a></p>
   */
  class RadiusSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API RadiusSettings() = default;
    AWS_DIRECTORYSERVICE_API RadiusSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RadiusSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRadiusServers() const { return m_radiusServers; }
    inline bool RadiusServersHasBeenSet() const { return m_radiusServersHasBeenSet; }
    template<typename RadiusServersT = Aws::Vector<Aws::String>>
    void SetRadiusServers(RadiusServersT&& value) { m_radiusServersHasBeenSet = true; m_radiusServers = std::forward<RadiusServersT>(value); }
    template<typename RadiusServersT = Aws::Vector<Aws::String>>
    RadiusSettings& WithRadiusServers(RadiusServersT&& value) { SetRadiusServers(std::forward<RadiusServersT>(value)); return *this;}
    template<typename RadiusServersT = Aws::String>
    RadiusSettings& AddRadiusServers(RadiusServersT&& value) { m_radiusServersHasBeenSet = true; m_radiusServers.emplace_back(std::forward<RadiusServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port that your RADIUS server is using for communications. Your
     * self-managed network must allow inbound traffic over this port from the
     * Directory Service servers.</p>
     */
    inline int GetRadiusPort() const { return m_radiusPort; }
    inline bool RadiusPortHasBeenSet() const { return m_radiusPortHasBeenSet; }
    inline void SetRadiusPort(int value) { m_radiusPortHasBeenSet = true; m_radiusPort = value; }
    inline RadiusSettings& WithRadiusPort(int value) { SetRadiusPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, to wait for the RADIUS server to respond.</p>
     */
    inline int GetRadiusTimeout() const { return m_radiusTimeout; }
    inline bool RadiusTimeoutHasBeenSet() const { return m_radiusTimeoutHasBeenSet; }
    inline void SetRadiusTimeout(int value) { m_radiusTimeoutHasBeenSet = true; m_radiusTimeout = value; }
    inline RadiusSettings& WithRadiusTimeout(int value) { SetRadiusTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times that communication with the RADIUS server is
     * retried after the initial attempt.</p>
     */
    inline int GetRadiusRetries() const { return m_radiusRetries; }
    inline bool RadiusRetriesHasBeenSet() const { return m_radiusRetriesHasBeenSet; }
    inline void SetRadiusRetries(int value) { m_radiusRetriesHasBeenSet = true; m_radiusRetries = value; }
    inline RadiusSettings& WithRadiusRetries(int value) { SetRadiusRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline const Aws::String& GetSharedSecret() const { return m_sharedSecret; }
    inline bool SharedSecretHasBeenSet() const { return m_sharedSecretHasBeenSet; }
    template<typename SharedSecretT = Aws::String>
    void SetSharedSecret(SharedSecretT&& value) { m_sharedSecretHasBeenSet = true; m_sharedSecret = std::forward<SharedSecretT>(value); }
    template<typename SharedSecretT = Aws::String>
    RadiusSettings& WithSharedSecret(SharedSecretT&& value) { SetSharedSecret(std::forward<SharedSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline RadiusAuthenticationProtocol GetAuthenticationProtocol() const { return m_authenticationProtocol; }
    inline bool AuthenticationProtocolHasBeenSet() const { return m_authenticationProtocolHasBeenSet; }
    inline void SetAuthenticationProtocol(RadiusAuthenticationProtocol value) { m_authenticationProtocolHasBeenSet = true; m_authenticationProtocol = value; }
    inline RadiusSettings& WithAuthenticationProtocol(RadiusAuthenticationProtocol value) { SetAuthenticationProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently used.</p>
     */
    inline const Aws::String& GetDisplayLabel() const { return m_displayLabel; }
    inline bool DisplayLabelHasBeenSet() const { return m_displayLabelHasBeenSet; }
    template<typename DisplayLabelT = Aws::String>
    void SetDisplayLabel(DisplayLabelT&& value) { m_displayLabelHasBeenSet = true; m_displayLabel = std::forward<DisplayLabelT>(value); }
    template<typename DisplayLabelT = Aws::String>
    RadiusSettings& WithDisplayLabel(DisplayLabelT&& value) { SetDisplayLabel(std::forward<DisplayLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently used.</p>
     */
    inline bool GetUseSameUsername() const { return m_useSameUsername; }
    inline bool UseSameUsernameHasBeenSet() const { return m_useSameUsernameHasBeenSet; }
    inline void SetUseSameUsername(bool value) { m_useSameUsernameHasBeenSet = true; m_useSameUsername = value; }
    inline RadiusSettings& WithUseSameUsername(bool value) { SetUseSameUsername(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_radiusServers;
    bool m_radiusServersHasBeenSet = false;

    int m_radiusPort{0};
    bool m_radiusPortHasBeenSet = false;

    int m_radiusTimeout{0};
    bool m_radiusTimeoutHasBeenSet = false;

    int m_radiusRetries{0};
    bool m_radiusRetriesHasBeenSet = false;

    Aws::String m_sharedSecret;
    bool m_sharedSecretHasBeenSet = false;

    RadiusAuthenticationProtocol m_authenticationProtocol{RadiusAuthenticationProtocol::NOT_SET};
    bool m_authenticationProtocolHasBeenSet = false;

    Aws::String m_displayLabel;
    bool m_displayLabelHasBeenSet = false;

    bool m_useSameUsername{false};
    bool m_useSameUsernameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
