/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TargetType.h>
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
   * <p>An attribute is a name-value pair associated with an Amazon ECS object.
   * Attributes enable you to extend the Amazon ECS data model by adding custom
   * metadata to your resources. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html#attributes">Attributes</a>
   * in the <i>Amazon Elastic Container Service Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Attribute">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Attribute
  {
  public:
    Attribute();
    Attribute(Aws::Utils::Json::JsonView jsonValue);
    Attribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline Attribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline Attribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute. The <code>name</code> must contain between 1 and
     * 128 characters and name may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, forward slashes, back slashes, or periods.</p>
     */
    inline Attribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline Attribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute. The <code>value</code> must contain between 1 and
     * 128 characters and may contain letters (uppercase and lowercase), numbers,
     * hyphens, underscores, periods, at signs (@), forward slashes, back slashes,
     * colons, or spaces. The value cannot contain any leading or trailing
     * whitespace.</p>
     */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline Attribute& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the target with which to attach the attribute. This parameter is
     * required if you use the short form ID for a resource instead of the full
     * ARN.</p>
     */
    inline Attribute& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The ID of the target. You can specify the short form ID for a resource or the
     * full Amazon Resource Name (ARN).</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

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
    inline Attribute& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

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
