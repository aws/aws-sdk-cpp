/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ListAccessPreviewFindingsRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API ListAccessPreviewFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPreviewFindings"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetAccessPreviewId() const { return m_accessPreviewId; }
    inline bool AccessPreviewIdHasBeenSet() const { return m_accessPreviewIdHasBeenSet; }
    template<typename AccessPreviewIdT = Aws::String>
    void SetAccessPreviewId(AccessPreviewIdT&& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = std::forward<AccessPreviewIdT>(value); }
    template<typename AccessPreviewIdT = Aws::String>
    ListAccessPreviewFindingsRequest& WithAccessPreviewId(AccessPreviewIdT&& value) { SetAccessPreviewId(std::forward<AccessPreviewIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const { return m_analyzerArn; }
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }
    template<typename AnalyzerArnT = Aws::String>
    void SetAnalyzerArn(AnalyzerArnT&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::forward<AnalyzerArnT>(value); }
    template<typename AnalyzerArnT = Aws::String>
    ListAccessPreviewFindingsRequest& WithAnalyzerArn(AnalyzerArnT&& value) { SetAnalyzerArn(std::forward<AnalyzerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Criterion>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Criterion>>
    ListAccessPreviewFindingsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Criterion>
    ListAccessPreviewFindingsRequest& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPreviewFindingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccessPreviewFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_accessPreviewId;
    bool m_accessPreviewIdHasBeenSet = false;

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
