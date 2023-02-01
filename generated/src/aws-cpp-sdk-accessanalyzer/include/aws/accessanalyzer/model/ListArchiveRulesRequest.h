/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Retrieves a list of archive rules created for the specified
   * analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRulesRequest">AWS
   * API Reference</a></p>
   */
  class ListArchiveRulesRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API ListArchiveRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListArchiveRules"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;

    AWS_ACCESSANALYZER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline const Aws::String& GetAnalyzerName() const{ return m_analyzerName; }

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline void SetAnalyzerName(const Aws::String& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline void SetAnalyzerName(Aws::String&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline void SetAnalyzerName(const char* value) { m_analyzerNameHasBeenSet = true; m_analyzerName.assign(value); }

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline ListArchiveRulesRequest& WithAnalyzerName(const Aws::String& value) { SetAnalyzerName(value); return *this;}

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline ListArchiveRulesRequest& WithAnalyzerName(Aws::String&& value) { SetAnalyzerName(std::move(value)); return *this;}

    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline ListArchiveRulesRequest& WithAnalyzerName(const char* value) { SetAnalyzerName(value); return *this;}


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
    inline ListArchiveRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListArchiveRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListArchiveRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the request.</p>
     */
    inline ListArchiveRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
