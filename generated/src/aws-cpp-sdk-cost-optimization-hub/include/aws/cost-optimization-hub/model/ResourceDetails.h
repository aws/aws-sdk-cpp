/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/LambdaFunction.h>
#include <aws/cost-optimization-hub/model/EcsService.h>
#include <aws/cost-optimization-hub/model/Ec2Instance.h>
#include <aws/cost-optimization-hub/model/EbsVolume.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroup.h>
#include <aws/cost-optimization-hub/model/Ec2ReservedInstances.h>
#include <aws/cost-optimization-hub/model/RdsReservedInstances.h>
#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstances.h>
#include <aws/cost-optimization-hub/model/OpenSearchReservedInstances.h>
#include <aws/cost-optimization-hub/model/RedshiftReservedInstances.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlans.h>
#include <aws/cost-optimization-hub/model/ComputeSavingsPlans.h>
#include <aws/cost-optimization-hub/model/SageMakerSavingsPlans.h>
#include <aws/cost-optimization-hub/model/RdsDbInstance.h>
#include <aws/cost-optimization-hub/model/RdsDbInstanceStorage.h>
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


    ///@{
    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline const LambdaFunction& GetLambdaFunction() const{ return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    inline void SetLambdaFunction(const LambdaFunction& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = value; }
    inline void SetLambdaFunction(LambdaFunction&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::move(value); }
    inline ResourceDetails& WithLambdaFunction(const LambdaFunction& value) { SetLambdaFunction(value); return *this;}
    inline ResourceDetails& WithLambdaFunction(LambdaFunction&& value) { SetLambdaFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline const EcsService& GetEcsService() const{ return m_ecsService; }
    inline bool EcsServiceHasBeenSet() const { return m_ecsServiceHasBeenSet; }
    inline void SetEcsService(const EcsService& value) { m_ecsServiceHasBeenSet = true; m_ecsService = value; }
    inline void SetEcsService(EcsService&& value) { m_ecsServiceHasBeenSet = true; m_ecsService = std::move(value); }
    inline ResourceDetails& WithEcsService(const EcsService& value) { SetEcsService(value); return *this;}
    inline ResourceDetails& WithEcsService(EcsService&& value) { SetEcsService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline const Ec2Instance& GetEc2Instance() const{ return m_ec2Instance; }
    inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
    inline void SetEc2Instance(const Ec2Instance& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = value; }
    inline void SetEc2Instance(Ec2Instance&& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = std::move(value); }
    inline ResourceDetails& WithEc2Instance(const Ec2Instance& value) { SetEc2Instance(value); return *this;}
    inline ResourceDetails& WithEc2Instance(Ec2Instance&& value) { SetEc2Instance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline const EbsVolume& GetEbsVolume() const{ return m_ebsVolume; }
    inline bool EbsVolumeHasBeenSet() const { return m_ebsVolumeHasBeenSet; }
    inline void SetEbsVolume(const EbsVolume& value) { m_ebsVolumeHasBeenSet = true; m_ebsVolume = value; }
    inline void SetEbsVolume(EbsVolume&& value) { m_ebsVolumeHasBeenSet = true; m_ebsVolume = std::move(value); }
    inline ResourceDetails& WithEbsVolume(const EbsVolume& value) { SetEbsVolume(value); return *this;}
    inline ResourceDetails& WithEbsVolume(EbsVolume&& value) { SetEbsVolume(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline const Ec2AutoScalingGroup& GetEc2AutoScalingGroup() const{ return m_ec2AutoScalingGroup; }
    inline bool Ec2AutoScalingGroupHasBeenSet() const { return m_ec2AutoScalingGroupHasBeenSet; }
    inline void SetEc2AutoScalingGroup(const Ec2AutoScalingGroup& value) { m_ec2AutoScalingGroupHasBeenSet = true; m_ec2AutoScalingGroup = value; }
    inline void SetEc2AutoScalingGroup(Ec2AutoScalingGroup&& value) { m_ec2AutoScalingGroupHasBeenSet = true; m_ec2AutoScalingGroup = std::move(value); }
    inline ResourceDetails& WithEc2AutoScalingGroup(const Ec2AutoScalingGroup& value) { SetEc2AutoScalingGroup(value); return *this;}
    inline ResourceDetails& WithEc2AutoScalingGroup(Ec2AutoScalingGroup&& value) { SetEc2AutoScalingGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline const Ec2ReservedInstances& GetEc2ReservedInstances() const{ return m_ec2ReservedInstances; }
    inline bool Ec2ReservedInstancesHasBeenSet() const { return m_ec2ReservedInstancesHasBeenSet; }
    inline void SetEc2ReservedInstances(const Ec2ReservedInstances& value) { m_ec2ReservedInstancesHasBeenSet = true; m_ec2ReservedInstances = value; }
    inline void SetEc2ReservedInstances(Ec2ReservedInstances&& value) { m_ec2ReservedInstancesHasBeenSet = true; m_ec2ReservedInstances = std::move(value); }
    inline ResourceDetails& WithEc2ReservedInstances(const Ec2ReservedInstances& value) { SetEc2ReservedInstances(value); return *this;}
    inline ResourceDetails& WithEc2ReservedInstances(Ec2ReservedInstances&& value) { SetEc2ReservedInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline const RdsReservedInstances& GetRdsReservedInstances() const{ return m_rdsReservedInstances; }
    inline bool RdsReservedInstancesHasBeenSet() const { return m_rdsReservedInstancesHasBeenSet; }
    inline void SetRdsReservedInstances(const RdsReservedInstances& value) { m_rdsReservedInstancesHasBeenSet = true; m_rdsReservedInstances = value; }
    inline void SetRdsReservedInstances(RdsReservedInstances&& value) { m_rdsReservedInstancesHasBeenSet = true; m_rdsReservedInstances = std::move(value); }
    inline ResourceDetails& WithRdsReservedInstances(const RdsReservedInstances& value) { SetRdsReservedInstances(value); return *this;}
    inline ResourceDetails& WithRdsReservedInstances(RdsReservedInstances&& value) { SetRdsReservedInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline const ElastiCacheReservedInstances& GetElastiCacheReservedInstances() const{ return m_elastiCacheReservedInstances; }
    inline bool ElastiCacheReservedInstancesHasBeenSet() const { return m_elastiCacheReservedInstancesHasBeenSet; }
    inline void SetElastiCacheReservedInstances(const ElastiCacheReservedInstances& value) { m_elastiCacheReservedInstancesHasBeenSet = true; m_elastiCacheReservedInstances = value; }
    inline void SetElastiCacheReservedInstances(ElastiCacheReservedInstances&& value) { m_elastiCacheReservedInstancesHasBeenSet = true; m_elastiCacheReservedInstances = std::move(value); }
    inline ResourceDetails& WithElastiCacheReservedInstances(const ElastiCacheReservedInstances& value) { SetElastiCacheReservedInstances(value); return *this;}
    inline ResourceDetails& WithElastiCacheReservedInstances(ElastiCacheReservedInstances&& value) { SetElastiCacheReservedInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline const OpenSearchReservedInstances& GetOpenSearchReservedInstances() const{ return m_openSearchReservedInstances; }
    inline bool OpenSearchReservedInstancesHasBeenSet() const { return m_openSearchReservedInstancesHasBeenSet; }
    inline void SetOpenSearchReservedInstances(const OpenSearchReservedInstances& value) { m_openSearchReservedInstancesHasBeenSet = true; m_openSearchReservedInstances = value; }
    inline void SetOpenSearchReservedInstances(OpenSearchReservedInstances&& value) { m_openSearchReservedInstancesHasBeenSet = true; m_openSearchReservedInstances = std::move(value); }
    inline ResourceDetails& WithOpenSearchReservedInstances(const OpenSearchReservedInstances& value) { SetOpenSearchReservedInstances(value); return *this;}
    inline ResourceDetails& WithOpenSearchReservedInstances(OpenSearchReservedInstances&& value) { SetOpenSearchReservedInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline const RedshiftReservedInstances& GetRedshiftReservedInstances() const{ return m_redshiftReservedInstances; }
    inline bool RedshiftReservedInstancesHasBeenSet() const { return m_redshiftReservedInstancesHasBeenSet; }
    inline void SetRedshiftReservedInstances(const RedshiftReservedInstances& value) { m_redshiftReservedInstancesHasBeenSet = true; m_redshiftReservedInstances = value; }
    inline void SetRedshiftReservedInstances(RedshiftReservedInstances&& value) { m_redshiftReservedInstancesHasBeenSet = true; m_redshiftReservedInstances = std::move(value); }
    inline ResourceDetails& WithRedshiftReservedInstances(const RedshiftReservedInstances& value) { SetRedshiftReservedInstances(value); return *this;}
    inline ResourceDetails& WithRedshiftReservedInstances(RedshiftReservedInstances&& value) { SetRedshiftReservedInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline const Ec2InstanceSavingsPlans& GetEc2InstanceSavingsPlans() const{ return m_ec2InstanceSavingsPlans; }
    inline bool Ec2InstanceSavingsPlansHasBeenSet() const { return m_ec2InstanceSavingsPlansHasBeenSet; }
    inline void SetEc2InstanceSavingsPlans(const Ec2InstanceSavingsPlans& value) { m_ec2InstanceSavingsPlansHasBeenSet = true; m_ec2InstanceSavingsPlans = value; }
    inline void SetEc2InstanceSavingsPlans(Ec2InstanceSavingsPlans&& value) { m_ec2InstanceSavingsPlansHasBeenSet = true; m_ec2InstanceSavingsPlans = std::move(value); }
    inline ResourceDetails& WithEc2InstanceSavingsPlans(const Ec2InstanceSavingsPlans& value) { SetEc2InstanceSavingsPlans(value); return *this;}
    inline ResourceDetails& WithEc2InstanceSavingsPlans(Ec2InstanceSavingsPlans&& value) { SetEc2InstanceSavingsPlans(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline const ComputeSavingsPlans& GetComputeSavingsPlans() const{ return m_computeSavingsPlans; }
    inline bool ComputeSavingsPlansHasBeenSet() const { return m_computeSavingsPlansHasBeenSet; }
    inline void SetComputeSavingsPlans(const ComputeSavingsPlans& value) { m_computeSavingsPlansHasBeenSet = true; m_computeSavingsPlans = value; }
    inline void SetComputeSavingsPlans(ComputeSavingsPlans&& value) { m_computeSavingsPlansHasBeenSet = true; m_computeSavingsPlans = std::move(value); }
    inline ResourceDetails& WithComputeSavingsPlans(const ComputeSavingsPlans& value) { SetComputeSavingsPlans(value); return *this;}
    inline ResourceDetails& WithComputeSavingsPlans(ComputeSavingsPlans&& value) { SetComputeSavingsPlans(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SageMaker Savings Plans recommendation details.</p>
     */
    inline const SageMakerSavingsPlans& GetSageMakerSavingsPlans() const{ return m_sageMakerSavingsPlans; }
    inline bool SageMakerSavingsPlansHasBeenSet() const { return m_sageMakerSavingsPlansHasBeenSet; }
    inline void SetSageMakerSavingsPlans(const SageMakerSavingsPlans& value) { m_sageMakerSavingsPlansHasBeenSet = true; m_sageMakerSavingsPlans = value; }
    inline void SetSageMakerSavingsPlans(SageMakerSavingsPlans&& value) { m_sageMakerSavingsPlansHasBeenSet = true; m_sageMakerSavingsPlans = std::move(value); }
    inline ResourceDetails& WithSageMakerSavingsPlans(const SageMakerSavingsPlans& value) { SetSageMakerSavingsPlans(value); return *this;}
    inline ResourceDetails& WithSageMakerSavingsPlans(SageMakerSavingsPlans&& value) { SetSageMakerSavingsPlans(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance recommendation details.</p>
     */
    inline const RdsDbInstance& GetRdsDbInstance() const{ return m_rdsDbInstance; }
    inline bool RdsDbInstanceHasBeenSet() const { return m_rdsDbInstanceHasBeenSet; }
    inline void SetRdsDbInstance(const RdsDbInstance& value) { m_rdsDbInstanceHasBeenSet = true; m_rdsDbInstance = value; }
    inline void SetRdsDbInstance(RdsDbInstance&& value) { m_rdsDbInstanceHasBeenSet = true; m_rdsDbInstance = std::move(value); }
    inline ResourceDetails& WithRdsDbInstance(const RdsDbInstance& value) { SetRdsDbInstance(value); return *this;}
    inline ResourceDetails& WithRdsDbInstance(RdsDbInstance&& value) { SetRdsDbInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance storage recommendation details.</p>
     */
    inline const RdsDbInstanceStorage& GetRdsDbInstanceStorage() const{ return m_rdsDbInstanceStorage; }
    inline bool RdsDbInstanceStorageHasBeenSet() const { return m_rdsDbInstanceStorageHasBeenSet; }
    inline void SetRdsDbInstanceStorage(const RdsDbInstanceStorage& value) { m_rdsDbInstanceStorageHasBeenSet = true; m_rdsDbInstanceStorage = value; }
    inline void SetRdsDbInstanceStorage(RdsDbInstanceStorage&& value) { m_rdsDbInstanceStorageHasBeenSet = true; m_rdsDbInstanceStorage = std::move(value); }
    inline ResourceDetails& WithRdsDbInstanceStorage(const RdsDbInstanceStorage& value) { SetRdsDbInstanceStorage(value); return *this;}
    inline ResourceDetails& WithRdsDbInstanceStorage(RdsDbInstanceStorage&& value) { SetRdsDbInstanceStorage(std::move(value)); return *this;}
    ///@}
  private:

    LambdaFunction m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;

    EcsService m_ecsService;
    bool m_ecsServiceHasBeenSet = false;

    Ec2Instance m_ec2Instance;
    bool m_ec2InstanceHasBeenSet = false;

    EbsVolume m_ebsVolume;
    bool m_ebsVolumeHasBeenSet = false;

    Ec2AutoScalingGroup m_ec2AutoScalingGroup;
    bool m_ec2AutoScalingGroupHasBeenSet = false;

    Ec2ReservedInstances m_ec2ReservedInstances;
    bool m_ec2ReservedInstancesHasBeenSet = false;

    RdsReservedInstances m_rdsReservedInstances;
    bool m_rdsReservedInstancesHasBeenSet = false;

    ElastiCacheReservedInstances m_elastiCacheReservedInstances;
    bool m_elastiCacheReservedInstancesHasBeenSet = false;

    OpenSearchReservedInstances m_openSearchReservedInstances;
    bool m_openSearchReservedInstancesHasBeenSet = false;

    RedshiftReservedInstances m_redshiftReservedInstances;
    bool m_redshiftReservedInstancesHasBeenSet = false;

    Ec2InstanceSavingsPlans m_ec2InstanceSavingsPlans;
    bool m_ec2InstanceSavingsPlansHasBeenSet = false;

    ComputeSavingsPlans m_computeSavingsPlans;
    bool m_computeSavingsPlansHasBeenSet = false;

    SageMakerSavingsPlans m_sageMakerSavingsPlans;
    bool m_sageMakerSavingsPlansHasBeenSet = false;

    RdsDbInstance m_rdsDbInstance;
    bool m_rdsDbInstanceHasBeenSet = false;

    RdsDbInstanceStorage m_rdsDbInstanceStorage;
    bool m_rdsDbInstanceStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
