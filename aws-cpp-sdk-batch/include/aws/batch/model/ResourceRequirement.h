﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ResourceType.h>
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
   * <p>The type and amount of a resource to assign to a container. Currently, the
   * only supported resource type is <code>GPU</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ResourceRequirement">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ResourceRequirement
  {
  public:
    ResourceRequirement();
    ResourceRequirement(Aws::Utils::Json::JsonView jsonValue);
    ResourceRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline ResourceRequirement& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline ResourceRequirement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The number of physical GPUs to reserve for the container. The number of GPUs
     * reserved for all containers in a job should not exceed the number of available
     * GPUs on the compute resource that the job is launched on.</p>
     */
    inline ResourceRequirement& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline ResourceRequirement& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource to assign to a container. Currently, the only supported
     * resource type is <code>GPU</code>.</p>
     */
    inline ResourceRequirement& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ResourceType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
