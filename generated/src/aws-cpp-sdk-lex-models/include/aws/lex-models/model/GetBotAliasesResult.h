/**
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
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>BotAliasMetadata</code> objects, each describing a bot
     * alias.</p>
     */
    inline const Aws::Vector<BotAliasMetadata>& GetBotAliases() const { return m_botAliases; }
    template<typename BotAliasesT = Aws::Vector<BotAliasMetadata>>
    void SetBotAliases(BotAliasesT&& value) { m_botAliasesHasBeenSet = true; m_botAliases = std::forward<BotAliasesT>(value); }
    template<typename BotAliasesT = Aws::Vector<BotAliasMetadata>>
    GetBotAliasesResult& WithBotAliases(BotAliasesT&& value) { SetBotAliases(std::forward<BotAliasesT>(value)); return *this;}
    template<typename BotAliasesT = BotAliasMetadata>
    GetBotAliasesResult& AddBotAliases(BotAliasesT&& value) { m_botAliasesHasBeenSet = true; m_botAliases.emplace_back(std::forward<BotAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching next page of aliases. If the response to this
     * call is truncated, Amazon Lex returns a pagination token in the response. To
     * fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBotAliasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBotAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BotAliasMetadata> m_botAliases;
    bool m_botAliasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
