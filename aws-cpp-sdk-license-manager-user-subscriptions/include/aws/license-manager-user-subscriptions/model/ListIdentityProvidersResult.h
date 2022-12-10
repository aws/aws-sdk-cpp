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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline const Aws::Vector<IdentityProviderSummary>& GetIdentityProviderSummaries() const{ return m_identityProviderSummaries; }

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline void SetIdentityProviderSummaries(const Aws::Vector<IdentityProviderSummary>& value) { m_identityProviderSummaries = value; }

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline void SetIdentityProviderSummaries(Aws::Vector<IdentityProviderSummary>&& value) { m_identityProviderSummaries = std::move(value); }

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline ListIdentityProvidersResult& WithIdentityProviderSummaries(const Aws::Vector<IdentityProviderSummary>& value) { SetIdentityProviderSummaries(value); return *this;}

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline ListIdentityProvidersResult& WithIdentityProviderSummaries(Aws::Vector<IdentityProviderSummary>&& value) { SetIdentityProviderSummaries(std::move(value)); return *this;}

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline ListIdentityProvidersResult& AddIdentityProviderSummaries(const IdentityProviderSummary& value) { m_identityProviderSummaries.push_back(value); return *this; }

    /**
     * <p>Metadata that describes the list identity providers operation.</p>
     */
    inline ListIdentityProvidersResult& AddIdentityProviderSummaries(IdentityProviderSummary&& value) { m_identityProviderSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityProviderSummary> m_identityProviderSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
