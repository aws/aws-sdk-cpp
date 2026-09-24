/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/BatchConfiguration.h>
#include <aws/eventbridgev2/model/FilterConfiguration.h>
#include <aws/eventbridgev2/model/InvokeConfiguration.h>
#include <aws/eventbridgev2/model/LogConfiguration.h>
#include <aws/eventbridgev2/model/OnFailureConfiguration.h>
#include <aws/eventbridgev2/model/OrderingType.h>
#include <aws/eventbridgev2/model/PointInTimeConfiguration.h>
#include <aws/eventbridgev2/model/RetryPolicy.h>
#include <aws/eventbridgev2/model/StartingPosition.h>
#include <aws/eventbridgev2/model/SubscriberState.h>
#include <aws/eventbridgev2/model/Transformer.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {
class DescribeSubscriberResult {
 public:
  AWS_EVENTBRIDGEV2_API DescribeSubscriberResult() = default;
  AWS_EVENTBRIDGEV2_API DescribeSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_EVENTBRIDGEV2_API DescribeSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  DescribeSubscriberResult& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeSubscriberResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  DescribeSubscriberResult& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const InvokeConfiguration& GetInvokeConfiguration() const { return m_invokeConfiguration; }
  template <typename InvokeConfigurationT = InvokeConfiguration>
  void SetInvokeConfiguration(InvokeConfigurationT&& value) {
    m_invokeConfigurationHasBeenSet = true;
    m_invokeConfiguration = std::forward<InvokeConfigurationT>(value);
  }
  template <typename InvokeConfigurationT = InvokeConfiguration>
  DescribeSubscriberResult& WithInvokeConfiguration(InvokeConfigurationT&& value) {
    SetInvokeConfiguration(std::forward<InvokeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeSubscriberResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
  template <typename FilterConfigurationT = FilterConfiguration>
  void SetFilterConfiguration(FilterConfigurationT&& value) {
    m_filterConfigurationHasBeenSet = true;
    m_filterConfiguration = std::forward<FilterConfigurationT>(value);
  }
  template <typename FilterConfigurationT = FilterConfiguration>
  DescribeSubscriberResult& WithFilterConfiguration(FilterConfigurationT&& value) {
    SetFilterConfiguration(std::forward<FilterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline OrderingType GetType() const { return m_type; }
  inline void SetType(OrderingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DescribeSubscriberResult& WithType(OrderingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline StartingPosition GetStartingPosition() const { return m_startingPosition; }
  inline void SetStartingPosition(StartingPosition value) {
    m_startingPositionHasBeenSet = true;
    m_startingPosition = value;
  }
  inline DescribeSubscriberResult& WithStartingPosition(StartingPosition value) {
    SetStartingPosition(value);
    return *this;
  }
  ///@}

  ///@{

  inline const PointInTimeConfiguration& GetPointInTimeConfiguration() const { return m_pointInTimeConfiguration; }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  void SetPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    m_pointInTimeConfigurationHasBeenSet = true;
    m_pointInTimeConfiguration = std::forward<PointInTimeConfigurationT>(value);
  }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  DescribeSubscriberResult& WithPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    SetPointInTimeConfiguration(std::forward<PointInTimeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BatchConfiguration& GetBatchConfiguration() const { return m_batchConfiguration; }
  template <typename BatchConfigurationT = BatchConfiguration>
  void SetBatchConfiguration(BatchConfigurationT&& value) {
    m_batchConfigurationHasBeenSet = true;
    m_batchConfiguration = std::forward<BatchConfigurationT>(value);
  }
  template <typename BatchConfigurationT = BatchConfiguration>
  DescribeSubscriberResult& WithBatchConfiguration(BatchConfigurationT&& value) {
    SetBatchConfiguration(std::forward<BatchConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Absent for universal (aws-sdk) targets, whose input transformation is
   * UniversalTargetParameters.Input.</p>
   */
  inline const Transformer& GetTransformer() const { return m_transformer; }
  template <typename TransformerT = Transformer>
  void SetTransformer(TransformerT&& value) {
    m_transformerHasBeenSet = true;
    m_transformer = std::forward<TransformerT>(value);
  }
  template <typename TransformerT = Transformer>
  DescribeSubscriberResult& WithTransformer(TransformerT&& value) {
    SetTransformer(std::forward<TransformerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
  template <typename RetryPolicyT = RetryPolicy>
  void SetRetryPolicy(RetryPolicyT&& value) {
    m_retryPolicyHasBeenSet = true;
    m_retryPolicy = std::forward<RetryPolicyT>(value);
  }
  template <typename RetryPolicyT = RetryPolicy>
  DescribeSubscriberResult& WithRetryPolicy(RetryPolicyT&& value) {
    SetRetryPolicy(std::forward<RetryPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OnFailureConfiguration& GetOnFailureConfiguration() const { return m_onFailureConfiguration; }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  void SetOnFailureConfiguration(OnFailureConfigurationT&& value) {
    m_onFailureConfigurationHasBeenSet = true;
    m_onFailureConfiguration = std::forward<OnFailureConfigurationT>(value);
  }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  DescribeSubscriberResult& WithOnFailureConfiguration(OnFailureConfigurationT&& value) {
    SetOnFailureConfiguration(std::forward<OnFailureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
  template <typename LogConfigurationT = LogConfiguration>
  void SetLogConfiguration(LogConfigurationT&& value) {
    m_logConfigurationHasBeenSet = true;
    m_logConfiguration = std::forward<LogConfigurationT>(value);
  }
  template <typename LogConfigurationT = LogConfiguration>
  DescribeSubscriberResult& WithLogConfiguration(LogConfigurationT&& value) {
    SetLogConfiguration(std::forward<LogConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline SubscriberState GetState() const { return m_state; }
  inline void SetState(SubscriberState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DescribeSubscriberResult& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>True when the bus owner has revoked this subscriber. Present only when true,
   * so an absent member means the subscriber is not revoked. Revocation is terminal:
   * it never returns to false. Mutating operations on a revoked subscriber fail with
   * InvalidStateException, except DeleteSubscriber, which stays available so a
   * revoked subscriber can still be cleaned up.</p>
   */
  inline bool GetRevoked() const { return m_revoked; }
  inline void SetRevoked(bool value) {
    m_revokedHasBeenSet = true;
    m_revoked = value;
  }
  inline DescribeSubscriberResult& WithRevoked(bool value) {
    SetRevoked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeSubscriberResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the subscriber was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeSubscriberResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeSubscriberResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_subscriberArn;

  Aws::String m_name;

  Aws::String m_eventBusArn;

  InvokeConfiguration m_invokeConfiguration;

  Aws::String m_description;

  FilterConfiguration m_filterConfiguration;

  OrderingType m_type{OrderingType::NOT_SET};

  StartingPosition m_startingPosition{StartingPosition::NOT_SET};

  PointInTimeConfiguration m_pointInTimeConfiguration;

  BatchConfiguration m_batchConfiguration;

  Transformer m_transformer;

  RetryPolicy m_retryPolicy;

  OnFailureConfiguration m_onFailureConfiguration;

  LogConfiguration m_logConfiguration;

  SubscriberState m_state{SubscriberState::NOT_SET};

  bool m_revoked{false};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriberArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_eventBusArnHasBeenSet = false;
  bool m_invokeConfigurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_filterConfigurationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_startingPositionHasBeenSet = false;
  bool m_pointInTimeConfigurationHasBeenSet = false;
  bool m_batchConfigurationHasBeenSet = false;
  bool m_transformerHasBeenSet = false;
  bool m_retryPolicyHasBeenSet = false;
  bool m_onFailureConfigurationHasBeenSet = false;
  bool m_logConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_revokedHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
