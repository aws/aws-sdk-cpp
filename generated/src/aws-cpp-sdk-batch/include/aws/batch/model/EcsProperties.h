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
    AWS_BATCH_API EcsProperties();
    AWS_BATCH_API EcsProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EcsProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline const Aws::Vector<EcsTaskProperties>& GetTaskProperties() const{ return m_taskProperties; }

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline void SetTaskProperties(const Aws::Vector<EcsTaskProperties>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline void SetTaskProperties(Aws::Vector<EcsTaskProperties>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline EcsProperties& WithTaskProperties(const Aws::Vector<EcsTaskProperties>& value) { SetTaskProperties(value); return *this;}

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline EcsProperties& WithTaskProperties(Aws::Vector<EcsTaskProperties>&& value) { SetTaskProperties(std::move(value)); return *this;}

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline EcsProperties& AddTaskProperties(const EcsTaskProperties& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(value); return *this; }

    /**
     * <p>An object that contains the properties for the Amazon ECS task definition of
     * a job.</p>  <p>This object is currently limited to one element.</p>
     * 
     */
    inline EcsProperties& AddTaskProperties(EcsTaskProperties&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EcsTaskProperties> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
