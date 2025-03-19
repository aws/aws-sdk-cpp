/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ContainerProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EcsProperties.h>
#include <aws/batch/model/EksProperties.h>
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
   * <p>This is an object that represents the properties of the node range for a
   * multi-node parallel job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeRangeProperty">AWS
   * API Reference</a></p>
   */
  class NodeRangeProperty
  {
  public:
    AWS_BATCH_API NodeRangeProperty() = default;
    AWS_BATCH_API NodeRangeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeRangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline const Aws::String& GetTargetNodes() const { return m_targetNodes; }
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }
    template<typename TargetNodesT = Aws::String>
    void SetTargetNodes(TargetNodesT&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::forward<TargetNodesT>(value); }
    template<typename TargetNodesT = Aws::String>
    NodeRangeProperty& WithTargetNodes(TargetNodesT&& value) { SetTargetNodes(std::forward<TargetNodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container details for the node range.</p>
     */
    inline const ContainerProperties& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = ContainerProperties>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = ContainerProperties>
    NodeRangeProperty& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types of the underlying host infrastructure of a multi-node
     * parallel job.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources.</p> <p>In addition, this list object is currently
     * limited to one element.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    NodeRangeProperty& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    NodeRangeProperty& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is an object that represents the properties of the node range for a
     * multi-node parallel job.</p>
     */
    inline const EcsProperties& GetEcsProperties() const { return m_ecsProperties; }
    inline bool EcsPropertiesHasBeenSet() const { return m_ecsPropertiesHasBeenSet; }
    template<typename EcsPropertiesT = EcsProperties>
    void SetEcsProperties(EcsPropertiesT&& value) { m_ecsPropertiesHasBeenSet = true; m_ecsProperties = std::forward<EcsPropertiesT>(value); }
    template<typename EcsPropertiesT = EcsProperties>
    NodeRangeProperty& WithEcsProperties(EcsPropertiesT&& value) { SetEcsProperties(std::forward<EcsPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an object that represents the properties of the node range for a
     * multi-node parallel job.</p>
     */
    inline const EksProperties& GetEksProperties() const { return m_eksProperties; }
    inline bool EksPropertiesHasBeenSet() const { return m_eksPropertiesHasBeenSet; }
    template<typename EksPropertiesT = EksProperties>
    void SetEksProperties(EksPropertiesT&& value) { m_eksPropertiesHasBeenSet = true; m_eksProperties = std::forward<EksPropertiesT>(value); }
    template<typename EksPropertiesT = EksProperties>
    NodeRangeProperty& WithEksProperties(EksPropertiesT&& value) { SetEksProperties(std::forward<EksPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of consumable resources required by a job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourceProperties() const { return m_consumableResourceProperties; }
    inline bool ConsumableResourcePropertiesHasBeenSet() const { return m_consumableResourcePropertiesHasBeenSet; }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    void SetConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { m_consumableResourcePropertiesHasBeenSet = true; m_consumableResourceProperties = std::forward<ConsumableResourcePropertiesT>(value); }
    template<typename ConsumableResourcePropertiesT = ConsumableResourceProperties>
    NodeRangeProperty& WithConsumableResourceProperties(ConsumableResourcePropertiesT&& value) { SetConsumableResourceProperties(std::forward<ConsumableResourcePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetNodes;
    bool m_targetNodesHasBeenSet = false;

    ContainerProperties m_container;
    bool m_containerHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    EcsProperties m_ecsProperties;
    bool m_ecsPropertiesHasBeenSet = false;

    EksProperties m_eksProperties;
    bool m_eksPropertiesHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourceProperties;
    bool m_consumableResourcePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
