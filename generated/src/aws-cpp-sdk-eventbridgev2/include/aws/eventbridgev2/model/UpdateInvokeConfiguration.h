/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/EventBusV2Parameters.h>
#include <aws/eventbridgev2/model/HttpParameters.h>
#include <aws/eventbridgev2/model/KinesisParameters.h>
#include <aws/eventbridgev2/model/LambdaParameters.h>
#include <aws/eventbridgev2/model/MskParameters.h>
#include <aws/eventbridgev2/model/SnsParameters.h>
#include <aws/eventbridgev2/model/SqsParameters.h>
#include <aws/eventbridgev2/model/StepFunctionsParameters.h>
#include <aws/eventbridgev2/model/UniversalTargetParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Update-able configuration for how the subscriber invokes its
 * target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UpdateInvokeConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateInvokeConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API UpdateInvokeConfiguration() = default;
  AWS_EVENTBRIDGEV2_API UpdateInvokeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API UpdateInvokeConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>IAM role the service assumes to invoke the target. Must belong to the calling
   * account.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateInvokeConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lambda invocation parameters for subscribers. Values are forwarded to the
   * Lambda Invoke API. Every string member accepts a literal or a JSONata expression
   * (e.g. "{% $events.Data.qualifier %}").</p>
   */
  inline const LambdaParameters& GetLambdaParameters() const { return m_lambdaParameters; }
  inline bool LambdaParametersHasBeenSet() const { return m_lambdaParametersHasBeenSet; }
  template <typename LambdaParametersT = LambdaParameters>
  void SetLambdaParameters(LambdaParametersT&& value) {
    m_lambdaParametersHasBeenSet = true;
    m_lambdaParameters = std::forward<LambdaParametersT>(value);
  }
  template <typename LambdaParametersT = LambdaParameters>
  UpdateInvokeConfiguration& WithLambdaParameters(LambdaParametersT&& value) {
    SetLambdaParameters(std::forward<LambdaParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SQS invocation parameters for subscribers. Values are forwarded to the SQS
   * SendMessageBatch API. All scalar values accept a literal or a JSONata expression
   * (e.g. "{% $events.Data.groupId %}").</p>
   */
  inline const SqsParameters& GetSqsParameters() const { return m_sqsParameters; }
  inline bool SqsParametersHasBeenSet() const { return m_sqsParametersHasBeenSet; }
  template <typename SqsParametersT = SqsParameters>
  void SetSqsParameters(SqsParametersT&& value) {
    m_sqsParametersHasBeenSet = true;
    m_sqsParameters = std::forward<SqsParametersT>(value);
  }
  template <typename SqsParametersT = SqsParameters>
  UpdateInvokeConfiguration& WithSqsParameters(SqsParametersT&& value) {
    SetSqsParameters(std::forward<SqsParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SNS invocation parameters for subscribers. Values are forwarded to the SNS
   * PublishBatch API. All scalar values accept a literal or a JSONata expression
   * (e.g. "{% $events.Data.groupId %}").</p>
   */
  inline const SnsParameters& GetSnsParameters() const { return m_snsParameters; }
  inline bool SnsParametersHasBeenSet() const { return m_snsParametersHasBeenSet; }
  template <typename SnsParametersT = SnsParameters>
  void SetSnsParameters(SnsParametersT&& value) {
    m_snsParametersHasBeenSet = true;
    m_snsParameters = std::forward<SnsParametersT>(value);
  }
  template <typename SnsParametersT = SnsParameters>
  UpdateInvokeConfiguration& WithSnsParameters(SnsParametersT&& value) {
    SetSnsParameters(std::forward<SnsParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Kinesis Data Streams invocation parameters for subscribers. Values are
   * forwarded to the Kinesis PutRecords API. All scalar values accept a literal or a
   * JSONata expression (e.g. "{% $events.Data.partitionKey %}").</p>
   */
  inline const KinesisParameters& GetKinesisParameters() const { return m_kinesisParameters; }
  inline bool KinesisParametersHasBeenSet() const { return m_kinesisParametersHasBeenSet; }
  template <typename KinesisParametersT = KinesisParameters>
  void SetKinesisParameters(KinesisParametersT&& value) {
    m_kinesisParametersHasBeenSet = true;
    m_kinesisParameters = std::forward<KinesisParametersT>(value);
  }
  template <typename KinesisParametersT = KinesisParameters>
  UpdateInvokeConfiguration& WithKinesisParameters(KinesisParametersT&& value) {
    SetKinesisParameters(std::forward<KinesisParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Step Functions invocation parameters for subscribers. Values are forwarded to
   * the Step Functions StartExecution or StartSyncExecution API. Every string member
   * accepts a literal or a JSONata expression (e.g. "{% $events.Data.executionName
   * %}").</p>
   */
  inline const StepFunctionsParameters& GetStepFunctionsParameters() const { return m_stepFunctionsParameters; }
  inline bool StepFunctionsParametersHasBeenSet() const { return m_stepFunctionsParametersHasBeenSet; }
  template <typename StepFunctionsParametersT = StepFunctionsParameters>
  void SetStepFunctionsParameters(StepFunctionsParametersT&& value) {
    m_stepFunctionsParametersHasBeenSet = true;
    m_stepFunctionsParameters = std::forward<StepFunctionsParametersT>(value);
  }
  template <typename StepFunctionsParametersT = StepFunctionsParameters>
  UpdateInvokeConfiguration& WithStepFunctionsParameters(StepFunctionsParametersT&& value) {
    SetStepFunctionsParameters(std::forward<StepFunctionsParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>HTTP invocation parameters for subscribers (API Gateway / API Destination).
   * Values are forwarded to the HTTP endpoint.</p>
   */
  inline const HttpParameters& GetHttpParameters() const { return m_httpParameters; }
  inline bool HttpParametersHasBeenSet() const { return m_httpParametersHasBeenSet; }
  template <typename HttpParametersT = HttpParameters>
  void SetHttpParameters(HttpParametersT&& value) {
    m_httpParametersHasBeenSet = true;
    m_httpParameters = std::forward<HttpParametersT>(value);
  }
  template <typename HttpParametersT = HttpParameters>
  UpdateInvokeConfiguration& WithHttpParameters(HttpParametersT&& value) {
    SetHttpParameters(std::forward<HttpParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters for USI (Universal Service Integration) targets. Used when
   * TargetArn is in the format arn:aws:events:::aws-sdk:{service}:{apiAction}</p>
   */
  inline const UniversalTargetParameters& GetUniversalTargetParameters() const { return m_universalTargetParameters; }
  inline bool UniversalTargetParametersHasBeenSet() const { return m_universalTargetParametersHasBeenSet; }
  template <typename UniversalTargetParametersT = UniversalTargetParameters>
  void SetUniversalTargetParameters(UniversalTargetParametersT&& value) {
    m_universalTargetParametersHasBeenSet = true;
    m_universalTargetParameters = std::forward<UniversalTargetParametersT>(value);
  }
  template <typename UniversalTargetParametersT = UniversalTargetParameters>
  UpdateInvokeConfiguration& WithUniversalTargetParameters(UniversalTargetParametersT&& value) {
    SetUniversalTargetParameters(std::forward<UniversalTargetParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters for forwarding events to another EventBridge event bus.</p>
   */
  inline const EventBusV2Parameters& GetEventBusV2Parameters() const { return m_eventBusV2Parameters; }
  inline bool EventBusV2ParametersHasBeenSet() const { return m_eventBusV2ParametersHasBeenSet; }
  template <typename EventBusV2ParametersT = EventBusV2Parameters>
  void SetEventBusV2Parameters(EventBusV2ParametersT&& value) {
    m_eventBusV2ParametersHasBeenSet = true;
    m_eventBusV2Parameters = std::forward<EventBusV2ParametersT>(value);
  }
  template <typename EventBusV2ParametersT = EventBusV2Parameters>
  UpdateInvokeConfiguration& WithEventBusV2Parameters(EventBusV2ParametersT&& value) {
    SetEventBusV2Parameters(std::forward<EventBusV2ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>MSK (Apache Kafka) invocation parameters for subscribers targeting an Amazon
   * MSK cluster.</p>
   */
  inline const MskParameters& GetMskParameters() const { return m_mskParameters; }
  inline bool MskParametersHasBeenSet() const { return m_mskParametersHasBeenSet; }
  template <typename MskParametersT = MskParameters>
  void SetMskParameters(MskParametersT&& value) {
    m_mskParametersHasBeenSet = true;
    m_mskParameters = std::forward<MskParametersT>(value);
  }
  template <typename MskParametersT = MskParameters>
  UpdateInvokeConfiguration& WithMskParameters(MskParametersT&& value) {
    SetMskParameters(std::forward<MskParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  LambdaParameters m_lambdaParameters;

  SqsParameters m_sqsParameters;

  SnsParameters m_snsParameters;

  KinesisParameters m_kinesisParameters;

  StepFunctionsParameters m_stepFunctionsParameters;

  HttpParameters m_httpParameters;

  UniversalTargetParameters m_universalTargetParameters;

  EventBusV2Parameters m_eventBusV2Parameters;

  MskParameters m_mskParameters;
  bool m_roleArnHasBeenSet = false;
  bool m_lambdaParametersHasBeenSet = false;
  bool m_sqsParametersHasBeenSet = false;
  bool m_snsParametersHasBeenSet = false;
  bool m_kinesisParametersHasBeenSet = false;
  bool m_stepFunctionsParametersHasBeenSet = false;
  bool m_httpParametersHasBeenSet = false;
  bool m_universalTargetParametersHasBeenSet = false;
  bool m_eventBusV2ParametersHasBeenSet = false;
  bool m_mskParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
