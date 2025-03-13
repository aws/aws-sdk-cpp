/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/LexBotConfig.h>
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
  class ListBotsResult
  {
  public:
    AWS_CONNECT_API ListBotsResult() = default;
    AWS_CONNECT_API ListBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names and Amazon Web Services Regions of the Amazon Lex or Amazon Lex V2
     * bots associated with the specified instance.</p>
     */
    inline const Aws::Vector<LexBotConfig>& GetLexBots() const { return m_lexBots; }
    template<typename LexBotsT = Aws::Vector<LexBotConfig>>
    void SetLexBots(LexBotsT&& value) { m_lexBotsHasBeenSet = true; m_lexBots = std::forward<LexBotsT>(value); }
    template<typename LexBotsT = Aws::Vector<LexBotConfig>>
    ListBotsResult& WithLexBots(LexBotsT&& value) { SetLexBots(std::forward<LexBotsT>(value)); return *this;}
    template<typename LexBotsT = LexBotConfig>
    ListBotsResult& AddLexBots(LexBotsT&& value) { m_lexBotsHasBeenSet = true; m_lexBots.emplace_back(std::forward<LexBotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LexBotConfig> m_lexBots;
    bool m_lexBotsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
