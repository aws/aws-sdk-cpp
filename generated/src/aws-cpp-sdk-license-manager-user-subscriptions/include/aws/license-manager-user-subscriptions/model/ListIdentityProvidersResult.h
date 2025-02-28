﻿/**
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>IdentityProviderSummary</code> resources that contain
     * details about the Active Directory identity providers that meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<IdentityProviderSummary>& GetIdentityProviderSummaries() const{ return m_identityProviderSummaries; }
    inline void SetIdentityProviderSummaries(const Aws::Vector<IdentityProviderSummary>& value) { m_identityProviderSummaries = value; }
    inline void SetIdentityProviderSummaries(Aws::Vector<IdentityProviderSummary>&& value) { m_identityProviderSummaries = std::move(value); }
    inline ListIdentityProvidersResult& WithIdentityProviderSummaries(const Aws::Vector<IdentityProviderSummary>& value) { SetIdentityProviderSummaries(value); return *this;}
    inline ListIdentityProvidersResult& WithIdentityProviderSummaries(Aws::Vector<IdentityProviderSummary>&& value) { SetIdentityProviderSummaries(std::move(value)); return *this;}
    inline ListIdentityProvidersResult& AddIdentityProviderSummaries(const IdentityProviderSummary& value) { m_identityProviderSummaries.push_back(value); return *this; }
    inline ListIdentityProvidersResult& AddIdentityProviderSummaries(IdentityProviderSummary&& value) { m_identityProviderSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIdentityProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIdentityProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIdentityProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIdentityProvidersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIdentityProvidersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIdentityProvidersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityProviderSummary> m_identityProviderSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
