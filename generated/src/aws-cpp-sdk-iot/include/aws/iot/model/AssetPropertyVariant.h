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
    AWS_IOT_API AssetPropertyVariant() = default;
    AWS_IOT_API AssetPropertyVariant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyVariant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optional. The string value of the value entry. Accepts substitution
     * templates.</p>
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
     * <p>Optional. A string that contains the integer value of the value entry.
     * Accepts substitution templates.</p>
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
     * <p>Optional. A string that contains the double value of the value entry. Accepts
     * substitution templates.</p>
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
     * <p>Optional. A string that contains the boolean value (<code>true</code> or
     * <code>false</code>) of the value entry. Accepts substitution templates.</p>
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
} // namespace IoT
} // namespace Aws
