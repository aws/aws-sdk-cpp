/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{

  /**
   * <p>The user-specified message attribute value. For string data types, the value
   * attribute has the same restrictions on the content as the message body. For more
   * information, see <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">SendMessage</a>.</p>
   * <p>Name, type, and value must not be empty or null. In addition, the message
   * body should not be empty or null. All parts of the message attribute, including
   * name, type, and value, are included in the message size restriction, which is
   * currently 256 KB (262,144 bytes).</p>
   */
  class AWS_SQS_API MessageAttributeValue
  {
  public:
    MessageAttributeValue();
    MessageAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    MessageAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(value); return *this;}

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const{ return m_binaryValue; }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline void SetBinaryValue(const Aws::Utils::ByteBuffer& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline void SetBinaryValue(Aws::Utils::ByteBuffer&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(const Aws::Utils::ByteBuffer& value) { SetBinaryValue(value); return *this;}

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(Aws::Utils::ByteBuffer&& value) { SetBinaryValue(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValues() const{ return m_stringListValues; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetStringListValues(const Aws::Vector<Aws::String>& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetStringListValues(Aws::Vector<Aws::String>&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithStringListValues(const Aws::Vector<Aws::String>& value) { SetStringListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithStringListValues(Aws::Vector<Aws::String>&& value) { SetStringListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddStringListValues(const Aws::String& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddStringListValues(Aws::String&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddStringListValues(const char* value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBinaryListValues() const{ return m_binaryListValues; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetBinaryListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetBinaryListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddBinaryListValues(const Aws::Utils::ByteBuffer& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddBinaryListValues(Aws::Utils::ByteBuffer&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(value); return *this; }

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(Aws::String&& value) { SetDataType(value); return *this;}

    /**
     * <p>Amazon SQS supports the following logical data types: String, Number, and
     * Binary. For the Number data type, you must use StringValue.</p> <p>You can also
     * append custom labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/SQSMessageAttributes.html#SQSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(const char* value) { SetDataType(value); return *this;}

  private:
    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;
    Aws::Utils::ByteBuffer m_binaryValue;
    bool m_binaryValueHasBeenSet;
    Aws::Vector<Aws::String> m_stringListValues;
    bool m_stringListValuesHasBeenSet;
    Aws::Vector<Aws::Utils::ByteBuffer> m_binaryListValues;
    bool m_binaryListValuesHasBeenSet;
    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
