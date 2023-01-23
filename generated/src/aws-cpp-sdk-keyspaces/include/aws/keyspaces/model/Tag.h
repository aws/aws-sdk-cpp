/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Describes a tag. A tag is a key-value pair. You can add up to 50 tags to a
   * single Amazon Keyspaces resource.</p> <p>Amazon Web Services-assigned tag names
   * and values are automatically assigned the <code>aws:</code> prefix, which the
   * user cannot assign. Amazon Web Services-assigned tag names do not count towards
   * the tag limit of 50. User-assigned tag names have the prefix <code>user:</code>
   * in the Cost Allocation Report. You cannot backdate the application of a tag.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
   * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_KEYSPACES_API Tag();
    AWS_KEYSPACES_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
