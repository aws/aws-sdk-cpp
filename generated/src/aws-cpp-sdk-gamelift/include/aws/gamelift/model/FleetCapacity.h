/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/EC2InstanceCounts.h>
#include <aws/gamelift/model/GameServerContainerGroupCounts.h>
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
   * <p>Current resource capacity settings for managed EC2 fleets and managed
   * container fleets. For multi-location fleets, location values might refer to a
   * fleet's remote location or its home Region. </p> <p> <b>Returned by:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetCapacity.html">DescribeFleetCapacity</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationCapacity.html">DescribeFleetLocationCapacity</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateFleetCapacity.html">UpdateFleetCapacity</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetCapacity">AWS
   * API Reference</a></p>
   */
  class FleetCapacity
  {
  public:
    AWS_GAMELIFT_API FleetCapacity() = default;
    AWS_GAMELIFT_API FleetCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    FleetCapacity& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    FleetCapacity& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that is used for instances in a fleet. Instance
     * type determines the computing resources in use, including CPU, memory, storage,
     * and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline EC2InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(EC2InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline FleetCapacity& WithInstanceType(EC2InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of instances in the fleet, listed by instance status.
     * Counts for pending and terminating instances might be non-zero if the fleet is
     * adjusting to a scaling event or if access to resources is temporarily
     * affected.</p>
     */
    inline const EC2InstanceCounts& GetInstanceCounts() const { return m_instanceCounts; }
    inline bool InstanceCountsHasBeenSet() const { return m_instanceCountsHasBeenSet; }
    template<typename InstanceCountsT = EC2InstanceCounts>
    void SetInstanceCounts(InstanceCountsT&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::forward<InstanceCountsT>(value); }
    template<typename InstanceCountsT = EC2InstanceCounts>
    FleetCapacity& WithInstanceCounts(InstanceCountsT&& value) { SetInstanceCounts(std::forward<InstanceCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    FleetCapacity& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number and status of game server container groups deployed in a container
     * fleet. </p>
     */
    inline const GameServerContainerGroupCounts& GetGameServerContainerGroupCounts() const { return m_gameServerContainerGroupCounts; }
    inline bool GameServerContainerGroupCountsHasBeenSet() const { return m_gameServerContainerGroupCountsHasBeenSet; }
    template<typename GameServerContainerGroupCountsT = GameServerContainerGroupCounts>
    void SetGameServerContainerGroupCounts(GameServerContainerGroupCountsT&& value) { m_gameServerContainerGroupCountsHasBeenSet = true; m_gameServerContainerGroupCounts = std::forward<GameServerContainerGroupCountsT>(value); }
    template<typename GameServerContainerGroupCountsT = GameServerContainerGroupCounts>
    FleetCapacity& WithGameServerContainerGroupCounts(GameServerContainerGroupCountsT&& value) { SetGameServerContainerGroupCounts(std::forward<GameServerContainerGroupCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    EC2InstanceType m_instanceType{EC2InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    EC2InstanceCounts m_instanceCounts;
    bool m_instanceCountsHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    GameServerContainerGroupCounts m_gameServerContainerGroupCounts;
    bool m_gameServerContainerGroupCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
