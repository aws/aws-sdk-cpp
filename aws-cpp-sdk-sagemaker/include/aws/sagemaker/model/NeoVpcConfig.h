/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The <a>VpcConfig</a> configuration object that specifies the VPC that you
   * want the compilation jobs to connect to. For more information on controlling
   * access to your Amazon S3 buckets used for compilation job, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Give Amazon
   * SageMaker Compilation Jobs Access to Resources in Your Amazon
   * VPC</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NeoVpcConfig">AWS
   * API Reference</a></p>
   */
  class NeoVpcConfig
  {
  public:
    AWS_SAGEMAKER_API NeoVpcConfig();
    AWS_SAGEMAKER_API NeoVpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NeoVpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline NeoVpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline NeoVpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline NeoVpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline NeoVpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security group IDs. IDs have the form of <code>sg-xxxxxxxx</code>.
     * Specify the security groups for the VPC that is specified in the
     * <code>Subnets</code> field.</p>
     */
    inline NeoVpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline NeoVpcConfig& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline NeoVpcConfig& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline NeoVpcConfig& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline NeoVpcConfig& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnets in the VPC that you want to connect the compilation job
     * to for accessing the model in Amazon S3.</p>
     */
    inline NeoVpcConfig& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
