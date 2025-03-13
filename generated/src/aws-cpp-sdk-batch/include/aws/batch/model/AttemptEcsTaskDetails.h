/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/AttemptTaskContainerDetails.h>
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
   * <p>An object that represents the details of a task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptEcsTaskDetails">AWS
   * API Reference</a></p>
   */
  class AttemptEcsTaskDetails
  {
  public:
    AWS_BATCH_API AttemptEcsTaskDetails() = default;
    AWS_BATCH_API AttemptEcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API AttemptEcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const { return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    template<typename ContainerInstanceArnT = Aws::String>
    void SetContainerInstanceArn(ContainerInstanceArnT&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::forward<ContainerInstanceArnT>(value); }
    template<typename ContainerInstanceArnT = Aws::String>
    AttemptEcsTaskDetails& WithContainerInstanceArn(ContainerInstanceArnT&& value) { SetContainerInstanceArn(std::forward<ContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    AttemptEcsTaskDetails& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline const Aws::Vector<AttemptTaskContainerDetails>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<AttemptTaskContainerDetails>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<AttemptTaskContainerDetails>>
    AttemptEcsTaskDetails& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = AttemptTaskContainerDetails>
    AttemptEcsTaskDetails& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::Vector<AttemptTaskContainerDetails> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
