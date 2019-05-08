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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a VPC that your training jobs and hosted models have access to.
   * Control access to and from your training and model containers by configuring the
   * VPC. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/host-vpc.html">Protect
   * Endpoints by Using an Amazon Virtual Private Cloud</a> and <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
   * Training Jobs by Using an Amazon Virtual Private Cloud</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/VpcConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API VpcConfig
  {
  public:
    VpcConfig();
    VpcConfig(Aws::Utils::Json::JsonView jsonValue);
    VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline VpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline VpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. Specify the security
     * groups for the VPC that is specified in the <code>Subnets</code> field.</p>
     */
    inline VpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline VpcConfig& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline VpcConfig& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline VpcConfig& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline VpcConfig& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnets in the VPC to which you want to connect your training
     * job or model. </p> <note> <p>Amazon EC2 P3 accelerated computing instances are
     * not available in the c/d/e availability zones of region us-east-1. If you want
     * to create endpoints with P3 instances in VPC mode in region us-east-1, create
     * subnets in a/b/f availability zones instead.</p> </note>
     */
    inline VpcConfig& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
