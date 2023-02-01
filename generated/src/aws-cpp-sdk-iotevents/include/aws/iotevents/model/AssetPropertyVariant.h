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
   * in the <i>AWS IoT SiteWise API Reference</i>.</p> <p>You must use expressions
   * for all parameters in <code>AssetPropertyVariant</code>. The expressions accept
   * literals, operators, functions, references, and substitution templates.</p> <p
   * class="title"> <b>Examples</b> </p> <ul> <li> <p>For literal values, the
   * expressions must contain single quotes. For example, the value for the
   * <code>integerValue</code> parameter can be <code>'100'</code>.</p> </li> <li>
   * <p>For references, you must specify either variables or parameters. For example,
   * the value for the <code>booleanValue</code> parameter can be
   * <code>$variable.offline</code>.</p> </li> <li> <p>For a substitution template,
   * you must use <code>${}</code>, and the template must be in single quotes. A
   * substitution template can also contain a combination of literals, operators,
   * functions, references, and substitution templates. </p> <p>In the following
   * example, the value for the <code>doubleValue</code> parameter uses a
   * substitution template. </p> <p>
   * <code>'${$input.TemperatureInput.sensorData.temperature * 6 / 5 + 32}'</code>
   * </p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p> <p>You must specify one of the
   * following value types, depending on the <code>dataType</code> of the specified
   * asset property. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_AssetProperty.html">AssetProperty</a>
   * in the <i>AWS IoT SiteWise API Reference</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AssetPropertyVariant">AWS
   * API Reference</a></p>
   */
  class AssetPropertyVariant
  {
  public:
    AWS_IOTEVENTS_API AssetPropertyVariant();
    AWS_IOTEVENTS_API AssetPropertyVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AssetPropertyVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline AssetPropertyVariant& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline const Aws::String& GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(const Aws::String& value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(Aws::String&& value) { m_integerValueHasBeenSet = true; m_integerValue = std::move(value); }

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline void SetIntegerValue(const char* value) { m_integerValueHasBeenSet = true; m_integerValue.assign(value); }

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const Aws::String& value) { SetIntegerValue(value); return *this;}

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(Aws::String&& value) { SetIntegerValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline AssetPropertyVariant& WithIntegerValue(const char* value) { SetIntegerValue(value); return *this;}


    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline const Aws::String& GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(const Aws::String& value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(Aws::String&& value) { m_doubleValueHasBeenSet = true; m_doubleValue = std::move(value); }

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline void SetDoubleValue(const char* value) { m_doubleValueHasBeenSet = true; m_doubleValue.assign(value); }

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const Aws::String& value) { SetDoubleValue(value); return *this;}

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(Aws::String&& value) { SetDoubleValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline AssetPropertyVariant& WithDoubleValue(const char* value) { SetDoubleValue(value); return *this;}


    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline const Aws::String& GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline void SetBooleanValue(const Aws::String& value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline void SetBooleanValue(Aws::String&& value) { m_booleanValueHasBeenSet = true; m_booleanValue = std::move(value); }

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline void SetBooleanValue(const char* value) { m_booleanValueHasBeenSet = true; m_booleanValue.assign(value); }

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(const Aws::String& value) { SetBooleanValue(value); return *this;}

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline AssetPropertyVariant& WithBooleanValue(Aws::String&& value) { SetBooleanValue(std::move(value)); return *this;}

    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
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
} // namespace IoTEvents
} // namespace Aws
