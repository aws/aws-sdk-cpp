/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>Provide the security group and subnet IDs for the workers and
   * scheduler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline NetworkConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline NetworkConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A JSON list of 1 or more security groups IDs by name, in the same VPC as the
     * subnets.</p>
     */
    inline NetworkConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline NetworkConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline NetworkConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Provide a JSON list of 2 subnet IDs by name. These must be private subnets,
     * in the same VPC, in two different availability zones.</p>
     */
    inline NetworkConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
