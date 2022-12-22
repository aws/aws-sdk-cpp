/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class ListVocabularyFiltersRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVocabularyFilters"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your <code>ListVocabularyFilters</code> request returns more results than
     * can be displayed, <code>NextToken</code> is displayed in the response with an
     * associated string. To get the next page of results, copy this string and repeat
     * your request, including <code>NextToken</code> with the value of the copied
     * string. Repeat as needed to view all your results.</p>
     */
    inline ListVocabularyFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of custom vocabulary filters to return in each page of
     * results. If there are fewer results than the value that you specify, only the
     * actual results are returned. If you don't specify a value, a default of 5 is
     * used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of custom vocabulary filters to return in each page of
     * results. If there are fewer results than the value that you specify, only the
     * actual results are returned. If you don't specify a value, a default of 5 is
     * used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of custom vocabulary filters to return in each page of
     * results. If there are fewer results than the value that you specify, only the
     * actual results are returned. If you don't specify a value, a default of 5 is
     * used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of custom vocabulary filters to return in each page of
     * results. If there are fewer results than the value that you specify, only the
     * actual results are returned. If you don't specify a value, a default of 5 is
     * used.</p>
     */
    inline ListVocabularyFiltersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Returns only the custom vocabulary filters that contain the specified string.
     * The search is not case sensitive.</p>
     */
    inline ListVocabularyFiltersRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
