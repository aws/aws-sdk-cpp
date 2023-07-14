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
   * Video Selector Pid<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelectorPid">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoSelectorPid
  {
  public:
    VideoSelectorPid();
    VideoSelectorPid(Aws::Utils::Json::JsonView jsonValue);
    VideoSelectorPid& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects a specific PID from within a video source.
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * Selects a specific PID from within a video source.
     */
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

    /**
     * Selects a specific PID from within a video source.
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * Selects a specific PID from within a video source.
     */
    inline VideoSelectorPid& WithPid(int value) { SetPid(value); return *this;}

  private:

    int m_pid;
    bool m_pidHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
