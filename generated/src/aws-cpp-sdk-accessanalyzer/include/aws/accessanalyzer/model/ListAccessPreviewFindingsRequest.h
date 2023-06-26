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
    AWS_ACCESSANALYZER_API ListAccessPreviewFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPreviewFindings"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetAccessPreviewId() const{ return m_accessPreviewId; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline bool AccessPreviewIdHasBeenSet() const { return m_accessPreviewIdHasBeenSet; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(const Aws::String& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = value; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(Aws::String&& value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId = std::move(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetAccessPreviewId(const char* value) { m_accessPreviewIdHasBeenSet = true; m_accessPreviewId.assign(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAccessPreviewId(const Aws::String& value) { SetAccessPreviewId(value); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAccessPreviewId(Aws::String&& value) { SetAccessPreviewId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAccessPreviewId(const char* value) { SetAccessPreviewId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-getting-started.html#permission-resources">ARN
     * of the analyzer</a> used to generate the access.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}


    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const{ return m_filter; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline void SetFilter(const Aws::Map<Aws::String, Criterion>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline void SetFilter(Aws::Map<Aws::String, Criterion>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithFilter(const Aws::Map<Aws::String, Criterion>& value) { SetFilter(value); return *this;}

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithFilter(Aws::Map<Aws::String, Criterion>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(const Aws::String& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(Aws::String&& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(const Aws::String& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(Aws::String&& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(const char* key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Criteria to filter the returned findings.</p>
     */
    inline ListAccessPreviewFindingsRequest& AddFilter(const char* key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListAccessPreviewFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_accessPreviewId;
    bool m_accessPreviewIdHasBeenSet = false;

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
