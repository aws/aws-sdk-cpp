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
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Apple Development Push Notification Service channel definition.
   */
  class AWS_PINPOINT_API APNSSandboxChannelRequest
  {
  public:
    APNSSandboxChannelRequest();
    APNSSandboxChannelRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    APNSSandboxChannelRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The distribution certificate from Apple.
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

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
    inline APNSSandboxChannelRequest& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * The distribution certificate from Apple.
     */
    inline APNSSandboxChannelRequest& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * The distribution certificate from Apple.
     */
    inline APNSSandboxChannelRequest& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline APNSSandboxChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * The certificate private key.
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

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
    inline APNSSandboxChannelRequest& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * The certificate private key.
     */
    inline APNSSandboxChannelRequest& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * The certificate private key.
     */
    inline APNSSandboxChannelRequest& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
