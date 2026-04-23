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
   * Settings specific to caption sources that are specfied by track number. Sources
   * include IMSC in IMF.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TrackSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TrackSourceSettings
  {
  public:
    TrackSourceSettings();
    TrackSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    TrackSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_trackNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
