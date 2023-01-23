/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ImportSummary.h>
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
  class ListImportsResult
  {
  public:
    AWS_LEXMODELSV2_API ListImportsResult();
    AWS_LEXMODELSV2_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline ListImportsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline ListImportsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned by Amazon Lex to the bot.</p>
     */
    inline ListImportsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline ListImportsResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline ListImportsResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that was imported. It will always be
     * <code>DRAFT</code>.</p>
     */
    inline ListImportsResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline const Aws::Vector<ImportSummary>& GetImportSummaries() const{ return m_importSummaries; }

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline void SetImportSummaries(const Aws::Vector<ImportSummary>& value) { m_importSummaries = value; }

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline void SetImportSummaries(Aws::Vector<ImportSummary>&& value) { m_importSummaries = std::move(value); }

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline ListImportsResult& WithImportSummaries(const Aws::Vector<ImportSummary>& value) { SetImportSummaries(value); return *this;}

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline ListImportsResult& WithImportSummaries(Aws::Vector<ImportSummary>&& value) { SetImportSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline ListImportsResult& AddImportSummaries(const ImportSummary& value) { m_importSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for the imports that meet the filter criteria specified
     * in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter. If there are more imports available, the
     * <code>nextToken</code> field contains a token to get the next page of
     * results.</p>
     */
    inline ListImportsResult& AddImportSummaries(ImportSummary&& value) { m_importSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline ListImportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline ListImportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListImports</code> operation. If the <code>nextToken</code> field
     * is present, you send the contents as the <code>nextToken</code> parameter of a
     * <code>ListImports</code> operation request to get the next page of results.</p>
     */
    inline ListImportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The locale specified in the request.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale specified in the request.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The locale specified in the request.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The locale specified in the request.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The locale specified in the request.</p>
     */
    inline ListImportsResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale specified in the request.</p>
     */
    inline ListImportsResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale specified in the request.</p>
     */
    inline ListImportsResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::Vector<ImportSummary> m_importSummaries;

    Aws::String m_nextToken;

    Aws::String m_localeId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
