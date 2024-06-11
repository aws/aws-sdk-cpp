/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents the response of the test invoke request in the HTTP
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeMethodResponse">AWS
   * API Reference</a></p>
   */
  class TestInvokeMethodResult
  {
  public:
    AWS_APIGATEWAY_API TestInvokeMethodResult();
    AWS_APIGATEWAY_API TestInvokeMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API TestInvokeMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status code.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline TestInvokeMethodResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the HTTP response.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline void SetBody(const Aws::String& value) { m_body = value; }
    inline void SetBody(Aws::String&& value) { m_body = std::move(value); }
    inline void SetBody(const char* value) { m_body.assign(value); }
    inline TestInvokeMethodResult& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline TestInvokeMethodResult& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline TestInvokeMethodResult& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const{ return m_headers; }
    inline void SetHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_headers = value; }
    inline void SetHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_headers = std::move(value); }
    inline TestInvokeMethodResult& WithHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaders(value); return *this;}
    inline TestInvokeMethodResult& WithHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaders(std::move(value)); return *this;}
    inline TestInvokeMethodResult& AddHeaders(const Aws::String& key, const Aws::String& value) { m_headers.emplace(key, value); return *this; }
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, const Aws::String& value) { m_headers.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodResult& AddHeaders(const Aws::String& key, Aws::String&& value) { m_headers.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, Aws::String&& value) { m_headers.emplace(std::move(key), std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddHeaders(const char* key, Aws::String&& value) { m_headers.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, const char* value) { m_headers.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodResult& AddHeaders(const char* key, const char* value) { m_headers.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The headers of the HTTP response as a map from string to list of values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMultiValueHeaders() const{ return m_multiValueHeaders; }
    inline void SetMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_multiValueHeaders = value; }
    inline void SetMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_multiValueHeaders = std::move(value); }
    inline TestInvokeMethodResult& WithMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMultiValueHeaders(value); return *this;}
    inline TestInvokeMethodResult& WithMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMultiValueHeaders(std::move(value)); return *this;}
    inline TestInvokeMethodResult& AddMultiValueHeaders(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeaders.emplace(key, value); return *this; }
    inline TestInvokeMethodResult& AddMultiValueHeaders(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeaders.emplace(std::move(key), value); return *this; }
    inline TestInvokeMethodResult& AddMultiValueHeaders(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddMultiValueHeaders(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeaders.emplace(std::move(key), std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddMultiValueHeaders(const char* key, Aws::Vector<Aws::String>&& value) { m_multiValueHeaders.emplace(key, std::move(value)); return *this; }
    inline TestInvokeMethodResult& AddMultiValueHeaders(const char* key, const Aws::Vector<Aws::String>& value) { m_multiValueHeaders.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The API Gateway execution log for the test invoke request.</p>
     */
    inline const Aws::String& GetLog() const{ return m_log; }
    inline void SetLog(const Aws::String& value) { m_log = value; }
    inline void SetLog(Aws::String&& value) { m_log = std::move(value); }
    inline void SetLog(const char* value) { m_log.assign(value); }
    inline TestInvokeMethodResult& WithLog(const Aws::String& value) { SetLog(value); return *this;}
    inline TestInvokeMethodResult& WithLog(Aws::String&& value) { SetLog(std::move(value)); return *this;}
    inline TestInvokeMethodResult& WithLog(const char* value) { SetLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution latency, in ms, of the test invoke request.</p>
     */
    inline long long GetLatency() const{ return m_latency; }
    inline void SetLatency(long long value) { m_latency = value; }
    inline TestInvokeMethodResult& WithLatency(long long value) { SetLatency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestInvokeMethodResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestInvokeMethodResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestInvokeMethodResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::String m_body;

    Aws::Map<Aws::String, Aws::String> m_headers;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_multiValueHeaders;

    Aws::String m_log;

    long long m_latency;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
