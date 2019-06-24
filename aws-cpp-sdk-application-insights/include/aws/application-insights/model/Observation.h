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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/LogFilter.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/Observation">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONINSIGHTS_API Observation
  {
  public:
    Observation();
    Observation(Aws::Utils::Json::JsonView jsonValue);
    Observation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the observation type.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the observation type.</p>
     */
    inline Observation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline Observation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline Observation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline Observation& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline Observation& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The source type of the observation.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type of the observation.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type of the observation.</p>
     */
    inline Observation& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline const Aws::String& GetSourceARN() const{ return m_sourceARN; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline bool SourceARNHasBeenSet() const { return m_sourceARNHasBeenSet; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(const Aws::String& value) { m_sourceARNHasBeenSet = true; m_sourceARN = value; }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(Aws::String&& value) { m_sourceARNHasBeenSet = true; m_sourceARN = std::move(value); }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline void SetSourceARN(const char* value) { m_sourceARNHasBeenSet = true; m_sourceARN.assign(value); }

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(const Aws::String& value) { SetSourceARN(value); return *this;}

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(Aws::String&& value) { SetSourceARN(std::move(value)); return *this;}

    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline Observation& WithSourceARN(const char* value) { SetSourceARN(value); return *this;}


    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The log group name.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline Observation& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}


    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLineTime() const{ return m_lineTime; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline bool LineTimeHasBeenSet() const { return m_lineTimeHasBeenSet; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline void SetLineTime(const Aws::Utils::DateTime& value) { m_lineTimeHasBeenSet = true; m_lineTime = value; }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline void SetLineTime(Aws::Utils::DateTime&& value) { m_lineTimeHasBeenSet = true; m_lineTime = std::move(value); }

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline Observation& WithLineTime(const Aws::Utils::DateTime& value) { SetLineTime(value); return *this;}

    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline Observation& WithLineTime(Aws::Utils::DateTime&& value) { SetLineTime(std::move(value)); return *this;}


    /**
     * <p>The log text of the observation.</p>
     */
    inline const Aws::String& GetLogText() const{ return m_logText; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline bool LogTextHasBeenSet() const { return m_logTextHasBeenSet; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(const Aws::String& value) { m_logTextHasBeenSet = true; m_logText = value; }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(Aws::String&& value) { m_logTextHasBeenSet = true; m_logText = std::move(value); }

    /**
     * <p>The log text of the observation.</p>
     */
    inline void SetLogText(const char* value) { m_logTextHasBeenSet = true; m_logText.assign(value); }

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(const Aws::String& value) { SetLogText(value); return *this;}

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(Aws::String&& value) { SetLogText(std::move(value)); return *this;}

    /**
     * <p>The log text of the observation.</p>
     */
    inline Observation& WithLogText(const char* value) { SetLogText(value); return *this;}


    /**
     * <p>The log filter of the observation.</p>
     */
    inline const LogFilter& GetLogFilter() const{ return m_logFilter; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline bool LogFilterHasBeenSet() const { return m_logFilterHasBeenSet; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline void SetLogFilter(const LogFilter& value) { m_logFilterHasBeenSet = true; m_logFilter = value; }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline void SetLogFilter(LogFilter&& value) { m_logFilterHasBeenSet = true; m_logFilter = std::move(value); }

    /**
     * <p>The log filter of the observation.</p>
     */
    inline Observation& WithLogFilter(const LogFilter& value) { SetLogFilter(value); return *this;}

    /**
     * <p>The log filter of the observation.</p>
     */
    inline Observation& WithLogFilter(LogFilter&& value) { SetLogFilter(std::move(value)); return *this;}


    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = value; }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(Aws::String&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::move(value); }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline void SetMetricNamespace(const char* value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace.assign(value); }

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(Aws::String&& value) { SetMetricNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline Observation& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}


    /**
     * <p>The name of the observation metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the observation metric.</p>
     */
    inline Observation& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline Observation& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>The value of the source observation metric.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the source observation metric.</p>
     */
    inline Observation& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::String m_sourceARN;
    bool m_sourceARNHasBeenSet;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet;

    Aws::Utils::DateTime m_lineTime;
    bool m_lineTimeHasBeenSet;

    Aws::String m_logText;
    bool m_logTextHasBeenSet;

    LogFilter m_logFilter;
    bool m_logFilterHasBeenSet;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
