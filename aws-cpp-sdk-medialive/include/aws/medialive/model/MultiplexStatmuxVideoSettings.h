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
   * Statmux rate control settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexStatmuxVideoSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexStatmuxVideoSettings
  {
  public:
    MultiplexStatmuxVideoSettings();
    MultiplexStatmuxVideoSettings(Aws::Utils::Json::JsonView jsonValue);
    MultiplexStatmuxVideoSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Maximum statmux bitrate.
     */
    inline int GetMaximumBitrate() const{ return m_maximumBitrate; }

    /**
     * Maximum statmux bitrate.
     */
    inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }

    /**
     * Maximum statmux bitrate.
     */
    inline void SetMaximumBitrate(int value) { m_maximumBitrateHasBeenSet = true; m_maximumBitrate = value; }

    /**
     * Maximum statmux bitrate.
     */
    inline MultiplexStatmuxVideoSettings& WithMaximumBitrate(int value) { SetMaximumBitrate(value); return *this;}


    /**
     * Minimum statmux bitrate.
     */
    inline int GetMinimumBitrate() const{ return m_minimumBitrate; }

    /**
     * Minimum statmux bitrate.
     */
    inline bool MinimumBitrateHasBeenSet() const { return m_minimumBitrateHasBeenSet; }

    /**
     * Minimum statmux bitrate.
     */
    inline void SetMinimumBitrate(int value) { m_minimumBitrateHasBeenSet = true; m_minimumBitrate = value; }

    /**
     * Minimum statmux bitrate.
     */
    inline MultiplexStatmuxVideoSettings& WithMinimumBitrate(int value) { SetMinimumBitrate(value); return *this;}

  private:

    int m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet;

    int m_minimumBitrate;
    bool m_minimumBitrateHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
