/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/TaskContainerOverrides.h>
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
   * <p>An object that contains overrides for the task definition of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TaskPropertiesOverride">AWS
   * API Reference</a></p>
   */
  class TaskPropertiesOverride
  {
  public:
    AWS_BATCH_API TaskPropertiesOverride() = default;
    AWS_BATCH_API TaskPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline const Aws::Vector<TaskContainerOverrides>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<TaskContainerOverrides>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<TaskContainerOverrides>>
    TaskPropertiesOverride& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = TaskContainerOverrides>
    TaskPropertiesOverride& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TaskContainerOverrides> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
