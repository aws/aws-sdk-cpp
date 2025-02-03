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
  class NullAndEmptyHeadersClientResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult();
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetA() const{ return m_a; }
    inline void SetA(const Aws::String& value) { m_a = value; }
    inline void SetA(Aws::String&& value) { m_a = std::move(value); }
    inline void SetA(const char* value) { m_a.assign(value); }
    inline NullAndEmptyHeadersClientResult& WithA(const Aws::String& value) { SetA(value); return *this;}
    inline NullAndEmptyHeadersClientResult& WithA(Aws::String&& value) { SetA(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientResult& WithA(const char* value) { SetA(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const{ return m_b; }
    inline void SetB(const Aws::String& value) { m_b = value; }
    inline void SetB(Aws::String&& value) { m_b = std::move(value); }
    inline void SetB(const char* value) { m_b.assign(value); }
    inline NullAndEmptyHeadersClientResult& WithB(const Aws::String& value) { SetB(value); return *this;}
    inline NullAndEmptyHeadersClientResult& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientResult& WithB(const char* value) { SetB(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetC() const{ return m_c; }
    inline void SetC(const Aws::Vector<Aws::String>& value) { m_c = value; }
    inline void SetC(Aws::Vector<Aws::String>&& value) { m_c = std::move(value); }
    inline NullAndEmptyHeadersClientResult& WithC(const Aws::Vector<Aws::String>& value) { SetC(value); return *this;}
    inline NullAndEmptyHeadersClientResult& WithC(Aws::Vector<Aws::String>&& value) { SetC(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientResult& AddC(const Aws::String& value) { m_c.push_back(value); return *this; }
    inline NullAndEmptyHeadersClientResult& AddC(Aws::String&& value) { m_c.push_back(std::move(value)); return *this; }
    inline NullAndEmptyHeadersClientResult& AddC(const char* value) { m_c.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline NullAndEmptyHeadersClientResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NullAndEmptyHeadersClientResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
