/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A label that you assign to a resource. In Athena, a resource can be a
   * workgroup or data catalog. Each tag consists of a key and an optional value,
   * both of which you define. For example, you can use tags to categorize Athena
   * workgroups or data catalogs by purpose, owner, or environment. Use a consistent
   * set of tag keys to make it easier to search and filter workgroups or data
   * catalogs in your account. For best practices, see <a
   * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">Tagging
   * Best Practices</a>. Tag keys can be from 1 to 128 UTF-8 Unicode characters, and
   * tag values can be from 0 to 256 UTF-8 Unicode characters. Tags can use letters
   * and numbers representable in UTF-8, and the following characters: + - = . _ : /
   * @. Tag keys and values are case-sensitive. Tag keys must be unique per resource.
   * If you specify more than one tag, separate them by commas. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_ATHENA_API Tag();
    AWS_ATHENA_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
