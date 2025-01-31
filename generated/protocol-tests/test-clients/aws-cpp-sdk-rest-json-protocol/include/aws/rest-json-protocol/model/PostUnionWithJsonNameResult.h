/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/UnionWithJsonName.h>
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
  class PostUnionWithJsonNameResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API PostUnionWithJsonNameResult();
    AWS_RESTJSONPROTOCOL_API PostUnionWithJsonNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API PostUnionWithJsonNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const UnionWithJsonName& GetValue() const{ return m_value; }
    inline void SetValue(const UnionWithJsonName& value) { m_value = value; }
    inline void SetValue(UnionWithJsonName&& value) { m_value = std::move(value); }
    inline PostUnionWithJsonNameResult& WithValue(const UnionWithJsonName& value) { SetValue(value); return *this;}
    inline PostUnionWithJsonNameResult& WithValue(UnionWithJsonName&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostUnionWithJsonNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostUnionWithJsonNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostUnionWithJsonNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UnionWithJsonName m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
