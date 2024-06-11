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
  class GetBotAliasesResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline const Aws::Vector<BotAliasMetadata>& GetBotAliases() const{ return m_botAliases; }
    inline void SetBotAliases(const Aws::Vector<BotAliasMetadata>& value) { m_botAliases = value; }
    inline void SetBotAliases(Aws::Vector<BotAliasMetadata>&& value) { m_botAliases = std::move(value); }
    inline GetBotAliasesResult& WithBotAliases(const Aws::Vector<BotAliasMetadata>& value) { SetBotAliases(value); return *this;}
    inline GetBotAliasesResult& WithBotAliases(Aws::Vector<BotAliasMetadata>&& value) { SetBotAliases(std::move(value)); return *this;}
    inline GetBotAliasesResult& AddBotAliases(const BotAliasMetadata& value) { m_botAliases.push_back(value); return *this; }
    inline GetBotAliasesResult& AddBotAliases(BotAliasMetadata&& value) { m_botAliases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetBotAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetBotAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetBotAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBotAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBotAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBotAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BotAliasMetadata> m_botAliases;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
