/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The tags for the resource. The metadata that you apply to a resource to help
   * you categorize and organize them. Each tag consists of a key and an optional
   * value, both of which you define. Tag keys can have a maximum character length of
   * 128 characters, and tag values can have a maximum length of 256
   * characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_CONFIGSERVICE_API Tag();
    AWS_CONFIGSERVICE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
