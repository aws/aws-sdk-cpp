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
   * <p>Provides information about the tags that are associated with an S3 bucket or
   * object. Each tag consists of a required tag key and an associated tag
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/KeyValuePair">AWS
   * API Reference</a></p>
   */
  class KeyValuePair
  {
  public:
    AWS_MACIE2_API KeyValuePair();
    AWS_MACIE2_API KeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API KeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline KeyValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline KeyValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag key is a general
     * label that acts as a category for more specific tag values.</p>
     */
    inline KeyValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline KeyValuePair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline KeyValuePair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that comprises a tag. A tag value acts as a
     * descriptor for a tag key. A tag value can be an empty string.</p>
     */
    inline KeyValuePair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
