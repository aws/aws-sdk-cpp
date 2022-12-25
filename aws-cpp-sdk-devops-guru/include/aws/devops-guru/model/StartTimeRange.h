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
   * <p> A time range used to specify when the behavior of an insight or anomaly
   * started. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/StartTimeRange">AWS
   * API Reference</a></p>
   */
  class StartTimeRange
  {
  public:
    AWS_DEVOPSGURU_API StartTimeRange();
    AWS_DEVOPSGURU_API StartTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API StartTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The start time of the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    /**
     * <p> The start time of the time range. </p>
     */
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    /**
     * <p> The start time of the time range. </p>
     */
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    /**
     * <p> The start time of the time range. </p>
     */
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    /**
     * <p> The start time of the time range. </p>
     */
    inline StartTimeRange& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    /**
     * <p> The start time of the time range. </p>
     */
    inline StartTimeRange& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    /**
     * <p> The end time of the time range. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    /**
     * <p> The end time of the time range. </p>
     */
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    /**
     * <p> The end time of the time range. </p>
     */
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    /**
     * <p> The end time of the time range. </p>
     */
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    /**
     * <p> The end time of the time range. </p>
     */
    inline StartTimeRange& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    /**
     * <p> The end time of the time range. </p>
     */
    inline StartTimeRange& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
