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
namespace ECS
{
namespace Model
{

  /**
   * <p>The attributes applicable to a container instance when it is registered.</p>
   */
  class AWS_ECS_API Attribute
  {
  public:
    Attribute();
    Attribute(const Aws::Utils::Json::JsonValue& jsonValue);
    Attribute& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline Attribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline Attribute& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container instance attribute.</p>
     */
    inline Attribute& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline Attribute& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the container instance attribute (at this time, the value here
     * is <code>Null</code>, but this could change in future revisions for
     * expandability).</p>
     */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
