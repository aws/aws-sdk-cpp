/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ComputeSavingsPlans.h>
#include <aws/cost-optimization-hub/model/EbsVolume.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroup.h>
#include <aws/cost-optimization-hub/model/Ec2Instance.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlans.h>
#include <aws/cost-optimization-hub/model/Ec2ReservedInstances.h>
#include <aws/cost-optimization-hub/model/EcsService.h>
#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstances.h>
#include <aws/cost-optimization-hub/model/LambdaFunction.h>
#include <aws/cost-optimization-hub/model/OpenSearchReservedInstances.h>
#include <aws/cost-optimization-hub/model/RdsReservedInstances.h>
#include <aws/cost-optimization-hub/model/RedshiftReservedInstances.h>
#include <aws/cost-optimization-hub/model/SageMakerSavingsPlans.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>Contains detailed information about the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails();
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline const ComputeSavingsPlans& GetComputeSavingsPlans() const{ return m_computeSavingsPlans; }

    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline bool ComputeSavingsPlansHasBeenSet() const { return m_computeSavingsPlansHasBeenSet; }

    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline void SetComputeSavingsPlans(const ComputeSavingsPlans& value) { m_computeSavingsPlansHasBeenSet = true; m_computeSavingsPlans = value; }

    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline void SetComputeSavingsPlans(ComputeSavingsPlans&& value) { m_computeSavingsPlansHasBeenSet = true; m_computeSavingsPlans = std::move(value); }

    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithComputeSavingsPlans(const ComputeSavingsPlans& value) { SetComputeSavingsPlans(value); return *this;}

    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithComputeSavingsPlans(ComputeSavingsPlans&& value) { SetComputeSavingsPlans(std::move(value)); return *this;}


    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline const EbsVolume& GetEbsVolume() const{ return m_ebsVolume; }

    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline bool EbsVolumeHasBeenSet() const { return m_ebsVolumeHasBeenSet; }

    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline void SetEbsVolume(const EbsVolume& value) { m_ebsVolumeHasBeenSet = true; m_ebsVolume = value; }

    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline void SetEbsVolume(EbsVolume&& value) { m_ebsVolumeHasBeenSet = true; m_ebsVolume = std::move(value); }

    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline ResourceDetails& WithEbsVolume(const EbsVolume& value) { SetEbsVolume(value); return *this;}

    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline ResourceDetails& WithEbsVolume(EbsVolume&& value) { SetEbsVolume(std::move(value)); return *this;}


    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline const Ec2AutoScalingGroup& GetEc2AutoScalingGroup() const{ return m_ec2AutoScalingGroup; }

    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline bool Ec2AutoScalingGroupHasBeenSet() const { return m_ec2AutoScalingGroupHasBeenSet; }

    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline void SetEc2AutoScalingGroup(const Ec2AutoScalingGroup& value) { m_ec2AutoScalingGroupHasBeenSet = true; m_ec2AutoScalingGroup = value; }

    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline void SetEc2AutoScalingGroup(Ec2AutoScalingGroup&& value) { m_ec2AutoScalingGroupHasBeenSet = true; m_ec2AutoScalingGroup = std::move(value); }

    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline ResourceDetails& WithEc2AutoScalingGroup(const Ec2AutoScalingGroup& value) { SetEc2AutoScalingGroup(value); return *this;}

    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline ResourceDetails& WithEc2AutoScalingGroup(Ec2AutoScalingGroup&& value) { SetEc2AutoScalingGroup(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline const Ec2Instance& GetEc2Instance() const{ return m_ec2Instance; }

    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }

    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline void SetEc2Instance(const Ec2Instance& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = value; }

    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline void SetEc2Instance(Ec2Instance&& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = std::move(value); }

    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline ResourceDetails& WithEc2Instance(const Ec2Instance& value) { SetEc2Instance(value); return *this;}

    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline ResourceDetails& WithEc2Instance(Ec2Instance&& value) { SetEc2Instance(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline const Ec2InstanceSavingsPlans& GetEc2InstanceSavingsPlans() const{ return m_ec2InstanceSavingsPlans; }

    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline bool Ec2InstanceSavingsPlansHasBeenSet() const { return m_ec2InstanceSavingsPlansHasBeenSet; }

    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline void SetEc2InstanceSavingsPlans(const Ec2InstanceSavingsPlans& value) { m_ec2InstanceSavingsPlansHasBeenSet = true; m_ec2InstanceSavingsPlans = value; }

    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline void SetEc2InstanceSavingsPlans(Ec2InstanceSavingsPlans&& value) { m_ec2InstanceSavingsPlansHasBeenSet = true; m_ec2InstanceSavingsPlans = std::move(value); }

    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithEc2InstanceSavingsPlans(const Ec2InstanceSavingsPlans& value) { SetEc2InstanceSavingsPlans(value); return *this;}

    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithEc2InstanceSavingsPlans(Ec2InstanceSavingsPlans&& value) { SetEc2InstanceSavingsPlans(std::move(value)); return *this;}


    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline const Ec2ReservedInstances& GetEc2ReservedInstances() const{ return m_ec2ReservedInstances; }

    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline bool Ec2ReservedInstancesHasBeenSet() const { return m_ec2ReservedInstancesHasBeenSet; }

    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline void SetEc2ReservedInstances(const Ec2ReservedInstances& value) { m_ec2ReservedInstancesHasBeenSet = true; m_ec2ReservedInstances = value; }

    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline void SetEc2ReservedInstances(Ec2ReservedInstances&& value) { m_ec2ReservedInstancesHasBeenSet = true; m_ec2ReservedInstances = std::move(value); }

    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithEc2ReservedInstances(const Ec2ReservedInstances& value) { SetEc2ReservedInstances(value); return *this;}

    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithEc2ReservedInstances(Ec2ReservedInstances&& value) { SetEc2ReservedInstances(std::move(value)); return *this;}


    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline const EcsService& GetEcsService() const{ return m_ecsService; }

    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline bool EcsServiceHasBeenSet() const { return m_ecsServiceHasBeenSet; }

    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline void SetEcsService(const EcsService& value) { m_ecsServiceHasBeenSet = true; m_ecsService = value; }

    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline void SetEcsService(EcsService&& value) { m_ecsServiceHasBeenSet = true; m_ecsService = std::move(value); }

    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline ResourceDetails& WithEcsService(const EcsService& value) { SetEcsService(value); return *this;}

    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline ResourceDetails& WithEcsService(EcsService&& value) { SetEcsService(std::move(value)); return *this;}


    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline const ElastiCacheReservedInstances& GetElastiCacheReservedInstances() const{ return m_elastiCacheReservedInstances; }

    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline bool ElastiCacheReservedInstancesHasBeenSet() const { return m_elastiCacheReservedInstancesHasBeenSet; }

    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline void SetElastiCacheReservedInstances(const ElastiCacheReservedInstances& value) { m_elastiCacheReservedInstancesHasBeenSet = true; m_elastiCacheReservedInstances = value; }

    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline void SetElastiCacheReservedInstances(ElastiCacheReservedInstances&& value) { m_elastiCacheReservedInstancesHasBeenSet = true; m_elastiCacheReservedInstances = std::move(value); }

    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithElastiCacheReservedInstances(const ElastiCacheReservedInstances& value) { SetElastiCacheReservedInstances(value); return *this;}

    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithElastiCacheReservedInstances(ElastiCacheReservedInstances&& value) { SetElastiCacheReservedInstances(std::move(value)); return *this;}


    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline const LambdaFunction& GetLambdaFunction() const{ return m_lambdaFunction; }

    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }

    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline void SetLambdaFunction(const LambdaFunction& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = value; }

    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline void SetLambdaFunction(LambdaFunction&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::move(value); }

    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline ResourceDetails& WithLambdaFunction(const LambdaFunction& value) { SetLambdaFunction(value); return *this;}

    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline ResourceDetails& WithLambdaFunction(LambdaFunction&& value) { SetLambdaFunction(std::move(value)); return *this;}


    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline const OpenSearchReservedInstances& GetOpenSearchReservedInstances() const{ return m_openSearchReservedInstances; }

    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline bool OpenSearchReservedInstancesHasBeenSet() const { return m_openSearchReservedInstancesHasBeenSet; }

    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline void SetOpenSearchReservedInstances(const OpenSearchReservedInstances& value) { m_openSearchReservedInstancesHasBeenSet = true; m_openSearchReservedInstances = value; }

    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline void SetOpenSearchReservedInstances(OpenSearchReservedInstances&& value) { m_openSearchReservedInstancesHasBeenSet = true; m_openSearchReservedInstances = std::move(value); }

    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithOpenSearchReservedInstances(const OpenSearchReservedInstances& value) { SetOpenSearchReservedInstances(value); return *this;}

    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithOpenSearchReservedInstances(OpenSearchReservedInstances&& value) { SetOpenSearchReservedInstances(std::move(value)); return *this;}


    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline const RdsReservedInstances& GetRdsReservedInstances() const{ return m_rdsReservedInstances; }

    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline bool RdsReservedInstancesHasBeenSet() const { return m_rdsReservedInstancesHasBeenSet; }

    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline void SetRdsReservedInstances(const RdsReservedInstances& value) { m_rdsReservedInstancesHasBeenSet = true; m_rdsReservedInstances = value; }

    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline void SetRdsReservedInstances(RdsReservedInstances&& value) { m_rdsReservedInstancesHasBeenSet = true; m_rdsReservedInstances = std::move(value); }

    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithRdsReservedInstances(const RdsReservedInstances& value) { SetRdsReservedInstances(value); return *this;}

    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithRdsReservedInstances(RdsReservedInstances&& value) { SetRdsReservedInstances(std::move(value)); return *this;}


    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline const RedshiftReservedInstances& GetRedshiftReservedInstances() const{ return m_redshiftReservedInstances; }

    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline bool RedshiftReservedInstancesHasBeenSet() const { return m_redshiftReservedInstancesHasBeenSet; }

    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline void SetRedshiftReservedInstances(const RedshiftReservedInstances& value) { m_redshiftReservedInstancesHasBeenSet = true; m_redshiftReservedInstances = value; }

    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline void SetRedshiftReservedInstances(RedshiftReservedInstances&& value) { m_redshiftReservedInstancesHasBeenSet = true; m_redshiftReservedInstances = std::move(value); }

    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithRedshiftReservedInstances(const RedshiftReservedInstances& value) { SetRedshiftReservedInstances(value); return *this;}

    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline ResourceDetails& WithRedshiftReservedInstances(RedshiftReservedInstances&& value) { SetRedshiftReservedInstances(std::move(value)); return *this;}


    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline const SageMakerSavingsPlans& GetSageMakerSavingsPlans() const{ return m_sageMakerSavingsPlans; }

    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline bool SageMakerSavingsPlansHasBeenSet() const { return m_sageMakerSavingsPlansHasBeenSet; }

    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline void SetSageMakerSavingsPlans(const SageMakerSavingsPlans& value) { m_sageMakerSavingsPlansHasBeenSet = true; m_sageMakerSavingsPlans = value; }

    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline void SetSageMakerSavingsPlans(SageMakerSavingsPlans&& value) { m_sageMakerSavingsPlansHasBeenSet = true; m_sageMakerSavingsPlans = std::move(value); }

    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithSageMakerSavingsPlans(const SageMakerSavingsPlans& value) { SetSageMakerSavingsPlans(value); return *this;}

    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline ResourceDetails& WithSageMakerSavingsPlans(SageMakerSavingsPlans&& value) { SetSageMakerSavingsPlans(std::move(value)); return *this;}

  private:

    ComputeSavingsPlans m_computeSavingsPlans;
    bool m_computeSavingsPlansHasBeenSet = false;

    EbsVolume m_ebsVolume;
    bool m_ebsVolumeHasBeenSet = false;

    Ec2AutoScalingGroup m_ec2AutoScalingGroup;
    bool m_ec2AutoScalingGroupHasBeenSet = false;

    Ec2Instance m_ec2Instance;
    bool m_ec2InstanceHasBeenSet = false;

    Ec2InstanceSavingsPlans m_ec2InstanceSavingsPlans;
    bool m_ec2InstanceSavingsPlansHasBeenSet = false;

    Ec2ReservedInstances m_ec2ReservedInstances;
    bool m_ec2ReservedInstancesHasBeenSet = false;

    EcsService m_ecsService;
    bool m_ecsServiceHasBeenSet = false;

    ElastiCacheReservedInstances m_elastiCacheReservedInstances;
    bool m_elastiCacheReservedInstancesHasBeenSet = false;

    LambdaFunction m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;

    OpenSearchReservedInstances m_openSearchReservedInstances;
    bool m_openSearchReservedInstancesHasBeenSet = false;

    RdsReservedInstances m_rdsReservedInstances;
    bool m_rdsReservedInstancesHasBeenSet = false;

    RedshiftReservedInstances m_redshiftReservedInstances;
    bool m_redshiftReservedInstancesHasBeenSet = false;

    SageMakerSavingsPlans m_sageMakerSavingsPlans;
    bool m_sageMakerSavingsPlansHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
