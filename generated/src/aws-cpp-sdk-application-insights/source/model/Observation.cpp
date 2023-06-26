/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/Observation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

Observation::Observation() : 
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_lineTimeHasBeenSet(false),
    m_logTextHasBeenSet(false),
    m_logFilter(LogFilter::NOT_SET),
    m_logFilterHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_cloudWatchEventIdHasBeenSet(false),
    m_cloudWatchEventSource(CloudWatchEventSource::NOT_SET),
    m_cloudWatchEventSourceHasBeenSet(false),
    m_cloudWatchEventDetailTypeHasBeenSet(false),
    m_healthEventArnHasBeenSet(false),
    m_healthServiceHasBeenSet(false),
    m_healthEventTypeCodeHasBeenSet(false),
    m_healthEventTypeCategoryHasBeenSet(false),
    m_healthEventDescriptionHasBeenSet(false),
    m_codeDeployDeploymentIdHasBeenSet(false),
    m_codeDeployDeploymentGroupHasBeenSet(false),
    m_codeDeployStateHasBeenSet(false),
    m_codeDeployApplicationHasBeenSet(false),
    m_codeDeployInstanceGroupIdHasBeenSet(false),
    m_ec2StateHasBeenSet(false),
    m_rdsEventCategoriesHasBeenSet(false),
    m_rdsEventMessageHasBeenSet(false),
    m_s3EventNameHasBeenSet(false),
    m_statesExecutionArnHasBeenSet(false),
    m_statesArnHasBeenSet(false),
    m_statesStatusHasBeenSet(false),
    m_statesInputHasBeenSet(false),
    m_ebsEventHasBeenSet(false),
    m_ebsResultHasBeenSet(false),
    m_ebsCauseHasBeenSet(false),
    m_ebsRequestIdHasBeenSet(false),
    m_xRayFaultPercent(0),
    m_xRayFaultPercentHasBeenSet(false),
    m_xRayThrottlePercent(0),
    m_xRayThrottlePercentHasBeenSet(false),
    m_xRayErrorPercent(0),
    m_xRayErrorPercentHasBeenSet(false),
    m_xRayRequestCount(0),
    m_xRayRequestCountHasBeenSet(false),
    m_xRayRequestAverageLatency(0),
    m_xRayRequestAverageLatencyHasBeenSet(false),
    m_xRayNodeNameHasBeenSet(false),
    m_xRayNodeTypeHasBeenSet(false)
{
}

Observation::Observation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_lineTimeHasBeenSet(false),
    m_logTextHasBeenSet(false),
    m_logFilter(LogFilter::NOT_SET),
    m_logFilterHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_cloudWatchEventIdHasBeenSet(false),
    m_cloudWatchEventSource(CloudWatchEventSource::NOT_SET),
    m_cloudWatchEventSourceHasBeenSet(false),
    m_cloudWatchEventDetailTypeHasBeenSet(false),
    m_healthEventArnHasBeenSet(false),
    m_healthServiceHasBeenSet(false),
    m_healthEventTypeCodeHasBeenSet(false),
    m_healthEventTypeCategoryHasBeenSet(false),
    m_healthEventDescriptionHasBeenSet(false),
    m_codeDeployDeploymentIdHasBeenSet(false),
    m_codeDeployDeploymentGroupHasBeenSet(false),
    m_codeDeployStateHasBeenSet(false),
    m_codeDeployApplicationHasBeenSet(false),
    m_codeDeployInstanceGroupIdHasBeenSet(false),
    m_ec2StateHasBeenSet(false),
    m_rdsEventCategoriesHasBeenSet(false),
    m_rdsEventMessageHasBeenSet(false),
    m_s3EventNameHasBeenSet(false),
    m_statesExecutionArnHasBeenSet(false),
    m_statesArnHasBeenSet(false),
    m_statesStatusHasBeenSet(false),
    m_statesInputHasBeenSet(false),
    m_ebsEventHasBeenSet(false),
    m_ebsResultHasBeenSet(false),
    m_ebsCauseHasBeenSet(false),
    m_ebsRequestIdHasBeenSet(false),
    m_xRayFaultPercent(0),
    m_xRayFaultPercentHasBeenSet(false),
    m_xRayThrottlePercent(0),
    m_xRayThrottlePercentHasBeenSet(false),
    m_xRayErrorPercent(0),
    m_xRayErrorPercentHasBeenSet(false),
    m_xRayRequestCount(0),
    m_xRayRequestCountHasBeenSet(false),
    m_xRayRequestAverageLatency(0),
    m_xRayRequestAverageLatencyHasBeenSet(false),
    m_xRayNodeNameHasBeenSet(false),
    m_xRayNodeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Observation& Observation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceARN"))
  {
    m_sourceARN = jsonValue.GetString("SourceARN");

    m_sourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroup"))
  {
    m_logGroup = jsonValue.GetString("LogGroup");

    m_logGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineTime"))
  {
    m_lineTime = jsonValue.GetDouble("LineTime");

    m_lineTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogText"))
  {
    m_logText = jsonValue.GetString("LogText");

    m_logTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogFilter"))
  {
    m_logFilter = LogFilterMapper::GetLogFilterForName(jsonValue.GetString("LogFilter"));

    m_logFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("MetricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchEventId"))
  {
    m_cloudWatchEventId = jsonValue.GetString("CloudWatchEventId");

    m_cloudWatchEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchEventSource"))
  {
    m_cloudWatchEventSource = CloudWatchEventSourceMapper::GetCloudWatchEventSourceForName(jsonValue.GetString("CloudWatchEventSource"));

    m_cloudWatchEventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchEventDetailType"))
  {
    m_cloudWatchEventDetailType = jsonValue.GetString("CloudWatchEventDetailType");

    m_cloudWatchEventDetailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthEventArn"))
  {
    m_healthEventArn = jsonValue.GetString("HealthEventArn");

    m_healthEventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthService"))
  {
    m_healthService = jsonValue.GetString("HealthService");

    m_healthServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthEventTypeCode"))
  {
    m_healthEventTypeCode = jsonValue.GetString("HealthEventTypeCode");

    m_healthEventTypeCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthEventTypeCategory"))
  {
    m_healthEventTypeCategory = jsonValue.GetString("HealthEventTypeCategory");

    m_healthEventTypeCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthEventDescription"))
  {
    m_healthEventDescription = jsonValue.GetString("HealthEventDescription");

    m_healthEventDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeDeployDeploymentId"))
  {
    m_codeDeployDeploymentId = jsonValue.GetString("CodeDeployDeploymentId");

    m_codeDeployDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeDeployDeploymentGroup"))
  {
    m_codeDeployDeploymentGroup = jsonValue.GetString("CodeDeployDeploymentGroup");

    m_codeDeployDeploymentGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeDeployState"))
  {
    m_codeDeployState = jsonValue.GetString("CodeDeployState");

    m_codeDeployStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeDeployApplication"))
  {
    m_codeDeployApplication = jsonValue.GetString("CodeDeployApplication");

    m_codeDeployApplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeDeployInstanceGroupId"))
  {
    m_codeDeployInstanceGroupId = jsonValue.GetString("CodeDeployInstanceGroupId");

    m_codeDeployInstanceGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2State"))
  {
    m_ec2State = jsonValue.GetString("Ec2State");

    m_ec2StateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RdsEventCategories"))
  {
    m_rdsEventCategories = jsonValue.GetString("RdsEventCategories");

    m_rdsEventCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RdsEventMessage"))
  {
    m_rdsEventMessage = jsonValue.GetString("RdsEventMessage");

    m_rdsEventMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3EventName"))
  {
    m_s3EventName = jsonValue.GetString("S3EventName");

    m_s3EventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatesExecutionArn"))
  {
    m_statesExecutionArn = jsonValue.GetString("StatesExecutionArn");

    m_statesExecutionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatesArn"))
  {
    m_statesArn = jsonValue.GetString("StatesArn");

    m_statesArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatesStatus"))
  {
    m_statesStatus = jsonValue.GetString("StatesStatus");

    m_statesStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatesInput"))
  {
    m_statesInput = jsonValue.GetString("StatesInput");

    m_statesInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsEvent"))
  {
    m_ebsEvent = jsonValue.GetString("EbsEvent");

    m_ebsEventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsResult"))
  {
    m_ebsResult = jsonValue.GetString("EbsResult");

    m_ebsResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsCause"))
  {
    m_ebsCause = jsonValue.GetString("EbsCause");

    m_ebsCauseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsRequestId"))
  {
    m_ebsRequestId = jsonValue.GetString("EbsRequestId");

    m_ebsRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayFaultPercent"))
  {
    m_xRayFaultPercent = jsonValue.GetInteger("XRayFaultPercent");

    m_xRayFaultPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayThrottlePercent"))
  {
    m_xRayThrottlePercent = jsonValue.GetInteger("XRayThrottlePercent");

    m_xRayThrottlePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayErrorPercent"))
  {
    m_xRayErrorPercent = jsonValue.GetInteger("XRayErrorPercent");

    m_xRayErrorPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayRequestCount"))
  {
    m_xRayRequestCount = jsonValue.GetInteger("XRayRequestCount");

    m_xRayRequestCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayRequestAverageLatency"))
  {
    m_xRayRequestAverageLatency = jsonValue.GetInt64("XRayRequestAverageLatency");

    m_xRayRequestAverageLatencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayNodeName"))
  {
    m_xRayNodeName = jsonValue.GetString("XRayNodeName");

    m_xRayNodeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XRayNodeType"))
  {
    m_xRayNodeType = jsonValue.GetString("XRayNodeType");

    m_xRayNodeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Observation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_sourceARNHasBeenSet)
  {
   payload.WithString("SourceARN", m_sourceARN);

  }

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("LogGroup", m_logGroup);

  }

  if(m_lineTimeHasBeenSet)
  {
   payload.WithDouble("LineTime", m_lineTime.SecondsWithMSPrecision());
  }

  if(m_logTextHasBeenSet)
  {
   payload.WithString("LogText", m_logText);

  }

  if(m_logFilterHasBeenSet)
  {
   payload.WithString("LogFilter", LogFilterMapper::GetNameForLogFilter(m_logFilter));
  }

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("MetricNamespace", m_metricNamespace);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_cloudWatchEventIdHasBeenSet)
  {
   payload.WithString("CloudWatchEventId", m_cloudWatchEventId);

  }

  if(m_cloudWatchEventSourceHasBeenSet)
  {
   payload.WithString("CloudWatchEventSource", CloudWatchEventSourceMapper::GetNameForCloudWatchEventSource(m_cloudWatchEventSource));
  }

  if(m_cloudWatchEventDetailTypeHasBeenSet)
  {
   payload.WithString("CloudWatchEventDetailType", m_cloudWatchEventDetailType);

  }

  if(m_healthEventArnHasBeenSet)
  {
   payload.WithString("HealthEventArn", m_healthEventArn);

  }

  if(m_healthServiceHasBeenSet)
  {
   payload.WithString("HealthService", m_healthService);

  }

  if(m_healthEventTypeCodeHasBeenSet)
  {
   payload.WithString("HealthEventTypeCode", m_healthEventTypeCode);

  }

  if(m_healthEventTypeCategoryHasBeenSet)
  {
   payload.WithString("HealthEventTypeCategory", m_healthEventTypeCategory);

  }

  if(m_healthEventDescriptionHasBeenSet)
  {
   payload.WithString("HealthEventDescription", m_healthEventDescription);

  }

  if(m_codeDeployDeploymentIdHasBeenSet)
  {
   payload.WithString("CodeDeployDeploymentId", m_codeDeployDeploymentId);

  }

  if(m_codeDeployDeploymentGroupHasBeenSet)
  {
   payload.WithString("CodeDeployDeploymentGroup", m_codeDeployDeploymentGroup);

  }

  if(m_codeDeployStateHasBeenSet)
  {
   payload.WithString("CodeDeployState", m_codeDeployState);

  }

  if(m_codeDeployApplicationHasBeenSet)
  {
   payload.WithString("CodeDeployApplication", m_codeDeployApplication);

  }

  if(m_codeDeployInstanceGroupIdHasBeenSet)
  {
   payload.WithString("CodeDeployInstanceGroupId", m_codeDeployInstanceGroupId);

  }

  if(m_ec2StateHasBeenSet)
  {
   payload.WithString("Ec2State", m_ec2State);

  }

  if(m_rdsEventCategoriesHasBeenSet)
  {
   payload.WithString("RdsEventCategories", m_rdsEventCategories);

  }

  if(m_rdsEventMessageHasBeenSet)
  {
   payload.WithString("RdsEventMessage", m_rdsEventMessage);

  }

  if(m_s3EventNameHasBeenSet)
  {
   payload.WithString("S3EventName", m_s3EventName);

  }

  if(m_statesExecutionArnHasBeenSet)
  {
   payload.WithString("StatesExecutionArn", m_statesExecutionArn);

  }

  if(m_statesArnHasBeenSet)
  {
   payload.WithString("StatesArn", m_statesArn);

  }

  if(m_statesStatusHasBeenSet)
  {
   payload.WithString("StatesStatus", m_statesStatus);

  }

  if(m_statesInputHasBeenSet)
  {
   payload.WithString("StatesInput", m_statesInput);

  }

  if(m_ebsEventHasBeenSet)
  {
   payload.WithString("EbsEvent", m_ebsEvent);

  }

  if(m_ebsResultHasBeenSet)
  {
   payload.WithString("EbsResult", m_ebsResult);

  }

  if(m_ebsCauseHasBeenSet)
  {
   payload.WithString("EbsCause", m_ebsCause);

  }

  if(m_ebsRequestIdHasBeenSet)
  {
   payload.WithString("EbsRequestId", m_ebsRequestId);

  }

  if(m_xRayFaultPercentHasBeenSet)
  {
   payload.WithInteger("XRayFaultPercent", m_xRayFaultPercent);

  }

  if(m_xRayThrottlePercentHasBeenSet)
  {
   payload.WithInteger("XRayThrottlePercent", m_xRayThrottlePercent);

  }

  if(m_xRayErrorPercentHasBeenSet)
  {
   payload.WithInteger("XRayErrorPercent", m_xRayErrorPercent);

  }

  if(m_xRayRequestCountHasBeenSet)
  {
   payload.WithInteger("XRayRequestCount", m_xRayRequestCount);

  }

  if(m_xRayRequestAverageLatencyHasBeenSet)
  {
   payload.WithInt64("XRayRequestAverageLatency", m_xRayRequestAverageLatency);

  }

  if(m_xRayNodeNameHasBeenSet)
  {
   payload.WithString("XRayNodeName", m_xRayNodeName);

  }

  if(m_xRayNodeTypeHasBeenSet)
  {
   payload.WithString("XRayNodeType", m_xRayNodeType);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
