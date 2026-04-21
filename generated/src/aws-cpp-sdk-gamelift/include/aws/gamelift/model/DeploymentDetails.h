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
 * <p>Information about the most recent deployment for the container
 * fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeploymentDetails">AWS
 * API Reference</a></p>
 */
class DeploymentDetails {
 public:
  AWS_GAMELIFT_API DeploymentDetails() = default;
  AWS_GAMELIFT_API DeploymentDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API DeploymentDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A unique identifier for a fleet deployment.</p>
   */
  inline const Aws::String& GetLatestDeploymentId() const { return m_latestDeploymentId; }
  inline bool LatestDeploymentIdHasBeenSet() const { return m_latestDeploymentIdHasBeenSet; }
  template <typename LatestDeploymentIdT = Aws::String>
  void SetLatestDeploymentId(LatestDeploymentIdT&& value) {
    m_latestDeploymentIdHasBeenSet = true;
    m_latestDeploymentId = std::forward<LatestDeploymentIdT>(value);
  }
  template <typename LatestDeploymentIdT = Aws::String>
  DeploymentDetails& WithLatestDeploymentId(LatestDeploymentIdT&& value) {
    SetLatestDeploymentId(std::forward<LatestDeploymentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_latestDeploymentId;
  bool m_latestDeploymentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
