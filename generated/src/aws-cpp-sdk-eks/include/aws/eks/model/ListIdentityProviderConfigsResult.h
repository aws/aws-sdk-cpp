/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/IdentityProviderConfig.h>
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
namespace EKS
{
namespace Model
{
  class ListIdentityProviderConfigsResult
  {
  public:
    AWS_EKS_API ListIdentityProviderConfigsResult() = default;
    AWS_EKS_API ListIdentityProviderConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListIdentityProviderConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identity provider configurations for the cluster.</p>
     */
    inline const Aws::Vector<IdentityProviderConfig>& GetIdentityProviderConfigs() const { return m_identityProviderConfigs; }
    template<typename IdentityProviderConfigsT = Aws::Vector<IdentityProviderConfig>>
    void SetIdentityProviderConfigs(IdentityProviderConfigsT&& value) { m_identityProviderConfigsHasBeenSet = true; m_identityProviderConfigs = std::forward<IdentityProviderConfigsT>(value); }
    template<typename IdentityProviderConfigsT = Aws::Vector<IdentityProviderConfig>>
    ListIdentityProviderConfigsResult& WithIdentityProviderConfigs(IdentityProviderConfigsT&& value) { SetIdentityProviderConfigs(std::forward<IdentityProviderConfigsT>(value)); return *this;}
    template<typename IdentityProviderConfigsT = IdentityProviderConfig>
    ListIdentityProviderConfigsResult& AddIdentityProviderConfigs(IdentityProviderConfigsT&& value) { m_identityProviderConfigsHasBeenSet = true; m_identityProviderConfigs.emplace_back(std::forward<IdentityProviderConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListIdentityProviderConfigsResponse</code> request. When the results of a
     * <code>ListIdentityProviderConfigsResponse</code> request exceed
     * <code>maxResults</code>, you can use this value to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentityProviderConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityProviderConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityProviderConfig> m_identityProviderConfigs;
    bool m_identityProviderConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
