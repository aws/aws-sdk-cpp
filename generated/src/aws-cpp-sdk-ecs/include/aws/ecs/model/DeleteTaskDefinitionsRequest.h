/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DeleteTaskDefinitionsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DeleteTaskDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTaskDefinitions"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to delete. You must specify a <code>revision</code>.</p> <p>You can
     * specify up to 10 task definitions as a comma separated list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskDefinitions() const { return m_taskDefinitions; }
    inline bool TaskDefinitionsHasBeenSet() const { return m_taskDefinitionsHasBeenSet; }
    template<typename TaskDefinitionsT = Aws::Vector<Aws::String>>
    void SetTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions = std::forward<TaskDefinitionsT>(value); }
    template<typename TaskDefinitionsT = Aws::Vector<Aws::String>>
    DeleteTaskDefinitionsRequest& WithTaskDefinitions(TaskDefinitionsT&& value) { SetTaskDefinitions(std::forward<TaskDefinitionsT>(value)); return *this;}
    template<typename TaskDefinitionsT = Aws::String>
    DeleteTaskDefinitionsRequest& AddTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions.emplace_back(std::forward<TaskDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_taskDefinitions;
    bool m_taskDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
