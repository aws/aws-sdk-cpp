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
  class OperationWithOptionalInputOutputResult
  {
  public:
    AWS_JSONPROTOCOL_API OperationWithOptionalInputOutputResult();
    AWS_JSONPROTOCOL_API OperationWithOptionalInputOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API OperationWithOptionalInputOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline OperationWithOptionalInputOutputResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline OperationWithOptionalInputOutputResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline OperationWithOptionalInputOutputResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline OperationWithOptionalInputOutputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline OperationWithOptionalInputOutputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline OperationWithOptionalInputOutputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
