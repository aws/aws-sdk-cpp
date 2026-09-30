/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/BatchConfiguration.h>
#include <aws/eventbridgev2/model/FilterConfiguration.h>
#include <aws/eventbridgev2/model/LogConfiguration.h>
#include <aws/eventbridgev2/model/OnFailureConfiguration.h>
#include <aws/eventbridgev2/model/ResumePosition.h>
#include <aws/eventbridgev2/model/RetryPolicy.h>
#include <aws/eventbridgev2/model/SubscriberState.h>
#include <aws/eventbridgev2/model/Transformer.h>
#include <aws/eventbridgev2/model/UpdateInvokeConfiguration.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class UpdateSubscriberRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API UpdateSubscriberRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetSubscriberArn() const { return m_subscriberArn; }
  inline bool SubscriberArnHasBeenSet() const { return m_subscriberArnHasBeenSet; }
  template <typename SubscriberArnT = Aws::String>
  void SetSubscriberArn(SubscriberArnT&& value) {
    m_subscriberArnHasBeenSet = true;
    m_subscriberArn = std::forward<SubscriberArnT>(value);
  }
  template <typename SubscriberArnT = Aws::String>
  UpdateSubscriberRequest& WithSubscriberArn(SubscriberArnT&& value) {
    SetSubscriberArn(std::forward<SubscriberArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateSubscriberRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline SubscriberState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SubscriberState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateSubscriberRequest& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{

  inline ResumePosition GetResumePosition() const { return m_resumePosition; }
  inline bool ResumePositionHasBeenSet() const { return m_resumePositionHasBeenSet; }
  inline void SetResumePosition(ResumePosition value) {
    m_resumePositionHasBeenSet = true;
    m_resumePosition = value;
  }
  inline UpdateSubscriberRequest& WithResumePosition(ResumePosition value) {
    SetResumePosition(value);
    return *this;
  }
  ///@}

  ///@{

  inline const UpdateInvokeConfiguration& GetInvokeConfiguration() const { return m_invokeConfiguration; }
  inline bool InvokeConfigurationHasBeenSet() const { return m_invokeConfigurationHasBeenSet; }
  template <typename InvokeConfigurationT = UpdateInvokeConfiguration>
  void SetInvokeConfiguration(InvokeConfigurationT&& value) {
    m_invokeConfigurationHasBeenSet = true;
    m_invokeConfiguration = std::forward<InvokeConfigurationT>(value);
  }
  template <typename InvokeConfigurationT = UpdateInvokeConfiguration>
  UpdateSubscriberRequest& WithInvokeConfiguration(InvokeConfigurationT&& value) {
    SetInvokeConfiguration(std::forward<InvokeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
  inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
  template <typename FilterConfigurationT = FilterConfiguration>
  void SetFilterConfiguration(FilterConfigurationT&& value) {
    m_filterConfigurationHasBeenSet = true;
    m_filterConfiguration = std::forward<FilterConfigurationT>(value);
  }
  template <typename FilterConfigurationT = FilterConfiguration>
  UpdateSubscriberRequest& WithFilterConfiguration(FilterConfigurationT&& value) {
    SetFilterConfiguration(std::forward<FilterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BatchConfiguration& GetBatchConfiguration() const { return m_batchConfiguration; }
  inline bool BatchConfigurationHasBeenSet() const { return m_batchConfigurationHasBeenSet; }
  template <typename BatchConfigurationT = BatchConfiguration>
  void SetBatchConfiguration(BatchConfigurationT&& value) {
    m_batchConfigurationHasBeenSet = true;
    m_batchConfiguration = std::forward<BatchConfigurationT>(value);
  }
  template <typename BatchConfigurationT = BatchConfiguration>
  UpdateSubscriberRequest& WithBatchConfiguration(BatchConfigurationT&& value) {
    SetBatchConfiguration(std::forward<BatchConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Not applicable to universal (aws-sdk) targets, whose input transformation is
   * UniversalTargetParameters.Input; a Transformer on such a target is rejected.</p>
   */
  inline const Transformer& GetTransformer() const { return m_transformer; }
  inline bool TransformerHasBeenSet() const { return m_transformerHasBeenSet; }
  template <typename TransformerT = Transformer>
  void SetTransformer(TransformerT&& value) {
    m_transformerHasBeenSet = true;
    m_transformer = std::forward<TransformerT>(value);
  }
  template <typename TransformerT = Transformer>
  UpdateSubscriberRequest& WithTransformer(TransformerT&& value) {
    SetTransformer(std::forward<TransformerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
  inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
  template <typename RetryPolicyT = RetryPolicy>
  void SetRetryPolicy(RetryPolicyT&& value) {
    m_retryPolicyHasBeenSet = true;
    m_retryPolicy = std::forward<RetryPolicyT>(value);
  }
  template <typename RetryPolicyT = RetryPolicy>
  UpdateSubscriberRequest& WithRetryPolicy(RetryPolicyT&& value) {
    SetRetryPolicy(std::forward<RetryPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const OnFailureConfiguration& GetOnFailureConfiguration() const { return m_onFailureConfiguration; }
  inline bool OnFailureConfigurationHasBeenSet() const { return m_onFailureConfigurationHasBeenSet; }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  void SetOnFailureConfiguration(OnFailureConfigurationT&& value) {
    m_onFailureConfigurationHasBeenSet = true;
    m_onFailureConfiguration = std::forward<OnFailureConfigurationT>(value);
  }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  UpdateSubscriberRequest& WithOnFailureConfiguration(OnFailureConfigurationT&& value) {
    SetOnFailureConfiguration(std::forward<OnFailureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
  inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
  template <typename LogConfigurationT = LogConfiguration>
  void SetLogConfiguration(LogConfigurationT&& value) {
    m_logConfigurationHasBeenSet = true;
    m_logConfiguration = std::forward<LogConfigurationT>(value);
  }
  template <typename LogConfigurationT = LogConfiguration>
  UpdateSubscriberRequest& WithLogConfiguration(LogConfigurationT&& value) {
    SetLogConfiguration(std::forward<LogConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subscriberArn;

  Aws::String m_description;

  SubscriberState m_state{SubscriberState::NOT_SET};

  ResumePosition m_resumePosition{ResumePosition::NOT_SET};

  UpdateInvokeConfiguration m_invokeConfiguration;

  FilterConfiguration m_filterConfiguration;

  BatchConfiguration m_batchConfiguration;

  Transformer m_transformer;

  RetryPolicy m_retryPolicy;

  OnFailureConfiguration m_onFailureConfiguration;

  LogConfiguration m_logConfiguration;
  bool m_subscriberArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_resumePositionHasBeenSet = false;
  bool m_invokeConfigurationHasBeenSet = false;
  bool m_filterConfigurationHasBeenSet = false;
  bool m_batchConfigurationHasBeenSet = false;
  bool m_transformerHasBeenSet = false;
  bool m_retryPolicyHasBeenSet = false;
  bool m_onFailureConfigurationHasBeenSet = false;
  bool m_logConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
