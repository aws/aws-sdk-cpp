/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/CRType.h>
#include <aws/batch/model/CRAllocationStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/LaunchTemplateSpecification.h>
#include <aws/batch/model/Ec2Configuration.h>
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
   * <p>An object that represents an Batch compute resource. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
   * environments</a> in the <i>Batch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeResource">AWS
   * API Reference</a></p>
   */
  class ComputeResource
  {
  public:
    AWS_BATCH_API ComputeResource();
    AWS_BATCH_API ComputeResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ComputeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const CRType& GetType() const{ return m_type; }

    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(const CRType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(CRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithType(const CRType& value) { SetType(value); return *this;}

    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithType(CRType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline const CRAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline void SetAllocationStrategy(const CRAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline void SetAllocationStrategy(CRAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline ComputeResource& WithAllocationStrategy(const CRAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The allocation strategy to use for the compute resource if not enough
     * instances of the best fitting instance type can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p>  <dl> <dt>BEST_FIT (default)</dt> <dd> <p>Batch selects an
     * instance type that best fits the needs of the jobs with a preference for the
     * lowest-cost instance type. If additional instances of the selected instance type
     * aren't available, Batch waits for the additional instances to be available. If
     * there aren't enough instances available or the user is reaching <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>, additional jobs aren't run until the currently running
     * jobs are completed. This allocation strategy keeps costs lower but can limit
     * scaling. If you're using Spot Fleets with <code>BEST_FIT</code>, the Spot Fleet
     * IAM Role must be specified. Compute resources that use a <code>BEST_FIT</code>
     * allocation strategy don't support infrastructure updates and can't update some
     * parameters. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> </dd>
     * <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects additional instance types
     * that are large enough to meet the requirements of the jobs in the queue. Its
     * preference is for instance types with lower cost vCPUs. If additional instances
     * of the previously selected instance types aren't available, Batch selects new
     * instance types.</p> </dd> <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects
     * one or more instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types that are less likely to
     * be interrupted. This allocation strategy is only available for Spot Instance
     * compute resources.</p> </dd> </dl> <p>With both
     * <code>BEST_FIT_PROGRESSIVE</code> and <code>SPOT_CAPACITY_OPTIMIZED</code>
     * strategies using On-Demand or Spot Instances, and the <code>BEST_FIT</code>
     * strategy using Spot Instances, Batch might need to exceed <code>maxvCpus</code>
     * to meet your capacity requirements. In this event, Batch never exceeds
     * <code>maxvCpus</code> by more than a single instance.</p>
     */
    inline ComputeResource& WithAllocationStrategy(CRAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should maintain
     * (even if the compute environment is <code>DISABLED</code>).</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline int GetMinvCpus() const{ return m_minvCpus; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should maintain
     * (even if the compute environment is <code>DISABLED</code>).</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline bool MinvCpusHasBeenSet() const { return m_minvCpusHasBeenSet; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should maintain
     * (even if the compute environment is <code>DISABLED</code>).</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }

    /**
     * <p>The minimum number of Amazon EC2 vCPUs that an environment should maintain
     * (even if the compute environment is <code>DISABLED</code>).</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}


    /**
     * <p>The maximum number of Amazon EC2 vCPUs that a compute environment can
     * reach.</p>  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies using On-Demand or
     * Spot Instances, and the <code>BEST_FIT</code> strategy using Spot Instances,
     * Batch might need to exceed <code>maxvCpus</code> to meet your capacity
     * requirements. In this event, Batch never exceeds <code>maxvCpus</code> by more
     * than a single instance. For example, no more than a single instance from among
     * those specified in your compute environment is allocated.</p> 
     */
    inline int GetMaxvCpus() const{ return m_maxvCpus; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that a compute environment can
     * reach.</p>  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies using On-Demand or
     * Spot Instances, and the <code>BEST_FIT</code> strategy using Spot Instances,
     * Batch might need to exceed <code>maxvCpus</code> to meet your capacity
     * requirements. In this event, Batch never exceeds <code>maxvCpus</code> by more
     * than a single instance. For example, no more than a single instance from among
     * those specified in your compute environment is allocated.</p> 
     */
    inline bool MaxvCpusHasBeenSet() const { return m_maxvCpusHasBeenSet; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that a compute environment can
     * reach.</p>  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies using On-Demand or
     * Spot Instances, and the <code>BEST_FIT</code> strategy using Spot Instances,
     * Batch might need to exceed <code>maxvCpus</code> to meet your capacity
     * requirements. In this event, Batch never exceeds <code>maxvCpus</code> by more
     * than a single instance. For example, no more than a single instance from among
     * those specified in your compute environment is allocated.</p> 
     */
    inline void SetMaxvCpus(int value) { m_maxvCpusHasBeenSet = true; m_maxvCpus = value; }

    /**
     * <p>The maximum number of Amazon EC2 vCPUs that a compute environment can
     * reach.</p>  <p>With both <code>BEST_FIT_PROGRESSIVE</code> and
     * <code>SPOT_CAPACITY_OPTIMIZED</code> allocation strategies using On-Demand or
     * Spot Instances, and the <code>BEST_FIT</code> strategy using Spot Instances,
     * Batch might need to exceed <code>maxvCpus</code> to meet your capacity
     * requirements. In this event, Batch never exceeds <code>maxvCpus</code> by more
     * than a single instance. For example, no more than a single instance from among
     * those specified in your compute environment is allocated.</p> 
     */
    inline ComputeResource& WithMaxvCpus(int value) { SetMaxvCpus(value); return *this;}


    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment. Batch
     * modifies this value between the minimum and maximum values based on job queue
     * demand.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline int GetDesiredvCpus() const{ return m_desiredvCpus; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment. Batch
     * modifies this value between the minimum and maximum values based on job queue
     * demand.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline bool DesiredvCpusHasBeenSet() const { return m_desiredvCpusHasBeenSet; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment. Batch
     * modifies this value between the minimum and maximum values based on job queue
     * demand.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }

    /**
     * <p>The desired number of Amazon EC2 vCPUS in the compute environment. Batch
     * modifies this value between the minimum and maximum values based on job queue
     * demand.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}


    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline ComputeResource& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline ComputeResource& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline ComputeResource& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline ComputeResource& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). You can also choose <code>optimal</code> to select
     * instance types (from the C4, M4, and R4 instance families) that match the demand
     * of your job queues.</p>  <p>This parameter isn't applicable to jobs that
     * are running on Fargate resources. Don't specify it.</p>   <p>When
     * you create a compute environment, the instance types that you select for the
     * compute environment must share the same architecture. For example, you can't mix
     * x86 and ARM instances in the same compute environment.</p>  
     * <p>Currently, <code>optimal</code> uses instance types from the C4, M4, and R4
     * instance families. In Regions that don't have instance types from those instance
     * families, instance types from the C5, M5, and R5 instance families are used.</p>
     * 
     */
    inline ComputeResource& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline ComputeResource& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline ComputeResource& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline ComputeResource& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline ComputeResource& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets where the compute resources are launched. These subnets must
     * be within the same VPC. Fargate compute resources can contain up to 16 subnets.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline ComputeResource& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline ComputeResource& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline ComputeResource& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline ComputeResource& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline ComputeResource& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. One or more security groups must be specified, either
     * in <code>securityGroupIds</code> or using a launch template referenced in
     * <code>launchTemplate</code>. This parameter is required for jobs that are
     * running on Fargate resources and must contain at least one security group.
     * Fargate doesn't support launch templates. If security groups are specified using
     * both <code>securityGroupIds</code> and <code>launchTemplate</code>, the values
     * in <code>securityGroupIds</code> are used.</p>
     */
    inline ComputeResource& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline const Aws::String& GetEc2KeyPair() const{ return m_ec2KeyPair; }

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline bool Ec2KeyPairHasBeenSet() const { return m_ec2KeyPairHasBeenSet; }

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetEc2KeyPair(const Aws::String& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = value; }

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetEc2KeyPair(Aws::String&& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = std::move(value); }

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetEc2KeyPair(const char* value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair.assign(value); }

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithEc2KeyPair(const Aws::String& value) { SetEc2KeyPair(value); return *this;}

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithEc2KeyPair(Aws::String&& value) { SetEc2KeyPair(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithEc2KeyPair(const char* value) { SetEc2KeyPair(value); return *this;}


    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const Aws::String& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetInstanceRole(const Aws::String& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetInstanceRole(Aws::String&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetInstanceRole(const char* value) { m_instanceRoleHasBeenSet = true; m_instanceRole.assign(value); }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithInstanceRole(const Aws::String& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithInstanceRole(Aws::String&& value) { SetInstanceRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithInstanceRole(const char* value) { SetInstanceRole(value); return *this;}


    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to EC2 resources that are launched in the
     * compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value-for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>. This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. Updating these tags requires an
     * infrastructure update to the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. These tags aren't seen
     * when using the Batch <code>ListTagsForResource</code> API operation.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::move(value); }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}


    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be less
     * than 20% of the current On-Demand price for that Amazon EC2 instance. You always
     * pay the lowest (market) price and never more than your maximum percentage. If
     * you leave this field empty, the default value is 100% of the On-Demand price.
     * For most use cases, we recommend leaving this field empty.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline int GetBidPercentage() const{ return m_bidPercentage; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be less
     * than 20% of the current On-Demand price for that Amazon EC2 instance. You always
     * pay the lowest (market) price and never more than your maximum percentage. If
     * you leave this field empty, the default value is 100% of the On-Demand price.
     * For most use cases, we recommend leaving this field empty.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline bool BidPercentageHasBeenSet() const { return m_bidPercentageHasBeenSet; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be less
     * than 20% of the current On-Demand price for that Amazon EC2 instance. You always
     * pay the lowest (market) price and never more than your maximum percentage. If
     * you leave this field empty, the default value is 100% of the On-Demand price.
     * For most use cases, we recommend leaving this field empty.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetBidPercentage(int value) { m_bidPercentageHasBeenSet = true; m_bidPercentage = value; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be less
     * than 20% of the current On-Demand price for that Amazon EC2 instance. You always
     * pay the lowest (market) price and never more than your maximum percentage. If
     * you leave this field empty, the default value is 100% of the On-Demand price.
     * For most use cases, we recommend leaving this field empty.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithBidPercentage(int value) { SetBidPercentage(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetSpotIamFleetRole() const{ return m_spotIamFleetRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline bool SpotIamFleetRoleHasBeenSet() const { return m_spotIamFleetRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline void SetSpotIamFleetRole(const Aws::String& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline void SetSpotIamFleetRole(Aws::String&& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline void SetSpotIamFleetRole(const char* value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline ComputeResource& WithSpotIamFleetRole(const Aws::String& value) { SetSpotIamFleetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline ComputeResource& WithSpotIamFleetRole(Aws::String&& value) { SetSpotIamFleetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. This role is required if the
     * allocation strategy set to <code>BEST_FIT</code> or if the allocation strategy
     * isn't specified. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>To tag your Spot Instances on creation,
     * the Spot Fleet IAM role specified here must use the newer
     * <b>AmazonEC2SpotFleetTaggingRole</b> managed policy. The previously recommended
     * <b>AmazonEC2SpotFleetRole</b> managed policy doesn't have the required
     * permissions to tag Spot Instances. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#spot-instance-no-tag">Spot
     * instances not tagged on creation</a> in the <i>Batch User Guide</i>.</p>
     * 
     */
    inline ComputeResource& WithSpotIamFleetRole(const char* value) { SetSpotIamFleetRole(value); return *this;}


    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline ComputeResource& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline const Aws::Vector<Ec2Configuration>& GetEc2Configuration() const{ return m_ec2Configuration; }

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline void SetEc2Configuration(const Aws::Vector<Ec2Configuration>& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = value; }

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline void SetEc2Configuration(Aws::Vector<Ec2Configuration>&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = std::move(value); }

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithEc2Configuration(const Aws::Vector<Ec2Configuration>& value) { SetEc2Configuration(value); return *this;}

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline ComputeResource& WithEc2Configuration(Aws::Vector<Ec2Configuration>&& value) { SetEc2Configuration(std::move(value)); return *this;}

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddEc2Configuration(const Ec2Configuration& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration.push_back(value); return *this; }

    /**
     * <p>Provides information that's used to select Amazon Machine Images (AMIs) for
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>One or two values can be
     * provided.</p>  <p>This parameter isn't applicable to jobs that are running
     * on Fargate resources. Don't specify it.</p> 
     */
    inline ComputeResource& AddEc2Configuration(Ec2Configuration&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration.push_back(std::move(value)); return *this; }

  private:

    CRType m_type;
    bool m_typeHasBeenSet = false;

    CRAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    int m_minvCpus;
    bool m_minvCpusHasBeenSet = false;

    int m_maxvCpus;
    bool m_maxvCpusHasBeenSet = false;

    int m_desiredvCpus;
    bool m_desiredvCpusHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_ec2KeyPair;
    bool m_ec2KeyPairHasBeenSet = false;

    Aws::String m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet = false;

    int m_bidPercentage;
    bool m_bidPercentageHasBeenSet = false;

    Aws::String m_spotIamFleetRole;
    bool m_spotIamFleetRoleHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::Vector<Ec2Configuration> m_ec2Configuration;
    bool m_ec2ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
