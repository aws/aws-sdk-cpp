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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Apple VoIP Push Notification Service channel definition.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSVoipChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API APNSVoipChannelRequest
  {
  public:
    APNSVoipChannelRequest();
    APNSVoipChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    APNSVoipChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The bundle id used for APNs Tokens.
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * The bundle id used for APNs Tokens.
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * The bundle id used for APNs Tokens.
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * The bundle id used for APNs Tokens.
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * The bundle id used for APNs Tokens.
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * The bundle id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * The bundle id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * The bundle id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * The distribution certificate from Apple.
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * The distribution certificate from Apple.
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * The distribution certificate from Apple.
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * The distribution certificate from Apple.
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * The distribution certificate from Apple.
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * The distribution certificate from Apple.
     */
    inline APNSVoipChannelRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * The distribution certificate from Apple.
     */
    inline APNSVoipChannelRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * The distribution certificate from Apple.
     */
    inline APNSVoipChannelRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * The default authentication method used for APNs.
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const{ return m_defaultAuthenticationMethod; }

    /**
     * The default authentication method used for APNs.
     */
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(const Aws::String& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = value; }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(Aws::String&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::move(value); }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(const char* value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod.assign(value); }

    /**
     * The default authentication method used for APNs.
     */
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(const Aws::String& value) { SetDefaultAuthenticationMethod(value); return *this;}

    /**
     * The default authentication method used for APNs.
     */
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(Aws::String&& value) { SetDefaultAuthenticationMethod(std::move(value)); return *this;}

    /**
     * The default authentication method used for APNs.
     */
    inline APNSVoipChannelRequest& WithDefaultAuthenticationMethod(const char* value) { SetDefaultAuthenticationMethod(value); return *this;}


    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline APNSVoipChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * The certificate private key.
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * The certificate private key.
     */
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }

    /**
     * The certificate private key.
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }

    /**
     * The certificate private key.
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }

    /**
     * The certificate private key.
     */
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }

    /**
     * The certificate private key.
     */
    inline APNSVoipChannelRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * The certificate private key.
     */
    inline APNSVoipChannelRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * The certificate private key.
     */
    inline APNSVoipChannelRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}


    /**
     * The team id used for APNs Tokens.
     */
    inline const Aws::String& GetTeamId() const{ return m_teamId; }

    /**
     * The team id used for APNs Tokens.
     */
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }

    /**
     * The team id used for APNs Tokens.
     */
    inline void SetTeamId(const Aws::String& value) { m_teamIdHasBeenSet = true; m_teamId = value; }

    /**
     * The team id used for APNs Tokens.
     */
    inline void SetTeamId(Aws::String&& value) { m_teamIdHasBeenSet = true; m_teamId = std::move(value); }

    /**
     * The team id used for APNs Tokens.
     */
    inline void SetTeamId(const char* value) { m_teamIdHasBeenSet = true; m_teamId.assign(value); }

    /**
     * The team id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTeamId(const Aws::String& value) { SetTeamId(value); return *this;}

    /**
     * The team id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTeamId(Aws::String&& value) { SetTeamId(std::move(value)); return *this;}

    /**
     * The team id used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTeamId(const char* value) { SetTeamId(value); return *this;}


    /**
     * The token key used for APNs Tokens.
     */
    inline const Aws::String& GetTokenKey() const{ return m_tokenKey; }

    /**
     * The token key used for APNs Tokens.
     */
    inline bool TokenKeyHasBeenSet() const { return m_tokenKeyHasBeenSet; }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKey(const Aws::String& value) { m_tokenKeyHasBeenSet = true; m_tokenKey = value; }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKey(Aws::String&& value) { m_tokenKeyHasBeenSet = true; m_tokenKey = std::move(value); }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKey(const char* value) { m_tokenKeyHasBeenSet = true; m_tokenKey.assign(value); }

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKey(const Aws::String& value) { SetTokenKey(value); return *this;}

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKey(Aws::String&& value) { SetTokenKey(std::move(value)); return *this;}

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKey(const char* value) { SetTokenKey(value); return *this;}


    /**
     * The token key used for APNs Tokens.
     */
    inline const Aws::String& GetTokenKeyId() const{ return m_tokenKeyId; }

    /**
     * The token key used for APNs Tokens.
     */
    inline bool TokenKeyIdHasBeenSet() const { return m_tokenKeyIdHasBeenSet; }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKeyId(const Aws::String& value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId = value; }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKeyId(Aws::String&& value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId = std::move(value); }

    /**
     * The token key used for APNs Tokens.
     */
    inline void SetTokenKeyId(const char* value) { m_tokenKeyIdHasBeenSet = true; m_tokenKeyId.assign(value); }

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKeyId(const Aws::String& value) { SetTokenKeyId(value); return *this;}

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKeyId(Aws::String&& value) { SetTokenKeyId(std::move(value)); return *this;}

    /**
     * The token key used for APNs Tokens.
     */
    inline APNSVoipChannelRequest& WithTokenKeyId(const char* value) { SetTokenKeyId(value); return *this;}

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet;

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet;

    Aws::String m_tokenKey;
    bool m_tokenKeyHasBeenSet;

    Aws::String m_tokenKeyId;
    bool m_tokenKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
