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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DashIsoPlaybackDeviceCompatibility.h>
#include <aws/mediaconvert/model/SpekeKeyProvider.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specifies DRM settings for DASH outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashIsoEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DashIsoEncryptionSettings
  {
  public:
    DashIsoEncryptionSettings();
    DashIsoEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    DashIsoEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline const DashIsoPlaybackDeviceCompatibility& GetPlaybackDeviceCompatibility() const{ return m_playbackDeviceCompatibility; }

    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline bool PlaybackDeviceCompatibilityHasBeenSet() const { return m_playbackDeviceCompatibilityHasBeenSet; }

    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline void SetPlaybackDeviceCompatibility(const DashIsoPlaybackDeviceCompatibility& value) { m_playbackDeviceCompatibilityHasBeenSet = true; m_playbackDeviceCompatibility = value; }

    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline void SetPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility&& value) { m_playbackDeviceCompatibilityHasBeenSet = true; m_playbackDeviceCompatibility = std::move(value); }

    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline DashIsoEncryptionSettings& WithPlaybackDeviceCompatibility(const DashIsoPlaybackDeviceCompatibility& value) { SetPlaybackDeviceCompatibility(value); return *this;}

    /**
     * This setting can improve the compatibility of your output with video players on
     * obsolete devices. It applies only to DASH H.264 outputs with DRM encryption.
     * Choose Unencrypted SEI (UNENCRYPTED_SEI) only to correct problems with playback
     * on older devices. Otherwise, keep the default setting CENC v1 (CENC_V1). If you
     * choose Unencrypted SEI, for that output, the service will exclude the access
     * unit delimiter and will leave the SEI NAL units unencrypted.
     */
    inline DashIsoEncryptionSettings& WithPlaybackDeviceCompatibility(DashIsoPlaybackDeviceCompatibility&& value) { SetPlaybackDeviceCompatibility(std::move(value)); return *this;}


    /**
     * Settings for use with a SPEKE key provider
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline DashIsoEncryptionSettings& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    /**
     * Settings for use with a SPEKE key provider
     */
    inline DashIsoEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    DashIsoPlaybackDeviceCompatibility m_playbackDeviceCompatibility;
    bool m_playbackDeviceCompatibilityHasBeenSet;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
