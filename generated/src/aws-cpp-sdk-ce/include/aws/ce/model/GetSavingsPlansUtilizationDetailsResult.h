/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/SavingsPlansUtilizationAggregates.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SavingsPlansUtilizationDetail.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlansUtilizationDetailsResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult();
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline const Aws::Vector<SavingsPlansUtilizationDetail>& GetSavingsPlansUtilizationDetails() const{ return m_savingsPlansUtilizationDetails; }

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline void SetSavingsPlansUtilizationDetails(const Aws::Vector<SavingsPlansUtilizationDetail>& value) { m_savingsPlansUtilizationDetails = value; }

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline void SetSavingsPlansUtilizationDetails(Aws::Vector<SavingsPlansUtilizationDetail>&& value) { m_savingsPlansUtilizationDetails = std::move(value); }

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithSavingsPlansUtilizationDetails(const Aws::Vector<SavingsPlansUtilizationDetail>& value) { SetSavingsPlansUtilizationDetails(value); return *this;}

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithSavingsPlansUtilizationDetails(Aws::Vector<SavingsPlansUtilizationDetail>&& value) { SetSavingsPlansUtilizationDetails(std::move(value)); return *this;}

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& AddSavingsPlansUtilizationDetails(const SavingsPlansUtilizationDetail& value) { m_savingsPlansUtilizationDetails.push_back(value); return *this; }

    /**
     * <p>Retrieves a single daily or monthly Savings Plans utilization rate and
     * details for your account.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& AddSavingsPlansUtilizationDetails(SavingsPlansUtilizationDetail&& value) { m_savingsPlansUtilizationDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline const SavingsPlansUtilizationAggregates& GetTotal() const{ return m_total; }

    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline void SetTotal(const SavingsPlansUtilizationAggregates& value) { m_total = value; }

    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline void SetTotal(SavingsPlansUtilizationAggregates&& value) { m_total = std::move(value); }

    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithTotal(const SavingsPlansUtilizationAggregates& value) { SetTotal(value); return *this;}

    /**
     * <p>The total Savings Plans utilization, regardless of time period.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithTotal(SavingsPlansUtilizationAggregates&& value) { SetTotal(std::move(value)); return *this;}


    
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriod = value; }

    
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriod = std::move(value); }

    
    inline GetSavingsPlansUtilizationDetailsResult& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    
    inline GetSavingsPlansUtilizationDetailsResult& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SavingsPlansUtilizationDetail> m_savingsPlansUtilizationDetails;

    SavingsPlansUtilizationAggregates m_total;

    DateInterval m_timePeriod;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
