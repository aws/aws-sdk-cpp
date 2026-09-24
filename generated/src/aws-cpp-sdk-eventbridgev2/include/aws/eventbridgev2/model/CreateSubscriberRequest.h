/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
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
namespace EventBridgeV2 {
namespace Model {

/**
 */
class CreateSubscriberRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API CreateSubscriberRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriber"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_EVENTBRIDGEV2_API EndpointParameters GetEndpointContextParams() const override;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSubscriberRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  CreateSubscriberRequest& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const InvokeConfiguration& GetInvokeConfiguration() const { return m_invokeConfiguration; }
  inline bool InvokeConfigurationHasBeenSet() const { return m_invokeConfigurationHasBeenSet; }
  template <typename InvokeConfigurationT = InvokeConfiguration>
  void SetInvokeConfiguration(InvokeConfigurationT&& value) {
    m_invokeConfigurationHasBeenSet = true;
    m_invokeConfiguration = std::forward<InvokeConfigurationT>(value);
  }
  template <typename InvokeConfigurationT = InvokeConfiguration>
  CreateSubscriberRequest& WithInvokeConfiguration(InvokeConfigurationT&& value) {
    SetInvokeConfiguration(std::forward<InvokeConfigurationT>(value));
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
  CreateSubscriberRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  CreateSubscriberRequest& WithFilterConfiguration(FilterConfigurationT&& value) {
    SetFilterConfiguration(std::forward<FilterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline OrderingType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OrderingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateSubscriberRequest& WithType(OrderingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline StartingPosition GetStartingPosition() const { return m_startingPosition; }
  inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
  inline void SetStartingPosition(StartingPosition value) {
    m_startingPositionHasBeenSet = true;
    m_startingPosition = value;
  }
  inline CreateSubscriberRequest& WithStartingPosition(StartingPosition value) {
    SetStartingPosition(value);
    return *this;
  }
  ///@}

  ///@{

  inline const PointInTimeConfiguration& GetPointInTimeConfiguration() const { return m_pointInTimeConfiguration; }
  inline bool PointInTimeConfigurationHasBeenSet() const { return m_pointInTimeConfigurationHasBeenSet; }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  void SetPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    m_pointInTimeConfigurationHasBeenSet = true;
    m_pointInTimeConfiguration = std::forward<PointInTimeConfigurationT>(value);
  }
  template <typename PointInTimeConfigurationT = PointInTimeConfiguration>
  CreateSubscriberRequest& WithPointInTimeConfiguration(PointInTimeConfigurationT&& value) {
    SetPointInTimeConfiguration(std::forward<PointInTimeConfigurationT>(value));
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
  CreateSubscriberRequest& WithBatchConfiguration(BatchConfigurationT&& value) {
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
  CreateSubscriberRequest& WithTransformer(TransformerT&& value) {
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
  CreateSubscriberRequest& WithRetryPolicy(RetryPolicyT&& value) {
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
  CreateSubscriberRequest& WithOnFailureConfiguration(OnFailureConfigurationT&& value) {
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
  CreateSubscriberRequest& WithLogConfiguration(LogConfigurationT&& value) {
    SetLogConfiguration(std::forward<LogConfigurationT>(value));
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
  inline CreateSubscriberRequest& WithState(SubscriberState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateSubscriberRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateSubscriberRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSubscriberRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
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

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
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
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
