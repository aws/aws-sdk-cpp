/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ContainerOverride.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The overrides associated with a task.</p>
   */
  class AWS_ECS_API TaskOverride
  {
  public:
    TaskOverride();
    TaskOverride(const Aws::Utils::Json::JsonValue& jsonValue);
    TaskOverride& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline const Aws::Vector<ContainerOverride>& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(const Aws::Vector<ContainerOverride>& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline void SetContainerOverrides(Aws::Vector<ContainerOverride>&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(const Aws::Vector<ContainerOverride>& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& WithContainerOverrides(Aws::Vector<ContainerOverride>&& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(const ContainerOverride& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(value); return *this; }

    /**
     * <p>One or more container overrides sent to a task.</p>
     */
    inline TaskOverride& AddContainerOverrides(ContainerOverride&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides.push_back(value); return *this; }

  private:
    Aws::Vector<ContainerOverride> m_containerOverrides;
    bool m_containerOverridesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
