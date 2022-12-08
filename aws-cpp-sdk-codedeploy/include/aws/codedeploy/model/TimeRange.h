/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TimeRange
  {
  public:
    AWS_CODEDEPLOY_API TimeRange();
    AWS_CODEDEPLOY_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline TimeRange& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline TimeRange& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline TimeRange& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline TimeRange& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
