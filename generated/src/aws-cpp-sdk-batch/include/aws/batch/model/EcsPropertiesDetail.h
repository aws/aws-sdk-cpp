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
    AWS_BATCH_API EcsPropertiesDetail();
    AWS_BATCH_API EcsPropertiesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsPropertiesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties for the Amazon ECS task definition of a job.</p>
     */
    inline const Aws::Vector<EcsTaskDetails>& GetTaskProperties() const{ return m_taskProperties; }
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }
    inline void SetTaskProperties(const Aws::Vector<EcsTaskDetails>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }
    inline void SetTaskProperties(Aws::Vector<EcsTaskDetails>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }
    inline EcsPropertiesDetail& WithTaskProperties(const Aws::Vector<EcsTaskDetails>& value) { SetTaskProperties(value); return *this;}
    inline EcsPropertiesDetail& WithTaskProperties(Aws::Vector<EcsTaskDetails>&& value) { SetTaskProperties(std::move(value)); return *this;}
    inline EcsPropertiesDetail& AddTaskProperties(const EcsTaskDetails& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(value); return *this; }
    inline EcsPropertiesDetail& AddTaskProperties(EcsTaskDetails&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EcsTaskDetails> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
