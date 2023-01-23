/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Bot.h>
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
namespace Chime
{
namespace Model
{
  class ListBotsResult
  {
  public:
    AWS_CHIME_API ListBotsResult();
    AWS_CHIME_API ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of bots and bot details.</p>
     */
    inline const Aws::Vector<Bot>& GetBots() const{ return m_bots; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline void SetBots(const Aws::Vector<Bot>& value) { m_bots = value; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline void SetBots(Aws::Vector<Bot>&& value) { m_bots = std::move(value); }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& WithBots(const Aws::Vector<Bot>& value) { SetBots(value); return *this;}

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& WithBots(Aws::Vector<Bot>&& value) { SetBots(std::move(value)); return *this;}

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& AddBots(const Bot& value) { m_bots.push_back(value); return *this; }

    /**
     * <p>List of bots and bot details.</p>
     */
    inline ListBotsResult& AddBots(Bot&& value) { m_bots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Bot> m_bots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
