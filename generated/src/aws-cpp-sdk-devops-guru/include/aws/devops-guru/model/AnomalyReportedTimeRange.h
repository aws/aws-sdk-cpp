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
   * <p> A time range that specifies when DevOps Guru opens and then closes an
   * anomaly. This is different from <code>AnomalyTimeRange</code>, which specifies
   * the time range when DevOps Guru actually observes the anomalous behavior.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalyReportedTimeRange">AWS
   * API Reference</a></p>
   */
  class AnomalyReportedTimeRange
  {
  public:
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange();
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline const Aws::Utils::DateTime& GetOpenTime() const{ return m_openTime; }

    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline bool OpenTimeHasBeenSet() const { return m_openTimeHasBeenSet; }

    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline void SetOpenTime(const Aws::Utils::DateTime& value) { m_openTimeHasBeenSet = true; m_openTime = value; }

    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline void SetOpenTime(Aws::Utils::DateTime&& value) { m_openTimeHasBeenSet = true; m_openTime = std::move(value); }

    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline AnomalyReportedTimeRange& WithOpenTime(const Aws::Utils::DateTime& value) { SetOpenTime(value); return *this;}

    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline AnomalyReportedTimeRange& WithOpenTime(Aws::Utils::DateTime&& value) { SetOpenTime(std::move(value)); return *this;}


    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline const Aws::Utils::DateTime& GetCloseTime() const{ return m_closeTime; }

    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline bool CloseTimeHasBeenSet() const { return m_closeTimeHasBeenSet; }

    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline void SetCloseTime(const Aws::Utils::DateTime& value) { m_closeTimeHasBeenSet = true; m_closeTime = value; }

    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline void SetCloseTime(Aws::Utils::DateTime&& value) { m_closeTimeHasBeenSet = true; m_closeTime = std::move(value); }

    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline AnomalyReportedTimeRange& WithCloseTime(const Aws::Utils::DateTime& value) { SetCloseTime(value); return *this;}

    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline AnomalyReportedTimeRange& WithCloseTime(Aws::Utils::DateTime&& value) { SetCloseTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_openTime;
    bool m_openTimeHasBeenSet = false;

    Aws::Utils::DateTime m_closeTime;
    bool m_closeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
