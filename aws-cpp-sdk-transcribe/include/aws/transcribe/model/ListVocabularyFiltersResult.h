/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/VocabularyFilterInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API ListVocabularyFiltersResult
  {
  public:
    ListVocabularyFiltersResult();
    ListVocabularyFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVocabularyFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListVocabularyFilters</code> operation returns a page of
     * collections at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Transcribe returns the <code>NextPage</code> token. Include
     * the token in the next request to the <code>ListVocabularyFilters</code>
     * operation to return in the next page of jobs.</p>
     */
    inline ListVocabularyFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline const Aws::Vector<VocabularyFilterInfo>& GetVocabularyFilters() const{ return m_vocabularyFilters; }

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline void SetVocabularyFilters(const Aws::Vector<VocabularyFilterInfo>& value) { m_vocabularyFilters = value; }

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline void SetVocabularyFilters(Aws::Vector<VocabularyFilterInfo>&& value) { m_vocabularyFilters = std::move(value); }

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline ListVocabularyFiltersResult& WithVocabularyFilters(const Aws::Vector<VocabularyFilterInfo>& value) { SetVocabularyFilters(value); return *this;}

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline ListVocabularyFiltersResult& WithVocabularyFilters(Aws::Vector<VocabularyFilterInfo>&& value) { SetVocabularyFilters(std::move(value)); return *this;}

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline ListVocabularyFiltersResult& AddVocabularyFilters(const VocabularyFilterInfo& value) { m_vocabularyFilters.push_back(value); return *this; }

    /**
     * <p>The list of vocabulary filters. It contains at most <code>MaxResults</code>
     * number of filters. If there are more filters, call the
     * <code>ListVocabularyFilters</code> operation again with the
     * <code>NextToken</code> parameter in the request set to the value of the
     * <code>NextToken</code> field in the response.</p>
     */
    inline ListVocabularyFiltersResult& AddVocabularyFilters(VocabularyFilterInfo&& value) { m_vocabularyFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VocabularyFilterInfo> m_vocabularyFilters;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
