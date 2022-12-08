/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Contains an asset property value (of a single type).</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssetPropertyVariant">AWS
   * API Reference</a></p>
   */
  class AssetPropertyVariant
  {
  public:
    AWS_IOT_API AssetPropertyVariant();
    AWS_IOT_API AssetPropertyVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyVariant& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline const Aws::String& GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline void SetIntegerValue(const Aws::String& value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline void SetIntegerValue(Aws::String&& value) { m_integerValueHasBeenSet = true; m_integerValue = std::move(value); }

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline void SetIntegerValue(const char* value) { m_integerValueHasBeenSet = true; m_integerValue.assign(value); }

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const Aws::String& value) { SetIntegerValue(value); return *this;}

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(Aws::String&& value) { SetIntegerValue(std::move(value)); return *this;}

    /**
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const char* value) { SetIntegerValue(value); return *this;}


    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline const Aws::String& GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline void SetDoubleValue(const Aws::String& value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline void SetDoubleValue(Aws::String&& value) { m_doubleValueHasBeenSet = true; m_doubleValue = std::move(value); }

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline void SetDoubleValue(const char* value) { m_doubleValueHasBeenSet = true; m_doubleValue.assign(value); }

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const Aws::String& value) { SetDoubleValue(value); return *this;}

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(Aws::String&& value) { SetDoubleValue(std::move(value)); return *this;}

    /**
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const char* value) { SetDoubleValue(value); return *this;}


    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline void SetBooleanValue(const Aws::String& value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline void SetBooleanValue(Aws::String&& value) { m_booleanValueHasBeenSet = true; m_booleanValue = std::move(value); }

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline void SetBooleanValue(const char* value) { m_booleanValueHasBeenSet = true; m_booleanValue.assign(value); }

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(const Aws::String& value) { SetBooleanValue(value); return *this;}

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(Aws::String&& value) { SetBooleanValue(std::move(value)); return *this;}

    /**
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(const char* value) { SetBooleanValue(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::String m_integerValue;
    bool m_integerValueHasBeenSet = false;

    Aws::String m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    Aws::String m_booleanValue;
    bool m_booleanValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
