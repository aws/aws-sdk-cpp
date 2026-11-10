/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LogDeliveryDestination.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>A configuration that delivers game session placement insight logs to one or
 * more destinations of your choice.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueueLogConfiguration">AWS
 * API Reference</a></p>
 */
class GameSessionQueueLogConfiguration {
 public:
  AWS_GAMELIFT_API GameSessionQueueLogConfiguration() = default;
  AWS_GAMELIFT_API GameSessionQueueLogConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API GameSessionQueueLogConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The destinations that receive game session placement insight logs for the
   * queue. You can specify up to 3 destinations. Each destination must have a unique
   * ARN.</p>
   */
  inline const Aws::Vector<LogDeliveryDestination>& GetDeliveryDestinations() const { return m_deliveryDestinations; }
  inline bool DeliveryDestinationsHasBeenSet() const { return m_deliveryDestinationsHasBeenSet; }
  template <typename DeliveryDestinationsT = Aws::Vector<LogDeliveryDestination>>
  void SetDeliveryDestinations(DeliveryDestinationsT&& value) {
    m_deliveryDestinationsHasBeenSet = true;
    m_deliveryDestinations = std::forward<DeliveryDestinationsT>(value);
  }
  template <typename DeliveryDestinationsT = Aws::Vector<LogDeliveryDestination>>
  GameSessionQueueLogConfiguration& WithDeliveryDestinations(DeliveryDestinationsT&& value) {
    SetDeliveryDestinations(std::forward<DeliveryDestinationsT>(value));
    return *this;
  }
  template <typename DeliveryDestinationsT = LogDeliveryDestination>
  GameSessionQueueLogConfiguration& AddDeliveryDestinations(DeliveryDestinationsT&& value) {
    m_deliveryDestinationsHasBeenSet = true;
    m_deliveryDestinations.emplace_back(std::forward<DeliveryDestinationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LogDeliveryDestination> m_deliveryDestinations;
  bool m_deliveryDestinationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
