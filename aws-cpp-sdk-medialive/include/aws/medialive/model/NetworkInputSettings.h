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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsInputSettings.h>
#include <aws/medialive/model/NetworkInputServerValidation.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Network source to transcode. Must be accessible to the Elemental Live node that
   * is running the live event through a network connection.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NetworkInputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API NetworkInputSettings
  {
  public:
    NetworkInputSettings();
    NetworkInputSettings(Aws::Utils::Json::JsonView jsonValue);
    NetworkInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline const HlsInputSettings& GetHlsInputSettings() const{ return m_hlsInputSettings; }

    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline bool HlsInputSettingsHasBeenSet() const { return m_hlsInputSettingsHasBeenSet; }

    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline void SetHlsInputSettings(const HlsInputSettings& value) { m_hlsInputSettingsHasBeenSet = true; m_hlsInputSettings = value; }

    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline void SetHlsInputSettings(HlsInputSettings&& value) { m_hlsInputSettingsHasBeenSet = true; m_hlsInputSettings = std::move(value); }

    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline NetworkInputSettings& WithHlsInputSettings(const HlsInputSettings& value) { SetHlsInputSettings(value); return *this;}

    /**
     * Specifies HLS input settings when the uri is for a HLS manifest.
     */
    inline NetworkInputSettings& WithHlsInputSettings(HlsInputSettings&& value) { SetHlsInputSettings(std::move(value)); return *this;}


    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline const NetworkInputServerValidation& GetServerValidation() const{ return m_serverValidation; }

    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline bool ServerValidationHasBeenSet() const { return m_serverValidationHasBeenSet; }

    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline void SetServerValidation(const NetworkInputServerValidation& value) { m_serverValidationHasBeenSet = true; m_serverValidation = value; }

    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline void SetServerValidation(NetworkInputServerValidation&& value) { m_serverValidationHasBeenSet = true; m_serverValidation = std::move(value); }

    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline NetworkInputSettings& WithServerValidation(const NetworkInputServerValidation& value) { SetServerValidation(value); return *this;}

    /**
     * Check HTTPS server certificates. When set to checkCryptographyOnly, cryptography
     * in the certificate will be checked, but not the server's name. Certain
     * subdomains (notably S3 buckets that use dots in the bucket name) do not strictly
     * match the corresponding certificate's wildcard pattern and would otherwise cause
     * the event to error. This setting is ignored for protocols that do not use https.
     */
    inline NetworkInputSettings& WithServerValidation(NetworkInputServerValidation&& value) { SetServerValidation(std::move(value)); return *this;}

  private:

    HlsInputSettings m_hlsInputSettings;
    bool m_hlsInputSettingsHasBeenSet;

    NetworkInputServerValidation m_serverValidation;
    bool m_serverValidationHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
