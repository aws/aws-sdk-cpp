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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace SNS
{
namespace Model
{

  /**
   * <p>The user-specified message attribute value. For string data types, the value
   * attribute has the same restrictions on the content as the message body. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>.</p>
   * <p>Name, type, and value must not be empty or null. In addition, the message
   * body should not be empty or null. All parts of the message attribute, including
   * name, type, and value, are included in the message size restriction, which is
   * currently 256 KB (262,144 bytes). For more information, see <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html">Using
   * Amazon SNS Message Attributes</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/MessageAttributeValue">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API MessageAttributeValue
  {
  public:
    MessageAttributeValue();
    MessageAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    MessageAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline MessageAttributeValue& WithDataType(const char* value) { SetDataType(value); return *this;}


    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline MessageAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
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
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline void SetBinaryValue(const Aws::Utils::ByteBuffer& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline void SetBinaryValue(Aws::Utils::ByteBuffer&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::move(value); }

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(const Aws::Utils::ByteBuffer& value) { SetBinaryValue(value); return *this;}

    /**
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline MessageAttributeValue& WithBinaryValue(Aws::Utils::ByteBuffer&& value) { SetBinaryValue(std::move(value)); return *this;}

  private:

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;

    Aws::Utils::ByteBuffer m_binaryValue;
    bool m_binaryValueHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
