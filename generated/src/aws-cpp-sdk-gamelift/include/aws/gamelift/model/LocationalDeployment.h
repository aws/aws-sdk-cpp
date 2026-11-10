/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/DeploymentStatus.h>

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
 * <p>For a multi-location container fleet, describes the progress of a deployment
 * across all fleet locations. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationalDeployment">AWS
 * API Reference</a></p>
 */
class LocationalDeployment {
 public:
  AWS_GAMELIFT_API LocationalDeployment() = default;
  AWS_GAMELIFT_API LocationalDeployment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API LocationalDeployment& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The status of fleet deployment activity in the location. </p> <ul> <li> <p>
   * <code>IN_PROGRESS</code> -- The deployment is in progress in the location. This
   * status covers validation as well as the replacement of the location's
   * containers.</p> </li> <li> <p> <code>IMPAIRED</code> -- The deployment failed
   * validation in the location, and the location kept the containers that failed
   * validation so that you can inspect them. A location reaches this status when the
   * deployment's impairment strategy is <code>MAINTAIN</code>.</p> </li> <li> <p>
   * <code>COMPLETE</code> -- The deployment has completed successfully in the
   * location.</p> </li> <li> <p> <code>ROLLBACK_IN_PROGRESS</code> -- The deployment
   * failed and rollback has been initiated in the location. A location reaches this
   * status when the deployment's impairment strategy is <code>ROLLBACK</code>.</p>
   * </li> <li> <p> <code>ROLLBACK_COMPLETE</code> -- The deployment failed and
   * rollback has been completed in the location. The location is running the
   * configuration from the last successful deployment.</p> </li> <li> <p>
   * <code>CANCELLED</code> -- The deployment was cancelled because a new deployment
   * started for the same fleet.</p> </li> </ul>
   */
  inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
  inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
  inline void SetDeploymentStatus(DeploymentStatus value) {
    m_deploymentStatusHasBeenSet = true;
    m_deploymentStatus = value;
  }
  inline LocationalDeployment& WithDeploymentStatus(DeploymentStatus value) {
    SetDeploymentStatus(value);
    return *this;
  }
  ///@}
 private:
  DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
  bool m_deploymentStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
