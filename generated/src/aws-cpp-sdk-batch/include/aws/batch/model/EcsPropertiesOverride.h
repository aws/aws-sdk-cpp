/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/TaskPropertiesOverride.h>
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
   * <p>An object that contains overrides for the Amazon ECS task definition of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsPropertiesOverride">AWS
   * API Reference</a></p>
   */
  class EcsPropertiesOverride
  {
  public:
    AWS_BATCH_API EcsPropertiesOverride();
    AWS_BATCH_API EcsPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline const Aws::Vector<TaskPropertiesOverride>& GetTaskProperties() const{ return m_taskProperties; }

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline void SetTaskProperties(const Aws::Vector<TaskPropertiesOverride>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline void SetTaskProperties(Aws::Vector<TaskPropertiesOverride>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline EcsPropertiesOverride& WithTaskProperties(const Aws::Vector<TaskPropertiesOverride>& value) { SetTaskProperties(value); return *this;}

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline EcsPropertiesOverride& WithTaskProperties(Aws::Vector<TaskPropertiesOverride>&& value) { SetTaskProperties(std::move(value)); return *this;}

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline EcsPropertiesOverride& AddTaskProperties(const TaskPropertiesOverride& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(value); return *this; }

    /**
     * <p>The overrides for the Amazon ECS task definition of a job.</p>  <p>This
     * object is currently limited to one element.</p> 
     */
    inline EcsPropertiesOverride& AddTaskProperties(TaskPropertiesOverride&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskPropertiesOverride> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
