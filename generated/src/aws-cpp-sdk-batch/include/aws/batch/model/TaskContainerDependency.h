﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of containers that this task depends on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TaskContainerDependency">AWS
   * API Reference</a></p>
   */
  class TaskContainerDependency
  {
  public:
    AWS_BATCH_API TaskContainerDependency();
    AWS_BATCH_API TaskContainerDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskContainerDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline TaskContainerDependency& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline TaskContainerDependency& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline TaskContainerDependency& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependency condition of the container. The following are the available
     * conditions and their behavior:</p> <ul> <li> <p> <code>START</code> - This
     * condition emulates the behavior of links and volumes today. It validates that a
     * dependent container is started before permitting other containers to start. </p>
     * </li> <li> <p> <code>COMPLETE</code> - This condition validates that a dependent
     * container runs to completion (exits) before permitting other containers to
     * start. This can be useful for nonessential containers that run a script and then
     * exit. This condition can't be set on an essential container. </p> </li> <li> <p>
     * <code>SUCCESS</code> - This condition is the same as <code>COMPLETE</code>, but
     * it also requires that the container exits with a zero status. This condition
     * can't be set on an essential container. </p> </li> </ul>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline TaskContainerDependency& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline TaskContainerDependency& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline TaskContainerDependency& WithCondition(const char* value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
