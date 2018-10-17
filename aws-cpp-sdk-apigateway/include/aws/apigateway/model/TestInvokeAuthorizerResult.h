/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the response of the test invoke request for a custom
   * <a>Authorizer</a></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeAuthorizerResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API TestInvokeAuthorizerResult
  {
  public:
    TestInvokeAuthorizerResult();
    TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline int GetClientStatus() const{ return m_clientStatus; }

    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline void SetClientStatus(int value) { m_clientStatus = value; }

    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline TestInvokeAuthorizerResult& WithClientStatus(int value) { SetClientStatus(value); return *this;}


    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline const Aws::String& GetLog() const{ return m_log; }

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(const Aws::String& value) { m_log = value; }

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(Aws::String&& value) { m_log = std::move(value); }

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline void SetLog(const char* value) { m_log.assign(value); }

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(const Aws::String& value) { SetLog(value); return *this;}

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(Aws::String&& value) { SetLog(std::move(value)); return *this;}

    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLog(const char* value) { SetLog(value); return *this;}


    /**
     * <p>The execution latency of the test authorizer request.</p>
     */
    inline long long GetLatency() const{ return m_latency; }

    /**
     * <p>The execution latency of the test authorizer request.</p>
     */
    inline void SetLatency(long long value) { m_latency = value; }

    /**
     * <p>The execution latency of the test authorizer request.</p>
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
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = std::move(value); }

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
    inline TestInvokeAuthorizerResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal identity returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document returned by the <a>Authorizer</a></p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuthorization() const{ return m_authorization; }

    
    inline void SetAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_authorization = value; }

    
    inline void SetAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_authorization = std::move(value); }

    
    inline TestInvokeAuthorizerResult& WithAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuthorization(value); return *this;}

    
    inline TestInvokeAuthorizerResult& WithAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuthorization(std::move(value)); return *this;}

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(key, value); return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(std::move(key), value); return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(key, std::move(value)); return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(std::move(key), std::move(value)); return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(key, std::move(value)); return *this; }

    
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(key, value); return *this; }


    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClaims() const{ return m_claims; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline void SetClaims(const Aws::Map<Aws::String, Aws::String>& value) { m_claims = value; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline void SetClaims(Aws::Map<Aws::String, Aws::String>&& value) { m_claims = std::move(value); }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& WithClaims(const Aws::Map<Aws::String, Aws::String>& value) { SetClaims(value); return *this;}

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& WithClaims(Aws::Map<Aws::String, Aws::String>&& value) { SetClaims(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const Aws::String& key, const Aws::String& value) { m_claims.emplace(key, value); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, const Aws::String& value) { m_claims.emplace(std::move(key), value); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const Aws::String& key, Aws::String&& value) { m_claims.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, Aws::String&& value) { m_claims.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const char* key, Aws::String&& value) { m_claims.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, const char* value) { m_claims.emplace(std::move(key), value); return *this; }

    /**
     * <p>The <a
     * href="https://openid.net/specs/openid-connect-core-1_0.html#StandardClaims">open
     * identity claims</a>, with any supported custom attributes, returned from the
     * Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const char* key, const char* value) { m_claims.emplace(key, value); return *this; }

  private:

    int m_clientStatus;

    Aws::String m_log;

    long long m_latency;

    Aws::String m_principalId;

    Aws::String m_policy;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_authorization;

    Aws::Map<Aws::String, Aws::String> m_claims;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
