/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/DeduplicationType.h>

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
 * <p>Deduplication settings for a publish request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DeduplicationConfiguration">AWS
 * API Reference</a></p>
 */
class DeduplicationConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API DeduplicationConfiguration() = default;
  AWS_EVENTBRIDGEV2_API DeduplicationConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API DeduplicationConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline DeduplicationType GetDeduplicationType() const { return m_deduplicationType; }
  inline bool DeduplicationTypeHasBeenSet() const { return m_deduplicationTypeHasBeenSet; }
  inline void SetDeduplicationType(DeduplicationType value) {
    m_deduplicationTypeHasBeenSet = true;
    m_deduplicationType = value;
  }
  inline DeduplicationConfiguration& WithDeduplicationType(DeduplicationType value) {
    SetDeduplicationType(value);
    return *this;
  }
  ///@}
 private:
  DeduplicationType m_deduplicationType{DeduplicationType::NOT_SET};
  bool m_deduplicationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
