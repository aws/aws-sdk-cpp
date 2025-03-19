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
    AWS_APIGATEWAY_API TestInvokeMethodResult() = default;
    AWS_APIGATEWAY_API TestInvokeMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API TestInvokeMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status code.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestInvokeMethodResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the HTTP response.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    TestInvokeMethodResult& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const { return m_headers; }
    template<typename HeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Map<Aws::String, Aws::String>>
    TestInvokeMethodResult& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersKeyT = Aws::String, typename HeadersValueT = Aws::String>
    TestInvokeMethodResult& AddHeaders(HeadersKeyT&& key, HeadersValueT&& value) {
      m_headersHasBeenSet = true; m_headers.emplace(std::forward<HeadersKeyT>(key), std::forward<HeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The headers of the HTTP response as a map from string to list of values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMultiValueHeaders() const { return m_multiValueHeaders; }
    template<typename MultiValueHeadersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetMultiValueHeaders(MultiValueHeadersT&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = std::forward<MultiValueHeadersT>(value); }
    template<typename MultiValueHeadersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    TestInvokeMethodResult& WithMultiValueHeaders(MultiValueHeadersT&& value) { SetMultiValueHeaders(std::forward<MultiValueHeadersT>(value)); return *this;}
    template<typename MultiValueHeadersKeyT = Aws::String, typename MultiValueHeadersValueT = Aws::Vector<Aws::String>>
    TestInvokeMethodResult& AddMultiValueHeaders(MultiValueHeadersKeyT&& key, MultiValueHeadersValueT&& value) {
      m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::forward<MultiValueHeadersKeyT>(key), std::forward<MultiValueHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The API Gateway execution log for the test invoke request.</p>
     */
    inline const Aws::String& GetLog() const { return m_log; }
    template<typename LogT = Aws::String>
    void SetLog(LogT&& value) { m_logHasBeenSet = true; m_log = std::forward<LogT>(value); }
    template<typename LogT = Aws::String>
    TestInvokeMethodResult& WithLog(LogT&& value) { SetLog(std::forward<LogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution latency, in ms, of the test invoke request.</p>
     */
    inline long long GetLatency() const { return m_latency; }
    inline void SetLatency(long long value) { m_latencyHasBeenSet = true; m_latency = value; }
    inline TestInvokeMethodResult& WithLatency(long long value) { SetLatency(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestInvokeMethodResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_headers;
    bool m_headersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_multiValueHeaders;
    bool m_multiValueHeadersHasBeenSet = false;

    Aws::String m_log;
    bool m_logHasBeenSet = false;

    long long m_latency{0};
    bool m_latencyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
