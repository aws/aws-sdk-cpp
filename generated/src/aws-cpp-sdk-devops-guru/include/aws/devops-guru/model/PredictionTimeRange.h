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
   * <p> The time range during which anomalous behavior in a proactive anomaly or an
   * insight is expected to occur. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PredictionTimeRange">AWS
   * API Reference</a></p>
   */
  class PredictionTimeRange
  {
  public:
    AWS_DEVOPSGURU_API PredictionTimeRange();
    AWS_DEVOPSGURU_API PredictionTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PredictionTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline PredictionTimeRange& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time range during which a metric limit is expected to be exceeded. This
     * applies to proactive insights only. </p>
     */
    inline PredictionTimeRange& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline PredictionTimeRange& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The time when the behavior in a proactive insight is expected to end. </p>
     */
    inline PredictionTimeRange& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
