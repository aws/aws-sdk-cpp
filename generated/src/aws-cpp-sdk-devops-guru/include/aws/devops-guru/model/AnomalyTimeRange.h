/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> A time range that specifies when the observed unusual behavior in an anomaly
   * started and ended. This is different from <code>AnomalyReportedTimeRange</code>,
   * which specifies the time range when DevOps Guru opens and then closes an
   * anomaly. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalyTimeRange">AWS
   * API Reference</a></p>
   */
  class AnomalyTimeRange
  {
  public:
    AWS_DEVOPSGURU_API AnomalyTimeRange();
    AWS_DEVOPSGURU_API AnomalyTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalyTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline AnomalyTimeRange& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time when the anomalous behavior started. </p>
     */
    inline AnomalyTimeRange& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline AnomalyTimeRange& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The time when the anomalous behavior ended. </p>
     */
    inline AnomalyTimeRange& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
