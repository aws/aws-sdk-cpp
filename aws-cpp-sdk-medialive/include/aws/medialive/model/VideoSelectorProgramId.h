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
   * Video Selector Program Id<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelectorProgramId">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoSelectorProgramId
  {
  public:
    VideoSelectorProgramId();
    VideoSelectorProgramId(Aws::Utils::Json::JsonView jsonValue);
    VideoSelectorProgramId& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects a specific program from within a multi-program transport stream. If the
     * program doesn't exist, the first program within the transport stream will be
     * selected by default.
     */
    inline int GetProgramId() const{ return m_programId; }

    /**
     * Selects a specific program from within a multi-program transport stream. If the
     * program doesn't exist, the first program within the transport stream will be
     * selected by default.
     */
    inline bool ProgramIdHasBeenSet() const { return m_programIdHasBeenSet; }

    /**
     * Selects a specific program from within a multi-program transport stream. If the
     * program doesn't exist, the first program within the transport stream will be
     * selected by default.
     */
    inline void SetProgramId(int value) { m_programIdHasBeenSet = true; m_programId = value; }

    /**
     * Selects a specific program from within a multi-program transport stream. If the
     * program doesn't exist, the first program within the transport stream will be
     * selected by default.
     */
    inline VideoSelectorProgramId& WithProgramId(int value) { SetProgramId(value); return *this;}

  private:

    int m_programId;
    bool m_programIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
