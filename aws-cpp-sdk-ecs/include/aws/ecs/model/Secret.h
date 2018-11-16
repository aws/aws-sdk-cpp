/*
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
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the secret to expose to your container.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Secret">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Secret
  {
  public:
    Secret();
    Secret(Aws::Utils::Json::JsonView jsonValue);
    Secret& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline Secret& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline Secret& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The value to set as the environment variable on the container.</p>
     */
    inline Secret& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline const Aws::String& GetValueFrom() const{ return m_valueFrom; }

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline void SetValueFrom(const Aws::String& value) { m_valueFromHasBeenSet = true; m_valueFrom = value; }

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline void SetValueFrom(Aws::String&& value) { m_valueFromHasBeenSet = true; m_valueFrom = std::move(value); }

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline void SetValueFrom(const char* value) { m_valueFromHasBeenSet = true; m_valueFrom.assign(value); }

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline Secret& WithValueFrom(const Aws::String& value) { SetValueFrom(value); return *this;}

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline Secret& WithValueFrom(Aws::String&& value) { SetValueFrom(std::move(value)); return *this;}

    /**
     * <p>The secret to expose to the container. Supported values are either the full
     * ARN or the name of the parameter in the AWS Systems Manager Parameter Store.
     * </p>
     */
    inline Secret& WithValueFrom(const char* value) { SetValueFrom(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_valueFrom;
    bool m_valueFromHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
