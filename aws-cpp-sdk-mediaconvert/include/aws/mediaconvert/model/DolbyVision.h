/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DolbyVisionLevel6Metadata.h>
#include <aws/mediaconvert/model/DolbyVisionLevel6Mode.h>
#include <aws/mediaconvert/model/DolbyVisionProfile.h>
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
   * Settings for Dolby Vision<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DolbyVision">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DolbyVision
  {
  public:
    DolbyVision();
    DolbyVision(Aws::Utils::Json::JsonView jsonValue);
    DolbyVision& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline const DolbyVisionLevel6Metadata& GetL6Metadata() const{ return m_l6Metadata; }

    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline bool L6MetadataHasBeenSet() const { return m_l6MetadataHasBeenSet; }

    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline void SetL6Metadata(const DolbyVisionLevel6Metadata& value) { m_l6MetadataHasBeenSet = true; m_l6Metadata = value; }

    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline void SetL6Metadata(DolbyVisionLevel6Metadata&& value) { m_l6MetadataHasBeenSet = true; m_l6Metadata = std::move(value); }

    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline DolbyVision& WithL6Metadata(const DolbyVisionLevel6Metadata& value) { SetL6Metadata(value); return *this;}

    /**
     * Use these settings when you set DolbyVisionLevel6Mode to SPECIFY to override the
     * MaxCLL and MaxFALL values in your input with new values.
     */
    inline DolbyVision& WithL6Metadata(DolbyVisionLevel6Metadata&& value) { SetL6Metadata(std::move(value)); return *this;}


    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline const DolbyVisionLevel6Mode& GetL6Mode() const{ return m_l6Mode; }

    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline bool L6ModeHasBeenSet() const { return m_l6ModeHasBeenSet; }

    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline void SetL6Mode(const DolbyVisionLevel6Mode& value) { m_l6ModeHasBeenSet = true; m_l6Mode = value; }

    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline void SetL6Mode(DolbyVisionLevel6Mode&& value) { m_l6ModeHasBeenSet = true; m_l6Mode = std::move(value); }

    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline DolbyVision& WithL6Mode(const DolbyVisionLevel6Mode& value) { SetL6Mode(value); return *this;}

    /**
     * Use Dolby Vision Mode to choose how the service will handle Dolby Vision MaxCLL
     * and MaxFALL properies.
     */
    inline DolbyVision& WithL6Mode(DolbyVisionLevel6Mode&& value) { SetL6Mode(std::move(value)); return *this;}


    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline const DolbyVisionProfile& GetProfile() const{ return m_profile; }

    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline void SetProfile(const DolbyVisionProfile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline void SetProfile(DolbyVisionProfile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline DolbyVision& WithProfile(const DolbyVisionProfile& value) { SetProfile(value); return *this;}

    /**
     * In the current MediaConvert implementation, the Dolby Vision profile is always 5
     * (PROFILE_5). Therefore, all of your inputs must contain Dolby Vision frame
     * interleaved data.
     */
    inline DolbyVision& WithProfile(DolbyVisionProfile&& value) { SetProfile(std::move(value)); return *this;}

  private:

    DolbyVisionLevel6Metadata m_l6Metadata;
    bool m_l6MetadataHasBeenSet;

    DolbyVisionLevel6Mode m_l6Mode;
    bool m_l6ModeHasBeenSet;

    DolbyVisionProfile m_profile;
    bool m_profileHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
