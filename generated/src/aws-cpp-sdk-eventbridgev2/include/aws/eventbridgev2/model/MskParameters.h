/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/MskAcks.h>
#include <aws/eventbridgev2/model/MskCompression.h>
#include <aws/eventbridgev2/model/MskConnectivity.h>
#include <aws/eventbridgev2/model/MskHeader.h>

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
 * <p>MSK (Apache Kafka) invocation parameters for subscribers targeting an Amazon
 * MSK cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/MskParameters">AWS
 * API Reference</a></p>
 */
class MskParameters {
 public:
  AWS_EVENTBRIDGEV2_API MskParameters() = default;
  AWS_EVENTBRIDGEV2_API MskParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API MskParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Name of the Kafka topic events are produced to. Accepts a literal or a
   * JSONata expression resolved once per delivered event.</p>
   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  MskParameters& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Producer compression codec applied to the record batch. Defaults to NONE.</p>
   */
  inline MskCompression GetCompression() const { return m_compression; }
  inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
  inline void SetCompression(MskCompression value) {
    m_compressionHasBeenSet = true;
    m_compression = value;
  }
  inline MskParameters& WithCompression(MskCompression value) {
    SetCompression(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Producer acknowledgement mode. Defaults to ALL.</p>
   */
  inline MskAcks GetAcks() const { return m_acks; }
  inline bool AcksHasBeenSet() const { return m_acksHasBeenSet; }
  inline void SetAcks(MskAcks value) {
    m_acksHasBeenSet = true;
    m_acks = value;
  }
  inline MskParameters& WithAcks(MskAcks value) {
    SetAcks(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Kafka record key. Accepts a literal or a JSONata expression (e.g. "{%
   * $events.data.customerId %}") resolved once per delivered event; the resolved
   * value selects the destination partition. If you omit it, the producer selects
   * the partition; on an ordered (FIFO) subscriber, EventBridge instead uses the
   * event group ID as the record key to preserve ordering.</p>
   */
  inline const Aws::String& GetPartitionKey() const { return m_partitionKey; }
  inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
  template <typename PartitionKeyT = Aws::String>
  void SetPartitionKey(PartitionKeyT&& value) {
    m_partitionKeyHasBeenSet = true;
    m_partitionKey = std::forward<PartitionKeyT>(value);
  }
  template <typename PartitionKeyT = Aws::String>
  MskParameters& WithPartitionKey(PartitionKeyT&& value) {
    SetPartitionKey(std::forward<PartitionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Kafka record headers attached to each produced record.</p>
   */
  inline const Aws::Vector<MskHeader>& GetHeaders() const { return m_headers; }
  inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
  template <typename HeadersT = Aws::Vector<MskHeader>>
  void SetHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers = std::forward<HeadersT>(value);
  }
  template <typename HeadersT = Aws::Vector<MskHeader>>
  MskParameters& WithHeaders(HeadersT&& value) {
    SetHeaders(std::forward<HeadersT>(value));
    return *this;
  }
  template <typename HeadersT = MskHeader>
  MskParameters& AddHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers.emplace_back(std::forward<HeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Producer client.id passed to the Kafka broker. Identifies the producer in
   * broker-side logs, metrics, and quota enforcement. A literal, not a JSONata
   * expression: it is a connection-level setting resolved once when the producer is
   * created, not per event. If you do not set it, EventBridge uses the subscriber
   * ARN.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  MskParameters& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the service connects to the cluster. A cluster can have public access and
   * multi-VPC private connectivity turned on at the same time, so the subscriber
   * names the one to use. That path must be turned on, with IAM access control, on
   * the cluster.</p>
   */
  inline MskConnectivity GetConnectivity() const { return m_connectivity; }
  inline bool ConnectivityHasBeenSet() const { return m_connectivityHasBeenSet; }
  inline void SetConnectivity(MskConnectivity value) {
    m_connectivityHasBeenSet = true;
    m_connectivity = value;
  }
  inline MskParameters& WithConnectivity(MskConnectivity value) {
    SetConnectivity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicName;

  MskCompression m_compression{MskCompression::NOT_SET};

  MskAcks m_acks{MskAcks::NOT_SET};

  Aws::String m_partitionKey;

  Aws::Vector<MskHeader> m_headers;

  Aws::String m_clientId;

  MskConnectivity m_connectivity{MskConnectivity::NOT_SET};
  bool m_topicNameHasBeenSet = false;
  bool m_compressionHasBeenSet = false;
  bool m_acksHasBeenSet = false;
  bool m_partitionKeyHasBeenSet = false;
  bool m_headersHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_connectivityHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
