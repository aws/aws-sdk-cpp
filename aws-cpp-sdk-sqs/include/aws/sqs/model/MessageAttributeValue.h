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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

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
   * <p>The user-specified message attribute value. For string data types, the
   * <code>Value</code> attribute has the same restrictions on the content as the
   * message body. For more information, see <code> <a>SendMessage</a>.</code> </p>
   * <p> <code>Name</code>, <code>type</code>, <code>value</code> and the message
   * body must not be empty or null. All parts of the message attribute, including
   * <code>Name</code>, <code>Type</code>, and <code>Value</code>, are part of the
   * message size restriction (256 KB or 262,144 bytes).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/MessageAttributeValue">AWS
   * API Reference</a></p>
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
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const{ return m_binaryValue; }

    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }

    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline void SetBinaryValue(const Aws::Utils::ByteBuffer& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline void SetBinaryValue(Aws::Utils::ByteBuffer&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::move(value); }

    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(const Aws::Utils::ByteBuffer& value) { SetBinaryValue(value); return *this;}

    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(Aws::Utils::ByteBuffer&& value) { SetBinaryValue(std::move(value)); return *this;}


    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValues() const{ return m_stringListValues; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline bool StringListValuesHasBeenSet() const { return m_stringListValuesHasBeenSet; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetStringListValues(const Aws::Vector<Aws::String>& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetStringListValues(Aws::Vector<Aws::String>&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = std::move(value); }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithStringListValues(const Aws::Vector<Aws::String>& value) { SetStringListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithStringListValues(Aws::Vector<Aws::String>&& value) { SetStringListValues(std::move(value)); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddStringListValues(const Aws::String& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddStringListValues(Aws::String&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(std::move(value)); return *this; }

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
    inline bool BinaryListValuesHasBeenSet() const { return m_binaryListValuesHasBeenSet; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = value; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline void SetBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = std::move(value); }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetBinaryListValues(value); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& WithBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetBinaryListValues(std::move(value)); return *this;}

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddBinaryListValues(const Aws::Utils::ByteBuffer& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(value); return *this; }

    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline MessageAttributeValue& AddBinaryListValues(Aws::Utils::ByteBuffer&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(std::move(value)); return *this; }


    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline MessageAttributeValue& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
     */
    inline MessageAttributeValue& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
     * SQS Message Attributes</a> in the <i>Amazon Simple Queue Service Developer
     * Guide</i>.</p>
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
