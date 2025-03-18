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
    AWS_IOTEVENTS_API AssetPropertyVariant() = default;
    AWS_IOTEVENTS_API AssetPropertyVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AssetPropertyVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset property value is a string. You must use an expression, and the
     * evaluated result should be a string.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    AssetPropertyVariant& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value is an integer. You must use an expression, and the
     * evaluated result should be an integer.</p>
     */
    inline const Aws::String& GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    template<typename IntegerValueT = Aws::String>
    void SetIntegerValue(IntegerValueT&& value) { m_integerValueHasBeenSet = true; m_integerValue = std::forward<IntegerValueT>(value); }
    template<typename IntegerValueT = Aws::String>
    AssetPropertyVariant& WithIntegerValue(IntegerValueT&& value) { SetIntegerValue(std::forward<IntegerValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value is a double. You must use an expression, and the
     * evaluated result should be a double.</p>
     */
    inline const Aws::String& GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    template<typename DoubleValueT = Aws::String>
    void SetDoubleValue(DoubleValueT&& value) { m_doubleValueHasBeenSet = true; m_doubleValue = std::forward<DoubleValueT>(value); }
    template<typename DoubleValueT = Aws::String>
    AssetPropertyVariant& WithDoubleValue(DoubleValueT&& value) { SetDoubleValue(std::forward<DoubleValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset property value is a Boolean value that must be <code>'TRUE'</code>
     * or <code>'FALSE'</code>. You must use an expression, and the evaluated result
     * should be a Boolean value.</p>
     */
    inline const Aws::String& GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    template<typename BooleanValueT = Aws::String>
    void SetBooleanValue(BooleanValueT&& value) { m_booleanValueHasBeenSet = true; m_booleanValue = std::forward<BooleanValueT>(value); }
    template<typename BooleanValueT = Aws::String>
    AssetPropertyVariant& WithBooleanValue(BooleanValueT&& value) { SetBooleanValue(std::forward<BooleanValueT>(value)); return *this;}
    ///@}
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
