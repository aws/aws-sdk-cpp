/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EcsTaskProperties.h>
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
   * <p>An object that contains the properties for the Amazon ECS resources of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsProperties">AWS
   * API Reference</a></p>
   */
  class EcsProperties
  {
  public:
    AWS_BATCH_API EcsProperties() = default;
    AWS_BATCH_API EcsProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one task element.
     * However, the task element can run up to 10 containers.</p> 
     */
    inline const Aws::Vector<EcsTaskProperties>& GetTaskProperties() const { return m_taskProperties; }
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }
    template<typename TaskPropertiesT = Aws::Vector<EcsTaskProperties>>
    void SetTaskProperties(TaskPropertiesT&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::forward<TaskPropertiesT>(value); }
    template<typename TaskPropertiesT = Aws::Vector<EcsTaskProperties>>
    EcsProperties& WithTaskProperties(TaskPropertiesT&& value) { SetTaskProperties(std::forward<TaskPropertiesT>(value)); return *this;}
    template<typename TaskPropertiesT = EcsTaskProperties>
    EcsProperties& AddTaskProperties(TaskPropertiesT&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace_back(std::forward<TaskPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EcsTaskProperties> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
