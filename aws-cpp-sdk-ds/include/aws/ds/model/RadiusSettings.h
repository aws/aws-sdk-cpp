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
    AWS_DIRECTORYSERVICE_API RadiusSettings();
    AWS_DIRECTORYSERVICE_API RadiusSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RadiusSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRadiusServers() const{ return m_radiusServers; }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline bool RadiusServersHasBeenSet() const { return m_radiusServersHasBeenSet; }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline void SetRadiusServers(const Aws::Vector<Aws::String>& value) { m_radiusServersHasBeenSet = true; m_radiusServers = value; }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline void SetRadiusServers(Aws::Vector<Aws::String>&& value) { m_radiusServersHasBeenSet = true; m_radiusServers = std::move(value); }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline RadiusSettings& WithRadiusServers(const Aws::Vector<Aws::String>& value) { SetRadiusServers(value); return *this;}

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline RadiusSettings& WithRadiusServers(Aws::Vector<Aws::String>&& value) { SetRadiusServers(std::move(value)); return *this;}

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline RadiusSettings& AddRadiusServers(const Aws::String& value) { m_radiusServersHasBeenSet = true; m_radiusServers.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline RadiusSettings& AddRadiusServers(Aws::String&& value) { m_radiusServersHasBeenSet = true; m_radiusServers.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that contains the fully qualified domain name (FQDN) or
     * IP addresses of the RADIUS server endpoints, or the FQDN or IP addresses of your
     * RADIUS server load balancer.</p>
     */
    inline RadiusSettings& AddRadiusServers(const char* value) { m_radiusServersHasBeenSet = true; m_radiusServers.push_back(value); return *this; }


    /**
     * <p>The port that your RADIUS server is using for communications. Your
     * self-managed network must allow inbound traffic over this port from the
     * Directory Service servers.</p>
     */
    inline int GetRadiusPort() const{ return m_radiusPort; }

    /**
     * <p>The port that your RADIUS server is using for communications. Your
     * self-managed network must allow inbound traffic over this port from the
     * Directory Service servers.</p>
     */
    inline bool RadiusPortHasBeenSet() const { return m_radiusPortHasBeenSet; }

    /**
     * <p>The port that your RADIUS server is using for communications. Your
     * self-managed network must allow inbound traffic over this port from the
     * Directory Service servers.</p>
     */
    inline void SetRadiusPort(int value) { m_radiusPortHasBeenSet = true; m_radiusPort = value; }

    /**
     * <p>The port that your RADIUS server is using for communications. Your
     * self-managed network must allow inbound traffic over this port from the
     * Directory Service servers.</p>
     */
    inline RadiusSettings& WithRadiusPort(int value) { SetRadiusPort(value); return *this;}


    /**
     * <p>The amount of time, in seconds, to wait for the RADIUS server to respond.</p>
     */
    inline int GetRadiusTimeout() const{ return m_radiusTimeout; }

    /**
     * <p>The amount of time, in seconds, to wait for the RADIUS server to respond.</p>
     */
    inline bool RadiusTimeoutHasBeenSet() const { return m_radiusTimeoutHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to wait for the RADIUS server to respond.</p>
     */
    inline void SetRadiusTimeout(int value) { m_radiusTimeoutHasBeenSet = true; m_radiusTimeout = value; }

    /**
     * <p>The amount of time, in seconds, to wait for the RADIUS server to respond.</p>
     */
    inline RadiusSettings& WithRadiusTimeout(int value) { SetRadiusTimeout(value); return *this;}


    /**
     * <p>The maximum number of times that communication with the RADIUS server is
     * attempted.</p>
     */
    inline int GetRadiusRetries() const{ return m_radiusRetries; }

    /**
     * <p>The maximum number of times that communication with the RADIUS server is
     * attempted.</p>
     */
    inline bool RadiusRetriesHasBeenSet() const { return m_radiusRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times that communication with the RADIUS server is
     * attempted.</p>
     */
    inline void SetRadiusRetries(int value) { m_radiusRetriesHasBeenSet = true; m_radiusRetries = value; }

    /**
     * <p>The maximum number of times that communication with the RADIUS server is
     * attempted.</p>
     */
    inline RadiusSettings& WithRadiusRetries(int value) { SetRadiusRetries(value); return *this;}


    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline const Aws::String& GetSharedSecret() const{ return m_sharedSecret; }

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline bool SharedSecretHasBeenSet() const { return m_sharedSecretHasBeenSet; }

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline void SetSharedSecret(const Aws::String& value) { m_sharedSecretHasBeenSet = true; m_sharedSecret = value; }

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline void SetSharedSecret(Aws::String&& value) { m_sharedSecretHasBeenSet = true; m_sharedSecret = std::move(value); }

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline void SetSharedSecret(const char* value) { m_sharedSecretHasBeenSet = true; m_sharedSecret.assign(value); }

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline RadiusSettings& WithSharedSecret(const Aws::String& value) { SetSharedSecret(value); return *this;}

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline RadiusSettings& WithSharedSecret(Aws::String&& value) { SetSharedSecret(std::move(value)); return *this;}

    /**
     * <p>Required for enabling RADIUS on the directory.</p>
     */
    inline RadiusSettings& WithSharedSecret(const char* value) { SetSharedSecret(value); return *this;}


    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline const RadiusAuthenticationProtocol& GetAuthenticationProtocol() const{ return m_authenticationProtocol; }

    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline bool AuthenticationProtocolHasBeenSet() const { return m_authenticationProtocolHasBeenSet; }

    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline void SetAuthenticationProtocol(const RadiusAuthenticationProtocol& value) { m_authenticationProtocolHasBeenSet = true; m_authenticationProtocol = value; }

    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline void SetAuthenticationProtocol(RadiusAuthenticationProtocol&& value) { m_authenticationProtocolHasBeenSet = true; m_authenticationProtocol = std::move(value); }

    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline RadiusSettings& WithAuthenticationProtocol(const RadiusAuthenticationProtocol& value) { SetAuthenticationProtocol(value); return *this;}

    /**
     * <p>The protocol specified for your RADIUS endpoints.</p>
     */
    inline RadiusSettings& WithAuthenticationProtocol(RadiusAuthenticationProtocol&& value) { SetAuthenticationProtocol(std::move(value)); return *this;}


    /**
     * <p>Not currently used.</p>
     */
    inline const Aws::String& GetDisplayLabel() const{ return m_displayLabel; }

    /**
     * <p>Not currently used.</p>
     */
    inline bool DisplayLabelHasBeenSet() const { return m_displayLabelHasBeenSet; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetDisplayLabel(const Aws::String& value) { m_displayLabelHasBeenSet = true; m_displayLabel = value; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetDisplayLabel(Aws::String&& value) { m_displayLabelHasBeenSet = true; m_displayLabel = std::move(value); }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetDisplayLabel(const char* value) { m_displayLabelHasBeenSet = true; m_displayLabel.assign(value); }

    /**
     * <p>Not currently used.</p>
     */
    inline RadiusSettings& WithDisplayLabel(const Aws::String& value) { SetDisplayLabel(value); return *this;}

    /**
     * <p>Not currently used.</p>
     */
    inline RadiusSettings& WithDisplayLabel(Aws::String&& value) { SetDisplayLabel(std::move(value)); return *this;}

    /**
     * <p>Not currently used.</p>
     */
    inline RadiusSettings& WithDisplayLabel(const char* value) { SetDisplayLabel(value); return *this;}


    /**
     * <p>Not currently used.</p>
     */
    inline bool GetUseSameUsername() const{ return m_useSameUsername; }

    /**
     * <p>Not currently used.</p>
     */
    inline bool UseSameUsernameHasBeenSet() const { return m_useSameUsernameHasBeenSet; }

    /**
     * <p>Not currently used.</p>
     */
    inline void SetUseSameUsername(bool value) { m_useSameUsernameHasBeenSet = true; m_useSameUsername = value; }

    /**
     * <p>Not currently used.</p>
     */
    inline RadiusSettings& WithUseSameUsername(bool value) { SetUseSameUsername(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_radiusServers;
    bool m_radiusServersHasBeenSet = false;

    int m_radiusPort;
    bool m_radiusPortHasBeenSet = false;

    int m_radiusTimeout;
    bool m_radiusTimeoutHasBeenSet = false;

    int m_radiusRetries;
    bool m_radiusRetriesHasBeenSet = false;

    Aws::String m_sharedSecret;
    bool m_sharedSecretHasBeenSet = false;

    RadiusAuthenticationProtocol m_authenticationProtocol;
    bool m_authenticationProtocolHasBeenSet = false;

    Aws::String m_displayLabel;
    bool m_displayLabelHasBeenSet = false;

    bool m_useSameUsername;
    bool m_useSameUsernameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
