/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/SortOrderType.h>
#include <aws/secretsmanager/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API ListSecretsRequest : public SecretsManagerRequest
  {
  public:
    ListSecretsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecrets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Optional) Limits the number of results you want to include in the response.
     * If you don't include this parameter, it defaults to a value that's specific to
     * the operation. If additional items exist beyond the maximum you specify, the
     * <code>NextToken</code> response element is present and has a value (isn't null).
     * Include that value as the <code>NextToken</code> request parameter in the next
     * call to the operation to get the next part of the results. Note that Secrets
     * Manager might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Limits the number of results you want to include in the response.
     * If you don't include this parameter, it defaults to a value that's specific to
     * the operation. If additional items exist beyond the maximum you specify, the
     * <code>NextToken</code> response element is present and has a value (isn't null).
     * Include that value as the <code>NextToken</code> request parameter in the next
     * call to the operation to get the next part of the results. Note that Secrets
     * Manager might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Limits the number of results you want to include in the response.
     * If you don't include this parameter, it defaults to a value that's specific to
     * the operation. If additional items exist beyond the maximum you specify, the
     * <code>NextToken</code> response element is present and has a value (isn't null).
     * Include that value as the <code>NextToken</code> request parameter in the next
     * call to the operation to get the next part of the results. Note that Secrets
     * Manager might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Limits the number of results you want to include in the response.
     * If you don't include this parameter, it defaults to a value that's specific to
     * the operation. If additional items exist beyond the maximum you specify, the
     * <code>NextToken</code> response element is present and has a value (isn't null).
     * Include that value as the <code>NextToken</code> request parameter in the next
     * call to the operation to get the next part of the results. Note that Secrets
     * Manager might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p>
     */
    inline ListSecretsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline ListSecretsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline ListSecretsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request indicating there's more
     * output available. In a subsequent call, set it to the value of the previous call
     * <code>NextToken</code> response to indicate where the output should continue
     * from.</p>
     */
    inline ListSecretsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists the secret request filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline ListSecretsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline ListSecretsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline ListSecretsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Lists the secret request filters.</p>
     */
    inline ListSecretsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline ListSecretsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Lists secrets in the requested order. </p>
     */
    inline ListSecretsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
