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
    AWS_BATCH_API NodePropertyOverride();
    AWS_BATCH_API NodePropertyOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodePropertyOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline const Aws::String& GetTargetNodes() const{ return m_targetNodes; }

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(const Aws::String& value) { m_targetNodesHasBeenSet = true; m_targetNodes = value; }

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(Aws::String&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::move(value); }

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(const char* value) { m_targetNodesHasBeenSet = true; m_targetNodes.assign(value); }

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(const Aws::String& value) { SetTargetNodes(value); return *this;}

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(Aws::String&& value) { SetTargetNodes(std::move(value)); return *this;}

    /**
     * <p>The range of nodes, using node index values, that's used to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(const char* value) { SetTargetNodes(value); return *this;}


    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline const ContainerOverrides& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline void SetContainerOverrides(const ContainerOverrides& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline void SetContainerOverrides(ContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline NodePropertyOverride& WithContainerOverrides(const ContainerOverrides& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>The overrides that are sent to a node range.</p>
     */
    inline NodePropertyOverride& WithContainerOverrides(ContainerOverrides&& value) { SetContainerOverrides(std::move(value)); return *this;}


    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline const EcsPropertiesOverride& GetEcsPropertiesOverride() const{ return m_ecsPropertiesOverride; }

    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline bool EcsPropertiesOverrideHasBeenSet() const { return m_ecsPropertiesOverrideHasBeenSet; }

    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline void SetEcsPropertiesOverride(const EcsPropertiesOverride& value) { m_ecsPropertiesOverrideHasBeenSet = true; m_ecsPropertiesOverride = value; }

    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline void SetEcsPropertiesOverride(EcsPropertiesOverride&& value) { m_ecsPropertiesOverrideHasBeenSet = true; m_ecsPropertiesOverride = std::move(value); }

    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline NodePropertyOverride& WithEcsPropertiesOverride(const EcsPropertiesOverride& value) { SetEcsPropertiesOverride(value); return *this;}

    /**
     * <p>An object that contains the properties that you want to replace for the
     * existing Amazon ECS resources of a job.</p>
     */
    inline NodePropertyOverride& WithEcsPropertiesOverride(EcsPropertiesOverride&& value) { SetEcsPropertiesOverride(std::move(value)); return *this;}


    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline NodePropertyOverride& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline NodePropertyOverride& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline NodePropertyOverride& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline NodePropertyOverride& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>An object that contains the instance types that you want to replace for the
     * existing resources of a job.</p>
     */
    inline NodePropertyOverride& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

  private:

    Aws::String m_targetNodes;
    bool m_targetNodesHasBeenSet = false;

    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    EcsPropertiesOverride m_ecsPropertiesOverride;
    bool m_ecsPropertiesOverrideHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
