/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ContainerOverrides.h>
#include <aws/batch/model/EcsPropertiesOverride.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksPropertiesOverride.h>
#include <aws/batch/model/ConsumableResourceProperties.h>
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
   * <p>The object that represents any node overrides to a job definition that's used
   * in a <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_SubmitJob.html">SubmitJob</a>
   * API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodePropertyOverride">AWS
   * API Reference</a></p>
   */
  class NodePropertyOverride
  {
  public:
    AWS_BATCH_API NodePropertyOverride() = default;
    AWS_BATCH_API NodePropertyOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodePropertyOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline const Aws::String& GetTargetNodes() const { return m_targetNodes; }
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }
    template<typename TargetNodesT = Aws::String>
    void SetTargetNodes(TargetNodesT&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::forward<TargetNodesT>(value); }
    template<typename TargetNodesT = Aws::String>
    NodePropertyOverride& WithTargetNodes(TargetNodesT&& value) { SetTargetNodes(std::forward<TargetNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline const ContainerOverrides& GetContainerOverrides() const { return m_containerOverrides; }
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }
    template<typename ContainerOverridesT = ContainerOverrides>
    void SetContainerOverrides(ContainerOverridesT&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::forward<ContainerOverridesT>(value); }
    template<typename ContainerOverridesT = ContainerOverrides>
    NodePropertyOverride& WithContainerOverrides(ContainerOverridesT&& value) { SetContainerOverrides(std::forward<ContainerOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline const EcsPropertiesOverride& GetEcsPropertiesOverride() const { return m_ecsPropertiesOverride; }
    inline bool EcsPropertiesOverrideHasBeenSet() const { return m_ecsPropertiesOverrideHasBeenSet; }
    template<typename EcsPropertiesOverrideT = EcsPropertiesOverride>
    void SetEcsPropertiesOverride(EcsPropertiesOverrideT&& value) { m_ecsPropertiesOverrideHasBeenSet = true; m_ecsPropertiesOverride = std::forward<EcsPropertiesOverrideT>(value); }
    template<typename EcsPropertiesOverrideT = EcsPropertiesOverride>
    NodePropertyOverride& WithEcsPropertiesOverride(EcsPropertiesOverrideT&& value) { SetEcsPropertiesOverride(std::forward<EcsPropertiesOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    NodePropertyOverride& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    NodePropertyOverride& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon EKS resources of a job.</p>
     */
    inline const EksPropertiesOverride& GetEksPropertiesOverride() const { return m_eksPropertiesOverride; }
    inline bool EksPropertiesOverrideHasBeenSet() const { return m_eksPropertiesOverrideHasBeenSet; }
    template<typename EksPropertiesOverrideT = EksPropertiesOverride>
    void SetEksPropertiesOverride(EksPropertiesOverrideT&& value) { m_eksPropertiesOverrideHasBeenSet = true; m_eksPropertiesOverride = std::forward<EksPropertiesOverrideT>(value); }
    template<typename EksPropertiesOverrideT = EksPropertiesOverride>
    NodePropertyOverride& WithEksPropertiesOverride(EksPropertiesOverrideT&& value) { SetEksPropertiesOverride(std::forward<EksPropertiesOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains overrides for the consumable resources of a job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourcePropertiesOverride() const { return m_consumableResourcePropertiesOverride; }
    inline bool ConsumableResourcePropertiesOverrideHasBeenSet() const { return m_consumableResourcePropertiesOverrideHasBeenSet; }
    template<typename ConsumableResourcePropertiesOverrideT = ConsumableResourceProperties>
    void SetConsumableResourcePropertiesOverride(ConsumableResourcePropertiesOverrideT&& value) { m_consumableResourcePropertiesOverrideHasBeenSet = true; m_consumableResourcePropertiesOverride = std::forward<ConsumableResourcePropertiesOverrideT>(value); }
    template<typename ConsumableResourcePropertiesOverrideT = ConsumableResourceProperties>
    NodePropertyOverride& WithConsumableResourcePropertiesOverride(ConsumableResourcePropertiesOverrideT&& value) { SetConsumableResourcePropertiesOverride(std::forward<ConsumableResourcePropertiesOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetNodes;
    bool m_targetNodesHasBeenSet = false;

    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    EcsPropertiesOverride m_ecsPropertiesOverride;
    bool m_ecsPropertiesOverrideHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    EksPropertiesOverride m_eksPropertiesOverride;
    bool m_eksPropertiesOverrideHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourcePropertiesOverride;
    bool m_consumableResourcePropertiesOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
