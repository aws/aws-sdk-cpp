/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EmptyFieldValue.h>
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
   * <p>Object to store union of Field values.</p>  <p>The <code>Summary</code>
   * system field accepts 3000 characters while all other fields accept 500
   * characters.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldValueUnion">AWS
   * API Reference</a></p>
   */
  class FieldValueUnion
  {
  public:
    AWS_CONNECTCASES_API FieldValueUnion() = default;
    AWS_CONNECTCASES_API FieldValueUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldValueUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Can be either null, or have a Boolean value type. Only one value can be
     * provided.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline FieldValueUnion& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be either null, or have a Double number value type. Only one value can be
     * provided.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline FieldValueUnion& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An empty value.</p>
     */
    inline const EmptyFieldValue& GetEmptyValue() const { return m_emptyValue; }
    inline bool EmptyValueHasBeenSet() const { return m_emptyValueHasBeenSet; }
    template<typename EmptyValueT = EmptyFieldValue>
    void SetEmptyValue(EmptyValueT&& value) { m_emptyValueHasBeenSet = true; m_emptyValue = std::forward<EmptyValueT>(value); }
    template<typename EmptyValueT = EmptyFieldValue>
    FieldValueUnion& WithEmptyValue(EmptyValueT&& value) { SetEmptyValue(std::forward<EmptyValueT>(value)); return *this;}
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
    FieldValueUnion& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the user that performed the audit.</p>
     */
    inline const Aws::String& GetUserArnValue() const { return m_userArnValue; }
    inline bool UserArnValueHasBeenSet() const { return m_userArnValueHasBeenSet; }
    template<typename UserArnValueT = Aws::String>
    void SetUserArnValue(UserArnValueT&& value) { m_userArnValueHasBeenSet = true; m_userArnValue = std::forward<UserArnValueT>(value); }
    template<typename UserArnValueT = Aws::String>
    FieldValueUnion& WithUserArnValue(UserArnValueT&& value) { SetUserArnValue(std::forward<UserArnValueT>(value)); return *this;}
    ///@}
  private:

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    EmptyFieldValue m_emptyValue;
    bool m_emptyValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::String m_userArnValue;
    bool m_userArnValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
