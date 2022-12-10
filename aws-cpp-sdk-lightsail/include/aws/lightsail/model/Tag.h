/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a tag key and optional value assigned to an Amazon Lightsail
   * resource.</p> <p>For more information about tags in Lightsail, see the <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
   * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_LIGHTSAIL_API Tag();
    AWS_LIGHTSAIL_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys accept a maximum of 128
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values accept a maximum of 256
     * letters, numbers, spaces in UTF-8, or the following characters: + - = . _ : /
     * @</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
