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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult
  {
  public:
    GetBotVersionsResult();
    GetBotVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBotVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline const Aws::Vector<BotMetadata>& GetBots() const{ return m_bots; }

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline void SetBots(const Aws::Vector<BotMetadata>& value) { m_bots = value; }

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline void SetBots(Aws::Vector<BotMetadata>&& value) { m_bots = std::move(value); }

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetBotVersionsResult& WithBots(const Aws::Vector<BotMetadata>& value) { SetBots(value); return *this;}

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetBotVersionsResult& WithBots(Aws::Vector<BotMetadata>&& value) { SetBots(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetBotVersionsResult& AddBots(const BotMetadata& value) { m_bots.push_back(value); return *this; }

    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline GetBotVersionsResult& AddBots(BotMetadata&& value) { m_bots.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetBotVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetBotVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline GetBotVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BotMetadata> m_bots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
