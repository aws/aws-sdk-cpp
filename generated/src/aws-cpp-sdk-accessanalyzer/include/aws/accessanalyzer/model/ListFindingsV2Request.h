﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/SortCriteria.h>
#include <aws/accessanalyzer/model/Criterion.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class ListFindingsV2Request : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API ListFindingsV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindingsV2"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> to retrieve findings from.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }
    inline ListFindingsV2Request& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}
    inline ListFindingsV2Request& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}
    inline ListFindingsV2Request& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to match for the findings to return.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::Map<Aws::String, Criterion>& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::Map<Aws::String, Criterion>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListFindingsV2Request& WithFilter(const Aws::Map<Aws::String, Criterion>& value) { SetFilter(value); return *this;}
    inline ListFindingsV2Request& WithFilter(Aws::Map<Aws::String, Criterion>&& value) { SetFilter(std::move(value)); return *this;}
    inline ListFindingsV2Request& AddFilter(const Aws::String& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }
    inline ListFindingsV2Request& AddFilter(Aws::String&& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }
    inline ListFindingsV2Request& AddFilter(const Aws::String& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }
    inline ListFindingsV2Request& AddFilter(Aws::String&& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }
    inline ListFindingsV2Request& AddFilter(const char* key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }
    inline ListFindingsV2Request& AddFilter(const char* key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingsV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFindingsV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const SortCriteria& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const SortCriteria& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(SortCriteria&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListFindingsV2Request& WithSort(const SortCriteria& value) { SetSort(value); return *this;}
    inline ListFindingsV2Request& WithSort(SortCriteria&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortCriteria m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
