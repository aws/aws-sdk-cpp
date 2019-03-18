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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a time range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeRange">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API TimeRange
  {
  public:
    TimeRange();
    TimeRange(Aws::Utils::Json::JsonView jsonValue);
    TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline TimeRange& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The start time of the time range.</p> <note> <p>Specify null to leave the
     * start time open-ended.</p> </note>
     */
    inline TimeRange& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline TimeRange& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The end time of the time range.</p> <note> <p>Specify null to leave the end
     * time open-ended.</p> </note>
     */
    inline TimeRange& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
