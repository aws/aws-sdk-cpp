/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/UnionPayload.h>
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
  class HttpPayloadWithUnionResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult();
    AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const UnionPayload& GetNested() const{ return m_nested; }
    inline void SetNested(const UnionPayload& value) { m_nested = value; }
    inline void SetNested(UnionPayload&& value) { m_nested = std::move(value); }
    inline HttpPayloadWithUnionResult& WithNested(const UnionPayload& value) { SetNested(value); return *this;}
    inline HttpPayloadWithUnionResult& WithNested(UnionPayload&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpPayloadWithUnionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadWithUnionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadWithUnionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UnionPayload m_nested;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
