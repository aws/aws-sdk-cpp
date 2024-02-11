/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/SearchVulnerabilitiesFilterCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class SearchVulnerabilitiesRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API SearchVulnerabilitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchVulnerabilities"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline const SearchVulnerabilitiesFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline void SetFilterCriteria(const SearchVulnerabilitiesFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline void SetFilterCriteria(SearchVulnerabilitiesFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline SearchVulnerabilitiesRequest& WithFilterCriteria(const SearchVulnerabilitiesFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>The criteria used to filter the results of a vulnerability search.</p>
     */
    inline SearchVulnerabilitiesRequest& WithFilterCriteria(SearchVulnerabilitiesFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline SearchVulnerabilitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline SearchVulnerabilitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline SearchVulnerabilitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    SearchVulnerabilitiesFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
