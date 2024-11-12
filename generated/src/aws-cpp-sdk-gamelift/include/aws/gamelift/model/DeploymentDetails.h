/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the most recent deployment for the container
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeploymentDetails">AWS
   * API Reference</a></p>
   */
  class DeploymentDetails
  {
  public:
    AWS_GAMELIFT_API DeploymentDetails();
    AWS_GAMELIFT_API DeploymentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API DeploymentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a fleet deployment.</p>
     */
    inline const Aws::String& GetLatestDeploymentId() const{ return m_latestDeploymentId; }
    inline bool LatestDeploymentIdHasBeenSet() const { return m_latestDeploymentIdHasBeenSet; }
    inline void SetLatestDeploymentId(const Aws::String& value) { m_latestDeploymentIdHasBeenSet = true; m_latestDeploymentId = value; }
    inline void SetLatestDeploymentId(Aws::String&& value) { m_latestDeploymentIdHasBeenSet = true; m_latestDeploymentId = std::move(value); }
    inline void SetLatestDeploymentId(const char* value) { m_latestDeploymentIdHasBeenSet = true; m_latestDeploymentId.assign(value); }
    inline DeploymentDetails& WithLatestDeploymentId(const Aws::String& value) { SetLatestDeploymentId(value); return *this;}
    inline DeploymentDetails& WithLatestDeploymentId(Aws::String&& value) { SetLatestDeploymentId(std::move(value)); return *this;}
    inline DeploymentDetails& WithLatestDeploymentId(const char* value) { SetLatestDeploymentId(value); return *this;}
    ///@}
  private:

    Aws::String m_latestDeploymentId;
    bool m_latestDeploymentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
