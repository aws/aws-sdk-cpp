/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>The metadata that you apply to Amazon Web Services resources to help you
   * categorize and organize them. Each tag consists of a key and a value, both of
   * which you define. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
   * Reference</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API Tag();
    AWS_RESOURCEGROUPSTAGGINGAPI_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
