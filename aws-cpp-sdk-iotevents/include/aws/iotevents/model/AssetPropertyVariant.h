/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>A structure that contains an asset property value. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_Variant.html">Variant</a>
   * in the <i>AWS IoT SiteWise API Reference</i>.</p>  <p>You must
   * specify one of the following value types, depending on the <code>dataType</code>
   * of the specified asset property. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_AssetProperty.html">AssetProperty</a>
   * in the <i>AWS IoT SiteWise API Reference</i>.</p>  <p>For parameters
   * that are string data type, you can specify the following options:</p> <ul> <li>
   * <p>Use a string. For example, the <code>doubleValue</code> value can be
   * <code>'47.9'</code>.</p> </li> <li> <p>Use an expression. For example, the
   * <code>doubleValue</code> value can be
   * <code>$input.TemperatureInput.sensorData.temperature</code>.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AssetPropertyVariant">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API AssetPropertyVariant
  {
  public:
    AssetPropertyVariant();
    AssetPropertyVariant(Aws::Utils::Json::JsonView jsonValue);
    AssetPropertyVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a string. You can also specify an expression. If
     * you use an expression, the evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline const Aws::String& GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(const Aws::String& value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(Aws::String&& value) { m_integerValueHasBeenSet = true; m_integerValue = std::move(value); }

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(const char* value) { m_integerValueHasBeenSet = true; m_integerValue.assign(value); }

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const Aws::String& value) { SetIntegerValue(value); return *this;}

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(Aws::String&& value) { SetIntegerValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is an integer. You can also specify an expression.
     * If you use an expression, the evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const char* value) { SetIntegerValue(value); return *this;}


    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline const Aws::String& GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(const Aws::String& value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(Aws::String&& value) { m_doubleValueHasBeenSet = true; m_doubleValue = std::move(value); }

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(const char* value) { m_doubleValueHasBeenSet = true; m_doubleValue.assign(value); }

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const Aws::String& value) { SetDoubleValue(value); return *this;}

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(Aws::String&& value) { SetDoubleValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a double. You can also specify an expression. If
     * you use an expression, the evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const char* value) { SetDoubleValue(value); return *this;}


    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline const Aws::String& GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline void SetBooleanValue(const Aws::String& value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline void SetBooleanValue(Aws::String&& value) { m_booleanValueHasBeenSet = true; m_booleanValue = std::move(value); }

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline void SetBooleanValue(const char* value) { m_booleanValueHasBeenSet = true; m_booleanValue.assign(value); }

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(const Aws::String& value) { SetBooleanValue(value); return *this;}

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(Aws::String&& value) { SetBooleanValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a Boolean value that must be <code>TRUE</code> or
     * <code>FALSE</code>. You can also specify an expression. If you use an
     * expression, the evaluated result should be a Boolean value.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(const char* value) { SetBooleanValue(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;

    Aws::String m_integerValue;
    bool m_integerValueHasBeenSet;

    Aws::String m_doubleValue;
    bool m_doubleValueHasBeenSet;

    Aws::String m_booleanValue;
    bool m_booleanValueHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
