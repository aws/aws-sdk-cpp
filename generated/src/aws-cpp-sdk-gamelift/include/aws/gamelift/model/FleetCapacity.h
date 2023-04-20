/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/EC2InstanceCounts.h>
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
   * <p>Current resource capacity settings in a specified fleet or location. The
   * location value might refer to a fleet's remote location or its home Region. </p>
   * <p> <b>Related actions</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetCapacity.html">DescribeFleetCapacity</a>
   * | <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationCapacity.html">DescribeFleetLocationCapacity</a>
   * | <a
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


    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetCapacity& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetCapacity& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet associated with the location.</p>
     */
    inline FleetCapacity& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetCapacity& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetCapacity& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline FleetCapacity& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline FleetCapacity& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type that is used for all instances in a fleet. The
     * instance type determines the computing resources in use, including CPU, memory,
     * storage, and networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline FleetCapacity& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    
    inline const EC2InstanceCounts& GetInstanceCounts() const{ return m_instanceCounts; }

    
    inline bool InstanceCountsHasBeenSet() const { return m_instanceCountsHasBeenSet; }

    
    inline void SetInstanceCounts(const EC2InstanceCounts& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = value; }

    
    inline void SetInstanceCounts(EC2InstanceCounts&& value) { m_instanceCountsHasBeenSet = true; m_instanceCounts = std::move(value); }

    
    inline FleetCapacity& WithInstanceCounts(const EC2InstanceCounts& value) { SetInstanceCounts(value); return *this;}

    
    inline FleetCapacity& WithInstanceCounts(EC2InstanceCounts&& value) { SetInstanceCounts(std::move(value)); return *this;}


    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetCapacity& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetCapacity& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fleet location for the instance count information, expressed as an Amazon
     * Web Services Region code, such as <code>us-west-2</code>. </p>
     */
    inline FleetCapacity& WithLocation(const char* value) { SetLocation(value); return *this;}

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
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
