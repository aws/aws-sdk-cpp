/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/AggregationConfiguration.h>
#include <aws/cloudtrail/model/ContextKeySelector.h>
#include <aws/cloudtrail/model/MaxEventSize.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudTrail {
namespace Model {
class PutEventConfigurationResult {
 public:
  AWS_CLOUDTRAIL_API PutEventConfigurationResult() = default;
  AWS_CLOUDTRAIL_API PutEventConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDTRAIL_API PutEventConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the trail that has aggregation enabled.</p>
   */
  inline const Aws::String& GetTrailARN() const { return m_trailARN; }
  template <typename TrailARNT = Aws::String>
  void SetTrailARN(TrailARNT&& value) {
    m_trailARNHasBeenSet = true;
    m_trailARN = std::forward<TrailARNT>(value);
  }
  template <typename TrailARNT = Aws::String>
  PutEventConfigurationResult& WithTrailARN(TrailARNT&& value) {
    SetTrailARN(std::forward<TrailARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) or ID suffix of the ARN of the event data
   * store for which the event configuration settings were updated.</p>
   */
  inline const Aws::String& GetEventDataStoreArn() const { return m_eventDataStoreArn; }
  template <typename EventDataStoreArnT = Aws::String>
  void SetEventDataStoreArn(EventDataStoreArnT&& value) {
    m_eventDataStoreArnHasBeenSet = true;
    m_eventDataStoreArn = std::forward<EventDataStoreArnT>(value);
  }
  template <typename EventDataStoreArnT = Aws::String>
  PutEventConfigurationResult& WithEventDataStoreArn(EventDataStoreArnT&& value) {
    SetEventDataStoreArn(std::forward<EventDataStoreArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed size for events stored in the specified event data
   * store.</p>
   */
  inline MaxEventSize GetMaxEventSize() const { return m_maxEventSize; }
  inline void SetMaxEventSize(MaxEventSize value) {
    m_maxEventSizeHasBeenSet = true;
    m_maxEventSize = value;
  }
  inline PutEventConfigurationResult& WithMaxEventSize(MaxEventSize value) {
    SetMaxEventSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of context key selectors that are configured for the event data
   * store.</p>
   */
  inline const Aws::Vector<ContextKeySelector>& GetContextKeySelectors() const { return m_contextKeySelectors; }
  template <typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
  void SetContextKeySelectors(ContextKeySelectorsT&& value) {
    m_contextKeySelectorsHasBeenSet = true;
    m_contextKeySelectors = std::forward<ContextKeySelectorsT>(value);
  }
  template <typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
  PutEventConfigurationResult& WithContextKeySelectors(ContextKeySelectorsT&& value) {
    SetContextKeySelectors(std::forward<ContextKeySelectorsT>(value));
    return *this;
  }
  template <typename ContextKeySelectorsT = ContextKeySelector>
  PutEventConfigurationResult& AddContextKeySelectors(ContextKeySelectorsT&& value) {
    m_contextKeySelectorsHasBeenSet = true;
    m_contextKeySelectors.emplace_back(std::forward<ContextKeySelectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of aggregation configurations that are configured for the trail.</p>
   */
  inline const Aws::Vector<AggregationConfiguration>& GetAggregationConfigurations() const { return m_aggregationConfigurations; }
  template <typename AggregationConfigurationsT = Aws::Vector<AggregationConfiguration>>
  void SetAggregationConfigurations(AggregationConfigurationsT&& value) {
    m_aggregationConfigurationsHasBeenSet = true;
    m_aggregationConfigurations = std::forward<AggregationConfigurationsT>(value);
  }
  template <typename AggregationConfigurationsT = Aws::Vector<AggregationConfiguration>>
  PutEventConfigurationResult& WithAggregationConfigurations(AggregationConfigurationsT&& value) {
    SetAggregationConfigurations(std::forward<AggregationConfigurationsT>(value));
    return *this;
  }
  template <typename AggregationConfigurationsT = AggregationConfiguration>
  PutEventConfigurationResult& AddAggregationConfigurations(AggregationConfigurationsT&& value) {
    m_aggregationConfigurationsHasBeenSet = true;
    m_aggregationConfigurations.emplace_back(std::forward<AggregationConfigurationsT>(value));
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
  PutEventConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trailARN;

  Aws::String m_eventDataStoreArn;

  MaxEventSize m_maxEventSize{MaxEventSize::NOT_SET};

  Aws::Vector<ContextKeySelector> m_contextKeySelectors;

  Aws::Vector<AggregationConfiguration> m_aggregationConfigurations;

  Aws::String m_requestId;
  bool m_trailARNHasBeenSet = false;
  bool m_eventDataStoreArnHasBeenSet = false;
  bool m_maxEventSizeHasBeenSet = false;
  bool m_contextKeySelectorsHasBeenSet = false;
  bool m_aggregationConfigurationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
