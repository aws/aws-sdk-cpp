/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanState.h>
#include <aws/savingsplans/model/SavingsPlanFilter.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlansRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlans"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanArns() const{ return m_savingsPlanArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline bool SavingsPlanArnsHasBeenSet() const { return m_savingsPlanArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline void SetSavingsPlanArns(const Aws::Vector<Aws::String>& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline void SetSavingsPlanArns(Aws::Vector<Aws::String>&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& WithSavingsPlanArns(const Aws::Vector<Aws::String>& value) { SetSavingsPlanArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& WithSavingsPlanArns(Aws::Vector<Aws::String>&& value) { SetSavingsPlanArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanArns(const Aws::String& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanArns(Aws::String&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanArns(const char* value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(value); return *this; }


    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanIds() const{ return m_savingsPlanIds; }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline bool SavingsPlanIdsHasBeenSet() const { return m_savingsPlanIdsHasBeenSet; }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline void SetSavingsPlanIds(const Aws::Vector<Aws::String>& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds = value; }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline void SetSavingsPlanIds(Aws::Vector<Aws::String>&& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds = std::move(value); }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& WithSavingsPlanIds(const Aws::Vector<Aws::String>& value) { SetSavingsPlanIds(value); return *this;}

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& WithSavingsPlanIds(Aws::Vector<Aws::String>&& value) { SetSavingsPlanIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanIds(const Aws::String& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanIds(Aws::String&& value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Savings Plans.</p>
     */
    inline DescribeSavingsPlansRequest& AddSavingsPlanIds(const char* value) { m_savingsPlanIdsHasBeenSet = true; m_savingsPlanIds.push_back(value); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline DescribeSavingsPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The states.</p>
     */
    inline const Aws::Vector<SavingsPlanState>& GetStates() const{ return m_states; }

    /**
     * <p>The states.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>The states.</p>
     */
    inline void SetStates(const Aws::Vector<SavingsPlanState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>The states.</p>
     */
    inline void SetStates(Aws::Vector<SavingsPlanState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>The states.</p>
     */
    inline DescribeSavingsPlansRequest& WithStates(const Aws::Vector<SavingsPlanState>& value) { SetStates(value); return *this;}

    /**
     * <p>The states.</p>
     */
    inline DescribeSavingsPlansRequest& WithStates(Aws::Vector<SavingsPlanState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>The states.</p>
     */
    inline DescribeSavingsPlansRequest& AddStates(const SavingsPlanState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>The states.</p>
     */
    inline DescribeSavingsPlansRequest& AddStates(SavingsPlanState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(const Aws::Vector<SavingsPlanFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(Aws::Vector<SavingsPlanFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansRequest& WithFilters(const Aws::Vector<SavingsPlanFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansRequest& WithFilters(Aws::Vector<SavingsPlanFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansRequest& AddFilters(const SavingsPlanFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansRequest& AddFilters(SavingsPlanFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_savingsPlanArns;
    bool m_savingsPlanArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_savingsPlanIds;
    bool m_savingsPlanIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<SavingsPlanState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<SavingsPlanFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
