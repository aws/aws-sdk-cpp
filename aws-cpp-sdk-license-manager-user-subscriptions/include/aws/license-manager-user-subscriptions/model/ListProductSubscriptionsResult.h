/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
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
  class ListProductSubscriptionsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListProductSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListProductSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListProductSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline const Aws::Vector<ProductUserSummary>& GetProductUserSummaries() const{ return m_productUserSummaries; }

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline void SetProductUserSummaries(const Aws::Vector<ProductUserSummary>& value) { m_productUserSummaries = value; }

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline void SetProductUserSummaries(Aws::Vector<ProductUserSummary>&& value) { m_productUserSummaries = std::move(value); }

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline ListProductSubscriptionsResult& WithProductUserSummaries(const Aws::Vector<ProductUserSummary>& value) { SetProductUserSummaries(value); return *this;}

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline ListProductSubscriptionsResult& WithProductUserSummaries(Aws::Vector<ProductUserSummary>&& value) { SetProductUserSummaries(std::move(value)); return *this;}

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline ListProductSubscriptionsResult& AddProductUserSummaries(const ProductUserSummary& value) { m_productUserSummaries.push_back(value); return *this; }

    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline ListProductSubscriptionsResult& AddProductUserSummaries(ProductUserSummary&& value) { m_productUserSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProductUserSummary> m_productUserSummaries;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
