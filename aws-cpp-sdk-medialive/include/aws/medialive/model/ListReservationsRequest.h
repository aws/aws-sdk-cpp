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
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for ListReservationsRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ListReservationsRequest : public MediaLiveRequest
  {
  public:
    ListReservationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReservations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline const Aws::String& GetChannelClass() const{ return m_channelClass; }

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline void SetChannelClass(const Aws::String& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline void SetChannelClass(Aws::String&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline void SetChannelClass(const char* value) { m_channelClassHasBeenSet = true; m_channelClass.assign(value); }

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline ListReservationsRequest& WithChannelClass(const Aws::String& value) { SetChannelClass(value); return *this;}

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline ListReservationsRequest& WithChannelClass(Aws::String&& value) { SetChannelClass(std::move(value)); return *this;}

    /**
     * Filter by channel class, 'STANDARD' or 'SINGLE_PIPELINE'

     */
    inline ListReservationsRequest& WithChannelClass(const char* value) { SetChannelClass(value); return *this;}


    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline ListReservationsRequest& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline ListReservationsRequest& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}

    /**
     * Filter by codec, 'AVC', 'HEVC', 'MPEG2', or 'AUDIO'
     */
    inline ListReservationsRequest& WithCodec(const char* value) { SetCodec(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListReservationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline const Aws::String& GetMaximumBitrate() const{ return m_maximumBitrate; }

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline void SetMaximumBitrate(const Aws::String& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline void SetMaximumBitrate(Aws::String&& value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = std::move(value); }

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline void SetMaximumBitrate(const char* value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate.assign(value); }

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline ListReservationsRequest& WithMaximumBitrate(const Aws::String& value) { SetMaximumBitrate(value); return *this;}

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline ListReservationsRequest& WithMaximumBitrate(Aws::String&& value) { SetMaximumBitrate(std::move(value)); return *this;}

    /**
     * Filter by bitrate, 'MAX_10_MBPS', 'MAX_20_MBPS', or 'MAX_50_MBPS'

     */
    inline ListReservationsRequest& WithMaximumBitrate(const char* value) { SetMaximumBitrate(value); return *this;}


    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline const Aws::String& GetMaximumFramerate() const{ return m_maximumFramerate; }

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline bool MaximumFramerateHasBeenSet() const { return m_maximumFramerateHasBeenSet; }

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline void SetMaximumFramerate(const Aws::String& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = value; }

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline void SetMaximumFramerate(Aws::String&& value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate = std::move(value); }

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline void SetMaximumFramerate(const char* value) { m_maximumFramerateHasBeenSet = true; m_maximumFramerate.assign(value); }

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline ListReservationsRequest& WithMaximumFramerate(const Aws::String& value) { SetMaximumFramerate(value); return *this;}

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline ListReservationsRequest& WithMaximumFramerate(Aws::String&& value) { SetMaximumFramerate(std::move(value)); return *this;}

    /**
     * Filter by framerate, 'MAX_30_FPS' or 'MAX_60_FPS'
     */
    inline ListReservationsRequest& WithMaximumFramerate(const char* value) { SetMaximumFramerate(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListReservationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReservationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListReservationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline const Aws::String& GetResolution() const{ return m_resolution; }

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline void SetResolution(const Aws::String& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline void SetResolution(Aws::String&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline void SetResolution(const char* value) { m_resolutionHasBeenSet = true; m_resolution.assign(value); }

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline ListReservationsRequest& WithResolution(const Aws::String& value) { SetResolution(value); return *this;}

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline ListReservationsRequest& WithResolution(Aws::String&& value) { SetResolution(std::move(value)); return *this;}

    /**
     * Filter by resolution, 'SD', 'HD', or 'UHD'
     */
    inline ListReservationsRequest& WithResolution(const char* value) { SetResolution(value); return *this;}


    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline ListReservationsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline ListReservationsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * Filter by resource type, 'INPUT', 'OUTPUT', or 'CHANNEL'
     */
    inline ListReservationsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline const Aws::String& GetSpecialFeature() const{ return m_specialFeature; }

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline bool SpecialFeatureHasBeenSet() const { return m_specialFeatureHasBeenSet; }

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline void SetSpecialFeature(const Aws::String& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = value; }

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline void SetSpecialFeature(Aws::String&& value) { m_specialFeatureHasBeenSet = true; m_specialFeature = std::move(value); }

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline void SetSpecialFeature(const char* value) { m_specialFeatureHasBeenSet = true; m_specialFeature.assign(value); }

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline ListReservationsRequest& WithSpecialFeature(const Aws::String& value) { SetSpecialFeature(value); return *this;}

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline ListReservationsRequest& WithSpecialFeature(Aws::String&& value) { SetSpecialFeature(std::move(value)); return *this;}

    /**
     * Filter by special feature, 'ADVANCED_AUDIO' or 'AUDIO_NORMALIZATION'

     */
    inline ListReservationsRequest& WithSpecialFeature(const char* value) { SetSpecialFeature(value); return *this;}


    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline const Aws::String& GetVideoQuality() const{ return m_videoQuality; }

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline bool VideoQualityHasBeenSet() const { return m_videoQualityHasBeenSet; }

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline void SetVideoQuality(const Aws::String& value) { m_videoQualityHasBeenSet = true; m_videoQuality = value; }

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline void SetVideoQuality(Aws::String&& value) { m_videoQualityHasBeenSet = true; m_videoQuality = std::move(value); }

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline void SetVideoQuality(const char* value) { m_videoQualityHasBeenSet = true; m_videoQuality.assign(value); }

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline ListReservationsRequest& WithVideoQuality(const Aws::String& value) { SetVideoQuality(value); return *this;}

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline ListReservationsRequest& WithVideoQuality(Aws::String&& value) { SetVideoQuality(std::move(value)); return *this;}

    /**
     * Filter by video quality, 'STANDARD', 'ENHANCED', or 'PREMIUM'

     */
    inline ListReservationsRequest& WithVideoQuality(const char* value) { SetVideoQuality(value); return *this;}

  private:

    Aws::String m_channelClass;
    bool m_channelClassHasBeenSet;

    Aws::String m_codec;
    bool m_codecHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet;

    Aws::String m_maximumFramerate;
    bool m_maximumFramerateHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_specialFeature;
    bool m_specialFeatureHasBeenSet;

    Aws::String m_videoQuality;
    bool m_videoQualityHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
