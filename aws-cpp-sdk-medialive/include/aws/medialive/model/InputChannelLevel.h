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
   * Input Channel Level<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputChannelLevel">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputChannelLevel
  {
  public:
    InputChannelLevel();
    InputChannelLevel(Aws::Utils::Json::JsonView jsonValue);
    InputChannelLevel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Remixing value. Units are in dB and acceptable values are within the range from
     * -60 (mute) and 6 dB.
     */
    inline int GetGain() const{ return m_gain; }

    /**
     * Remixing value. Units are in dB and acceptable values are within the range from
     * -60 (mute) and 6 dB.
     */
    inline bool GainHasBeenSet() const { return m_gainHasBeenSet; }

    /**
     * Remixing value. Units are in dB and acceptable values are within the range from
     * -60 (mute) and 6 dB.
     */
    inline void SetGain(int value) { m_gainHasBeenSet = true; m_gain = value; }

    /**
     * Remixing value. Units are in dB and acceptable values are within the range from
     * -60 (mute) and 6 dB.
     */
    inline InputChannelLevel& WithGain(int value) { SetGain(value); return *this;}


    /**
     * The index of the input channel used as a source.
     */
    inline int GetInputChannel() const{ return m_inputChannel; }

    /**
     * The index of the input channel used as a source.
     */
    inline bool InputChannelHasBeenSet() const { return m_inputChannelHasBeenSet; }

    /**
     * The index of the input channel used as a source.
     */
    inline void SetInputChannel(int value) { m_inputChannelHasBeenSet = true; m_inputChannel = value; }

    /**
     * The index of the input channel used as a source.
     */
    inline InputChannelLevel& WithInputChannel(int value) { SetInputChannel(value); return *this;}

  private:

    int m_gain;
    bool m_gainHasBeenSet;

    int m_inputChannel;
    bool m_inputChannelHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
