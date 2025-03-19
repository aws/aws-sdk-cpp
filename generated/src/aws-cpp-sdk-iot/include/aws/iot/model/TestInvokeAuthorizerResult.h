/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class TestInvokeAuthorizerResult
  {
  public:
    AWS_IOT_API TestInvokeAuthorizerResult() = default;
    AWS_IOT_API TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>True if the token is authenticated, otherwise false.</p>
     */
    inline bool GetIsAuthenticated() const { return m_isAuthenticated; }
    inline void SetIsAuthenticated(bool value) { m_isAuthenticatedHasBeenSet = true; m_isAuthenticated = value; }
    inline TestInvokeAuthorizerResult& WithIsAuthenticated(bool value) { SetIsAuthenticated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    TestInvokeAuthorizerResult& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM policy documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyDocuments() const { return m_policyDocuments; }
    template<typename PolicyDocumentsT = Aws::Vector<Aws::String>>
    void SetPolicyDocuments(PolicyDocumentsT&& value) { m_policyDocumentsHasBeenSet = true; m_policyDocuments = std::forward<PolicyDocumentsT>(value); }
    template<typename PolicyDocumentsT = Aws::Vector<Aws::String>>
    TestInvokeAuthorizerResult& WithPolicyDocuments(PolicyDocumentsT&& value) { SetPolicyDocuments(std::forward<PolicyDocumentsT>(value)); return *this;}
    template<typename PolicyDocumentsT = Aws::String>
    TestInvokeAuthorizerResult& AddPolicyDocuments(PolicyDocumentsT&& value) { m_policyDocumentsHasBeenSet = true; m_policyDocuments.emplace_back(std::forward<PolicyDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which the temporary credentials are
     * refreshed.</p>
     */
    inline int GetRefreshAfterInSeconds() const { return m_refreshAfterInSeconds; }
    inline void SetRefreshAfterInSeconds(int value) { m_refreshAfterInSecondsHasBeenSet = true; m_refreshAfterInSeconds = value; }
    inline TestInvokeAuthorizerResult& WithRefreshAfterInSeconds(int value) { SetRefreshAfterInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which the connection is terminated.</p>
     */
    inline int GetDisconnectAfterInSeconds() const { return m_disconnectAfterInSeconds; }
    inline void SetDisconnectAfterInSeconds(int value) { m_disconnectAfterInSecondsHasBeenSet = true; m_disconnectAfterInSeconds = value; }
    inline TestInvokeAuthorizerResult& WithDisconnectAfterInSeconds(int value) { SetDisconnectAfterInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestInvokeAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isAuthenticated{false};
    bool m_isAuthenticatedHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyDocuments;
    bool m_policyDocumentsHasBeenSet = false;

    int m_refreshAfterInSeconds{0};
    bool m_refreshAfterInSecondsHasBeenSet = false;

    int m_disconnectAfterInSeconds{0};
    bool m_disconnectAfterInSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
