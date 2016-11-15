/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

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
   * <p>Represents the response of the test invoke request in the HTTP method.</p>
   * <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-test-method.html#how-to-test-method-console">Test
   * API using the API Gateway console</a> </div>
   */
  class AWS_APIGATEWAY_API TestInvokeMethodResult
  {
  public:
    TestInvokeMethodResult();
    TestInvokeMethodResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestInvokeMethodResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The HTTP status code.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status code.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status code.</p>
     */
    inline TestInvokeMethodResult& WithStatus(int value) { SetStatus(value); return *this;}

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline void SetBody(const Aws::String& value) { m_body = value; }

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline void SetBody(Aws::String&& value) { m_body = value; }

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline void SetBody(const char* value) { m_body.assign(value); }

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& WithBody(Aws::String&& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& WithBody(const char* value) { SetBody(value); return *this;}

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline void SetHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_headers = value; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline void SetHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_headers = value; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& WithHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& WithHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaders(value); return *this;}

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(const Aws::String& key, const Aws::String& value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, const Aws::String& value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(const Aws::String& key, Aws::String&& value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, Aws::String&& value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(const char* key, Aws::String&& value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(Aws::String&& key, const char* value) { m_headers[key] = value; return *this; }

    /**
     * <p>The headers of the HTTP response.</p>
     */
    inline TestInvokeMethodResult& AddHeaders(const char* key, const char* value) { m_headers[key] = value; return *this; }

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline const Aws::String& GetLog() const{ return m_log; }

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline void SetLog(const Aws::String& value) { m_log = value; }

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline void SetLog(Aws::String&& value) { m_log = value; }

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline void SetLog(const char* value) { m_log.assign(value); }

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline TestInvokeMethodResult& WithLog(const Aws::String& value) { SetLog(value); return *this;}

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline TestInvokeMethodResult& WithLog(Aws::String&& value) { SetLog(value); return *this;}

    /**
     * <p>The Amazon API Gateway execution log for the test invoke request.</p>
     */
    inline TestInvokeMethodResult& WithLog(const char* value) { SetLog(value); return *this;}

    /**
     * <p>The execution latency of the test invoke request.</p>
     */
    inline long long GetLatency() const{ return m_latency; }

    /**
     * <p>The execution latency of the test invoke request.</p>
     */
    inline void SetLatency(long long value) { m_latency = value; }

    /**
     * <p>The execution latency of the test invoke request.</p>
     */
    inline TestInvokeMethodResult& WithLatency(long long value) { SetLatency(value); return *this;}

  private:
    int m_status;
    Aws::String m_body;
    Aws::Map<Aws::String, Aws::String> m_headers;
    Aws::String m_log;
    long long m_latency;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
