/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EcsTaskDetails.h>
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
   * <p>An object that contains the details for the Amazon ECS resources of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsPropertiesDetail">AWS
   * API Reference</a></p>
   */
  class EcsPropertiesDetail
  {
  public:
    AWS_BATCH_API EcsPropertiesDetail() = default;
    AWS_BATCH_API EcsPropertiesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsPropertiesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties for the Amazon ECS task definition of a job.</p>
     */
    inline const Aws::Vector<EcsTaskDetails>& GetTaskProperties() const { return m_taskProperties; }
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }
    template<typename TaskPropertiesT = Aws::Vector<EcsTaskDetails>>
    void SetTaskProperties(TaskPropertiesT&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::forward<TaskPropertiesT>(value); }
    template<typename TaskPropertiesT = Aws::Vector<EcsTaskDetails>>
    EcsPropertiesDetail& WithTaskProperties(TaskPropertiesT&& value) { SetTaskProperties(std::forward<TaskPropertiesT>(value)); return *this;}
    template<typename TaskPropertiesT = EcsTaskDetails>
    EcsPropertiesDetail& AddTaskProperties(TaskPropertiesT&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace_back(std::forward<TaskPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EcsTaskDetails> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
