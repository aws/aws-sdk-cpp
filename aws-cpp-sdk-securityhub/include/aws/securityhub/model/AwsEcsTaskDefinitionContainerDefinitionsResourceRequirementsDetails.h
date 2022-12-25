/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A resource to assign to a container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of resource to assign to a container. Valid values are
     * <code>GPU</code> or <code>InferenceAccelerator</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the specified resource type.</p> <p>For <code>GPU</code>, the
     * value is the number of physical GPUs the Amazon ECS container agent reserves for
     * the container.</p> <p>For <code>InferenceAccelerator</code>, the value should
     * match the <code>DeviceName</code> attribute of an entry in
     * <code>InferenceAccelerators</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
