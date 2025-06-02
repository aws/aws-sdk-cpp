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
#include <aws/cost-optimization-hub/model/AuroraDbClusterStorage.h>
#include <aws/cost-optimization-hub/model/DynamoDbReservedCapacity.h>
#include <aws/cost-optimization-hub/model/MemoryDbReservedInstances.h>
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
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails() = default;
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lambda function recommendation details.</p>
     */
    inline const LambdaFunction& GetLambdaFunction() const { return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    template<typename LambdaFunctionT = LambdaFunction>
    void SetLambdaFunction(LambdaFunctionT&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::forward<LambdaFunctionT>(value); }
    template<typename LambdaFunctionT = LambdaFunction>
    ResourceDetails& WithLambdaFunction(LambdaFunctionT&& value) { SetLambdaFunction(std::forward<LambdaFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ECS service recommendation details.</p>
     */
    inline const EcsService& GetEcsService() const { return m_ecsService; }
    inline bool EcsServiceHasBeenSet() const { return m_ecsServiceHasBeenSet; }
    template<typename EcsServiceT = EcsService>
    void SetEcsService(EcsServiceT&& value) { m_ecsServiceHasBeenSet = true; m_ecsService = std::forward<EcsServiceT>(value); }
    template<typename EcsServiceT = EcsService>
    ResourceDetails& WithEcsService(EcsServiceT&& value) { SetEcsService(std::forward<EcsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance recommendation details.</p>
     */
    inline const Ec2Instance& GetEc2Instance() const { return m_ec2Instance; }
    inline bool Ec2InstanceHasBeenSet() const { return m_ec2InstanceHasBeenSet; }
    template<typename Ec2InstanceT = Ec2Instance>
    void SetEc2Instance(Ec2InstanceT&& value) { m_ec2InstanceHasBeenSet = true; m_ec2Instance = std::forward<Ec2InstanceT>(value); }
    template<typename Ec2InstanceT = Ec2Instance>
    ResourceDetails& WithEc2Instance(Ec2InstanceT&& value) { SetEc2Instance(std::forward<Ec2InstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store volume recommendation details.</p>
     */
    inline const EbsVolume& GetEbsVolume() const { return m_ebsVolume; }
    inline bool EbsVolumeHasBeenSet() const { return m_ebsVolumeHasBeenSet; }
    template<typename EbsVolumeT = EbsVolume>
    void SetEbsVolume(EbsVolumeT&& value) { m_ebsVolumeHasBeenSet = true; m_ebsVolume = std::forward<EbsVolumeT>(value); }
    template<typename EbsVolumeT = EbsVolume>
    ResourceDetails& WithEbsVolume(EbsVolumeT&& value) { SetEbsVolume(std::forward<EbsVolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Auto Scaling group recommendation details.</p>
     */
    inline const Ec2AutoScalingGroup& GetEc2AutoScalingGroup() const { return m_ec2AutoScalingGroup; }
    inline bool Ec2AutoScalingGroupHasBeenSet() const { return m_ec2AutoScalingGroupHasBeenSet; }
    template<typename Ec2AutoScalingGroupT = Ec2AutoScalingGroup>
    void SetEc2AutoScalingGroup(Ec2AutoScalingGroupT&& value) { m_ec2AutoScalingGroupHasBeenSet = true; m_ec2AutoScalingGroup = std::forward<Ec2AutoScalingGroupT>(value); }
    template<typename Ec2AutoScalingGroupT = Ec2AutoScalingGroup>
    ResourceDetails& WithEc2AutoScalingGroup(Ec2AutoScalingGroupT&& value) { SetEc2AutoScalingGroup(std::forward<Ec2AutoScalingGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 reserved instances recommendation details.</p>
     */
    inline const Ec2ReservedInstances& GetEc2ReservedInstances() const { return m_ec2ReservedInstances; }
    inline bool Ec2ReservedInstancesHasBeenSet() const { return m_ec2ReservedInstancesHasBeenSet; }
    template<typename Ec2ReservedInstancesT = Ec2ReservedInstances>
    void SetEc2ReservedInstances(Ec2ReservedInstancesT&& value) { m_ec2ReservedInstancesHasBeenSet = true; m_ec2ReservedInstances = std::forward<Ec2ReservedInstancesT>(value); }
    template<typename Ec2ReservedInstancesT = Ec2ReservedInstances>
    ResourceDetails& WithEc2ReservedInstances(Ec2ReservedInstancesT&& value) { SetEc2ReservedInstances(std::forward<Ec2ReservedInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RDS reserved instances recommendation details.</p>
     */
    inline const RdsReservedInstances& GetRdsReservedInstances() const { return m_rdsReservedInstances; }
    inline bool RdsReservedInstancesHasBeenSet() const { return m_rdsReservedInstancesHasBeenSet; }
    template<typename RdsReservedInstancesT = RdsReservedInstances>
    void SetRdsReservedInstances(RdsReservedInstancesT&& value) { m_rdsReservedInstancesHasBeenSet = true; m_rdsReservedInstances = std::forward<RdsReservedInstancesT>(value); }
    template<typename RdsReservedInstancesT = RdsReservedInstances>
    ResourceDetails& WithRdsReservedInstances(RdsReservedInstancesT&& value) { SetRdsReservedInstances(std::forward<RdsReservedInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ElastiCache reserved instances recommendation details.</p>
     */
    inline const ElastiCacheReservedInstances& GetElastiCacheReservedInstances() const { return m_elastiCacheReservedInstances; }
    inline bool ElastiCacheReservedInstancesHasBeenSet() const { return m_elastiCacheReservedInstancesHasBeenSet; }
    template<typename ElastiCacheReservedInstancesT = ElastiCacheReservedInstances>
    void SetElastiCacheReservedInstances(ElastiCacheReservedInstancesT&& value) { m_elastiCacheReservedInstancesHasBeenSet = true; m_elastiCacheReservedInstances = std::forward<ElastiCacheReservedInstancesT>(value); }
    template<typename ElastiCacheReservedInstancesT = ElastiCacheReservedInstances>
    ResourceDetails& WithElastiCacheReservedInstances(ElastiCacheReservedInstancesT&& value) { SetElastiCacheReservedInstances(std::forward<ElastiCacheReservedInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenSearch reserved instances recommendation details.</p>
     */
    inline const OpenSearchReservedInstances& GetOpenSearchReservedInstances() const { return m_openSearchReservedInstances; }
    inline bool OpenSearchReservedInstancesHasBeenSet() const { return m_openSearchReservedInstancesHasBeenSet; }
    template<typename OpenSearchReservedInstancesT = OpenSearchReservedInstances>
    void SetOpenSearchReservedInstances(OpenSearchReservedInstancesT&& value) { m_openSearchReservedInstancesHasBeenSet = true; m_openSearchReservedInstances = std::forward<OpenSearchReservedInstancesT>(value); }
    template<typename OpenSearchReservedInstancesT = OpenSearchReservedInstances>
    ResourceDetails& WithOpenSearchReservedInstances(OpenSearchReservedInstancesT&& value) { SetOpenSearchReservedInstances(std::forward<OpenSearchReservedInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redshift reserved instances recommendation details.</p>
     */
    inline const RedshiftReservedInstances& GetRedshiftReservedInstances() const { return m_redshiftReservedInstances; }
    inline bool RedshiftReservedInstancesHasBeenSet() const { return m_redshiftReservedInstancesHasBeenSet; }
    template<typename RedshiftReservedInstancesT = RedshiftReservedInstances>
    void SetRedshiftReservedInstances(RedshiftReservedInstancesT&& value) { m_redshiftReservedInstancesHasBeenSet = true; m_redshiftReservedInstances = std::forward<RedshiftReservedInstancesT>(value); }
    template<typename RedshiftReservedInstancesT = RedshiftReservedInstances>
    ResourceDetails& WithRedshiftReservedInstances(RedshiftReservedInstancesT&& value) { SetRedshiftReservedInstances(std::forward<RedshiftReservedInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance Savings Plans recommendation details.</p>
     */
    inline const Ec2InstanceSavingsPlans& GetEc2InstanceSavingsPlans() const { return m_ec2InstanceSavingsPlans; }
    inline bool Ec2InstanceSavingsPlansHasBeenSet() const { return m_ec2InstanceSavingsPlansHasBeenSet; }
    template<typename Ec2InstanceSavingsPlansT = Ec2InstanceSavingsPlans>
    void SetEc2InstanceSavingsPlans(Ec2InstanceSavingsPlansT&& value) { m_ec2InstanceSavingsPlansHasBeenSet = true; m_ec2InstanceSavingsPlans = std::forward<Ec2InstanceSavingsPlansT>(value); }
    template<typename Ec2InstanceSavingsPlansT = Ec2InstanceSavingsPlans>
    ResourceDetails& WithEc2InstanceSavingsPlans(Ec2InstanceSavingsPlansT&& value) { SetEc2InstanceSavingsPlans(std::forward<Ec2InstanceSavingsPlansT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Compute Savings Plans recommendation details.</p>
     */
    inline const ComputeSavingsPlans& GetComputeSavingsPlans() const { return m_computeSavingsPlans; }
    inline bool ComputeSavingsPlansHasBeenSet() const { return m_computeSavingsPlansHasBeenSet; }
    template<typename ComputeSavingsPlansT = ComputeSavingsPlans>
    void SetComputeSavingsPlans(ComputeSavingsPlansT&& value) { m_computeSavingsPlansHasBeenSet = true; m_computeSavingsPlans = std::forward<ComputeSavingsPlansT>(value); }
    template<typename ComputeSavingsPlansT = ComputeSavingsPlans>
    ResourceDetails& WithComputeSavingsPlans(ComputeSavingsPlansT&& value) { SetComputeSavingsPlans(std::forward<ComputeSavingsPlansT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SageMaker AI Savings Plans recommendation details.</p>
     */
    inline const SageMakerSavingsPlans& GetSageMakerSavingsPlans() const { return m_sageMakerSavingsPlans; }
    inline bool SageMakerSavingsPlansHasBeenSet() const { return m_sageMakerSavingsPlansHasBeenSet; }
    template<typename SageMakerSavingsPlansT = SageMakerSavingsPlans>
    void SetSageMakerSavingsPlans(SageMakerSavingsPlansT&& value) { m_sageMakerSavingsPlansHasBeenSet = true; m_sageMakerSavingsPlans = std::forward<SageMakerSavingsPlansT>(value); }
    template<typename SageMakerSavingsPlansT = SageMakerSavingsPlans>
    ResourceDetails& WithSageMakerSavingsPlans(SageMakerSavingsPlansT&& value) { SetSageMakerSavingsPlans(std::forward<SageMakerSavingsPlansT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance recommendation details.</p>
     */
    inline const RdsDbInstance& GetRdsDbInstance() const { return m_rdsDbInstance; }
    inline bool RdsDbInstanceHasBeenSet() const { return m_rdsDbInstanceHasBeenSet; }
    template<typename RdsDbInstanceT = RdsDbInstance>
    void SetRdsDbInstance(RdsDbInstanceT&& value) { m_rdsDbInstanceHasBeenSet = true; m_rdsDbInstance = std::forward<RdsDbInstanceT>(value); }
    template<typename RdsDbInstanceT = RdsDbInstance>
    ResourceDetails& WithRdsDbInstance(RdsDbInstanceT&& value) { SetRdsDbInstance(std::forward<RdsDbInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance storage recommendation details.</p>
     */
    inline const RdsDbInstanceStorage& GetRdsDbInstanceStorage() const { return m_rdsDbInstanceStorage; }
    inline bool RdsDbInstanceStorageHasBeenSet() const { return m_rdsDbInstanceStorageHasBeenSet; }
    template<typename RdsDbInstanceStorageT = RdsDbInstanceStorage>
    void SetRdsDbInstanceStorage(RdsDbInstanceStorageT&& value) { m_rdsDbInstanceStorageHasBeenSet = true; m_rdsDbInstanceStorage = std::forward<RdsDbInstanceStorageT>(value); }
    template<typename RdsDbInstanceStorageT = RdsDbInstanceStorage>
    ResourceDetails& WithRdsDbInstanceStorage(RdsDbInstanceStorageT&& value) { SetRdsDbInstanceStorage(std::forward<RdsDbInstanceStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Aurora DB cluster storage recommendation details.</p>
     */
    inline const AuroraDbClusterStorage& GetAuroraDbClusterStorage() const { return m_auroraDbClusterStorage; }
    inline bool AuroraDbClusterStorageHasBeenSet() const { return m_auroraDbClusterStorageHasBeenSet; }
    template<typename AuroraDbClusterStorageT = AuroraDbClusterStorage>
    void SetAuroraDbClusterStorage(AuroraDbClusterStorageT&& value) { m_auroraDbClusterStorageHasBeenSet = true; m_auroraDbClusterStorage = std::forward<AuroraDbClusterStorageT>(value); }
    template<typename AuroraDbClusterStorageT = AuroraDbClusterStorage>
    ResourceDetails& WithAuroraDbClusterStorage(AuroraDbClusterStorageT&& value) { SetAuroraDbClusterStorage(std::forward<AuroraDbClusterStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DynamoDB reserved capacity recommendation details.</p>
     */
    inline const DynamoDbReservedCapacity& GetDynamoDbReservedCapacity() const { return m_dynamoDbReservedCapacity; }
    inline bool DynamoDbReservedCapacityHasBeenSet() const { return m_dynamoDbReservedCapacityHasBeenSet; }
    template<typename DynamoDbReservedCapacityT = DynamoDbReservedCapacity>
    void SetDynamoDbReservedCapacity(DynamoDbReservedCapacityT&& value) { m_dynamoDbReservedCapacityHasBeenSet = true; m_dynamoDbReservedCapacity = std::forward<DynamoDbReservedCapacityT>(value); }
    template<typename DynamoDbReservedCapacityT = DynamoDbReservedCapacity>
    ResourceDetails& WithDynamoDbReservedCapacity(DynamoDbReservedCapacityT&& value) { SetDynamoDbReservedCapacity(std::forward<DynamoDbReservedCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MemoryDB reserved instances recommendation details.</p>
     */
    inline const MemoryDbReservedInstances& GetMemoryDbReservedInstances() const { return m_memoryDbReservedInstances; }
    inline bool MemoryDbReservedInstancesHasBeenSet() const { return m_memoryDbReservedInstancesHasBeenSet; }
    template<typename MemoryDbReservedInstancesT = MemoryDbReservedInstances>
    void SetMemoryDbReservedInstances(MemoryDbReservedInstancesT&& value) { m_memoryDbReservedInstancesHasBeenSet = true; m_memoryDbReservedInstances = std::forward<MemoryDbReservedInstancesT>(value); }
    template<typename MemoryDbReservedInstancesT = MemoryDbReservedInstances>
    ResourceDetails& WithMemoryDbReservedInstances(MemoryDbReservedInstancesT&& value) { SetMemoryDbReservedInstances(std::forward<MemoryDbReservedInstancesT>(value)); return *this;}
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

    AuroraDbClusterStorage m_auroraDbClusterStorage;
    bool m_auroraDbClusterStorageHasBeenSet = false;

    DynamoDbReservedCapacity m_dynamoDbReservedCapacity;
    bool m_dynamoDbReservedCapacityHasBeenSet = false;

    MemoryDbReservedInstances m_memoryDbReservedInstances;
    bool m_memoryDbReservedInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
