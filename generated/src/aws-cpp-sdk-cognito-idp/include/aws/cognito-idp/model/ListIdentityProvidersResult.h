/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ProviderDescription.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class ListIdentityProvidersResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the IdPs in your user pool. For each, the response includes
     * identifiers, the IdP name and type, and trust-relationship details like the
     * issuer URL.</p>
     */
    inline const Aws::Vector<ProviderDescription>& GetProviders() const { return m_providers; }
    template<typename ProvidersT = Aws::Vector<ProviderDescription>>
    void SetProviders(ProvidersT&& value) { m_providersHasBeenSet = true; m_providers = std::forward<ProvidersT>(value); }
    template<typename ProvidersT = Aws::Vector<ProviderDescription>>
    ListIdentityProvidersResult& WithProviders(ProvidersT&& value) { SetProviders(std::forward<ProvidersT>(value)); return *this;}
    template<typename ProvidersT = ProviderDescription>
    ListIdentityProvidersResult& AddProviders(ProvidersT&& value) { m_providersHasBeenSet = true; m_providers.emplace_back(std::forward<ProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentityProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProviderDescription> m_providers;
    bool m_providersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
