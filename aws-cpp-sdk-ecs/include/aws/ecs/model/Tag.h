/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The metadata that you apply to a resource to help you categorize and organize
   * them. Each tag consists of a key and an optional value. You define them.</p>
   * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
   * number of tags per resource - 50</p> </li> <li> <p>For each resource, each tag
   * key must be unique, and each tag key can have only one value.</p> </li> <li>
   * <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
   * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
   * your tagging schema is used across multiple services and resources, remember
   * that other services may have restrictions on allowed characters. Generally
   * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
   * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
   * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
   * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
   * either keys or values as it is reserved for Amazon Web Services use. You cannot
   * edit or delete tag keys or values with this prefix. Tags with this prefix do not
   * count against your tags per resource limit.</p> </li> </ul><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_ECS_API Tag();
    AWS_ECS_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
