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
  class MediaTypeHeaderResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API MediaTypeHeaderResult();
    AWS_RESTJSONPROTOCOL_API MediaTypeHeaderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API MediaTypeHeaderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetJson() const{ return m_json; }
    inline void SetJson(const Aws::String& value) { m_json = value; }
    inline void SetJson(Aws::String&& value) { m_json = std::move(value); }
    inline void SetJson(const char* value) { m_json.assign(value); }
    inline MediaTypeHeaderResult& WithJson(const Aws::String& value) { SetJson(value); return *this;}
    inline MediaTypeHeaderResult& WithJson(Aws::String&& value) { SetJson(std::move(value)); return *this;}
    inline MediaTypeHeaderResult& WithJson(const char* value) { SetJson(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline MediaTypeHeaderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline MediaTypeHeaderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline MediaTypeHeaderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_json;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
