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
   * Audio Pid Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioPidSelection">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioPidSelection
  {
  public:
    AudioPidSelection();
    AudioPidSelection(Aws::Utils::Json::JsonView jsonValue);
    AudioPidSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_pidHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
