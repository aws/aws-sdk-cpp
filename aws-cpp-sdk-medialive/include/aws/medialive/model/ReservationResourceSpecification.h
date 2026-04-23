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
#include <aws/medialive/model/ChannelClass.h>
#include <aws/medialive/model/ReservationCodec.h>
#include <aws/medialive/model/ReservationMaximumBitrate.h>
#include <aws/medialive/model/ReservationMaximumFramerate.h>
#include <aws/medialive/model/ReservationResolution.h>
#include <aws/medialive/model/ReservationResourceType.h>
#include <aws/medialive/model/ReservationSpecialFeature.h>
#include <aws/medialive/model/ReservationVideoQuality.h>
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
   * Resource configuration (codec, resolution, bitrate, ...)<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ReservationResourceSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ReservationResourceSpecification
  {
  public:
    ReservationResourceSpecification();
    ReservationResourceSpecification(Aws::Utils::Json::JsonView jsonValue);
    ReservationResourceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }

    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }

    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline void SetChannelClass(const ChannelClass& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }

    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline void SetChannelClass(ChannelClass&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }

    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline ReservationResourceSpecification& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * Channel class, e.g. 'STANDARD'
     */
    inline ReservationResourceSpecification& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


    /**
     * Codec, e.g. 'AVC'
     */
    inline const ReservationCodec& GetCodec() const{ return m_codec; }

    /**
     * Codec, e.g. 'AVC'
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Codec, e.g. 'AVC'
     */
    inline void SetCodec(const ReservationCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Codec, e.g. 'AVC'
     */
    inline void SetCodec(ReservationCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Codec, e.g. 'AVC'
     */
    inline ReservationResourceSpecification& WithCodec(const ReservationCodec& value) { SetCodec(value); return *this;}

    /**
     * Codec, e.g. 'AVC'
     */
    inline ReservationResourceSpecification& WithCodec(ReservationCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline const ReservationMaximumBitrate& GetMaximumBitrate() const{ return m_maximumBitrate; }

    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }

    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline void SetMaximumBitrate(const ReservationMaximumBitrate& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }

    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline void SetMaximumBitrate(ReservationMaximumBitrate&& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = std::move(value); }

    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline ReservationResourceSpecification& WithMaximumBitrate(const ReservationMaximumBitrate& value) { SetMaximumBitrate(value); return *this;}

    /**
     * Maximum bitrate, e.g. 'MAX_20_MBPS'
     */
    inline ReservationResourceSpecification& WithMaximumBitrate(ReservationMaximumBitrate&& value) { SetMaximumBitrate(std::move(value)); return *this;}


    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline const ReservationMaximumFramerate& GetMaximumFramerate() const{ return m_maximumFramerate; }

    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline bool MaximumFramerateHasBeenSet() const { return m_maximumFramerateHasBeenSet; }

    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline void SetMaximumFramerate(const ReservationMaximumFramerate& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = value; }

    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline void SetMaximumFramerate(ReservationMaximumFramerate&& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = std::move(value); }

    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline ReservationResourceSpecification& WithMaximumFramerate(const ReservationMaximumFramerate& value) { SetMaximumFramerate(value); return *this;}

    /**
     * Maximum framerate, e.g. 'MAX_30_FPS' (Outputs only)
     */
    inline ReservationResourceSpecification& WithMaximumFramerate(ReservationMaximumFramerate&& value) { SetMaximumFramerate(std::move(value)); return *this;}


    /**
     * Resolution, e.g. 'HD'
     */
    inline const ReservationResolution& GetResolution() const{ return m_resolution; }

    /**
     * Resolution, e.g. 'HD'
     */
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * Resolution, e.g. 'HD'
     */
    inline void SetResolution(const ReservationResolution& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * Resolution, e.g. 'HD'
     */
    inline void SetResolution(ReservationResolution&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

    /**
     * Resolution, e.g. 'HD'
     */
    inline ReservationResourceSpecification& WithResolution(const ReservationResolution& value) { SetResolution(value); return *this;}

    /**
     * Resolution, e.g. 'HD'
     */
    inline ReservationResourceSpecification& WithResolution(ReservationResolution&& value) { SetResolution(std::move(value)); return *this;}


    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline const ReservationResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline void SetResourceType(const ReservationResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline void SetResourceType(ReservationResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline ReservationResourceSpecification& WithResourceType(const ReservationResourceType& value) { SetResourceType(value); return *this;}

    /**
     * Resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline ReservationResourceSpecification& WithResourceType(ReservationResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline const ReservationSpecialFeature& GetSpecialFeature() const{ return m_specialFeature; }

    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline bool SpecialFeatureHasBeenSet() const { return m_specialFeatureHasBeenSet; }

    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline void SetSpecialFeature(const ReservationSpecialFeature& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = value; }

    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline void SetSpecialFeature(ReservationSpecialFeature&& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = std::move(value); }

    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline ReservationResourceSpecification& WithSpecialFeature(const ReservationSpecialFeature& value) { SetSpecialFeature(value); return *this;}

    /**
     * Special feature, e.g. 'AUDIO_NORMALIZATION' (Channels only)
     */
    inline ReservationResourceSpecification& WithSpecialFeature(ReservationSpecialFeature&& value) { SetSpecialFeature(std::move(value)); return *this;}


    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline const ReservationVideoQuality& GetVideoQuality() const{ return m_videoQuality; }

    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline bool VideoQualityHasBeenSet() const { return m_videoQualityHasBeenSet; }

    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline void SetVideoQuality(const ReservationVideoQuality& value) { m_videoQualityHasBeenSet = true; m_videoQuality = value; }

    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline void SetVideoQuality(ReservationVideoQuality&& value) { m_videoQualityHasBeenSet = true; m_videoQuality = std::move(value); }

    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline ReservationResourceSpecification& WithVideoQuality(const ReservationVideoQuality& value) { SetVideoQuality(value); return *this;}

    /**
     * Video quality, e.g. 'STANDARD' (Outputs only)
     */
    inline ReservationResourceSpecification& WithVideoQuality(ReservationVideoQuality&& value) { SetVideoQuality(std::move(value)); return *this;}

  private:

    ChannelClass m_channelClass;
    bool m_channelClassHasBeenSet;

    ReservationCodec m_codec;
    bool m_codecHasBeenSet;

    ReservationMaximumBitrate m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet;

    ReservationMaximumFramerate m_maximumFramerate;
    bool m_maximumFramerateHasBeenSet;

    ReservationResolution m_resolution;
    bool m_resolutionHasBeenSet;

    ReservationResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    ReservationSpecialFeature m_specialFeature;
    bool m_specialFeatureHasBeenSet;

    ReservationVideoQuality m_videoQuality;
    bool m_videoQualityHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
