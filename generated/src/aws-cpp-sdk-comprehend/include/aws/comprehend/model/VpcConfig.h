/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p> Configuration parameters for an optional private Virtual Private Cloud (VPC)
   * containing the resources you are using for the job. For more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
   * VPC</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/VpcConfig">AWS
   * API Reference</a></p>
   */
  class VpcConfig
  {
  public:
    AWS_COMPREHEND_API VpcConfig();
    AWS_COMPREHEND_API VpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline VpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline VpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline VpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline VpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID number for a security group on an instance of your private VPC.
     * Security groups on your VPC function serve as a virtual firewall to control
     * inbound and outbound traffic and provides security for the resources that you’ll
     * be accessing on the VPC. This ID number is preceded by "sg-", for instance:
     * "sg-03b388029b0a285ea". For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html">Security
     * Groups for your VPC</a>. </p>
     */
    inline VpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline VpcConfig& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline VpcConfig& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline VpcConfig& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline VpcConfig& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID for each subnet being used in your private VPC. This subnet is a
     * subset of the a range of IPv4 addresses used by the VPC and is specific to a
     * given availability zone in the VPC’s region. This ID number is preceded by
     * "subnet-", for instance: "subnet-04ccf456919e69055". For more information, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a>. </p>
     */
    inline VpcConfig& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
