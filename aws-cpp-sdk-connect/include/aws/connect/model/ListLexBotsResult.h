﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/LexBot.h>
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
namespace Connect
{
namespace Model
{
  class AWS_CONNECT_API ListLexBotsResult
  {
  public:
    ListLexBotsResult();
    ListLexBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLexBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline const Aws::Vector<LexBot>& GetLexBots() const{ return m_lexBots; }

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline void SetLexBots(const Aws::Vector<LexBot>& value) { m_lexBots = value; }

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline void SetLexBots(Aws::Vector<LexBot>&& value) { m_lexBots = std::move(value); }

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline ListLexBotsResult& WithLexBots(const Aws::Vector<LexBot>& value) { SetLexBots(value); return *this;}

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline ListLexBotsResult& WithLexBots(Aws::Vector<LexBot>&& value) { SetLexBots(std::move(value)); return *this;}

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline ListLexBotsResult& AddLexBots(const LexBot& value) { m_lexBots.push_back(value); return *this; }

    /**
     * <p>The names and Regions of the Amazon Lex bots associated with the specified
     * instance.</p>
     */
    inline ListLexBotsResult& AddLexBots(LexBot&& value) { m_lexBots.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListLexBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListLexBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListLexBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LexBot> m_lexBots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
