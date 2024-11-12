/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/DeploymentStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>For a multi-location container fleet, describes the progress of a deployment
   * across all fleet locations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationalDeployment">AWS
   * API Reference</a></p>
   */
  class LocationalDeployment
  {
  public:
    AWS_GAMELIFT_API LocationalDeployment();
    AWS_GAMELIFT_API LocationalDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationalDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of fleet deployment activity in the location. </p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> -- The deployment is in progress.</p> </li> <li> <p>
     * <code>IMPAIRED</code> -- The deployment failed and the fleet has some impaired
     * containers. </p> </li> <li> <p> <code>COMPLETE</code> -- The deployment has
     * completed successfully.</p> </li> <li> <p> <code>ROLLBACK_IN_PROGRESS</code> --
     * The deployment failed and rollback has been initiated.</p> </li> <li> <p>
     * <code>ROLLBACK_IN_COMPLETE</code> -- The deployment failed and rollback has been
     * completed.</p> </li> <li> <p> <code>CANCELLED</code> -- The deployment was
     * cancelled.</p> </li> </ul>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline LocationalDeployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline LocationalDeployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}
  private:

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
