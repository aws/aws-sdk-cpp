/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/LanguageModel.h>
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
  class AWS_TRANSCRIBESERVICE_API ListLanguageModelsResult
  {
  public:
    ListLanguageModelsResult();
    ListLanguageModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLanguageModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the MaxResults parameter. If there are more language models in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of language models.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline const Aws::Vector<LanguageModel>& GetModels() const{ return m_models; }

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline void SetModels(const Aws::Vector<LanguageModel>& value) { m_models = value; }

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline void SetModels(Aws::Vector<LanguageModel>&& value) { m_models = std::move(value); }

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline ListLanguageModelsResult& WithModels(const Aws::Vector<LanguageModel>& value) { SetModels(value); return *this;}

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline ListLanguageModelsResult& WithModels(Aws::Vector<LanguageModel>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline ListLanguageModelsResult& AddModels(const LanguageModel& value) { m_models.push_back(value); return *this; }

    /**
     * <p>A list of objects containing information about custom language models.</p>
     */
    inline ListLanguageModelsResult& AddModels(LanguageModel&& value) { m_models.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<LanguageModel> m_models;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
