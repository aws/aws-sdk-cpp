/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetBotVersionsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
