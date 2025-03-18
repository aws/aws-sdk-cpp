/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProviderSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class ListIdentityProvidersResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>IdentityProviderSummary</code> resources that contain
     * details about the Active Directory identity providers that meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<IdentityProviderSummary>& GetIdentityProviderSummaries() const { return m_identityProviderSummaries; }
    template<typename IdentityProviderSummariesT = Aws::Vector<IdentityProviderSummary>>
    void SetIdentityProviderSummaries(IdentityProviderSummariesT&& value) { m_identityProviderSummariesHasBeenSet = true; m_identityProviderSummaries = std::forward<IdentityProviderSummariesT>(value); }
    template<typename IdentityProviderSummariesT = Aws::Vector<IdentityProviderSummary>>
    ListIdentityProvidersResult& WithIdentityProviderSummaries(IdentityProviderSummariesT&& value) { SetIdentityProviderSummaries(std::forward<IdentityProviderSummariesT>(value)); return *this;}
    template<typename IdentityProviderSummariesT = IdentityProviderSummary>
    ListIdentityProvidersResult& AddIdentityProviderSummaries(IdentityProviderSummariesT&& value) { m_identityProviderSummariesHasBeenSet = true; m_identityProviderSummaries.emplace_back(std::forward<IdentityProviderSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
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

    Aws::Vector<IdentityProviderSummary> m_identityProviderSummaries;
    bool m_identityProviderSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
