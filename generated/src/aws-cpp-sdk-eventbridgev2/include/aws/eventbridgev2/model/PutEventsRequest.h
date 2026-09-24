/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/DeduplicationConfiguration.h>
#include <aws/eventbridgev2/model/PutEventsRequestEntry.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class PutEventsRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API PutEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutEvents"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_EVENTBRIDGEV2_API EndpointParameters GetEndpointContextParams() const override;

  ///@{

  inline const Aws::String& GetEventBusArn() const { return m_eventBusArn; }
  inline bool EventBusArnHasBeenSet() const { return m_eventBusArnHasBeenSet; }
  template <typename EventBusArnT = Aws::String>
  void SetEventBusArn(EventBusArnT&& value) {
    m_eventBusArnHasBeenSet = true;
    m_eventBusArn = std::forward<EventBusArnT>(value);
  }
  template <typename EventBusArnT = Aws::String>
  PutEventsRequest& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<PutEventsRequestEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<PutEventsRequestEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<PutEventsRequestEntry>>
  PutEventsRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = PutEventsRequestEntry>
  PutEventsRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Request-level deduplication settings, applied to every entry in the
   * batch.</p>
   */
  inline const DeduplicationConfiguration& GetDeduplicationConfiguration() const { return m_deduplicationConfiguration; }
  inline bool DeduplicationConfigurationHasBeenSet() const { return m_deduplicationConfigurationHasBeenSet; }
  template <typename DeduplicationConfigurationT = DeduplicationConfiguration>
  void SetDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    m_deduplicationConfigurationHasBeenSet = true;
    m_deduplicationConfiguration = std::forward<DeduplicationConfigurationT>(value);
  }
  template <typename DeduplicationConfigurationT = DeduplicationConfiguration>
  PutEventsRequest& WithDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    SetDeduplicationConfiguration(std::forward<DeduplicationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventBusArn;

  Aws::Vector<PutEventsRequestEntry> m_entries;

  DeduplicationConfiguration m_deduplicationConfiguration;
  bool m_eventBusArnHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
  bool m_deduplicationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
