/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SortDefinition.h>
#include <aws/ce/model/SavingsPlansDataType.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetSavingsPlansUtilizationDetailsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansUtilizationDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSavingsPlansUtilizationDetails"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that you want the usage and costs for. The <code>Start</code>
     * date must be within 13 months. The <code>End</code> date must be after the
     * <code>Start</code> date, and before the current date. Future dates can't be used
     * as an <code>End</code> date.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters Savings Plans utilization coverage data for active Savings Plans
     * dimensions. You can filter data with the following dimensions:</p> <ul> <li> <p>
     * <code>LINKED_ACCOUNT</code> </p> </li> <li> <p> <code>SAVINGS_PLAN_ARN</code>
     * </p> </li> <li> <p> <code>REGION</code> </p> </li> <li> <p>
     * <code>PAYMENT_OPTION</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE_FAMILY</code> </p> </li> </ul> <p>
     * <code>GetSavingsPlansUtilizationDetails</code> uses the same <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object as the other operations, but only <code>AND</code> is supported among
     * each dimension.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The data type.</p>
     */
    inline const Aws::Vector<SavingsPlansDataType>& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(const Aws::Vector<SavingsPlansDataType>& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type.</p>
     */
    inline void SetDataType(Aws::Vector<SavingsPlansDataType>&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithDataType(const Aws::Vector<SavingsPlansDataType>& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithDataType(Aws::Vector<SavingsPlansDataType>&& value) { SetDataType(std::move(value)); return *this;}

    /**
     * <p>The data type.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& AddDataType(const SavingsPlansDataType& value) { m_dataTypeHasBeenSet = true; m_dataType.push_back(value); return *this; }

    /**
     * <p>The data type.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& AddDataType(SavingsPlansDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType.push_back(std::move(value)); return *this; }


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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of items to be returned in a response. The default is
     * <code>20</code>, with a minimum value of <code>1</code>.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline const SortDefinition& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(const SortDefinition& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline void SetSortBy(SortDefinition&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithSortBy(const SortDefinition& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value that you want to sort the data by.</p> <p>The following values are
     * supported for <code>Key</code>:</p> <ul> <li> <p>
     * <code>UtilizationPercentage</code> </p> </li> <li> <p>
     * <code>TotalCommitment</code> </p> </li> <li> <p> <code>UsedCommitment</code>
     * </p> </li> <li> <p> <code>UnusedCommitment</code> </p> </li> <li> <p>
     * <code>NetSavings</code> </p> </li> <li> <p>
     * <code>AmortizedRecurringCommitment</code> </p> </li> <li> <p>
     * <code>AmortizedUpfrontCommitment</code> </p> </li> </ul> <p>The supported values
     * for <code>SortOrder</code> are <code>ASCENDING</code> and
     * <code>DESCENDING</code>.</p>
     */
    inline GetSavingsPlansUtilizationDetailsRequest& WithSortBy(SortDefinition&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<SavingsPlansDataType> m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortDefinition m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
