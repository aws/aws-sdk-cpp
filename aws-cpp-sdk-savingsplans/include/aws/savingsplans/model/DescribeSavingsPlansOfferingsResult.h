/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanOffering.h>
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
namespace SavingsPlans
{
namespace Model
{
  class DescribeSavingsPlansOfferingsResult
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult();
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline const Aws::Vector<SavingsPlanOffering>& GetSearchResults() const{ return m_searchResults; }

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline void SetSearchResults(const Aws::Vector<SavingsPlanOffering>& value) { m_searchResults = value; }

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline void SetSearchResults(Aws::Vector<SavingsPlanOffering>&& value) { m_searchResults = std::move(value); }

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& WithSearchResults(const Aws::Vector<SavingsPlanOffering>& value) { SetSearchResults(value); return *this;}

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& WithSearchResults(Aws::Vector<SavingsPlanOffering>&& value) { SetSearchResults(std::move(value)); return *this;}

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& AddSearchResults(const SavingsPlanOffering& value) { m_searchResults.push_back(value); return *this; }

    /**
     * <p>Information about the Savings Plans offerings.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& AddSearchResults(SavingsPlanOffering&& value) { m_searchResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeSavingsPlansOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SavingsPlanOffering> m_searchResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
