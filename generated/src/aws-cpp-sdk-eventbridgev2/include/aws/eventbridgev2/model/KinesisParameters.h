/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

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
 * <p>Kinesis Data Streams invocation parameters for subscribers. Values are
 * forwarded to the Kinesis PutRecords API. All scalar values accept a literal or a
 * JSONata expression (e.g. &quot;{% $events.Data.partitionKey
 * %}&quot;).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/KinesisParameters">AWS
 * API Reference</a></p>
 */
class KinesisParameters {
 public:
  AWS_EVENTBRIDGEV2_API KinesisParameters() = default;
  AWS_EVENTBRIDGEV2_API KinesisParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API KinesisParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Required by PutRecords even when an explicit hash key is supplied. Accepts
   * JSONata expression.</p>
   */
  inline const Aws::String& GetPartitionKey() const { return m_partitionKey; }
  inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
  template <typename PartitionKeyT = Aws::String>
  void SetPartitionKey(PartitionKeyT&& value) {
    m_partitionKeyHasBeenSet = true;
    m_partitionKey = std::forward<PartitionKeyT>(value);
  }
  template <typename PartitionKeyT = Aws::String>
  KinesisParameters& WithPartitionKey(PartitionKeyT&& value) {
    SetPartitionKey(std::forward<PartitionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Explicit hash key forwarded to PutRecords unchanged. Accepts JSONata
   * expression.</p>
   */
  inline const Aws::String& GetExplicitHashKey() const { return m_explicitHashKey; }
  inline bool ExplicitHashKeyHasBeenSet() const { return m_explicitHashKeyHasBeenSet; }
  template <typename ExplicitHashKeyT = Aws::String>
  void SetExplicitHashKey(ExplicitHashKeyT&& value) {
    m_explicitHashKeyHasBeenSet = true;
    m_explicitHashKey = std::forward<ExplicitHashKeyT>(value);
  }
  template <typename ExplicitHashKeyT = Aws::String>
  KinesisParameters& WithExplicitHashKey(ExplicitHashKeyT&& value) {
    SetExplicitHashKey(std::forward<ExplicitHashKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_partitionKey;

  Aws::String m_explicitHashKey;
  bool m_partitionKeyHasBeenSet = false;
  bool m_explicitHashKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
