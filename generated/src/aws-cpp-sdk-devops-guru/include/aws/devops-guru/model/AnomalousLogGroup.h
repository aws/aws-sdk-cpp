/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/LogAnomalyShowcase.h>
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
   * <p> An Amazon CloudWatch log group that contains log anomalies and is used to
   * generate an insight. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalousLogGroup">AWS
   * API Reference</a></p>
   */
  class AnomalousLogGroup
  {
  public:
    AWS_DEVOPSGURU_API AnomalousLogGroup() = default;
    AWS_DEVOPSGURU_API AnomalousLogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalousLogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    AnomalousLogGroup& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline const Aws::Utils::DateTime& GetImpactStartTime() const { return m_impactStartTime; }
    inline bool ImpactStartTimeHasBeenSet() const { return m_impactStartTimeHasBeenSet; }
    template<typename ImpactStartTimeT = Aws::Utils::DateTime>
    void SetImpactStartTime(ImpactStartTimeT&& value) { m_impactStartTimeHasBeenSet = true; m_impactStartTime = std::forward<ImpactStartTimeT>(value); }
    template<typename ImpactStartTimeT = Aws::Utils::DateTime>
    AnomalousLogGroup& WithImpactStartTime(ImpactStartTimeT&& value) { SetImpactStartTime(std::forward<ImpactStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline const Aws::Utils::DateTime& GetImpactEndTime() const { return m_impactEndTime; }
    inline bool ImpactEndTimeHasBeenSet() const { return m_impactEndTimeHasBeenSet; }
    template<typename ImpactEndTimeT = Aws::Utils::DateTime>
    void SetImpactEndTime(ImpactEndTimeT&& value) { m_impactEndTimeHasBeenSet = true; m_impactEndTime = std::forward<ImpactEndTimeT>(value); }
    template<typename ImpactEndTimeT = Aws::Utils::DateTime>
    AnomalousLogGroup& WithImpactEndTime(ImpactEndTimeT&& value) { SetImpactEndTime(std::forward<ImpactEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of log lines that were scanned for anomalous log events. </p>
     */
    inline int GetNumberOfLogLinesScanned() const { return m_numberOfLogLinesScanned; }
    inline bool NumberOfLogLinesScannedHasBeenSet() const { return m_numberOfLogLinesScannedHasBeenSet; }
    inline void SetNumberOfLogLinesScanned(int value) { m_numberOfLogLinesScannedHasBeenSet = true; m_numberOfLogLinesScanned = value; }
    inline AnomalousLogGroup& WithNumberOfLogLinesScanned(int value) { SetNumberOfLogLinesScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline const Aws::Vector<LogAnomalyShowcase>& GetLogAnomalyShowcases() const { return m_logAnomalyShowcases; }
    inline bool LogAnomalyShowcasesHasBeenSet() const { return m_logAnomalyShowcasesHasBeenSet; }
    template<typename LogAnomalyShowcasesT = Aws::Vector<LogAnomalyShowcase>>
    void SetLogAnomalyShowcases(LogAnomalyShowcasesT&& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases = std::forward<LogAnomalyShowcasesT>(value); }
    template<typename LogAnomalyShowcasesT = Aws::Vector<LogAnomalyShowcase>>
    AnomalousLogGroup& WithLogAnomalyShowcases(LogAnomalyShowcasesT&& value) { SetLogAnomalyShowcases(std::forward<LogAnomalyShowcasesT>(value)); return *this;}
    template<typename LogAnomalyShowcasesT = LogAnomalyShowcase>
    AnomalousLogGroup& AddLogAnomalyShowcases(LogAnomalyShowcasesT&& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases.emplace_back(std::forward<LogAnomalyShowcasesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_impactStartTime{};
    bool m_impactStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_impactEndTime{};
    bool m_impactEndTimeHasBeenSet = false;

    int m_numberOfLogLinesScanned{0};
    bool m_numberOfLogLinesScannedHasBeenSet = false;

    Aws::Vector<LogAnomalyShowcase> m_logAnomalyShowcases;
    bool m_logAnomalyShowcasesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
