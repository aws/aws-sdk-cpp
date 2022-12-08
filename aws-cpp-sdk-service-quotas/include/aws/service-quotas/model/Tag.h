/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>A complex data type that contains a tag key and tag value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_SERVICEQUOTAS_API Tag();
    AWS_SERVICEQUOTAS_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A string that contains a tag key. The string length should be between 1 and
     * 128 characters. Valid characters include a-z, A-Z, 0-9, space, and the special
     * characters _ - . : / = + @.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A string that contains an optional tag value. The string length should be
     * between 0 and 256 characters. Valid characters include a-z, A-Z, 0-9, space, and
     * the special characters _ - . : / = + @.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
