/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/LogFilter.h>
#include <aws/application-insights/model/CloudWatchEventSource.h>
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
  class Observation
  {
  public:
    AWS_APPLICATIONINSIGHTS_API Observation() = default;
    AWS_APPLICATIONINSIGHTS_API Observation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Observation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the observation type.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Observation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the observation was first detected, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Observation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the observation ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Observation& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the observation.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    Observation& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source resource ARN of the observation.</p>
     */
    inline const Aws::String& GetSourceARN() const { return m_sourceARN; }
    inline bool SourceARNHasBeenSet() const { return m_sourceARNHasBeenSet; }
    template<typename SourceARNT = Aws::String>
    void SetSourceARN(SourceARNT&& value) { m_sourceARNHasBeenSet = true; m_sourceARN = std::forward<SourceARNT>(value); }
    template<typename SourceARNT = Aws::String>
    Observation& WithSourceARN(SourceARNT&& value) { SetSourceARN(std::forward<SourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    Observation& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp in the CloudWatch Logs that specifies when the matched line
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLineTime() const { return m_lineTime; }
    inline bool LineTimeHasBeenSet() const { return m_lineTimeHasBeenSet; }
    template<typename LineTimeT = Aws::Utils::DateTime>
    void SetLineTime(LineTimeT&& value) { m_lineTimeHasBeenSet = true; m_lineTime = std::forward<LineTimeT>(value); }
    template<typename LineTimeT = Aws::Utils::DateTime>
    Observation& WithLineTime(LineTimeT&& value) { SetLineTime(std::forward<LineTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log text of the observation.</p>
     */
    inline const Aws::String& GetLogText() const { return m_logText; }
    inline bool LogTextHasBeenSet() const { return m_logTextHasBeenSet; }
    template<typename LogTextT = Aws::String>
    void SetLogText(LogTextT&& value) { m_logTextHasBeenSet = true; m_logText = std::forward<LogTextT>(value); }
    template<typename LogTextT = Aws::String>
    Observation& WithLogText(LogTextT&& value) { SetLogText(std::forward<LogTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log filter of the observation.</p>
     */
    inline LogFilter GetLogFilter() const { return m_logFilter; }
    inline bool LogFilterHasBeenSet() const { return m_logFilterHasBeenSet; }
    inline void SetLogFilter(LogFilter value) { m_logFilterHasBeenSet = true; m_logFilter = value; }
    inline Observation& WithLogFilter(LogFilter value) { SetLogFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the observation metric.</p>
     */
    inline const Aws::String& GetMetricNamespace() const { return m_metricNamespace; }
    inline bool MetricNamespaceHasBeenSet() const { return m_metricNamespaceHasBeenSet; }
    template<typename MetricNamespaceT = Aws::String>
    void SetMetricNamespace(MetricNamespaceT&& value) { m_metricNamespaceHasBeenSet = true; m_metricNamespace = std::forward<MetricNamespaceT>(value); }
    template<typename MetricNamespaceT = Aws::String>
    Observation& WithMetricNamespace(MetricNamespaceT&& value) { SetMetricNamespace(std::forward<MetricNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the observation metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    Observation& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the source observation metric.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    Observation& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the source observation metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Observation& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the CloudWatch Event-based observation related to the detected
     * problem. </p>
     */
    inline const Aws::String& GetCloudWatchEventId() const { return m_cloudWatchEventId; }
    inline bool CloudWatchEventIdHasBeenSet() const { return m_cloudWatchEventIdHasBeenSet; }
    template<typename CloudWatchEventIdT = Aws::String>
    void SetCloudWatchEventId(CloudWatchEventIdT&& value) { m_cloudWatchEventIdHasBeenSet = true; m_cloudWatchEventId = std::forward<CloudWatchEventIdT>(value); }
    template<typename CloudWatchEventIdT = Aws::String>
    Observation& WithCloudWatchEventId(CloudWatchEventIdT&& value) { SetCloudWatchEventId(std::forward<CloudWatchEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source of the CloudWatch Event. </p>
     */
    inline CloudWatchEventSource GetCloudWatchEventSource() const { return m_cloudWatchEventSource; }
    inline bool CloudWatchEventSourceHasBeenSet() const { return m_cloudWatchEventSourceHasBeenSet; }
    inline void SetCloudWatchEventSource(CloudWatchEventSource value) { m_cloudWatchEventSourceHasBeenSet = true; m_cloudWatchEventSource = value; }
    inline Observation& WithCloudWatchEventSource(CloudWatchEventSource value) { SetCloudWatchEventSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detail type of the CloudWatch Event-based observation, for example,
     * <code>EC2 Instance State-change Notification</code>. </p>
     */
    inline const Aws::String& GetCloudWatchEventDetailType() const { return m_cloudWatchEventDetailType; }
    inline bool CloudWatchEventDetailTypeHasBeenSet() const { return m_cloudWatchEventDetailTypeHasBeenSet; }
    template<typename CloudWatchEventDetailTypeT = Aws::String>
    void SetCloudWatchEventDetailType(CloudWatchEventDetailTypeT&& value) { m_cloudWatchEventDetailTypeHasBeenSet = true; m_cloudWatchEventDetailType = std::forward<CloudWatchEventDetailTypeT>(value); }
    template<typename CloudWatchEventDetailTypeT = Aws::String>
    Observation& WithCloudWatchEventDetailType(CloudWatchEventDetailTypeT&& value) { SetCloudWatchEventDetailType(std::forward<CloudWatchEventDetailTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Health Event-based observation.</p>
     */
    inline const Aws::String& GetHealthEventArn() const { return m_healthEventArn; }
    inline bool HealthEventArnHasBeenSet() const { return m_healthEventArnHasBeenSet; }
    template<typename HealthEventArnT = Aws::String>
    void SetHealthEventArn(HealthEventArnT&& value) { m_healthEventArnHasBeenSet = true; m_healthEventArn = std::forward<HealthEventArnT>(value); }
    template<typename HealthEventArnT = Aws::String>
    Observation& WithHealthEventArn(HealthEventArnT&& value) { SetHealthEventArn(std::forward<HealthEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The service to which the Health Event belongs, such as EC2. </p>
     */
    inline const Aws::String& GetHealthService() const { return m_healthService; }
    inline bool HealthServiceHasBeenSet() const { return m_healthServiceHasBeenSet; }
    template<typename HealthServiceT = Aws::String>
    void SetHealthService(HealthServiceT&& value) { m_healthServiceHasBeenSet = true; m_healthService = std::forward<HealthServiceT>(value); }
    template<typename HealthServiceT = Aws::String>
    Observation& WithHealthService(HealthServiceT&& value) { SetHealthService(std::forward<HealthServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the Health event, for example,
     * <code>AWS_EC2_POWER_CONNECTIVITY_ISSUE</code>. </p>
     */
    inline const Aws::String& GetHealthEventTypeCode() const { return m_healthEventTypeCode; }
    inline bool HealthEventTypeCodeHasBeenSet() const { return m_healthEventTypeCodeHasBeenSet; }
    template<typename HealthEventTypeCodeT = Aws::String>
    void SetHealthEventTypeCode(HealthEventTypeCodeT&& value) { m_healthEventTypeCodeHasBeenSet = true; m_healthEventTypeCode = std::forward<HealthEventTypeCodeT>(value); }
    template<typename HealthEventTypeCodeT = Aws::String>
    Observation& WithHealthEventTypeCode(HealthEventTypeCodeT&& value) { SetHealthEventTypeCode(std::forward<HealthEventTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of the Health event, such as <code>issue</code>. </p>
     */
    inline const Aws::String& GetHealthEventTypeCategory() const { return m_healthEventTypeCategory; }
    inline bool HealthEventTypeCategoryHasBeenSet() const { return m_healthEventTypeCategoryHasBeenSet; }
    template<typename HealthEventTypeCategoryT = Aws::String>
    void SetHealthEventTypeCategory(HealthEventTypeCategoryT&& value) { m_healthEventTypeCategoryHasBeenSet = true; m_healthEventTypeCategory = std::forward<HealthEventTypeCategoryT>(value); }
    template<typename HealthEventTypeCategoryT = Aws::String>
    Observation& WithHealthEventTypeCategory(HealthEventTypeCategoryT&& value) { SetHealthEventTypeCategory(std::forward<HealthEventTypeCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the Health event provided by the service, such as Amazon
     * EC2. </p>
     */
    inline const Aws::String& GetHealthEventDescription() const { return m_healthEventDescription; }
    inline bool HealthEventDescriptionHasBeenSet() const { return m_healthEventDescriptionHasBeenSet; }
    template<typename HealthEventDescriptionT = Aws::String>
    void SetHealthEventDescription(HealthEventDescriptionT&& value) { m_healthEventDescriptionHasBeenSet = true; m_healthEventDescription = std::forward<HealthEventDescriptionT>(value); }
    template<typename HealthEventDescriptionT = Aws::String>
    Observation& WithHealthEventDescription(HealthEventDescriptionT&& value) { SetHealthEventDescription(std::forward<HealthEventDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The deployment ID of the CodeDeploy-based observation related to the
     * detected problem. </p>
     */
    inline const Aws::String& GetCodeDeployDeploymentId() const { return m_codeDeployDeploymentId; }
    inline bool CodeDeployDeploymentIdHasBeenSet() const { return m_codeDeployDeploymentIdHasBeenSet; }
    template<typename CodeDeployDeploymentIdT = Aws::String>
    void SetCodeDeployDeploymentId(CodeDeployDeploymentIdT&& value) { m_codeDeployDeploymentIdHasBeenSet = true; m_codeDeployDeploymentId = std::forward<CodeDeployDeploymentIdT>(value); }
    template<typename CodeDeployDeploymentIdT = Aws::String>
    Observation& WithCodeDeployDeploymentId(CodeDeployDeploymentIdT&& value) { SetCodeDeployDeploymentId(std::forward<CodeDeployDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The deployment group to which the CodeDeploy deployment belongs. </p>
     */
    inline const Aws::String& GetCodeDeployDeploymentGroup() const { return m_codeDeployDeploymentGroup; }
    inline bool CodeDeployDeploymentGroupHasBeenSet() const { return m_codeDeployDeploymentGroupHasBeenSet; }
    template<typename CodeDeployDeploymentGroupT = Aws::String>
    void SetCodeDeployDeploymentGroup(CodeDeployDeploymentGroupT&& value) { m_codeDeployDeploymentGroupHasBeenSet = true; m_codeDeployDeploymentGroup = std::forward<CodeDeployDeploymentGroupT>(value); }
    template<typename CodeDeployDeploymentGroupT = Aws::String>
    Observation& WithCodeDeployDeploymentGroup(CodeDeployDeploymentGroupT&& value) { SetCodeDeployDeploymentGroup(std::forward<CodeDeployDeploymentGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the CodeDeploy deployment, for example <code>SUCCESS</code> or
     * <code> FAILURE</code>. </p>
     */
    inline const Aws::String& GetCodeDeployState() const { return m_codeDeployState; }
    inline bool CodeDeployStateHasBeenSet() const { return m_codeDeployStateHasBeenSet; }
    template<typename CodeDeployStateT = Aws::String>
    void SetCodeDeployState(CodeDeployStateT&& value) { m_codeDeployStateHasBeenSet = true; m_codeDeployState = std::forward<CodeDeployStateT>(value); }
    template<typename CodeDeployStateT = Aws::String>
    Observation& WithCodeDeployState(CodeDeployStateT&& value) { SetCodeDeployState(std::forward<CodeDeployStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The CodeDeploy application to which the deployment belongs. </p>
     */
    inline const Aws::String& GetCodeDeployApplication() const { return m_codeDeployApplication; }
    inline bool CodeDeployApplicationHasBeenSet() const { return m_codeDeployApplicationHasBeenSet; }
    template<typename CodeDeployApplicationT = Aws::String>
    void SetCodeDeployApplication(CodeDeployApplicationT&& value) { m_codeDeployApplicationHasBeenSet = true; m_codeDeployApplication = std::forward<CodeDeployApplicationT>(value); }
    template<typename CodeDeployApplicationT = Aws::String>
    Observation& WithCodeDeployApplication(CodeDeployApplicationT&& value) { SetCodeDeployApplication(std::forward<CodeDeployApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance group to which the CodeDeploy instance belongs. </p>
     */
    inline const Aws::String& GetCodeDeployInstanceGroupId() const { return m_codeDeployInstanceGroupId; }
    inline bool CodeDeployInstanceGroupIdHasBeenSet() const { return m_codeDeployInstanceGroupIdHasBeenSet; }
    template<typename CodeDeployInstanceGroupIdT = Aws::String>
    void SetCodeDeployInstanceGroupId(CodeDeployInstanceGroupIdT&& value) { m_codeDeployInstanceGroupIdHasBeenSet = true; m_codeDeployInstanceGroupId = std::forward<CodeDeployInstanceGroupIdT>(value); }
    template<typename CodeDeployInstanceGroupIdT = Aws::String>
    Observation& WithCodeDeployInstanceGroupId(CodeDeployInstanceGroupIdT&& value) { SetCodeDeployInstanceGroupId(std::forward<CodeDeployInstanceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the instance, such as <code>STOPPING</code> or
     * <code>TERMINATING</code>. </p>
     */
    inline const Aws::String& GetEc2State() const { return m_ec2State; }
    inline bool Ec2StateHasBeenSet() const { return m_ec2StateHasBeenSet; }
    template<typename Ec2StateT = Aws::String>
    void SetEc2State(Ec2StateT&& value) { m_ec2StateHasBeenSet = true; m_ec2State = std::forward<Ec2StateT>(value); }
    template<typename Ec2StateT = Aws::String>
    Observation& WithEc2State(Ec2StateT&& value) { SetEc2State(std::forward<Ec2StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category of an RDS event. </p>
     */
    inline const Aws::String& GetRdsEventCategories() const { return m_rdsEventCategories; }
    inline bool RdsEventCategoriesHasBeenSet() const { return m_rdsEventCategoriesHasBeenSet; }
    template<typename RdsEventCategoriesT = Aws::String>
    void SetRdsEventCategories(RdsEventCategoriesT&& value) { m_rdsEventCategoriesHasBeenSet = true; m_rdsEventCategories = std::forward<RdsEventCategoriesT>(value); }
    template<typename RdsEventCategoriesT = Aws::String>
    Observation& WithRdsEventCategories(RdsEventCategoriesT&& value) { SetRdsEventCategories(std::forward<RdsEventCategoriesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The message of an RDS event. </p>
     */
    inline const Aws::String& GetRdsEventMessage() const { return m_rdsEventMessage; }
    inline bool RdsEventMessageHasBeenSet() const { return m_rdsEventMessageHasBeenSet; }
    template<typename RdsEventMessageT = Aws::String>
    void SetRdsEventMessage(RdsEventMessageT&& value) { m_rdsEventMessageHasBeenSet = true; m_rdsEventMessage = std::forward<RdsEventMessageT>(value); }
    template<typename RdsEventMessageT = Aws::String>
    Observation& WithRdsEventMessage(RdsEventMessageT&& value) { SetRdsEventMessage(std::forward<RdsEventMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the S3 CloudWatch Event-based observation. </p>
     */
    inline const Aws::String& GetS3EventName() const { return m_s3EventName; }
    inline bool S3EventNameHasBeenSet() const { return m_s3EventNameHasBeenSet; }
    template<typename S3EventNameT = Aws::String>
    void SetS3EventName(S3EventNameT&& value) { m_s3EventNameHasBeenSet = true; m_s3EventName = std::forward<S3EventNameT>(value); }
    template<typename S3EventNameT = Aws::String>
    Observation& WithS3EventName(S3EventNameT&& value) { SetS3EventName(std::forward<S3EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the step function execution-based
     * observation. </p>
     */
    inline const Aws::String& GetStatesExecutionArn() const { return m_statesExecutionArn; }
    inline bool StatesExecutionArnHasBeenSet() const { return m_statesExecutionArnHasBeenSet; }
    template<typename StatesExecutionArnT = Aws::String>
    void SetStatesExecutionArn(StatesExecutionArnT&& value) { m_statesExecutionArnHasBeenSet = true; m_statesExecutionArn = std::forward<StatesExecutionArnT>(value); }
    template<typename StatesExecutionArnT = Aws::String>
    Observation& WithStatesExecutionArn(StatesExecutionArnT&& value) { SetStatesExecutionArn(std::forward<StatesExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the step function-based observation. </p>
     */
    inline const Aws::String& GetStatesArn() const { return m_statesArn; }
    inline bool StatesArnHasBeenSet() const { return m_statesArnHasBeenSet; }
    template<typename StatesArnT = Aws::String>
    void SetStatesArn(StatesArnT&& value) { m_statesArnHasBeenSet = true; m_statesArn = std::forward<StatesArnT>(value); }
    template<typename StatesArnT = Aws::String>
    Observation& WithStatesArn(StatesArnT&& value) { SetStatesArn(std::forward<StatesArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the step function-related observation. </p>
     */
    inline const Aws::String& GetStatesStatus() const { return m_statesStatus; }
    inline bool StatesStatusHasBeenSet() const { return m_statesStatusHasBeenSet; }
    template<typename StatesStatusT = Aws::String>
    void SetStatesStatus(StatesStatusT&& value) { m_statesStatusHasBeenSet = true; m_statesStatus = std::forward<StatesStatusT>(value); }
    template<typename StatesStatusT = Aws::String>
    Observation& WithStatesStatus(StatesStatusT&& value) { SetStatesStatus(std::forward<StatesStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The input to the step function-based observation. </p>
     */
    inline const Aws::String& GetStatesInput() const { return m_statesInput; }
    inline bool StatesInputHasBeenSet() const { return m_statesInputHasBeenSet; }
    template<typename StatesInputT = Aws::String>
    void SetStatesInput(StatesInputT&& value) { m_statesInputHasBeenSet = true; m_statesInput = std::forward<StatesInputT>(value); }
    template<typename StatesInputT = Aws::String>
    Observation& WithStatesInput(StatesInputT&& value) { SetStatesInput(std::forward<StatesInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of EBS CloudWatch event, such as <code>createVolume</code>,
     * <code>deleteVolume</code> or <code>attachVolume</code>. </p>
     */
    inline const Aws::String& GetEbsEvent() const { return m_ebsEvent; }
    inline bool EbsEventHasBeenSet() const { return m_ebsEventHasBeenSet; }
    template<typename EbsEventT = Aws::String>
    void SetEbsEvent(EbsEventT&& value) { m_ebsEventHasBeenSet = true; m_ebsEvent = std::forward<EbsEventT>(value); }
    template<typename EbsEventT = Aws::String>
    Observation& WithEbsEvent(EbsEventT&& value) { SetEbsEvent(std::forward<EbsEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The result of an EBS CloudWatch event, such as <code>failed</code> or
     * <code>succeeded</code>. </p>
     */
    inline const Aws::String& GetEbsResult() const { return m_ebsResult; }
    inline bool EbsResultHasBeenSet() const { return m_ebsResultHasBeenSet; }
    template<typename EbsResultT = Aws::String>
    void SetEbsResult(EbsResultT&& value) { m_ebsResultHasBeenSet = true; m_ebsResult = std::forward<EbsResultT>(value); }
    template<typename EbsResultT = Aws::String>
    Observation& WithEbsResult(EbsResultT&& value) { SetEbsResult(std::forward<EbsResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The cause of an EBS CloudWatch event. </p>
     */
    inline const Aws::String& GetEbsCause() const { return m_ebsCause; }
    inline bool EbsCauseHasBeenSet() const { return m_ebsCauseHasBeenSet; }
    template<typename EbsCauseT = Aws::String>
    void SetEbsCause(EbsCauseT&& value) { m_ebsCauseHasBeenSet = true; m_ebsCause = std::forward<EbsCauseT>(value); }
    template<typename EbsCauseT = Aws::String>
    Observation& WithEbsCause(EbsCauseT&& value) { SetEbsCause(std::forward<EbsCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The request ID of an EBS CloudWatch event. </p>
     */
    inline const Aws::String& GetEbsRequestId() const { return m_ebsRequestId; }
    inline bool EbsRequestIdHasBeenSet() const { return m_ebsRequestIdHasBeenSet; }
    template<typename EbsRequestIdT = Aws::String>
    void SetEbsRequestId(EbsRequestIdT&& value) { m_ebsRequestIdHasBeenSet = true; m_ebsRequestId = std::forward<EbsRequestIdT>(value); }
    template<typename EbsRequestIdT = Aws::String>
    Observation& WithEbsRequestId(EbsRequestIdT&& value) { SetEbsRequestId(std::forward<EbsRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The X-Ray request fault percentage for this node. </p>
     */
    inline int GetXRayFaultPercent() const { return m_xRayFaultPercent; }
    inline bool XRayFaultPercentHasBeenSet() const { return m_xRayFaultPercentHasBeenSet; }
    inline void SetXRayFaultPercent(int value) { m_xRayFaultPercentHasBeenSet = true; m_xRayFaultPercent = value; }
    inline Observation& WithXRayFaultPercent(int value) { SetXRayFaultPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The X-Ray request throttle percentage for this node. </p>
     */
    inline int GetXRayThrottlePercent() const { return m_xRayThrottlePercent; }
    inline bool XRayThrottlePercentHasBeenSet() const { return m_xRayThrottlePercentHasBeenSet; }
    inline void SetXRayThrottlePercent(int value) { m_xRayThrottlePercentHasBeenSet = true; m_xRayThrottlePercent = value; }
    inline Observation& WithXRayThrottlePercent(int value) { SetXRayThrottlePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The X-Ray request error percentage for this node. </p>
     */
    inline int GetXRayErrorPercent() const { return m_xRayErrorPercent; }
    inline bool XRayErrorPercentHasBeenSet() const { return m_xRayErrorPercentHasBeenSet; }
    inline void SetXRayErrorPercent(int value) { m_xRayErrorPercentHasBeenSet = true; m_xRayErrorPercent = value; }
    inline Observation& WithXRayErrorPercent(int value) { SetXRayErrorPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The X-Ray request count for this node. </p>
     */
    inline int GetXRayRequestCount() const { return m_xRayRequestCount; }
    inline bool XRayRequestCountHasBeenSet() const { return m_xRayRequestCountHasBeenSet; }
    inline void SetXRayRequestCount(int value) { m_xRayRequestCountHasBeenSet = true; m_xRayRequestCount = value; }
    inline Observation& WithXRayRequestCount(int value) { SetXRayRequestCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The X-Ray node request average latency for this node. </p>
     */
    inline long long GetXRayRequestAverageLatency() const { return m_xRayRequestAverageLatency; }
    inline bool XRayRequestAverageLatencyHasBeenSet() const { return m_xRayRequestAverageLatencyHasBeenSet; }
    inline void SetXRayRequestAverageLatency(long long value) { m_xRayRequestAverageLatencyHasBeenSet = true; m_xRayRequestAverageLatency = value; }
    inline Observation& WithXRayRequestAverageLatency(long long value) { SetXRayRequestAverageLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the X-Ray node. </p>
     */
    inline const Aws::String& GetXRayNodeName() const { return m_xRayNodeName; }
    inline bool XRayNodeNameHasBeenSet() const { return m_xRayNodeNameHasBeenSet; }
    template<typename XRayNodeNameT = Aws::String>
    void SetXRayNodeName(XRayNodeNameT&& value) { m_xRayNodeNameHasBeenSet = true; m_xRayNodeName = std::forward<XRayNodeNameT>(value); }
    template<typename XRayNodeNameT = Aws::String>
    Observation& WithXRayNodeName(XRayNodeNameT&& value) { SetXRayNodeName(std::forward<XRayNodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the X-Ray node. </p>
     */
    inline const Aws::String& GetXRayNodeType() const { return m_xRayNodeType; }
    inline bool XRayNodeTypeHasBeenSet() const { return m_xRayNodeTypeHasBeenSet; }
    template<typename XRayNodeTypeT = Aws::String>
    void SetXRayNodeType(XRayNodeTypeT&& value) { m_xRayNodeTypeHasBeenSet = true; m_xRayNodeType = std::forward<XRayNodeTypeT>(value); }
    template<typename XRayNodeTypeT = Aws::String>
    Observation& WithXRayNodeType(XRayNodeTypeT&& value) { SetXRayNodeType(std::forward<XRayNodeTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceARN;
    bool m_sourceARNHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::Utils::DateTime m_lineTime{};
    bool m_lineTimeHasBeenSet = false;

    Aws::String m_logText;
    bool m_logTextHasBeenSet = false;

    LogFilter m_logFilter{LogFilter::NOT_SET};
    bool m_logFilterHasBeenSet = false;

    Aws::String m_metricNamespace;
    bool m_metricNamespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Aws::String m_cloudWatchEventId;
    bool m_cloudWatchEventIdHasBeenSet = false;

    CloudWatchEventSource m_cloudWatchEventSource{CloudWatchEventSource::NOT_SET};
    bool m_cloudWatchEventSourceHasBeenSet = false;

    Aws::String m_cloudWatchEventDetailType;
    bool m_cloudWatchEventDetailTypeHasBeenSet = false;

    Aws::String m_healthEventArn;
    bool m_healthEventArnHasBeenSet = false;

    Aws::String m_healthService;
    bool m_healthServiceHasBeenSet = false;

    Aws::String m_healthEventTypeCode;
    bool m_healthEventTypeCodeHasBeenSet = false;

    Aws::String m_healthEventTypeCategory;
    bool m_healthEventTypeCategoryHasBeenSet = false;

    Aws::String m_healthEventDescription;
    bool m_healthEventDescriptionHasBeenSet = false;

    Aws::String m_codeDeployDeploymentId;
    bool m_codeDeployDeploymentIdHasBeenSet = false;

    Aws::String m_codeDeployDeploymentGroup;
    bool m_codeDeployDeploymentGroupHasBeenSet = false;

    Aws::String m_codeDeployState;
    bool m_codeDeployStateHasBeenSet = false;

    Aws::String m_codeDeployApplication;
    bool m_codeDeployApplicationHasBeenSet = false;

    Aws::String m_codeDeployInstanceGroupId;
    bool m_codeDeployInstanceGroupIdHasBeenSet = false;

    Aws::String m_ec2State;
    bool m_ec2StateHasBeenSet = false;

    Aws::String m_rdsEventCategories;
    bool m_rdsEventCategoriesHasBeenSet = false;

    Aws::String m_rdsEventMessage;
    bool m_rdsEventMessageHasBeenSet = false;

    Aws::String m_s3EventName;
    bool m_s3EventNameHasBeenSet = false;

    Aws::String m_statesExecutionArn;
    bool m_statesExecutionArnHasBeenSet = false;

    Aws::String m_statesArn;
    bool m_statesArnHasBeenSet = false;

    Aws::String m_statesStatus;
    bool m_statesStatusHasBeenSet = false;

    Aws::String m_statesInput;
    bool m_statesInputHasBeenSet = false;

    Aws::String m_ebsEvent;
    bool m_ebsEventHasBeenSet = false;

    Aws::String m_ebsResult;
    bool m_ebsResultHasBeenSet = false;

    Aws::String m_ebsCause;
    bool m_ebsCauseHasBeenSet = false;

    Aws::String m_ebsRequestId;
    bool m_ebsRequestIdHasBeenSet = false;

    int m_xRayFaultPercent{0};
    bool m_xRayFaultPercentHasBeenSet = false;

    int m_xRayThrottlePercent{0};
    bool m_xRayThrottlePercentHasBeenSet = false;

    int m_xRayErrorPercent{0};
    bool m_xRayErrorPercentHasBeenSet = false;

    int m_xRayRequestCount{0};
    bool m_xRayRequestCountHasBeenSet = false;

    long long m_xRayRequestAverageLatency{0};
    bool m_xRayRequestAverageLatencyHasBeenSet = false;

    Aws::String m_xRayNodeName;
    bool m_xRayNodeNameHasBeenSet = false;

    Aws::String m_xRayNodeType;
    bool m_xRayNodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
