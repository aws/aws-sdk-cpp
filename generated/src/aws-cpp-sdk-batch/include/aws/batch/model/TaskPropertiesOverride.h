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
    AWS_BATCH_API TaskPropertiesOverride();
    AWS_BATCH_API TaskPropertiesOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskPropertiesOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline const Aws::Vector<TaskContainerOverrides>& GetContainers() const{ return m_containers; }

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline void SetContainers(const Aws::Vector<TaskContainerOverrides>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline void SetContainers(Aws::Vector<TaskContainerOverrides>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline TaskPropertiesOverride& WithContainers(const Aws::Vector<TaskContainerOverrides>& value) { SetContainers(value); return *this;}

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline TaskPropertiesOverride& WithContainers(Aws::Vector<TaskContainerOverrides>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline TaskPropertiesOverride& AddContainers(const TaskContainerOverrides& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The overrides for the container definition of a job.</p>
     */
    inline TaskPropertiesOverride& AddContainers(TaskContainerOverrides&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskContainerOverrides> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
