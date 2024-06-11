﻿/**
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
    AWS_IOT_API TestInvokeAuthorizerResult();
    AWS_IOT_API TestInvokeAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TestInvokeAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>True if the token is authenticated, otherwise false.</p>
     */
    inline bool GetIsAuthenticated() const{ return m_isAuthenticated; }
    inline void SetIsAuthenticated(bool value) { m_isAuthenticated = value; }
    inline TestInvokeAuthorizerResult& WithIsAuthenticated(bool value) { SetIsAuthenticated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalId.assign(value); }
    inline TestInvokeAuthorizerResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline TestInvokeAuthorizerResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline TestInvokeAuthorizerResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM policy documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyDocuments() const{ return m_policyDocuments; }
    inline void SetPolicyDocuments(const Aws::Vector<Aws::String>& value) { m_policyDocuments = value; }
    inline void SetPolicyDocuments(Aws::Vector<Aws::String>&& value) { m_policyDocuments = std::move(value); }
    inline TestInvokeAuthorizerResult& WithPolicyDocuments(const Aws::Vector<Aws::String>& value) { SetPolicyDocuments(value); return *this;}
    inline TestInvokeAuthorizerResult& WithPolicyDocuments(Aws::Vector<Aws::String>&& value) { SetPolicyDocuments(std::move(value)); return *this;}
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(const Aws::String& value) { m_policyDocuments.push_back(value); return *this; }
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(Aws::String&& value) { m_policyDocuments.push_back(std::move(value)); return *this; }
    inline TestInvokeAuthorizerResult& AddPolicyDocuments(const char* value) { m_policyDocuments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which the temporary credentials are
     * refreshed.</p>
     */
    inline int GetRefreshAfterInSeconds() const{ return m_refreshAfterInSeconds; }
    inline void SetRefreshAfterInSeconds(int value) { m_refreshAfterInSeconds = value; }
    inline TestInvokeAuthorizerResult& WithRefreshAfterInSeconds(int value) { SetRefreshAfterInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds after which the connection is terminated.</p>
     */
    inline int GetDisconnectAfterInSeconds() const{ return m_disconnectAfterInSeconds; }
    inline void SetDisconnectAfterInSeconds(int value) { m_disconnectAfterInSeconds = value; }
    inline TestInvokeAuthorizerResult& WithDisconnectAfterInSeconds(int value) { SetDisconnectAfterInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestInvokeAuthorizerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestInvokeAuthorizerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestInvokeAuthorizerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_isAuthenticated;

    Aws::String m_principalId;

    Aws::Vector<Aws::String> m_policyDocuments;

    int m_refreshAfterInSeconds;

    int m_disconnectAfterInSeconds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
