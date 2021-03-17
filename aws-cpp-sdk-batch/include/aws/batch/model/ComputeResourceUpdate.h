/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing the attributes of a compute environment that can be
   * updated. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
   * Environments</a> in the <i>AWS Batch User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeResourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ComputeResourceUpdate
  {
  public:
    ComputeResourceUpdate();
    ComputeResourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    ComputeResourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should
     * maintain.</p>  <p>This parameter isn't applicable to jobs running on
     * Fargate resources, and shouldn't be specified.</p> 
     */
    inline int GetMinvCpus() const{ return m_minvCpus; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should
     * maintain.</p>  <p>This parameter isn't applicable to jobs running on
     * Fargate resources, and shouldn't be specified.</p> 
     */
    inline bool MinvCpusHasBeenSet() const { return m_minvCpusHasBeenSet; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should
     * maintain.</p>  <p>This parameter isn't applicable to jobs running on
     * Fargate resources, and shouldn't be specified.</p> 
     */
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should
     * maintain.</p>  <p>This parameter isn't applicable to jobs running on
     * Fargate resources, and shouldn't be specified.</p> 
     */
    inline ComputeResourceUpdate& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}


    /**
     * <p>The maximum number of Amazon EC2 vCPUs that an environment can reach.</p>
     *  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies, AWS Batch might need
     * to exceed <code>maxvCpus</code> to meet your capacity requirements. In this
     * event, AWS Batch never exceeds <code>maxvCpus</code> by more than a single
     * instance. That is, no more than a single instance from among those specified in
     * your compute environment.</p> 
     */
    inline int GetMaxvCpus() const{ return m_maxvCpus; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that an environment can reach.</p>
     *  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies, AWS Batch might need
     * to exceed <code>maxvCpus</code> to meet your capacity requirements. In this
     * event, AWS Batch never exceeds <code>maxvCpus</code> by more than a single
     * instance. That is, no more than a single instance from among those specified in
     * your compute environment.</p> 
     */
    inline bool MaxvCpusHasBeenSet() const { return m_maxvCpusHasBeenSet; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that an environment can reach.</p>
     *  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies, AWS Batch might need
     * to exceed <code>maxvCpus</code> to meet your capacity requirements. In this
     * event, AWS Batch never exceeds <code>maxvCpus</code> by more than a single
     * instance. That is, no more than a single instance from among those specified in
     * your compute environment.</p> 
     */
    inline void SetMaxvCpus(int value) { m_maxvCpusHasBeenSet = true; m_maxvCpus = value; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that an environment can reach.</p>
     *  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies, AWS Batch might need
     * to exceed <code>maxvCpus</code> to meet your capacity requirements. In this
     * event, AWS Batch never exceeds <code>maxvCpus</code> by more than a single
     * instance. That is, no more than a single instance from among those specified in
     * your compute environment.</p> 
     */
    inline ComputeResourceUpdate& WithMaxvCpus(int value) { SetMaxvCpus(value); return *this;}


    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment.</p> 
     * <p>This parameter isn't applicable to jobs running on Fargate resources, and
     * shouldn't be specified.</p> 
     */
    inline int GetDesiredvCpus() const{ return m_desiredvCpus; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment.</p> 
     * <p>This parameter isn't applicable to jobs running on Fargate resources, and
     * shouldn't be specified.</p> 
     */
    inline bool DesiredvCpusHasBeenSet() const { return m_desiredvCpusHasBeenSet; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment.</p> 
     * <p>This parameter isn't applicable to jobs running on Fargate resources, and
     * shouldn't be specified.</p> 
     */
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment.</p> 
     * <p>This parameter isn't applicable to jobs running on Fargate resources, and
     * shouldn't be specified.</p> 
     */
    inline ComputeResourceUpdate& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}


    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline ComputeResourceUpdate& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline ComputeResourceUpdate& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline ComputeResourceUpdate& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline ComputeResourceUpdate& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets that the compute resources are launched into. Fargate compute
     * resources can contain up to 16 subnets. Providing an empty list will be handled
     * as if this parameter wasn't specified and no change is made. This can't be
     * specified for EC2 compute resources. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and Subnets</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline ComputeResourceUpdate& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline ComputeResourceUpdate& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline ComputeResourceUpdate& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline ComputeResourceUpdate& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline ComputeResourceUpdate& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 security groups associated with instances launched in the
     * compute environment. This parameter is required for Fargate compute resources,
     * where it can contain up to 5 security groups. This can't be specified for EC2
     * compute resources. Providing an empty list is handled as if this parameter
     * wasn't specified and no change is made.</p>
     */
    inline ComputeResourceUpdate& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    int m_minvCpus;
    bool m_minvCpusHasBeenSet;

    int m_maxvCpus;
    bool m_maxvCpusHasBeenSet;

    int m_desiredvCpus;
    bool m_desiredvCpusHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
