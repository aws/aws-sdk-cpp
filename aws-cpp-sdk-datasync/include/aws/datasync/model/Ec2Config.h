/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The subnet and the security group that the target Amazon EFS file system
   * uses. The subnet must have at least one mount target for that file system. The
   * security group that you provide needs to be able to communicate with the
   * security group on the mount target in the subnet specified. </p> <p>The exact
   * relationship between security group M (of the mount target) and security group S
   * (which you provide for DataSync to use at this stage) is as follows: </p> <ul>
   * <li> <p> Security group M (which you associate with the mount target) must allow
   * inbound access for the Transmission Control Protocol (TCP) on the NFS port
   * (2049) from security group S. You can enable inbound connections either by IP
   * address (CIDR range) or security group. </p> </li> <li> <p>Security group S
   * (provided to DataSync to access EFS) should have a rule that enables outbound
   * connections to the NFS port on one of the file system’s mount targets. You can
   * enable outbound connections either by IP address (CIDR range) or security group.
   * For information about security groups and mount targets, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/security-considerations.html#network-access">Security
   * Groups for Amazon EC2 Instances and Mount Targets</a> in the <i>Amazon EFS User
   * Guide.</i> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Ec2Config">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API Ec2Config
  {
  public:
    Ec2Config();
    Ec2Config(Aws::Utils::Json::JsonView jsonValue);
    Ec2Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline const Aws::String& GetSubnetArn() const{ return m_subnetArn; }

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline void SetSubnetArn(const Aws::String& value) { m_subnetArnHasBeenSet = true; m_subnetArn = value; }

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline void SetSubnetArn(Aws::String&& value) { m_subnetArnHasBeenSet = true; m_subnetArn = std::move(value); }

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline void SetSubnetArn(const char* value) { m_subnetArnHasBeenSet = true; m_subnetArn.assign(value); }

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline Ec2Config& WithSubnetArn(const Aws::String& value) { SetSubnetArn(value); return *this;}

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline Ec2Config& WithSubnetArn(Aws::String&& value) { SetSubnetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subnet that the Amazon EC2 resource belongs in. </p>
     */
    inline Ec2Config& WithSubnetArn(const char* value) { SetSubnetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline Ec2Config& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline Ec2Config& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are configured
     * for the Amazon EC2 resource.</p>
     */
    inline Ec2Config& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

  private:

    Aws::String m_subnetArn;
    bool m_subnetArnHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
