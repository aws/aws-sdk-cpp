/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

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
 * <p>A fleet or alias designated in a game session queue. Queues fulfill requests
 * for new game sessions by placing a new game session on any of the queue's
 * destinations. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueueDestination">AWS
 * API Reference</a></p>
 */
class GameSessionQueueDestination {
 public:
  AWS_GAMELIFT_API GameSessionQueueDestination() = default;
  AWS_GAMELIFT_API GameSessionQueueDestination(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API GameSessionQueueDestination& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
   * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
   * identifier across all Regions.</p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  GameSessionQueueDestination& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationArn;
  bool m_destinationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
