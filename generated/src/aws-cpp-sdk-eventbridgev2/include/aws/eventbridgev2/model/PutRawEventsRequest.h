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
#include <aws/eventbridgev2/model/PutRawEventsRequestEntry.h>
#include <aws/eventbridgev2/model/SchemaRegistryConfiguration.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class PutRawEventsRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API PutRawEventsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutRawEvents"; }

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
  PutRawEventsRequest& WithEventBusArn(EventBusArnT&& value) {
    SetEventBusArn(std::forward<EventBusArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<PutRawEventsRequestEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<PutRawEventsRequestEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<PutRawEventsRequestEntry>>
  PutRawEventsRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = PutRawEventsRequestEntry>
  PutRawEventsRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Schema-registry settings for encoding open-format (Avro/Protobuf) events.
   * Required for open-format entries; ignored for JSON entries. The registry is read
   * with the caller's credentials, so the caller needs read access to the registry
   * it references.</p>
   */
  inline const SchemaRegistryConfiguration& GetSchemaRegistryConfiguration() const { return m_schemaRegistryConfiguration; }
  inline bool SchemaRegistryConfigurationHasBeenSet() const { return m_schemaRegistryConfigurationHasBeenSet; }
  template <typename SchemaRegistryConfigurationT = SchemaRegistryConfiguration>
  void SetSchemaRegistryConfiguration(SchemaRegistryConfigurationT&& value) {
    m_schemaRegistryConfigurationHasBeenSet = true;
    m_schemaRegistryConfiguration = std::forward<SchemaRegistryConfigurationT>(value);
  }
  template <typename SchemaRegistryConfigurationT = SchemaRegistryConfiguration>
  PutRawEventsRequest& WithSchemaRegistryConfiguration(SchemaRegistryConfigurationT&& value) {
    SetSchemaRegistryConfiguration(std::forward<SchemaRegistryConfigurationT>(value));
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
  PutRawEventsRequest& WithDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    SetDeduplicationConfiguration(std::forward<DeduplicationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventBusArn;

  Aws::Vector<PutRawEventsRequestEntry> m_entries;

  SchemaRegistryConfiguration m_schemaRegistryConfiguration;

  DeduplicationConfiguration m_deduplicationConfiguration;
  bool m_eventBusArnHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
  bool m_schemaRegistryConfigurationHasBeenSet = false;
  bool m_deduplicationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
