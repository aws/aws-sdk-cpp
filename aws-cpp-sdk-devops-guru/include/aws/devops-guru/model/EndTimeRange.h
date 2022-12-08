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
   * <p> A range of time that specifies when anomalous behavior in an anomaly or
   * insight ended. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EndTimeRange">AWS
   * API Reference</a></p>
   */
  class EndTimeRange
  {
  public:
    AWS_DEVOPSGURU_API EndTimeRange();
    AWS_DEVOPSGURU_API EndTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EndTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline EndTimeRange& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    /**
     * <p> The earliest end time in the time range. </p>
     */
    inline EndTimeRange& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    /**
     * <p> The latest end time in the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    /**
     * <p> The latest end time in the time range. </p>
     */
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    /**
     * <p> The latest end time in the time range. </p>
     */
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    /**
     * <p> The latest end time in the time range. </p>
     */
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    /**
     * <p> The latest end time in the time range. </p>
     */
    inline EndTimeRange& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    /**
     * <p> The latest end time in the time range. </p>
     */
    inline EndTimeRange& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
