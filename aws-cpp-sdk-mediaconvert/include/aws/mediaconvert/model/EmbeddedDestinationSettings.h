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
   * Settings specific to embedded/ancillary caption outputs, including 608/708
   * Channel destination number.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EmbeddedDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API EmbeddedDestinationSettings
  {
  public:
    EmbeddedDestinationSettings();
    EmbeddedDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    EmbeddedDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * container is MXF. With this combination of input captions format and output
     * container, you can optionally use this setting to replace the input channel
     * number with the track number that you specify. Specify a different number for
     * each output captions track. If you don't specify an output track number, the
     * system uses the input channel number for the output channel number. This setting
     * applies to each output individually. You can optionally combine two captions
     * channels in your output. The two output channel numbers can be one of the
     * following pairs: 1,3; 2,4; 1,4; or 2,3.
     */
    inline int GetDestination608ChannelNumber() const{ return m_destination608ChannelNumber; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * container is MXF. With this combination of input captions format and output
     * container, you can optionally use this setting to replace the input channel
     * number with the track number that you specify. Specify a different number for
     * each output captions track. If you don't specify an output track number, the
     * system uses the input channel number for the output channel number. This setting
     * applies to each output individually. You can optionally combine two captions
     * channels in your output. The two output channel numbers can be one of the
     * following pairs: 1,3; 2,4; 1,4; or 2,3.
     */
    inline bool Destination608ChannelNumberHasBeenSet() const { return m_destination608ChannelNumberHasBeenSet; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * container is MXF. With this combination of input captions format and output
     * container, you can optionally use this setting to replace the input channel
     * number with the track number that you specify. Specify a different number for
     * each output captions track. If you don't specify an output track number, the
     * system uses the input channel number for the output channel number. This setting
     * applies to each output individually. You can optionally combine two captions
     * channels in your output. The two output channel numbers can be one of the
     * following pairs: 1,3; 2,4; 1,4; or 2,3.
     */
    inline void SetDestination608ChannelNumber(int value) { m_destination608ChannelNumberHasBeenSet = true; m_destination608ChannelNumber = value; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * container is MXF. With this combination of input captions format and output
     * container, you can optionally use this setting to replace the input channel
     * number with the track number that you specify. Specify a different number for
     * each output captions track. If you don't specify an output track number, the
     * system uses the input channel number for the output channel number. This setting
     * applies to each output individually. You can optionally combine two captions
     * channels in your output. The two output channel numbers can be one of the
     * following pairs: 1,3; 2,4; 1,4; or 2,3.
     */
    inline EmbeddedDestinationSettings& WithDestination608ChannelNumber(int value) { SetDestination608ChannelNumber(value); return *this;}

  private:

    int m_destination608ChannelNumber;
    bool m_destination608ChannelNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
