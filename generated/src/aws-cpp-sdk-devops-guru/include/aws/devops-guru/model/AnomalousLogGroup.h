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
    AWS_DEVOPSGURU_API AnomalousLogGroup();
    AWS_DEVOPSGURU_API AnomalousLogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalousLogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline AnomalousLogGroup& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline AnomalousLogGroup& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the CloudWatch log group. </p>
     */
    inline AnomalousLogGroup& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline const Aws::Utils::DateTime& GetImpactStartTime() const{ return m_impactStartTime; }

    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline bool ImpactStartTimeHasBeenSet() const { return m_impactStartTimeHasBeenSet; }

    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline void SetImpactStartTime(const Aws::Utils::DateTime& value) { m_impactStartTimeHasBeenSet = true; m_impactStartTime = value; }

    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline void SetImpactStartTime(Aws::Utils::DateTime&& value) { m_impactStartTimeHasBeenSet = true; m_impactStartTime = std::move(value); }

    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline AnomalousLogGroup& WithImpactStartTime(const Aws::Utils::DateTime& value) { SetImpactStartTime(value); return *this;}

    /**
     * <p> The time the anomalous log events began. The impact start time indicates the
     * time of the first log anomaly event that occurs. </p>
     */
    inline AnomalousLogGroup& WithImpactStartTime(Aws::Utils::DateTime&& value) { SetImpactStartTime(std::move(value)); return *this;}


    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline const Aws::Utils::DateTime& GetImpactEndTime() const{ return m_impactEndTime; }

    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline bool ImpactEndTimeHasBeenSet() const { return m_impactEndTimeHasBeenSet; }

    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline void SetImpactEndTime(const Aws::Utils::DateTime& value) { m_impactEndTimeHasBeenSet = true; m_impactEndTime = value; }

    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline void SetImpactEndTime(Aws::Utils::DateTime&& value) { m_impactEndTimeHasBeenSet = true; m_impactEndTime = std::move(value); }

    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline AnomalousLogGroup& WithImpactEndTime(const Aws::Utils::DateTime& value) { SetImpactEndTime(value); return *this;}

    /**
     * <p> The time the anomalous log events stopped. </p>
     */
    inline AnomalousLogGroup& WithImpactEndTime(Aws::Utils::DateTime&& value) { SetImpactEndTime(std::move(value)); return *this;}


    /**
     * <p> The number of log lines that were scanned for anomalous log events. </p>
     */
    inline int GetNumberOfLogLinesScanned() const{ return m_numberOfLogLinesScanned; }

    /**
     * <p> The number of log lines that were scanned for anomalous log events. </p>
     */
    inline bool NumberOfLogLinesScannedHasBeenSet() const { return m_numberOfLogLinesScannedHasBeenSet; }

    /**
     * <p> The number of log lines that were scanned for anomalous log events. </p>
     */
    inline void SetNumberOfLogLinesScanned(int value) { m_numberOfLogLinesScannedHasBeenSet = true; m_numberOfLogLinesScanned = value; }

    /**
     * <p> The number of log lines that were scanned for anomalous log events. </p>
     */
    inline AnomalousLogGroup& WithNumberOfLogLinesScanned(int value) { SetNumberOfLogLinesScanned(value); return *this;}


    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline const Aws::Vector<LogAnomalyShowcase>& GetLogAnomalyShowcases() const{ return m_logAnomalyShowcases; }

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline bool LogAnomalyShowcasesHasBeenSet() const { return m_logAnomalyShowcasesHasBeenSet; }

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline void SetLogAnomalyShowcases(const Aws::Vector<LogAnomalyShowcase>& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases = value; }

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline void SetLogAnomalyShowcases(Aws::Vector<LogAnomalyShowcase>&& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases = std::move(value); }

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline AnomalousLogGroup& WithLogAnomalyShowcases(const Aws::Vector<LogAnomalyShowcase>& value) { SetLogAnomalyShowcases(value); return *this;}

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline AnomalousLogGroup& WithLogAnomalyShowcases(Aws::Vector<LogAnomalyShowcase>&& value) { SetLogAnomalyShowcases(std::move(value)); return *this;}

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline AnomalousLogGroup& AddLogAnomalyShowcases(const LogAnomalyShowcase& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases.push_back(value); return *this; }

    /**
     * <p> The log anomalies in the log group. Each log anomaly displayed represents a
     * cluster of similar anomalous log events. </p>
     */
    inline AnomalousLogGroup& AddLogAnomalyShowcases(LogAnomalyShowcase&& value) { m_logAnomalyShowcasesHasBeenSet = true; m_logAnomalyShowcases.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_impactStartTime;
    bool m_impactStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_impactEndTime;
    bool m_impactEndTimeHasBeenSet = false;

    int m_numberOfLogLinesScanned;
    bool m_numberOfLogLinesScannedHasBeenSet = false;

    Aws::Vector<LogAnomalyShowcase> m_logAnomalyShowcases;
    bool m_logAnomalyShowcasesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
