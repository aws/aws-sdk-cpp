/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/MskDetails.h>

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
 * <p>Values EventBridge manages for a subscriber that depend on its target type.
 * Only the member for the subscriber's target type is set. Returned in responses
 * only; the customer never supplies these values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SubscriberDetails">AWS
 * API Reference</a></p>
 */
class SubscriberDetails {
 public:
  AWS_EVENTBRIDGEV2_API SubscriberDetails() = default;
  AWS_EVENTBRIDGEV2_API SubscriberDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SubscriberDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Values EventBridge manages for a subscriber that targets an Amazon MSK
   * cluster.</p>
   */
  inline const MskDetails& GetMskDetails() const { return m_mskDetails; }
  inline bool MskDetailsHasBeenSet() const { return m_mskDetailsHasBeenSet; }
  template <typename MskDetailsT = MskDetails>
  void SetMskDetails(MskDetailsT&& value) {
    m_mskDetailsHasBeenSet = true;
    m_mskDetails = std::forward<MskDetailsT>(value);
  }
  template <typename MskDetailsT = MskDetails>
  SubscriberDetails& WithMskDetails(MskDetailsT&& value) {
    SetMskDetails(std::forward<MskDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  MskDetails m_mskDetails;
  bool m_mskDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
