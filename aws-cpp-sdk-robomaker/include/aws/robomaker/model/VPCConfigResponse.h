﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>VPC configuration associated with your simulation job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/VPCConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API VPCConfigResponse
  {
  public:
    VPCConfigResponse();
    VPCConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    VPCConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs associated with the simulation job.</p>
     */
    inline VPCConfigResponse& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline VPCConfigResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline VPCConfigResponse& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID associated with your simulation job.</p>
     */
    inline VPCConfigResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A boolean indicating if a public IP was assigned.</p>
     */
    inline bool GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>A boolean indicating if a public IP was assigned.</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>A boolean indicating if a public IP was assigned.</p>
     */
    inline void SetAssignPublicIp(bool value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>A boolean indicating if a public IP was assigned.</p>
     */
    inline VPCConfigResponse& WithAssignPublicIp(bool value) { SetAssignPublicIp(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    bool m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
