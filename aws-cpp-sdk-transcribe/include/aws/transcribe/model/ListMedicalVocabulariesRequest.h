/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/VocabularyState.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesRequest : public TranscribeServiceRequest
  {
  public:
    ListMedicalVocabulariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMedicalVocabularies"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of your previous request to
     * <code>ListMedicalVocabularies</code> was truncated, include the
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of vocabularies to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of vocabularies to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of vocabularies to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of vocabularies to return in the response.</p>
     */
    inline ListMedicalVocabulariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline const VocabularyState& GetStateEquals() const{ return m_stateEquals; }

    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline bool StateEqualsHasBeenSet() const { return m_stateEqualsHasBeenSet; }

    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline void SetStateEquals(const VocabularyState& value) { m_stateEqualsHasBeenSet = true; m_stateEquals = value; }

    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline void SetStateEquals(VocabularyState&& value) { m_stateEqualsHasBeenSet = true; m_stateEquals = std::move(value); }

    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline ListMedicalVocabulariesRequest& WithStateEquals(const VocabularyState& value) { SetStateEquals(value); return *this;}

    /**
     * <p>When specified, only returns vocabularies with the
     * <code>VocabularyState</code> equal to the specified vocabulary state.</p>
     */
    inline ListMedicalVocabulariesRequest& WithStateEquals(VocabularyState&& value) { SetStateEquals(std::move(value)); return *this;}


    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Returns vocabularies in the list whose name contains the specified string.
     * The search is case-insensitive, <code>ListMedicalVocabularies</code> returns
     * both "vocabularyname" and "VocabularyName" in the response list.</p>
     */
    inline ListMedicalVocabulariesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    VocabularyState m_stateEquals;
    bool m_stateEqualsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
