/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class HttpPrefixHeadersInResponseResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult();
    AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetPrefixHeaders() const{ return m_prefixHeaders; }
    inline void SetPrefixHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_prefixHeaders = value; }
    inline void SetPrefixHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_prefixHeaders = std::move(value); }
    inline HttpPrefixHeadersInResponseResult& WithPrefixHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetPrefixHeaders(value); return *this;}
    inline HttpPrefixHeadersInResponseResult& WithPrefixHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetPrefixHeaders(std::move(value)); return *this;}
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(const Aws::String& key, const Aws::String& value) { m_prefixHeaders.emplace(key, value); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(Aws::String&& key, const Aws::String& value) { m_prefixHeaders.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(const Aws::String& key, Aws::String&& value) { m_prefixHeaders.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(Aws::String&& key, Aws::String&& value) { m_prefixHeaders.emplace(std::move(key), std::move(value)); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(const char* key, Aws::String&& value) { m_prefixHeaders.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(Aws::String&& key, const char* value) { m_prefixHeaders.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersInResponseResult& AddPrefixHeaders(const char* key, const char* value) { m_prefixHeaders.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPrefixHeadersInResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPrefixHeadersInResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPrefixHeadersInResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_prefixHeaders;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
