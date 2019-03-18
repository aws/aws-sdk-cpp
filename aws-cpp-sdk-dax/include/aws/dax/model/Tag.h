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
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>A description of a tag. Every tag is a key-value pair. You can add up to 50
   * tags to a single DAX cluster.</p> <p>AWS-assigned tag names and values are
   * automatically assigned the <code>aws:</code> prefix, which the user cannot
   * assign. AWS-assigned tag names do not count towards the tag limit of 50.
   * User-assigned tag names have the prefix <code>user:</code>.</p> <p>You cannot
   * backdate the application of a tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_DAX_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the tag. Tag keys are case sensitive. Every DAX cluster can only
     * have one tag with the same key. If you try to add an existing tag (same key),
     * the existing tag value will be updated to the new value.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
