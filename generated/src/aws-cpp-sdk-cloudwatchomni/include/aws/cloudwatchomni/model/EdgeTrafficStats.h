/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Additive traffic counters accumulated over an edge's observation window.
 * Which counters are populated depends on what produced the edge.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/EdgeTrafficStats">AWS
 * API Reference</a></p>
 */
class EdgeTrafficStats {
 public:
  AWS_CLOUDWATCHOMNI_API EdgeTrafficStats() = default;
  AWS_CLOUDWATCHOMNI_API EdgeTrafficStats(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API EdgeTrafficStats& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Total bytes observed across the edge.</p>
   */
  inline long long GetBytes() const { return m_bytes; }
  inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
  inline void SetBytes(long long value) {
    m_bytesHasBeenSet = true;
    m_bytes = value;
  }
  inline EdgeTrafficStats& WithBytes(long long value) {
    SetBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total packets observed across the edge.</p>
   */
  inline long long GetPackets() const { return m_packets; }
  inline bool PacketsHasBeenSet() const { return m_packetsHasBeenSet; }
  inline void SetPackets(long long value) {
    m_packetsHasBeenSet = true;
    m_packets = value;
  }
  inline EdgeTrafficStats& WithPackets(long long value) {
    SetPackets(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total network flows observed across the edge.</p>
   */
  inline long long GetFlows() const { return m_flows; }
  inline bool FlowsHasBeenSet() const { return m_flowsHasBeenSet; }
  inline void SetFlows(long long value) {
    m_flowsHasBeenSet = true;
    m_flows = value;
  }
  inline EdgeTrafficStats& WithFlows(long long value) {
    SetFlows(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total bytes sent to the destination.</p>
   */
  inline long long GetSentBytes() const { return m_sentBytes; }
  inline bool SentBytesHasBeenSet() const { return m_sentBytesHasBeenSet; }
  inline void SetSentBytes(long long value) {
    m_sentBytesHasBeenSet = true;
    m_sentBytes = value;
  }
  inline EdgeTrafficStats& WithSentBytes(long long value) {
    SetSentBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total bytes received from the destination.</p>
   */
  inline long long GetReceivedBytes() const { return m_receivedBytes; }
  inline bool ReceivedBytesHasBeenSet() const { return m_receivedBytesHasBeenSet; }
  inline void SetReceivedBytes(long long value) {
    m_receivedBytesHasBeenSet = true;
    m_receivedBytes = value;
  }
  inline EdgeTrafficStats& WithReceivedBytes(long long value) {
    SetReceivedBytes(value);
    return *this;
  }
  ///@}
 private:
  long long m_bytes{0};

  long long m_packets{0};

  long long m_flows{0};

  long long m_sentBytes{0};

  long long m_receivedBytes{0};
  bool m_bytesHasBeenSet = false;
  bool m_packetsHasBeenSet = false;
  bool m_flowsHasBeenSet = false;
  bool m_sentBytesHasBeenSet = false;
  bool m_receivedBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
