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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/DashEncryption.h>
#include <aws/mediapackage/model/Profile.h>
#include <aws/mediapackage/model/StreamSelection.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Dynamic Adaptive Streaming over HTTP (DASH) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DashPackage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API DashPackage
  {
  public:
    DashPackage();
    DashPackage(const Aws::Utils::Json::JsonValue& jsonValue);
    DashPackage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DashEncryption& GetEncryption() const{ return m_encryption; }

    
    inline void SetEncryption(const DashEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(DashEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline DashPackage& WithEncryption(const DashEncryption& value) { SetEncryption(value); return *this;}

    
    inline DashPackage& WithEncryption(DashEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline DashPackage& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline DashPackage& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline int GetMinUpdatePeriodSeconds() const{ return m_minUpdatePeriodSeconds; }

    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }

    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline DashPackage& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}


    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(const Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashPackage& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashPackage& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline DashPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline DashPackage& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline DashPackage& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}


    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline int GetSuggestedPresentationDelaySeconds() const{ return m_suggestedPresentationDelaySeconds; }

    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }

    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline DashPackage& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}

  private:

    DashEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet;

    int m_minUpdatePeriodSeconds;
    bool m_minUpdatePeriodSecondsHasBeenSet;

    Profile m_profile;
    bool m_profileHasBeenSet;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet;

    int m_suggestedPresentationDelaySeconds;
    bool m_suggestedPresentationDelaySecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
