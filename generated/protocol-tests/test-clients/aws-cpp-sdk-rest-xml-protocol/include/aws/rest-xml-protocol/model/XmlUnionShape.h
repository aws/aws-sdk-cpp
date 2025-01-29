/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/model/XmlNestedUnionStruct.h>
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
namespace RestXmlProtocol
{
namespace Model
{

  class XmlUnionShape
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlUnionShape();
    AWS_RESTXMLPROTOCOL_API XmlUnionShape(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API XmlUnionShape& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline XmlUnionShape& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline XmlUnionShape& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline XmlUnionShape& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetBooleanValue() const{ return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline XmlUnionShape& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetByteValue() const{ return m_byteValue; }
    inline bool ByteValueHasBeenSet() const { return m_byteValueHasBeenSet; }
    inline void SetByteValue(int value) { m_byteValueHasBeenSet = true; m_byteValue = value; }
    inline XmlUnionShape& WithByteValue(int value) { SetByteValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetShortValue() const{ return m_shortValue; }
    inline bool ShortValueHasBeenSet() const { return m_shortValueHasBeenSet; }
    inline void SetShortValue(int value) { m_shortValueHasBeenSet = true; m_shortValue = value; }
    inline XmlUnionShape& WithShortValue(int value) { SetShortValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline XmlUnionShape& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetLongValue() const{ return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline XmlUnionShape& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatValue() const{ return m_floatValue; }
    inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
    inline void SetFloatValue(double value) { m_floatValueHasBeenSet = true; m_floatValue = value; }
    inline XmlUnionShape& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline XmlUnionShape& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    
    AWS_RESTXMLPROTOCOL_API const XmlUnionShape& GetUnionValue() const;
    AWS_RESTXMLPROTOCOL_API bool UnionValueHasBeenSet() const;
    AWS_RESTXMLPROTOCOL_API void SetUnionValue(const XmlUnionShape& value);
    AWS_RESTXMLPROTOCOL_API void SetUnionValue(XmlUnionShape&& value);
    AWS_RESTXMLPROTOCOL_API XmlUnionShape& WithUnionValue(const XmlUnionShape& value);
    AWS_RESTXMLPROTOCOL_API XmlUnionShape& WithUnionValue(XmlUnionShape&& value);
    ///@}

    ///@{
    
    inline const XmlNestedUnionStruct& GetStructValue() const{ return m_structValue; }
    inline bool StructValueHasBeenSet() const { return m_structValueHasBeenSet; }
    inline void SetStructValue(const XmlNestedUnionStruct& value) { m_structValueHasBeenSet = true; m_structValue = value; }
    inline void SetStructValue(XmlNestedUnionStruct&& value) { m_structValueHasBeenSet = true; m_structValue = std::move(value); }
    inline XmlUnionShape& WithStructValue(const XmlNestedUnionStruct& value) { SetStructValue(value); return *this;}
    inline XmlUnionShape& WithStructValue(XmlNestedUnionStruct&& value) { SetStructValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    int m_byteValue;
    bool m_byteValueHasBeenSet = false;

    int m_shortValue;
    bool m_shortValueHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    long long m_longValue;
    bool m_longValueHasBeenSet = false;

    double m_floatValue;
    bool m_floatValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    std::shared_ptr<XmlUnionShape> m_unionValue;
    bool m_unionValueHasBeenSet = false;

    XmlNestedUnionStruct m_structValue;
    bool m_structValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
