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
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BotMetadata</code> objects, one for each numbered version
     * of the bot plus one for the <code>$LATEST</code> version.</p>
     */
    inline const Aws::Vector<BotMetadata>& GetBots() const { return m_bots; }
    template<typename BotsT = Aws::Vector<BotMetadata>>
    void SetBots(BotsT&& value) { m_botsHasBeenSet = true; m_bots = std::forward<BotsT>(value); }
    template<typename BotsT = Aws::Vector<BotMetadata>>
    GetBotVersionsResult& WithBots(BotsT&& value) { SetBots(std::forward<BotsT>(value)); return *this;}
    template<typename BotsT = BotMetadata>
    GetBotVersionsResult& AddBots(BotsT&& value) { m_botsHasBeenSet = true; m_bots.emplace_back(std::forward<BotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching the next page of bot versions. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of versions, specify the pagination token in
     * the next request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBotVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBotVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BotMetadata> m_bots;
    bool m_botsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
