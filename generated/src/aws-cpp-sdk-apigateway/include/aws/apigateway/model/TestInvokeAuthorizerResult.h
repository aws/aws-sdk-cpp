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
   * <p>Represents the response of the test invoke request for a custom
   * Authorizer</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeAuthorizerResponse">AWS
   * API Reference</a></p>
   */
  class TestInvokeAuthorizerResult
  {
  public:
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult();
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The execution latency, in ms, of the test authorizer request.</p>
     */
    inline long long GetLatency() const{ return m_latency; }

    /**
     * <p>The execution latency, in ms, of the test authorizer request.</p>
     */
    inline void SetLatency(long long value) { m_latency = value; }

    /**
     * <p>The execution latency, in ms, of the test authorizer request.</p>
     */
    inline TestInvokeAuthorizerResult& WithLatency(long long value) { SetLatency(value); return *this;}


    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalId = value; }

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = std::move(value); }

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalId.assign(value); }

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline TestInvokeAuthorizerResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The authorization response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuthorization() const{ return m_authorization; }

    /**
     * <p>The authorization response.</p>
     */
    inline void SetAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_authorization = value; }

    /**
     * <p>The authorization response.</p>
     */
    inline void SetAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_authorization = std::move(value); }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& WithAuthorization(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuthorization(value); return *this;}

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& WithAuthorization(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuthorization(std::move(value)); return *this;}

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(key, value); return *this; }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(std::move(key), value); return *this; }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, Aws::Vector<Aws::String>&& value) { m_authorization.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The authorization response.</p>
     */
    inline TestInvokeAuthorizerResult& AddAuthorization(const char* key, const Aws::Vector<Aws::String>& value) { m_authorization.emplace(key, value); return *this; }


    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClaims() const{ return m_claims; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline void SetClaims(const Aws::Map<Aws::String, Aws::String>& value) { m_claims = value; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline void SetClaims(Aws::Map<Aws::String, Aws::String>&& value) { m_claims = std::move(value); }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& WithClaims(const Aws::Map<Aws::String, Aws::String>& value) { SetClaims(value); return *this;}

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& WithClaims(Aws::Map<Aws::String, Aws::String>&& value) { SetClaims(std::move(value)); return *this;}

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const Aws::String& key, const Aws::String& value) { m_claims.emplace(key, value); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, const Aws::String& value) { m_claims.emplace(std::move(key), value); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const Aws::String& key, Aws::String&& value) { m_claims.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, Aws::String&& value) { m_claims.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const char* key, Aws::String&& value) { m_claims.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(Aws::String&& key, const char* value) { m_claims.emplace(std::move(key), value); return *this; }

    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline TestInvokeAuthorizerResult& AddClaims(const char* key, const char* value) { m_claims.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestInvokeAuthorizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestInvokeAuthorizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestInvokeAuthorizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_clientStatus;

    Aws::String m_log;

    long long m_latency;

    Aws::String m_principalId;

    Aws::String m_policy;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_authorization;

    Aws::Map<Aws::String, Aws::String> m_claims;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
