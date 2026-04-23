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
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for a private VPC Input.
When this property is specified, the input
   * destination addresses will be created in a VPC rather than with public Internet
   * addresses.
This property requires setting the roleArn property on Input
   * creation.
Not compatible with the inputSecurityGroups property.
<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputVpcRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputVpcRequest
  {
  public:
    InputVpcRequest();
    InputVpcRequest(Aws::Utils::Json::JsonView jsonValue);
    InputVpcRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline InputVpcRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline InputVpcRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline InputVpcRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline InputVpcRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Input VPC network
     * interfaces.
Requires subnetIds. If none are specified then the VPC default
     * security group will be used.

     */
    inline InputVpcRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline InputVpcRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline InputVpcRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline InputVpcRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline InputVpcRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * A list of 2 VPC subnet IDs from the same VPC.
Subnet IDs must be mapped to two
     * unique availability zones (AZ).

     */
    inline InputVpcRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
