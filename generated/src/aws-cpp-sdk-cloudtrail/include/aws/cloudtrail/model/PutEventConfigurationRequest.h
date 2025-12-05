/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/AggregationConfiguration.h>
#include <aws/cloudtrail/model/ContextKeySelector.h>
#include <aws/cloudtrail/model/MaxEventSize.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CloudTrail {
namespace Model {

/**
 */
class PutEventConfigurationRequest : public CloudTrailRequest {
 public:
  AWS_CLOUDTRAIL_API PutEventConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutEventConfiguration"; }

  AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

  AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the trail for which you want to update event configuration
   * settings.</p>
   */
  inline const Aws::String& GetTrailName() const { return m_trailName; }
  inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }
  template <typename TrailNameT = Aws::String>
  void SetTrailName(TrailNameT&& value) {
    m_trailNameHasBeenSet = true;
    m_trailName = std::forward<TrailNameT>(value);
  }
  template <typename TrailNameT = Aws::String>
  PutEventConfigurationRequest& WithTrailName(TrailNameT&& value) {
    SetTrailName(std::forward<TrailNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) or ID suffix of the ARN of the event data
   * store for which event configuration settings are updated.</p>
   */
  inline const Aws::String& GetEventDataStore() const { return m_eventDataStore; }
  inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
  template <typename EventDataStoreT = Aws::String>
  void SetEventDataStore(EventDataStoreT&& value) {
    m_eventDataStoreHasBeenSet = true;
    m_eventDataStore = std::forward<EventDataStoreT>(value);
  }
  template <typename EventDataStoreT = Aws::String>
  PutEventConfigurationRequest& WithEventDataStore(EventDataStoreT&& value) {
    SetEventDataStore(std::forward<EventDataStoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed size for events to be stored in the specified event data
   * store. If you are using context key selectors, MaxEventSize must be set to
   * Large.</p>
   */
  inline MaxEventSize GetMaxEventSize() const { return m_maxEventSize; }
  inline bool MaxEventSizeHasBeenSet() const { return m_maxEventSizeHasBeenSet; }
  inline void SetMaxEventSize(MaxEventSize value) {
    m_maxEventSizeHasBeenSet = true;
    m_maxEventSize = value;
  }
  inline PutEventConfigurationRequest& WithMaxEventSize(MaxEventSize value) {
    SetMaxEventSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of context key selectors that will be included to provide enriched
   * event data.</p>
   */
  inline const Aws::Vector<ContextKeySelector>& GetContextKeySelectors() const { return m_contextKeySelectors; }
  inline bool ContextKeySelectorsHasBeenSet() const { return m_contextKeySelectorsHasBeenSet; }
  template <typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
  void SetContextKeySelectors(ContextKeySelectorsT&& value) {
    m_contextKeySelectorsHasBeenSet = true;
    m_contextKeySelectors = std::forward<ContextKeySelectorsT>(value);
  }
  template <typename ContextKeySelectorsT = Aws::Vector<ContextKeySelector>>
  PutEventConfigurationRequest& WithContextKeySelectors(ContextKeySelectorsT&& value) {
    SetContextKeySelectors(std::forward<ContextKeySelectorsT>(value));
    return *this;
  }
  template <typename ContextKeySelectorsT = ContextKeySelector>
  PutEventConfigurationRequest& AddContextKeySelectors(ContextKeySelectorsT&& value) {
    m_contextKeySelectorsHasBeenSet = true;
    m_contextKeySelectors.emplace_back(std::forward<ContextKeySelectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of aggregation configurations that you want to configure for the
   * trail.</p>
   */
  inline const Aws::Vector<AggregationConfiguration>& GetAggregationConfigurations() const { return m_aggregationConfigurations; }
  inline bool AggregationConfigurationsHasBeenSet() const { return m_aggregationConfigurationsHasBeenSet; }
  template <typename AggregationConfigurationsT = Aws::Vector<AggregationConfiguration>>
  void SetAggregationConfigurations(AggregationConfigurationsT&& value) {
    m_aggregationConfigurationsHasBeenSet = true;
    m_aggregationConfigurations = std::forward<AggregationConfigurationsT>(value);
  }
  template <typename AggregationConfigurationsT = Aws::Vector<AggregationConfiguration>>
  PutEventConfigurationRequest& WithAggregationConfigurations(AggregationConfigurationsT&& value) {
    SetAggregationConfigurations(std::forward<AggregationConfigurationsT>(value));
    return *this;
  }
  template <typename AggregationConfigurationsT = AggregationConfiguration>
  PutEventConfigurationRequest& AddAggregationConfigurations(AggregationConfigurationsT&& value) {
    m_aggregationConfigurationsHasBeenSet = true;
    m_aggregationConfigurations.emplace_back(std::forward<AggregationConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trailName;

  Aws::String m_eventDataStore;

  MaxEventSize m_maxEventSize{MaxEventSize::NOT_SET};

  Aws::Vector<ContextKeySelector> m_contextKeySelectors;

  Aws::Vector<AggregationConfiguration> m_aggregationConfigurations;
  bool m_trailNameHasBeenSet = false;
  bool m_eventDataStoreHasBeenSet = false;
  bool m_maxEventSizeHasBeenSet = false;
  bool m_contextKeySelectorsHasBeenSet = false;
  bool m_aggregationConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
