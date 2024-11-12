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
    AWS_GAMELIFT_API FleetCapacity();
    AWS_GAMELIFT_API FleetCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline FleetCapacity& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline FleetCapacity& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline FleetCapacity& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline FleetCapacity& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline FleetCapacity& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline FleetCapacity& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that is used for instances in a fleet. Instance
     * type determines the computing resources in use, including CPU, memory, storage,
     * and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline FleetCapacity& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}
    inline FleetCapacity& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of instances in the fleet, listed by instance status.
     * Counts for pending and terminating instances might be non-zero if the fleet is
     * adjusting to a scaling event or if access to resources is temporarily
     * affected.</p>
     */
    inline const EC2InstanceCounts& GetInstanceCounts() const{ return m_instanceCounts; }
    inline bool InstanceCountsHasBeenSet() const { return m_instanceCountsHasBeenSet; }
    inline void SetInstanceCounts(const EC2InstanceCounts& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = value; }
    inline void SetInstanceCounts(EC2InstanceCounts&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::move(value); }
    inline FleetCapacity& WithInstanceCounts(const EC2InstanceCounts& value) { SetInstanceCounts(value); return *this;}
    inline FleetCapacity& WithInstanceCounts(EC2InstanceCounts&& value) { SetInstanceCounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline FleetCapacity& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline FleetCapacity& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline FleetCapacity& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number and status of game server container groups deployed in a container
     * fleet. </p>
     */
    inline const GameServerContainerGroupCounts& GetGameServerContainerGroupCounts() const{ return m_gameServerContainerGroupCounts; }
    inline bool GameServerContainerGroupCountsHasBeenSet() const { return m_gameServerContainerGroupCountsHasBeenSet; }
    inline void SetGameServerContainerGroupCounts(const GameServerContainerGroupCounts& value) { m_gameServerContainerGroupCountsHasBeenSet = true; m_gameServerContainerGroupCounts = value; }
    inline void SetGameServerContainerGroupCounts(GameServerContainerGroupCounts&& value) { m_gameServerContainerGroupCountsHasBeenSet = true; m_gameServerContainerGroupCounts = std::move(value); }
    inline FleetCapacity& WithGameServerContainerGroupCounts(const GameServerContainerGroupCounts& value) { SetGameServerContainerGroupCounts(value); return *this;}
    inline FleetCapacity& WithGameServerContainerGroupCounts(GameServerContainerGroupCounts&& value) { SetGameServerContainerGroupCounts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    EC2InstanceType m_instanceType;
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
