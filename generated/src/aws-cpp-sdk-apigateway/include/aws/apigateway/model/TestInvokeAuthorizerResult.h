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
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult() = default;
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status code that the client would have received. Value is 0 if the
     * authorizer succeeded.</p>
     */
    inline int GetClientStatus() const { return m_clientStatus; }
    inline void SetClientStatus(int value) { m_clientStatusHasBeenSet = true; m_clientStatus = value; }
    inline TestInvokeAuthorizerResult& WithClientStatus(int value) { SetClientStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Gateway execution log for the test authorizer request.</p>
     */
    inline const Aws::String& GetLog() const { return m_log; }
    template<typename LogT = Aws::String>
    void SetLog(LogT&& value) { m_logHasBeenSet = true; m_log = std::forward<LogT>(value); }
    template<typename LogT = Aws::String>
    TestInvokeAuthorizerResult& WithLog(LogT&& value) { SetLog(std::forward<LogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution latency, in ms, of the test authorizer request.</p>
     */
    inline long long GetLatency() const { return m_latency; }
    inline void SetLatency(long long value) { m_latencyHasBeenSet = true; m_latency = value; }
    inline TestInvokeAuthorizerResult& WithLatency(long long value) { SetLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal identity returned by the Authorizer</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    TestInvokeAuthorizerResult& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON policy document returned by the Authorizer</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    TestInvokeAuthorizerResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuthorization() const { return m_authorization; }
    template<typename AuthorizationT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAuthorization(AuthorizationT&& value) { m_authorizationHasBeenSet = true; m_authorization = std::forward<AuthorizationT>(value); }
    template<typename AuthorizationT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    TestInvokeAuthorizerResult& WithAuthorization(AuthorizationT&& value) { SetAuthorization(std::forward<AuthorizationT>(value)); return *this;}
    template<typename AuthorizationKeyT = Aws::String, typename AuthorizationValueT = Aws::Vector<Aws::String>>
    TestInvokeAuthorizerResult& AddAuthorization(AuthorizationKeyT&& key, AuthorizationValueT&& value) {
      m_authorizationHasBeenSet = true; m_authorization.emplace(std::forward<AuthorizationKeyT>(key), std::forward<AuthorizationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The open identity claims, with any supported custom attributes, returned from
     * the Cognito Your User Pool configured for the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClaims() const { return m_claims; }
    template<typename ClaimsT = Aws::Map<Aws::String, Aws::String>>
    void SetClaims(ClaimsT&& value) { m_claimsHasBeenSet = true; m_claims = std::forward<ClaimsT>(value); }
    template<typename ClaimsT = Aws::Map<Aws::String, Aws::String>>
    TestInvokeAuthorizerResult& WithClaims(ClaimsT&& value) { SetClaims(std::forward<ClaimsT>(value)); return *this;}
    template<typename ClaimsKeyT = Aws::String, typename ClaimsValueT = Aws::String>
    TestInvokeAuthorizerResult& AddClaims(ClaimsKeyT&& key, ClaimsValueT&& value) {
      m_claimsHasBeenSet = true; m_claims.emplace(std::forward<ClaimsKeyT>(key), std::forward<ClaimsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestInvokeAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_clientStatus{0};
    bool m_clientStatusHasBeenSet = false;

    Aws::String m_log;
    bool m_logHasBeenSet = false;

    long long m_latency{0};
    bool m_latencyHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_authorization;
    bool m_authorizationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_claims;
    bool m_claimsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
