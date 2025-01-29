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
  class HttpChecksumRequiredResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpChecksumRequiredResult();
    AWS_RESTJSONPROTOCOL_API HttpChecksumRequiredResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API HttpChecksumRequiredResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline void SetFoo(const Aws::String& value) { m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_foo.assign(value); }
    inline HttpChecksumRequiredResult& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline HttpChecksumRequiredResult& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline HttpChecksumRequiredResult& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpChecksumRequiredResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpChecksumRequiredResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpChecksumRequiredResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
