/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ResourceType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The type and amount of a resource to assign to a container. The supported
   * resource types are GPUs and Elastic Inference accelerators. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-gpu.html">Working
   * with GPUs on Amazon ECS</a> or <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-inference.html">Working
   * with Amazon Elastic Inference on Amazon ECS</a> in the <i>Amazon Elastic
   * Container Service Developer Guide</i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ResourceRequirement">AWS
   * API Reference</a></p>
   */
  class ResourceRequirement
  {
  public:
    AWS_ECS_API ResourceRequirement();
    AWS_ECS_API ResourceRequirement(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ResourceRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline ResourceRequirement& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline ResourceRequirement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the specified resource type.</p> <p>If the <code>GPU</code>
     * type is used, the value is the number of physical <code>GPUs</code> the Amazon
     * ECS container agent reserves for the container. The number of GPUs that's
     * reserved for all containers in a task can't exceed the number of available GPUs
     * on the container instance that the task is launched on.</p> <p>If the
     * <code>InferenceAccelerator</code> type is used, the <code>value</code> matches
     * the <code>deviceName</code> for an <a>InferenceAccelerator</a> specified in a
     * task definition.</p>
     */
    inline ResourceRequirement& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline ResourceRequirement& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource to assign to a container. The supported values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline ResourceRequirement& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ResourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
