/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/VocabularyState.h>
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
  class AWS_TRANSCRIBESERVICE_API ListMedicalVocabulariesResult
  {
  public:
    ListMedicalVocabulariesResult();
    ListMedicalVocabulariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMedicalVocabulariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested vocabulary state.</p>
     */
    inline const VocabularyState& GetStatus() const{ return m_status; }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline void SetStatus(const VocabularyState& value) { m_status = value; }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline void SetStatus(VocabularyState&& value) { m_status = std::move(value); }

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline ListMedicalVocabulariesResult& WithStatus(const VocabularyState& value) { SetStatus(value); return *this;}

    /**
     * <p>The requested vocabulary state.</p>
     */
    inline ListMedicalVocabulariesResult& WithStatus(VocabularyState&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline ListMedicalVocabulariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline ListMedicalVocabulariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListMedicalVocabularies</code> operation returns a page of
     * vocabularies at a time. You set the maximum number of vocabularies to return on
     * a page with the <code>MaxResults</code> parameter. If there are more jobs in the
     * list will fit on a page, Amazon Transcribe Medical returns the
     * <code>NextPage</code> token. To return the next page of vocabularies, include
     * the token in the next request to the <code>ListMedicalVocabularies</code>
     * operation .</p>
     */
    inline ListMedicalVocabulariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline const Aws::Vector<VocabularyInfo>& GetVocabularies() const{ return m_vocabularies; }

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline void SetVocabularies(const Aws::Vector<VocabularyInfo>& value) { m_vocabularies = value; }

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline void SetVocabularies(Aws::Vector<VocabularyInfo>&& value) { m_vocabularies = std::move(value); }

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline ListMedicalVocabulariesResult& WithVocabularies(const Aws::Vector<VocabularyInfo>& value) { SetVocabularies(value); return *this;}

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline ListMedicalVocabulariesResult& WithVocabularies(Aws::Vector<VocabularyInfo>&& value) { SetVocabularies(std::move(value)); return *this;}

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline ListMedicalVocabulariesResult& AddVocabularies(const VocabularyInfo& value) { m_vocabularies.push_back(value); return *this; }

    /**
     * <p>A list of objects that describe the vocabularies that match your search
     * criteria.</p>
     */
    inline ListMedicalVocabulariesResult& AddVocabularies(VocabularyInfo&& value) { m_vocabularies.push_back(std::move(value)); return *this; }

  private:

    VocabularyState m_status;

    Aws::String m_nextToken;

    Aws::Vector<VocabularyInfo> m_vocabularies;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
