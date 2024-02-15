/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/FilterCriteria.h>
#include <aws/detective/model/SortCriteria.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class ListInvestigationsRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API ListInvestigationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvestigations"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline ListInvestigationsRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline ListInvestigationsRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline ListInvestigationsRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListInvestigationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListInvestigationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return a Validation Exception error.</p>
     */
    inline ListInvestigationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists the maximum number of investigations in a page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Lists the maximum number of investigations in a page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Lists the maximum number of investigations in a page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Lists the maximum number of investigations in a page.</p>
     */
    inline ListInvestigationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline ListInvestigationsRequest& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>Filters the investigation results based on a criteria.</p>
     */
    inline ListInvestigationsRequest& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline const SortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline void SetSortCriteria(const SortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline void SetSortCriteria(SortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline ListInvestigationsRequest& WithSortCriteria(const SortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>Sorts the investigation results based on a criteria.</p>
     */
    inline ListInvestigationsRequest& WithSortCriteria(SortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
