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
   * Settings for ancillary captions source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AncillarySourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AncillarySourceSettings
  {
  public:
    AncillarySourceSettings();
    AncillarySourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AncillarySourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the 608 channel number in the ancillary data track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSourceAncillaryChannelNumber() const{ return m_sourceAncillaryChannelNumber; }

    /**
     * Specifies the 608 channel number in the ancillary data track from which to
     * extract captions. Unused for passthrough.
     */
    inline bool SourceAncillaryChannelNumberHasBeenSet() const { return m_sourceAncillaryChannelNumberHasBeenSet; }

    /**
     * Specifies the 608 channel number in the ancillary data track from which to
     * extract captions. Unused for passthrough.
     */
    inline void SetSourceAncillaryChannelNumber(int value) { m_sourceAncillaryChannelNumberHasBeenSet = true; m_sourceAncillaryChannelNumber = value; }

    /**
     * Specifies the 608 channel number in the ancillary data track from which to
     * extract captions. Unused for passthrough.
     */
    inline AncillarySourceSettings& WithSourceAncillaryChannelNumber(int value) { SetSourceAncillaryChannelNumber(value); return *this;}

  private:

    int m_sourceAncillaryChannelNumber;
    bool m_sourceAncillaryChannelNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
