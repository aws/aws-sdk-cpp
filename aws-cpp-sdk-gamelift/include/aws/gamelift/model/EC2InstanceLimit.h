/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/EC2InstanceType.h>
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
   * <p>The GameLift service limits for an EC2 instance type and current utilization.
   * GameLift allows AWS accounts a maximum number of instances, per instance type,
   * per AWS Region or location, for use with GameLift. You can request an limit
   * increase for your account by using the <b>Service limits</b> page in the
   * GameLift console.</p> <p> <b>Related actions</b> </p> <p>
   * <a>DescribeEC2InstanceLimits</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceLimit">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API EC2InstanceLimit
  {
  public:
    EC2InstanceLimit();
    EC2InstanceLimit(Aws::Utils::Json::JsonView jsonValue);
    EC2InstanceLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline bool EC2InstanceTypeHasBeenSet() const { return m_eC2InstanceTypeHasBeenSet; }

    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }

    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline EC2InstanceLimit& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>The name of an EC2 instance type. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions. </p>
     */
    inline EC2InstanceLimit& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of instances for the specified type and location that are
     * currently being used by the AWS account. </p>
     */
    inline int GetCurrentInstances() const{ return m_currentInstances; }

    /**
     * <p>The number of instances for the specified type and location that are
     * currently being used by the AWS account. </p>
     */
    inline bool CurrentInstancesHasBeenSet() const { return m_currentInstancesHasBeenSet; }

    /**
     * <p>The number of instances for the specified type and location that are
     * currently being used by the AWS account. </p>
     */
    inline void SetCurrentInstances(int value) { m_currentInstancesHasBeenSet = true; m_currentInstances = value; }

    /**
     * <p>The number of instances for the specified type and location that are
     * currently being used by the AWS account. </p>
     */
    inline EC2InstanceLimit& WithCurrentInstances(int value) { SetCurrentInstances(value); return *this;}


    /**
     * <p>The number of instances that is allowed for the specified instance type and
     * location.</p>
     */
    inline int GetInstanceLimit() const{ return m_instanceLimit; }

    /**
     * <p>The number of instances that is allowed for the specified instance type and
     * location.</p>
     */
    inline bool InstanceLimitHasBeenSet() const { return m_instanceLimitHasBeenSet; }

    /**
     * <p>The number of instances that is allowed for the specified instance type and
     * location.</p>
     */
    inline void SetInstanceLimit(int value) { m_instanceLimitHasBeenSet = true; m_instanceLimit = value; }

    /**
     * <p>The number of instances that is allowed for the specified instance type and
     * location.</p>
     */
    inline EC2InstanceLimit& WithInstanceLimit(int value) { SetInstanceLimit(value); return *this;}


    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline EC2InstanceLimit& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline EC2InstanceLimit& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>An AWS Region code, such as <code>us-west-2</code>. </p>
     */
    inline EC2InstanceLimit& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    EC2InstanceType m_eC2InstanceType;
    bool m_eC2InstanceTypeHasBeenSet;

    int m_currentInstances;
    bool m_currentInstancesHasBeenSet;

    int m_instanceLimit;
    bool m_instanceLimitHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
