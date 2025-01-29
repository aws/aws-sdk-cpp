/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
namespace JsonProtocol
{
namespace Model
{
  class SimpleScalarPropertiesResult
  {
  public:
    AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult();
    AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

    double m_floatValue;

    double m_doubleValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
