﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/CoverageFilterCriteria.h>
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
  class ListCoverageRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCoverageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCoverage"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    inline void SetFilterCriteria(const CoverageFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }
    inline void SetFilterCriteria(CoverageFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }
    inline ListCoverageRequest& WithFilterCriteria(const CoverageFilterCriteria& value) { SetFilterCriteria(value); return *this;}
    inline ListCoverageRequest& WithFilterCriteria(CoverageFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results the response can return. If your request would
     * return more than the maximum the response will return a <code>nextToken</code>
     * value, use this value when you call the action again to get the remaining
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCoverageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. If
     * your response returns more than the <code>maxResults</code> maximum value it
     * will also return a <code>nextToken</code> value. For subsequent calls, use the
     * <code>nextToken</code> value returned from the previous request to continue
     * listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCoverageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCoverageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCoverageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    CoverageFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
