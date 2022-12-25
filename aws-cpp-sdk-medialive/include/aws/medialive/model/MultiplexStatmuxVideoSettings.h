/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MultiplexStatmuxVideoSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexStatmuxVideoSettings();
    AWS_MEDIALIVE_API MultiplexStatmuxVideoSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexStatmuxVideoSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * The purpose of the priority is to use a combination of the\nmultiplex rate
     * control algorithm and the QVBR capability of the\nencoder to prioritize the
     * video quality of some channels in a\nmultiplex over others.  Channels that have
     * a higher priority will\nget higher video quality at the expense of the video
     * quality of\nother channels in the multiplex with lower priority.
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * The purpose of the priority is to use a combination of the\nmultiplex rate
     * control algorithm and the QVBR capability of the\nencoder to prioritize the
     * video quality of some channels in a\nmultiplex over others.  Channels that have
     * a higher priority will\nget higher video quality at the expense of the video
     * quality of\nother channels in the multiplex with lower priority.
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * The purpose of the priority is to use a combination of the\nmultiplex rate
     * control algorithm and the QVBR capability of the\nencoder to prioritize the
     * video quality of some channels in a\nmultiplex over others.  Channels that have
     * a higher priority will\nget higher video quality at the expense of the video
     * quality of\nother channels in the multiplex with lower priority.
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * The purpose of the priority is to use a combination of the\nmultiplex rate
     * control algorithm and the QVBR capability of the\nencoder to prioritize the
     * video quality of some channels in a\nmultiplex over others.  Channels that have
     * a higher priority will\nget higher video quality at the expense of the video
     * quality of\nother channels in the multiplex with lower priority.
     */
    inline MultiplexStatmuxVideoSettings& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    int m_maximumBitrate;
    bool m_maximumBitrateHasBeenSet = false;

    int m_minimumBitrate;
    bool m_minimumBitrateHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
