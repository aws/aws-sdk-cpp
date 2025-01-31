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
  class NullOperationResult
  {
  public:
    AWS_JSONPROTOCOL_API NullOperationResult();
    AWS_JSONPROTOCOL_API NullOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API NullOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetString() const{ return m_string; }
    inline void SetString(const Aws::String& value) { m_string = value; }
    inline void SetString(Aws::String&& value) { m_string = std::move(value); }
    inline void SetString(const char* value) { m_string.assign(value); }
    inline NullOperationResult& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline NullOperationResult& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline NullOperationResult& WithString(const char* value) { SetString(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline NullOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NullOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NullOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_string;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
