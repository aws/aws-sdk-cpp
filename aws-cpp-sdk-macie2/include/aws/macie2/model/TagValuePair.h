/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a tag key or tag key and value pair to use in a tag-based condition
   * that determines whether an S3 object is included or excluded from a
   * classification job. Tag keys and values are case sensitive. Also, Amazon Macie
   * doesn't support use of partial values or wildcard characters in tag-based
   * conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagValuePair">AWS
   * API Reference</a></p>
   */
  class TagValuePair
  {
  public:
    AWS_MACIE2_API TagValuePair();
    AWS_MACIE2_API TagValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API TagValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline TagValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline TagValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline TagValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline TagValuePair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline TagValuePair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag value, associated with the specified tag key (key), to use in the
     * condition. To specify only a tag key for a condition, specify the tag key for
     * the key property and set this value to an empty string.</p>
     */
    inline TagValuePair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
