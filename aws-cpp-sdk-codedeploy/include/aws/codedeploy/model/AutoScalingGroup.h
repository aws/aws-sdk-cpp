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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an Auto Scaling group.</p>
   */
  class AWS_CODEDEPLOY_API AutoScalingGroup
  {
  public:
    AutoScalingGroup();
    AutoScalingGroup(const Aws::Utils::Json::JsonValue& jsonValue);
    AutoScalingGroup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The Auto Scaling group name.</p>
     */
    inline AutoScalingGroup& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline const Aws::String& GetHook() const{ return m_hook; }

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline void SetHook(const Aws::String& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline void SetHook(Aws::String&& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline void SetHook(const char* value) { m_hookHasBeenSet = true; m_hook.assign(value); }

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline AutoScalingGroup& WithHook(const Aws::String& value) { SetHook(value); return *this;}

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline AutoScalingGroup& WithHook(Aws::String&& value) { SetHook(value); return *this;}

    /**
     * <p>An Auto Scaling lifecycle event hook name.</p>
     */
    inline AutoScalingGroup& WithHook(const char* value) { SetHook(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_hook;
    bool m_hookHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
