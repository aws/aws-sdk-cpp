/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RestJsonProtocol
{
namespace Model
{
  class SimpleScalarPropertiesResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult();
    AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline SimpleScalarPropertiesResult& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline SimpleScalarPropertiesResult& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline SimpleScalarPropertiesResult& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline void SetStringValue(const Aws::String& value) { m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValue.assign(value); }
    inline SimpleScalarPropertiesResult& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline SimpleScalarPropertiesResult& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline SimpleScalarPropertiesResult& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetTrueBooleanValue() const{ return m_trueBooleanValue; }
    inline void SetTrueBooleanValue(bool value) { m_trueBooleanValue = value; }
    inline SimpleScalarPropertiesResult& WithTrueBooleanValue(bool value) { SetTrueBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetFalseBooleanValue() const{ return m_falseBooleanValue; }
    inline void SetFalseBooleanValue(bool value) { m_falseBooleanValue = value; }
    inline SimpleScalarPropertiesResult& WithFalseBooleanValue(bool value) { SetFalseBooleanValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetByteValue() const{ return m_byteValue; }
    inline void SetByteValue(int value) { m_byteValue = value; }
    inline SimpleScalarPropertiesResult& WithByteValue(int value) { SetByteValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetShortValue() const{ return m_shortValue; }
    inline void SetShortValue(int value) { m_shortValue = value; }
    inline SimpleScalarPropertiesResult& WithShortValue(int value) { SetShortValue(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline void SetIntegerValue(int value) { m_integerValue = value; }
    inline SimpleScalarPropertiesResult& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetLongValue() const{ return m_longValue; }
    inline void SetLongValue(long long value) { m_longValue = value; }
    inline SimpleScalarPropertiesResult& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetFloatValue() const{ return m_floatValue; }
    inline void SetFloatValue(double value) { m_floatValue = value; }
    inline SimpleScalarPropertiesResult& WithFloatValue(double value) { SetFloatValue(value); return *this;}
    ///@}

    ///@{
    
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline void SetDoubleValue(double value) { m_doubleValue = value; }
    inline SimpleScalarPropertiesResult& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SimpleScalarPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SimpleScalarPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SimpleScalarPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    Aws::String m_stringValue;

    bool m_trueBooleanValue;

    bool m_falseBooleanValue;

    int m_byteValue;

    int m_shortValue;

    int m_integerValue;

    long long m_longValue;

    double m_floatValue;

    double m_doubleValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
