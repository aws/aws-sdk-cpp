/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeComputeRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeComputeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCompute"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet that the compute belongs to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DescribeComputeRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the compute resource to retrieve properties for. For
     * a managed container fleet or Anywhere fleet, use a compute name. For an EC2
     * fleet, use an instance ID. To retrieve a fleet's compute identifiers, call <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListCompute.html">ListCompute</a>.</p>
     */
    inline const Aws::String& GetComputeName() const { return m_computeName; }
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
    template<typename ComputeNameT = Aws::String>
    void SetComputeName(ComputeNameT&& value) { m_computeNameHasBeenSet = true; m_computeName = std::forward<ComputeNameT>(value); }
    template<typename ComputeNameT = Aws::String>
    DescribeComputeRequest& WithComputeName(ComputeNameT&& value) { SetComputeName(std::forward<ComputeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
