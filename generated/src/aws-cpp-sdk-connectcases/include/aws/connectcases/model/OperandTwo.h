/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EmptyOperandValue.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Represents the right hand operand in the condition. In the Amazon Connect
   * admin website, case rules are known as <i>case field conditions</i>. For more
   * information about case field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/OperandTwo">AWS
   * API Reference</a></p>
   */
  class OperandTwo
  {
  public:
    AWS_CONNECTCASES_API OperandTwo() = default;
    AWS_CONNECTCASES_API OperandTwo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API OperandTwo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Boolean value type.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline OperandTwo& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Double value type.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline OperandTwo& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Empty value type.</p>
     */
    inline const EmptyOperandValue& GetEmptyValue() const { return m_emptyValue; }
    inline bool EmptyValueHasBeenSet() const { return m_emptyValueHasBeenSet; }
    template<typename EmptyValueT = EmptyOperandValue>
    void SetEmptyValue(EmptyValueT&& value) { m_emptyValueHasBeenSet = true; m_emptyValue = std::forward<EmptyValueT>(value); }
    template<typename EmptyValueT = EmptyOperandValue>
    OperandTwo& WithEmptyValue(EmptyValueT&& value) { SetEmptyValue(std::forward<EmptyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String value type.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    OperandTwo& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}
  private:

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    EmptyOperandValue m_emptyValue;
    bool m_emptyValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
