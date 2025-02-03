/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class NullAndEmptyHeadersServerResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersServerResult();
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetA() const{ return m_a; }
    inline void SetA(const Aws::String& value) { m_a = value; }
    inline void SetA(Aws::String&& value) { m_a = std::move(value); }
    inline void SetA(const char* value) { m_a.assign(value); }
    inline NullAndEmptyHeadersServerResult& WithA(const Aws::String& value) { SetA(value); return *this;}
    inline NullAndEmptyHeadersServerResult& WithA(Aws::String&& value) { SetA(std::move(value)); return *this;}
    inline NullAndEmptyHeadersServerResult& WithA(const char* value) { SetA(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const{ return m_b; }
    inline void SetB(const Aws::String& value) { m_b = value; }
    inline void SetB(Aws::String&& value) { m_b = std::move(value); }
    inline void SetB(const char* value) { m_b.assign(value); }
    inline NullAndEmptyHeadersServerResult& WithB(const Aws::String& value) { SetB(value); return *this;}
    inline NullAndEmptyHeadersServerResult& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}
    inline NullAndEmptyHeadersServerResult& WithB(const char* value) { SetB(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetC() const{ return m_c; }
    inline void SetC(const Aws::Vector<Aws::String>& value) { m_c = value; }
    inline void SetC(Aws::Vector<Aws::String>&& value) { m_c = std::move(value); }
    inline NullAndEmptyHeadersServerResult& WithC(const Aws::Vector<Aws::String>& value) { SetC(value); return *this;}
    inline NullAndEmptyHeadersServerResult& WithC(Aws::Vector<Aws::String>&& value) { SetC(std::move(value)); return *this;}
    inline NullAndEmptyHeadersServerResult& AddC(const Aws::String& value) { m_c.push_back(value); return *this; }
    inline NullAndEmptyHeadersServerResult& AddC(Aws::String&& value) { m_c.push_back(std::move(value)); return *this; }
    inline NullAndEmptyHeadersServerResult& AddC(const char* value) { m_c.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline NullAndEmptyHeadersServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NullAndEmptyHeadersServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NullAndEmptyHeadersServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_a;

    Aws::String m_b;

    Aws::Vector<Aws::String> m_c;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
