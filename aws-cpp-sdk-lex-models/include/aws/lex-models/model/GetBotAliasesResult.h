﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BotAliasMetadata.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult
  {
  public:
    GetBotAliasesResult();
    GetBotAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBotAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline const Aws::Vector<BotAliasMetadata>& GetBotAliases() const{ return m_botAliases; }

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline void SetBotAliases(const Aws::Vector<BotAliasMetadata>& value) { m_botAliases = value; }

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline void SetBotAliases(Aws::Vector<BotAliasMetadata>&& value) { m_botAliases = std::move(value); }

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline GetBotAliasesResult& WithBotAliases(const Aws::Vector<BotAliasMetadata>& value) { SetBotAliases(value); return *this;}

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline GetBotAliasesResult& WithBotAliases(Aws::Vector<BotAliasMetadata>&& value) { SetBotAliases(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline GetBotAliasesResult& AddBotAliases(const BotAliasMetadata& value) { m_botAliases.push_back(value); return *this; }

    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline GetBotAliasesResult& AddBotAliases(BotAliasMetadata&& value) { m_botAliases.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BotAliasMetadata> m_botAliases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
