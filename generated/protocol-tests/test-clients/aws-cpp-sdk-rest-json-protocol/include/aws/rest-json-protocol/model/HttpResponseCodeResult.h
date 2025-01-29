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
  class HttpResponseCodeResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpResponseCodeResult();
    AWS_RESTJSONPROTOCOL_API HttpResponseCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API HttpResponseCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline HttpResponseCodeResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline HttpResponseCodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpResponseCodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpResponseCodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
