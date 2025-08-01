/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/CustomActionLambdaConfiguration.h>
#include <aws/arc-region-switch/model/Ec2AsgCapacityIncreaseConfiguration.h>
#include <aws/arc-region-switch/model/ExecutionApprovalConfiguration.h>
#include <aws/arc-region-switch/model/ArcRoutingControlConfiguration.h>
#include <aws/arc-region-switch/model/GlobalAuroraConfiguration.h>
#include <aws/arc-region-switch/model/RegionSwitchPlanConfiguration.h>
#include <aws/arc-region-switch/model/EcsCapacityIncreaseConfiguration.h>
#include <aws/arc-region-switch/model/EksResourceScalingConfiguration.h>
#include <aws/arc-region-switch/model/Route53HealthCheckConfiguration.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class ParallelExecutionBlockConfiguration;

  /**
   * <p>Execution block configurations for a workflow in a Region switch plan. An
   * execution block represents a specific type of action to perform during a Region
   * switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ExecutionBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecutionBlockConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API ExecutionBlockConfiguration() = default;
    AWS_ARCREGIONSWITCH_API ExecutionBlockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ExecutionBlockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Web Services Lambda execution block.</p>
     */
    inline const CustomActionLambdaConfiguration& GetCustomActionLambdaConfig() const { return m_customActionLambdaConfig; }
    inline bool CustomActionLambdaConfigHasBeenSet() const { return m_customActionLambdaConfigHasBeenSet; }
    template<typename CustomActionLambdaConfigT = CustomActionLambdaConfiguration>
    void SetCustomActionLambdaConfig(CustomActionLambdaConfigT&& value) { m_customActionLambdaConfigHasBeenSet = true; m_customActionLambdaConfig = std::forward<CustomActionLambdaConfigT>(value); }
    template<typename CustomActionLambdaConfigT = CustomActionLambdaConfiguration>
    ExecutionBlockConfiguration& WithCustomActionLambdaConfig(CustomActionLambdaConfigT&& value) { SetCustomActionLambdaConfig(std::forward<CustomActionLambdaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An EC2 Auto Scaling group execution block.</p>
     */
    inline const Ec2AsgCapacityIncreaseConfiguration& GetEc2AsgCapacityIncreaseConfig() const { return m_ec2AsgCapacityIncreaseConfig; }
    inline bool Ec2AsgCapacityIncreaseConfigHasBeenSet() const { return m_ec2AsgCapacityIncreaseConfigHasBeenSet; }
    template<typename Ec2AsgCapacityIncreaseConfigT = Ec2AsgCapacityIncreaseConfiguration>
    void SetEc2AsgCapacityIncreaseConfig(Ec2AsgCapacityIncreaseConfigT&& value) { m_ec2AsgCapacityIncreaseConfigHasBeenSet = true; m_ec2AsgCapacityIncreaseConfig = std::forward<Ec2AsgCapacityIncreaseConfigT>(value); }
    template<typename Ec2AsgCapacityIncreaseConfigT = Ec2AsgCapacityIncreaseConfiguration>
    ExecutionBlockConfiguration& WithEc2AsgCapacityIncreaseConfig(Ec2AsgCapacityIncreaseConfigT&& value) { SetEc2AsgCapacityIncreaseConfig(std::forward<Ec2AsgCapacityIncreaseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A manual approval execution block.</p>
     */
    inline const ExecutionApprovalConfiguration& GetExecutionApprovalConfig() const { return m_executionApprovalConfig; }
    inline bool ExecutionApprovalConfigHasBeenSet() const { return m_executionApprovalConfigHasBeenSet; }
    template<typename ExecutionApprovalConfigT = ExecutionApprovalConfiguration>
    void SetExecutionApprovalConfig(ExecutionApprovalConfigT&& value) { m_executionApprovalConfigHasBeenSet = true; m_executionApprovalConfig = std::forward<ExecutionApprovalConfigT>(value); }
    template<typename ExecutionApprovalConfigT = ExecutionApprovalConfiguration>
    ExecutionBlockConfiguration& WithExecutionApprovalConfig(ExecutionApprovalConfigT&& value) { SetExecutionApprovalConfig(std::forward<ExecutionApprovalConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ARC routing control execution block.</p>
     */
    inline const ArcRoutingControlConfiguration& GetArcRoutingControlConfig() const { return m_arcRoutingControlConfig; }
    inline bool ArcRoutingControlConfigHasBeenSet() const { return m_arcRoutingControlConfigHasBeenSet; }
    template<typename ArcRoutingControlConfigT = ArcRoutingControlConfiguration>
    void SetArcRoutingControlConfig(ArcRoutingControlConfigT&& value) { m_arcRoutingControlConfigHasBeenSet = true; m_arcRoutingControlConfig = std::forward<ArcRoutingControlConfigT>(value); }
    template<typename ArcRoutingControlConfigT = ArcRoutingControlConfiguration>
    ExecutionBlockConfiguration& WithArcRoutingControlConfig(ArcRoutingControlConfigT&& value) { SetArcRoutingControlConfig(std::forward<ArcRoutingControlConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Aurora Global Database execution block.</p>
     */
    inline const GlobalAuroraConfiguration& GetGlobalAuroraConfig() const { return m_globalAuroraConfig; }
    inline bool GlobalAuroraConfigHasBeenSet() const { return m_globalAuroraConfigHasBeenSet; }
    template<typename GlobalAuroraConfigT = GlobalAuroraConfiguration>
    void SetGlobalAuroraConfig(GlobalAuroraConfigT&& value) { m_globalAuroraConfigHasBeenSet = true; m_globalAuroraConfig = std::forward<GlobalAuroraConfigT>(value); }
    template<typename GlobalAuroraConfigT = GlobalAuroraConfiguration>
    ExecutionBlockConfiguration& WithGlobalAuroraConfig(GlobalAuroraConfigT&& value) { SetGlobalAuroraConfig(std::forward<GlobalAuroraConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parallel configuration execution block.</p>
     */
    inline const ParallelExecutionBlockConfiguration& GetParallelConfig() const{
      return *m_parallelConfig;
    }
    inline bool ParallelConfigHasBeenSet() const { return m_parallelConfigHasBeenSet; }
    template<typename ParallelConfigT = ParallelExecutionBlockConfiguration>
    void SetParallelConfig(ParallelConfigT&& value) {
      m_parallelConfigHasBeenSet = true; 
      m_parallelConfig = Aws::MakeShared<ParallelExecutionBlockConfiguration>("ExecutionBlockConfiguration", std::forward<ParallelConfigT>(value));
    }
    template<typename ParallelConfigT = ParallelExecutionBlockConfiguration>
    ExecutionBlockConfiguration& WithParallelConfig(ParallelConfigT&& value) { SetParallelConfig(std::forward<ParallelConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Region switch plan execution block.</p>
     */
    inline const RegionSwitchPlanConfiguration& GetRegionSwitchPlanConfig() const { return m_regionSwitchPlanConfig; }
    inline bool RegionSwitchPlanConfigHasBeenSet() const { return m_regionSwitchPlanConfigHasBeenSet; }
    template<typename RegionSwitchPlanConfigT = RegionSwitchPlanConfiguration>
    void SetRegionSwitchPlanConfig(RegionSwitchPlanConfigT&& value) { m_regionSwitchPlanConfigHasBeenSet = true; m_regionSwitchPlanConfig = std::forward<RegionSwitchPlanConfigT>(value); }
    template<typename RegionSwitchPlanConfigT = RegionSwitchPlanConfiguration>
    ExecutionBlockConfiguration& WithRegionSwitchPlanConfig(RegionSwitchPlanConfigT&& value) { SetRegionSwitchPlanConfig(std::forward<RegionSwitchPlanConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity increase specified for the configuration.</p>
     */
    inline const EcsCapacityIncreaseConfiguration& GetEcsCapacityIncreaseConfig() const { return m_ecsCapacityIncreaseConfig; }
    inline bool EcsCapacityIncreaseConfigHasBeenSet() const { return m_ecsCapacityIncreaseConfigHasBeenSet; }
    template<typename EcsCapacityIncreaseConfigT = EcsCapacityIncreaseConfiguration>
    void SetEcsCapacityIncreaseConfig(EcsCapacityIncreaseConfigT&& value) { m_ecsCapacityIncreaseConfigHasBeenSet = true; m_ecsCapacityIncreaseConfig = std::forward<EcsCapacityIncreaseConfigT>(value); }
    template<typename EcsCapacityIncreaseConfigT = EcsCapacityIncreaseConfiguration>
    ExecutionBlockConfiguration& WithEcsCapacityIncreaseConfig(EcsCapacityIncreaseConfigT&& value) { SetEcsCapacityIncreaseConfig(std::forward<EcsCapacityIncreaseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services EKS resource scaling execution block.</p>
     */
    inline const EksResourceScalingConfiguration& GetEksResourceScalingConfig() const { return m_eksResourceScalingConfig; }
    inline bool EksResourceScalingConfigHasBeenSet() const { return m_eksResourceScalingConfigHasBeenSet; }
    template<typename EksResourceScalingConfigT = EksResourceScalingConfiguration>
    void SetEksResourceScalingConfig(EksResourceScalingConfigT&& value) { m_eksResourceScalingConfigHasBeenSet = true; m_eksResourceScalingConfig = std::forward<EksResourceScalingConfigT>(value); }
    template<typename EksResourceScalingConfigT = EksResourceScalingConfiguration>
    ExecutionBlockConfiguration& WithEksResourceScalingConfig(EksResourceScalingConfigT&& value) { SetEksResourceScalingConfig(std::forward<EksResourceScalingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 health check configuration.</p>
     */
    inline const Route53HealthCheckConfiguration& GetRoute53HealthCheckConfig() const { return m_route53HealthCheckConfig; }
    inline bool Route53HealthCheckConfigHasBeenSet() const { return m_route53HealthCheckConfigHasBeenSet; }
    template<typename Route53HealthCheckConfigT = Route53HealthCheckConfiguration>
    void SetRoute53HealthCheckConfig(Route53HealthCheckConfigT&& value) { m_route53HealthCheckConfigHasBeenSet = true; m_route53HealthCheckConfig = std::forward<Route53HealthCheckConfigT>(value); }
    template<typename Route53HealthCheckConfigT = Route53HealthCheckConfiguration>
    ExecutionBlockConfiguration& WithRoute53HealthCheckConfig(Route53HealthCheckConfigT&& value) { SetRoute53HealthCheckConfig(std::forward<Route53HealthCheckConfigT>(value)); return *this;}
    ///@}
  private:

    CustomActionLambdaConfiguration m_customActionLambdaConfig;
    bool m_customActionLambdaConfigHasBeenSet = false;

    Ec2AsgCapacityIncreaseConfiguration m_ec2AsgCapacityIncreaseConfig;
    bool m_ec2AsgCapacityIncreaseConfigHasBeenSet = false;

    ExecutionApprovalConfiguration m_executionApprovalConfig;
    bool m_executionApprovalConfigHasBeenSet = false;

    ArcRoutingControlConfiguration m_arcRoutingControlConfig;
    bool m_arcRoutingControlConfigHasBeenSet = false;

    GlobalAuroraConfiguration m_globalAuroraConfig;
    bool m_globalAuroraConfigHasBeenSet = false;

    std::shared_ptr<ParallelExecutionBlockConfiguration> m_parallelConfig;
    bool m_parallelConfigHasBeenSet = false;

    RegionSwitchPlanConfiguration m_regionSwitchPlanConfig;
    bool m_regionSwitchPlanConfigHasBeenSet = false;

    EcsCapacityIncreaseConfiguration m_ecsCapacityIncreaseConfig;
    bool m_ecsCapacityIncreaseConfigHasBeenSet = false;

    EksResourceScalingConfiguration m_eksResourceScalingConfig;
    bool m_eksResourceScalingConfigHasBeenSet = false;

    Route53HealthCheckConfiguration m_route53HealthCheckConfig;
    bool m_route53HealthCheckConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
