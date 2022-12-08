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
   * Audio Pid Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioPidSelection">AWS
   * API Reference</a></p>
   */
  class AudioPidSelection
  {
  public:
    AWS_MEDIALIVE_API AudioPidSelection();
    AWS_MEDIALIVE_API AudioPidSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioPidSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects a specific PID from within a source.
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * Selects a specific PID from within a source.
     */
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

    /**
     * Selects a specific PID from within a source.
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * Selects a specific PID from within a source.
     */
    inline AudioPidSelection& WithPid(int value) { SetPid(value); return *this;}

  private:

    int m_pid;
    bool m_pidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
