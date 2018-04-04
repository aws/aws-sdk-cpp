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
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/VocabularyInfo.h>
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
  class AWS_TRANSCRIBESERVICE_API ListVocabulariesResult
  {
  public:
    ListVocabulariesResult();
    ListVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested vocabulary state.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline void SetStatus(const TranscriptionJobStatus& value) { m_status = value; }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline void SetStatus(TranscriptionJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline ListVocabulariesResult& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline ListVocabulariesResult& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline ListVocabulariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline ListVocabulariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListVocabularies</code> operation returns a page of vocabularies at
     * a time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListVocabularies</code> operation to return in the
     * next page of jobs.</p>
     */
    inline ListVocabulariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline const Aws::Vector<VocabularyInfo>& GetVocabularies() const{ return m_vocabularies; }

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline void SetVocabularies(const Aws::Vector<VocabularyInfo>& value) { m_vocabularies = value; }

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline void SetVocabularies(Aws::Vector<VocabularyInfo>&& value) { m_vocabularies = std::move(value); }

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline ListVocabulariesResult& WithVocabularies(const Aws::Vector<VocabularyInfo>& value) { SetVocabularies(value); return *this;}

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline ListVocabulariesResult& WithVocabularies(Aws::Vector<VocabularyInfo>&& value) { SetVocabularies(std::move(value)); return *this;}

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline ListVocabulariesResult& AddVocabularies(const VocabularyInfo& value) { m_vocabularies.push_back(value); return *this; }

    /**
     * <p>A list of objects that describe the vocabularies that match the search
     * criteria in the request.</p>
     */
    inline ListVocabulariesResult& AddVocabularies(VocabularyInfo&& value) { m_vocabularies.push_back(std::move(value)); return *this; }

  private:

    TranscriptionJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<VocabularyInfo> m_vocabularies;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
