/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/GenerationSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListBotResourceGenerationsResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotResourceGenerationsResult();
    AWS_LEXMODELSV2_API ListBotResourceGenerationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotResourceGenerationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot for which the generation requests were
     * made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale of the bot for which the generation requests were made.</p>
     */
    inline ListBotResourceGenerationsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline const Aws::Vector<GenerationSummary>& GetGenerationSummaries() const{ return m_generationSummaries; }

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline void SetGenerationSummaries(const Aws::Vector<GenerationSummary>& value) { m_generationSummaries = value; }

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline void SetGenerationSummaries(Aws::Vector<GenerationSummary>&& value) { m_generationSummaries = std::move(value); }

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline ListBotResourceGenerationsResult& WithGenerationSummaries(const Aws::Vector<GenerationSummary>& value) { SetGenerationSummaries(value); return *this;}

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline ListBotResourceGenerationsResult& WithGenerationSummaries(Aws::Vector<GenerationSummary>&& value) { SetGenerationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline ListBotResourceGenerationsResult& AddGenerationSummaries(const GenerationSummary& value) { m_generationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects, each containing information about a generation request for
     * the bot locale.</p>
     */
    inline ListBotResourceGenerationsResult& AddGenerationSummaries(GenerationSummary&& value) { m_generationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results is greater than the number specified in the
     * <code>maxResults</code>, the response returns a token in the
     * <code>nextToken</code> field. Use this token when making a request to return the
     * next batch of results.</p>
     */
    inline ListBotResourceGenerationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBotResourceGenerationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBotResourceGenerationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBotResourceGenerationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::Vector<GenerationSummary> m_generationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
