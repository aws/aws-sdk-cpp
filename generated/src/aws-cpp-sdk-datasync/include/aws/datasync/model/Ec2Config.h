/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The subnet and security groups that DataSync uses to access your Amazon EFS
   * file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Ec2Config">AWS
   * API Reference</a></p>
   */
  class Ec2Config
  {
  public:
    AWS_DATASYNC_API Ec2Config();
    AWS_DATASYNC_API Ec2Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Ec2Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline bool SubnetArnHasBeenSet() const { return m_subnetArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline Ec2Config& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline Ec2Config& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of a subnet where DataSync creates the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for managing traffic during your transfer.</p> <p>The subnet must
     * be located:</p> <ul> <li> <p>In the same virtual private cloud (VPC) as the
     * Amazon EFS file system.</p> </li> <li> <p>In the same Availability Zone as at
     * least one mount target for the Amazon EFS file system.</p> </li> </ul> 
     * <p>You don't need to specify a subnet that includes a file system mount
     * target.</p> 
     */
    inline Ec2Config& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline Ec2Config& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline Ec2Config& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Names (ARNs) of the security groups associated
     * with an Amazon EFS file system's mount target.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

  private:

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
