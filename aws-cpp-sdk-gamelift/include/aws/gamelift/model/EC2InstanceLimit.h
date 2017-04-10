/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Maximum number of instances allowed based on the Amazon Elastic Compute Cloud
   * (Amazon EC2) instance type. Instance limits can be retrieved by calling
   * <a>DescribeEC2InstanceLimits</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/EC2InstanceLimit">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API EC2InstanceLimit
  {
  public:
    EC2InstanceLimit();
    EC2InstanceLimit(const Aws::Utils::Json::JsonValue& jsonValue);
    EC2InstanceLimit& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetEC2InstanceType() const{ return m_eC2InstanceType; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(const EC2InstanceType& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = value; }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline void SetEC2InstanceType(EC2InstanceType&& value) { m_eC2InstanceTypeHasBeenSet = true; m_eC2InstanceType = std::move(value); }

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline EC2InstanceLimit& WithEC2InstanceType(const EC2InstanceType& value) { SetEC2InstanceType(value); return *this;}

    /**
     * <p>Name of an EC2 instance type that is supported in Amazon GameLift. A fleet
     * instance type determines the computing resources of each instance in the fleet,
     * including CPU, memory, storage, and networking capacity. Amazon GameLift
     * supports the following EC2 instance types. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance Types</a>
     * for detailed descriptions.</p>
     */
    inline EC2InstanceLimit& WithEC2InstanceType(EC2InstanceType&& value) { SetEC2InstanceType(std::move(value)); return *this;}

    /**
     * <p>Number of instances of the specified type that are currently in use by this
     * AWS account.</p>
     */
    inline int GetCurrentInstances() const{ return m_currentInstances; }

    /**
     * <p>Number of instances of the specified type that are currently in use by this
     * AWS account.</p>
     */
    inline void SetCurrentInstances(int value) { m_currentInstancesHasBeenSet = true; m_currentInstances = value; }

    /**
     * <p>Number of instances of the specified type that are currently in use by this
     * AWS account.</p>
     */
    inline EC2InstanceLimit& WithCurrentInstances(int value) { SetCurrentInstances(value); return *this;}

    /**
     * <p>Number of instances allowed.</p>
     */
    inline int GetInstanceLimit() const{ return m_instanceLimit; }

    /**
     * <p>Number of instances allowed.</p>
     */
    inline void SetInstanceLimit(int value) { m_instanceLimitHasBeenSet = true; m_instanceLimit = value; }

    /**
     * <p>Number of instances allowed.</p>
     */
    inline EC2InstanceLimit& WithInstanceLimit(int value) { SetInstanceLimit(value); return *this;}

  private:
    EC2InstanceType m_eC2InstanceType;
    bool m_eC2InstanceTypeHasBeenSet;
    int m_currentInstances;
    bool m_currentInstancesHasBeenSet;
    int m_instanceLimit;
    bool m_instanceLimitHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
