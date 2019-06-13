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
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>Optional metadata that you apply to a resource to assist with categorization
   * and
         organization. Each tag consists of a key and an optional value,
   * both of which you define.
         Tag keys can have a maximum character length
   * of 128 characters, and tag values can have
            a maximum length of 256
   * characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TagRef">AWS API
   * Reference</a></p>
   */
  class AWS_APPMESH_API TagRef
  {
  public:
    TagRef();
    TagRef(Aws::Utils::Json::JsonView jsonValue);
    TagRef& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline TagRef& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline TagRef& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A <code>key</code> is a
     * general label
         that acts like a category for more specific tag
     * values.</p>
     */
    inline TagRef& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline TagRef& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline TagRef& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that make up a tag. A
     * <code>value</code> acts as a
         descriptor within a tag category
     * (key).</p>
     */
    inline TagRef& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
