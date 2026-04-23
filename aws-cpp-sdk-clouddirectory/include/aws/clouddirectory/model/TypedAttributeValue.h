/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDDIRECTORY_API TypedAttributeValue
  {
  public:
    TypedAttributeValue();
    TypedAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    TypedAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string data value.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>A string data value.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>A string data value.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>A string data value.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>A string data value.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>A string data value.</p>
     */
    inline TypedAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>A string data value.</p>
     */
    inline TypedAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>A string data value.</p>
     */
    inline TypedAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>A binary data value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const{ return m_binaryValue; }

    /**
     * <p>A binary data value.</p>
     */
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }

    /**
     * <p>A binary data value.</p>
     */
    inline void SetBinaryValue(const Aws::Utils::ByteBuffer& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    /**
     * <p>A binary data value.</p>
     */
    inline void SetBinaryValue(Aws::Utils::ByteBuffer&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::move(value); }

    /**
     * <p>A binary data value.</p>
     */
    inline TypedAttributeValue& WithBinaryValue(const Aws::Utils::ByteBuffer& value) { SetBinaryValue(value); return *this;}

    /**
     * <p>A binary data value.</p>
     */
    inline TypedAttributeValue& WithBinaryValue(Aws::Utils::ByteBuffer&& value) { SetBinaryValue(std::move(value)); return *this;}


    /**
     * <p>A Boolean data value.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>A Boolean data value.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>A Boolean data value.</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>A Boolean data value.</p>
     */
    inline TypedAttributeValue& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>A number data value.</p>
     */
    inline const Aws::String& GetNumberValue() const{ return m_numberValue; }

    /**
     * <p>A number data value.</p>
     */
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }

    /**
     * <p>A number data value.</p>
     */
    inline void SetNumberValue(const Aws::String& value) { m_numberValueHasBeenSet = true; m_numberValue = value; }

    /**
     * <p>A number data value.</p>
     */
    inline void SetNumberValue(Aws::String&& value) { m_numberValueHasBeenSet = true; m_numberValue = std::move(value); }

    /**
     * <p>A number data value.</p>
     */
    inline void SetNumberValue(const char* value) { m_numberValueHasBeenSet = true; m_numberValue.assign(value); }

    /**
     * <p>A number data value.</p>
     */
    inline TypedAttributeValue& WithNumberValue(const Aws::String& value) { SetNumberValue(value); return *this;}

    /**
     * <p>A number data value.</p>
     */
    inline TypedAttributeValue& WithNumberValue(Aws::String&& value) { SetNumberValue(std::move(value)); return *this;}

    /**
     * <p>A number data value.</p>
     */
    inline TypedAttributeValue& WithNumberValue(const char* value) { SetNumberValue(value); return *this;}


    /**
     * <p>A date and time value.</p>
     */
    inline const Aws::Utils::DateTime& GetDatetimeValue() const{ return m_datetimeValue; }

    /**
     * <p>A date and time value.</p>
     */
    inline bool DatetimeValueHasBeenSet() const { return m_datetimeValueHasBeenSet; }

    /**
     * <p>A date and time value.</p>
     */
    inline void SetDatetimeValue(const Aws::Utils::DateTime& value) { m_datetimeValueHasBeenSet = true; m_datetimeValue = value; }

    /**
     * <p>A date and time value.</p>
     */
    inline void SetDatetimeValue(Aws::Utils::DateTime&& value) { m_datetimeValueHasBeenSet = true; m_datetimeValue = std::move(value); }

    /**
     * <p>A date and time value.</p>
     */
    inline TypedAttributeValue& WithDatetimeValue(const Aws::Utils::DateTime& value) { SetDatetimeValue(value); return *this;}

    /**
     * <p>A date and time value.</p>
     */
    inline TypedAttributeValue& WithDatetimeValue(Aws::Utils::DateTime&& value) { SetDatetimeValue(std::move(value)); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;

    Aws::Utils::ByteBuffer m_binaryValue;
    bool m_binaryValueHasBeenSet;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet;

    Aws::String m_numberValue;
    bool m_numberValueHasBeenSet;

    Aws::Utils::DateTime m_datetimeValue;
    bool m_datetimeValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
