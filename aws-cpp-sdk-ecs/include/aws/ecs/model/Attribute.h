﻿/*
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
#include <aws/ecs/model/TargetType.h>

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
   * <p>Attributes are name-value pairs associated with various Amazon ECS objects.
   * Attributes allow you to extend the Amazon ECS data model by adding custom
   * metadata to your resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Attribute">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Attribute
  {
  public:
    Attribute();
    Attribute(const Aws::Utils::Json::JsonValue& jsonValue);
    Attribute& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline Attribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline Attribute& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, and periods are allowed.</p>
     */
    inline Attribute& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline Attribute& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute. Up to 128 letters (uppercase and lowercase),
     * numbers, hyphens, underscores, periods, at signs (@), forward slashes, colons,
     * and spaces are allowed.</p>
     */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full Amazon
     * Resource Name (ARN).</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full Amazon
     * Resource Name (ARN).</p>
     */
    inline Attribute& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full Amazon
     * Resource Name (ARN).</p>
     */
    inline Attribute& WithTargetType(TargetType&& value) { SetTargetType(value); return *this;}

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline Attribute& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline Attribute& WithTargetId(Aws::String&& value) { SetTargetId(value); return *this;}

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline Attribute& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    TargetType m_targetType;
    bool m_targetTypeHasBeenSet;
    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
