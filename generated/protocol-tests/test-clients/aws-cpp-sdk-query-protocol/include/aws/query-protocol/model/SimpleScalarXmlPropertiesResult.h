/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace QueryProtocol
{
namespace Model
{
  class SimpleScalarXmlPropertiesResult
  {
  public:
    AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult();
    AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline void SetStringValue(const Aws::String& value) { m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValue.assign(value); }
    inline SimpleScalarXmlPropertiesResult& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline SimpleScalarXmlPropertiesResult& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline SimpleScalarXmlPropertiesResult& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetEmptyStringValue() const{ return m_emptyStringValue; }
    inline void SetEmptyStringValue(const Aws::String& value) { m_emptyStringValue = value; }
    inline void SetEmptyStringValue(Aws::String&& value) { m_emptyStringValue = std::move(value); }
    inline void SetEmptyStringValue(const char* value) { m_emptyStringValue.assign(value); }
    inline SimpleScalarXmlPropertiesResult& WithEmptyStringValue(const Aws::String& value) { SetEmptyStringValue(value); return *this;}
    inline SimpleScalarXmlPropertiesResult& WithEmptyStringValue(Aws::String&& value) { SetEmptyStringValue(std::move(value)); return *this;}
    inline SimpleScalarXmlPropertiesResult& WithEmptyStringValue(const char* value) { SetEmptyStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetTrueBooleanValue() const{ return m_trueBooleanValue; }
    inline void SetTrueBooleanValue(bool value) { m_trueBooleanValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithTrueBooleanValue(bool value) { SetTrueBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetFalseBooleanValue() const{ return m_falseBooleanValue; }
    inline void SetFalseBooleanValue(bool value) { m_falseBooleanValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithFalseBooleanValue(bool value) { SetFalseBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetByteValue() const{ return m_byteValue; }
    inline void SetByteValue(int value) { m_byteValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithByteValue(int value) { SetByteValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetShortValue() const{ return m_shortValue; }
    inline void SetShortValue(int value) { m_shortValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithShortValue(int value) { SetShortValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline void SetIntegerValue(int value) { m_integerValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetLongValue() const{ return m_longValue; }
    inline void SetLongValue(long long value) { m_longValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatValue() const{ return m_floatValue; }
    inline void SetFloatValue(double value) { m_floatValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline void SetDoubleValue(double value) { m_doubleValue = value; }
    inline SimpleScalarXmlPropertiesResult& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline SimpleScalarXmlPropertiesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline SimpleScalarXmlPropertiesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;

    Aws::String m_emptyStringValue;

    bool m_trueBooleanValue;

    bool m_falseBooleanValue;

    int m_byteValue;

    int m_shortValue;

    int m_integerValue;

    long long m_longValue;

    double m_floatValue;

    double m_doubleValue;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
