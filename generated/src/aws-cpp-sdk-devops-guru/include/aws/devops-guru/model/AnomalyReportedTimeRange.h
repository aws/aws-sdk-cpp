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
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange() = default;
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalyReportedTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time when an anomaly is opened. </p>
     */
    inline const Aws::Utils::DateTime& GetOpenTime() const { return m_openTime; }
    inline bool OpenTimeHasBeenSet() const { return m_openTimeHasBeenSet; }
    template<typename OpenTimeT = Aws::Utils::DateTime>
    void SetOpenTime(OpenTimeT&& value) { m_openTimeHasBeenSet = true; m_openTime = std::forward<OpenTimeT>(value); }
    template<typename OpenTimeT = Aws::Utils::DateTime>
    AnomalyReportedTimeRange& WithOpenTime(OpenTimeT&& value) { SetOpenTime(std::forward<OpenTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when an anomaly is closed. </p>
     */
    inline const Aws::Utils::DateTime& GetCloseTime() const { return m_closeTime; }
    inline bool CloseTimeHasBeenSet() const { return m_closeTimeHasBeenSet; }
    template<typename CloseTimeT = Aws::Utils::DateTime>
    void SetCloseTime(CloseTimeT&& value) { m_closeTimeHasBeenSet = true; m_closeTime = std::forward<CloseTimeT>(value); }
    template<typename CloseTimeT = Aws::Utils::DateTime>
    AnomalyReportedTimeRange& WithCloseTime(CloseTimeT&& value) { SetCloseTime(std::forward<CloseTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_openTime{};
    bool m_openTimeHasBeenSet = false;

    Aws::Utils::DateTime m_closeTime{};
    bool m_closeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
