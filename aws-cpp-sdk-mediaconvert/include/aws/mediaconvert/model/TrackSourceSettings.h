/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Settings specific to caption sources that are specified by track number.
   * Currently, this is only IMSC captions in an IMF package. If your caption source
   * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
   * TrackSourceSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TrackSourceSettings">AWS
   * API Reference</a></p>
   */
  class TrackSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API TrackSourceSettings();
    AWS_MEDIACONVERT_API TrackSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TrackSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use this setting to select a single captions track from a source. Track numbers
     * correspond to the order in the captions source file. For IMF sources, track
     * numbering is based on the order that the captions appear in the CPL. For
     * example, use 1 to select the captions asset that is listed first in the CPL. To
     * include more than one captions track in your job outputs, create multiple input
     * captions selectors. Specify one track per selector.
     */
    inline int GetTrackNumber() const{ return m_trackNumber; }

    /**
     * Use this setting to select a single captions track from a source. Track numbers
     * correspond to the order in the captions source file. For IMF sources, track
     * numbering is based on the order that the captions appear in the CPL. For
     * example, use 1 to select the captions asset that is listed first in the CPL. To
     * include more than one captions track in your job outputs, create multiple input
     * captions selectors. Specify one track per selector.
     */
    inline bool TrackNumberHasBeenSet() const { return m_trackNumberHasBeenSet; }

    /**
     * Use this setting to select a single captions track from a source. Track numbers
     * correspond to the order in the captions source file. For IMF sources, track
     * numbering is based on the order that the captions appear in the CPL. For
     * example, use 1 to select the captions asset that is listed first in the CPL. To
     * include more than one captions track in your job outputs, create multiple input
     * captions selectors. Specify one track per selector.
     */
    inline void SetTrackNumber(int value) { m_trackNumberHasBeenSet = true; m_trackNumber = value; }

    /**
     * Use this setting to select a single captions track from a source. Track numbers
     * correspond to the order in the captions source file. For IMF sources, track
     * numbering is based on the order that the captions appear in the CPL. For
     * example, use 1 to select the captions asset that is listed first in the CPL. To
     * include more than one captions track in your job outputs, create multiple input
     * captions selectors. Specify one track per selector.
     */
    inline TrackSourceSettings& WithTrackNumber(int value) { SetTrackNumber(value); return *this;}

  private:

    int m_trackNumber;
    bool m_trackNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
