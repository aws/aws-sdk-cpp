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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>If your simulation job accesses resources in a VPC, you provide this
   * parameter identifying the list of security group IDs and subnet IDs. These must
   * belong to the same VPC. You must provide at least one security group and two
   * subnet IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/VPCConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API VPCConfig
  {
  public:
    VPCConfig();
    VPCConfig(Aws::Utils::Json::JsonView jsonValue);
    VPCConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline VPCConfig& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline VPCConfig& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline VPCConfig& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline VPCConfig& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more subnet IDs in your VPC.</p>
     */
    inline VPCConfig& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline VPCConfig& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline VPCConfig& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline VPCConfig& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline VPCConfig& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more security groups IDs in your VPC.</p>
     */
    inline VPCConfig& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>A boolean indicating whether to assign a public IP address.</p>
     */
    inline bool GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>A boolean indicating whether to assign a public IP address.</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>A boolean indicating whether to assign a public IP address.</p>
     */
    inline void SetAssignPublicIp(bool value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>A boolean indicating whether to assign a public IP address.</p>
     */
    inline VPCConfig& WithAssignPublicIp(bool value) { SetAssignPublicIp(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    bool m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
