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
#include <aws/core/utils/memory/stl/AWSVector.h>

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
   * <p>Represents the response of the test invoke request in for a custom
   * <a>Authorizer</a></p>
   */
  class AWS_APIGATEWAY_API TestInvokeAuthorizerResult
  {
  public:
    TestInvokeAuthorizerResult();
    TestInvokeAuthorizerResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestInvokeAuthorizerResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline long GetClientStatus() const{ return m_clientStatus; }

    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline void SetClientStatus(long value) { m_clientStatus = value; }

    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline TestInvokeAuthorizerResult& WithClientStatus(long value) { SetClientStatus(value); return *this;}

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline const Aws::String& GetLog() const{ return m_log; }

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(const Aws::String& value) { m_log = value; }

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(Aws::String&& value) { m_log = value; }

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(const char* value) { m_log.assign(value); }

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(const Aws::String& value) { SetLog(value); return *this;}

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(Aws::String&& value) { SetLog(value); return *this;}

    /**
     * <p>The Amazon API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(const char* value) { SetLog(value); return *this;}

    /**
     * <p>The execution latency of the test authorizer request</p>
     */
    inline long long GetLatency() const{ return m_latency; }

    /**
     * <p>The execution latency of the test authorizer request</p>
     */
    inline void SetLatency(long long value) { m_latency = value; }

    /**
     * <p>The execution latency of the test authorizer request</p>
     */
    inline TestInvokeAuthorizerResult& WithLatency(long long value) { SetLatency(value); return *this;}

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalId = value; }

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = value; }

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline void SetPrincipalId(const char* value) { m_principalId.assign(value); }

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = value; }

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy JSON document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuthorization() const{ return m_authorization; }

    
    inline void SetAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_authorization = value; }

    
    inline void SetAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_authorization = value; }

    
    inline TestInvokeAuthorizerResult& WithAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuthorization(value); return *this;}

    
    inline TestInvokeAuthorizerResult& WithAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuthorization(value); return *this;}

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_authorization[key] = value; return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_authorization[key] = value; return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_authorization[key] = value; return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_authorization[key] = value; return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, Aws::Vector<Aws::String>&& value) { m_authorization[key] = value; return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, const Aws::Vector<Aws::String>& value) { m_authorization[key] = value; return *this; }

  private:
    long m_clientStatus;
    Aws::String m_log;
    long long m_latency;
    Aws::String m_principalId;
    Aws::String m_policy;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_authorization;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
