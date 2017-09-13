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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BotMetadata.h>
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotsResult
  {
  public:
    GetBotsResult();
    GetBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline const Aws::Vector<BotMetadata>& GetBots() const{ return m_bots; }

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline void SetBots(const Aws::Vector<BotMetadata>& value) { m_bots = value; }

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline void SetBots(Aws::Vector<BotMetadata>&& value) { m_bots = std::move(value); }

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline GetBotsResult& WithBots(const Aws::Vector<BotMetadata>& value) { SetBots(value); return *this;}

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline GetBotsResult& WithBots(Aws::Vector<BotMetadata>&& value) { SetBots(std::move(value)); return *this;}

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline GetBotsResult& AddBots(const BotMetadata& value) { m_bots.push_back(value); return *this; }

    /**
     * <p>An array of <code>botMetadata</code> objects, with one entry for each bot.
     * </p>
     */
    inline GetBotsResult& AddBots(BotMetadata&& value) { m_bots.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline GetBotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline GetBotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, it includes a pagination token that you can
     * specify in your next request to fetch the next page of bots. </p>
     */
    inline GetBotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BotMetadata> m_bots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
