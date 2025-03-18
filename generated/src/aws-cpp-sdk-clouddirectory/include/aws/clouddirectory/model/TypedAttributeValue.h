/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the data for a typed attribute. You can set one, and only one, of
   * the elements. Each attribute in an item is a name-value pair. Attributes have a
   * single value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/TypedAttributeValue">AWS
   * API Reference</a></p>
   */
  class TypedAttributeValue
  {
  public:
    AWS_CLOUDDIRECTORY_API TypedAttributeValue() = default;
    AWS_CLOUDDIRECTORY_API TypedAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API TypedAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string data value.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    TypedAttributeValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A binary data value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const { return m_binaryValue; }
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    void SetBinaryValue(BinaryValueT&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::forward<BinaryValueT>(value); }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    TypedAttributeValue& WithBinaryValue(BinaryValueT&& value) { SetBinaryValue(std::forward<BinaryValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean data value.</p>
     */
    inline bool GetBooleanValue() const { return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline TypedAttributeValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number data value.</p>
     */
    inline const Aws::String& GetNumberValue() const { return m_numberValue; }
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
    template<typename NumberValueT = Aws::String>
    void SetNumberValue(NumberValueT&& value) { m_numberValueHasBeenSet = true; m_numberValue = std::forward<NumberValueT>(value); }
    template<typename NumberValueT = Aws::String>
    TypedAttributeValue& WithNumberValue(NumberValueT&& value) { SetNumberValue(std::forward<NumberValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A date and time value.</p>
     */
    inline const Aws::Utils::DateTime& GetDatetimeValue() const { return m_datetimeValue; }
    inline bool DatetimeValueHasBeenSet() const { return m_datetimeValueHasBeenSet; }
    template<typename DatetimeValueT = Aws::Utils::DateTime>
    void SetDatetimeValue(DatetimeValueT&& value) { m_datetimeValueHasBeenSet = true; m_datetimeValue = std::forward<DatetimeValueT>(value); }
    template<typename DatetimeValueT = Aws::Utils::DateTime>
    TypedAttributeValue& WithDatetimeValue(DatetimeValueT&& value) { SetDatetimeValue(std::forward<DatetimeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_binaryValue{};
    bool m_binaryValueHasBeenSet = false;

    bool m_booleanValue{false};
    bool m_booleanValueHasBeenSet = false;

    Aws::String m_numberValue;
    bool m_numberValueHasBeenSet = false;

    Aws::Utils::DateTime m_datetimeValue{};
    bool m_datetimeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
