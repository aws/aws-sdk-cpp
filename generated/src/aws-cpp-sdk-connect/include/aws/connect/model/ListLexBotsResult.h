/**
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
  class ListLexBotsResult
  {
  public:
    AWS_CONNECT_API ListLexBotsResult() = default;
    AWS_CONNECT_API ListLexBotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListLexBotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names and Amazon Web Services Regions of the Amazon Lex bots associated
     * with the specified instance.</p>
     */
    inline const Aws::Vector<LexBot>& GetLexBots() const { return m_lexBots; }
    template<typename LexBotsT = Aws::Vector<LexBot>>
    void SetLexBots(LexBotsT&& value) { m_lexBotsHasBeenSet = true; m_lexBots = std::forward<LexBotsT>(value); }
    template<typename LexBotsT = Aws::Vector<LexBot>>
    ListLexBotsResult& WithLexBots(LexBotsT&& value) { SetLexBots(std::forward<LexBotsT>(value)); return *this;}
    template<typename LexBotsT = LexBot>
    ListLexBotsResult& AddLexBots(LexBotsT&& value) { m_lexBotsHasBeenSet = true; m_lexBots.emplace_back(std::forward<LexBotsT>(value)); return *this; }
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
    ListLexBotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLexBotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LexBot> m_lexBots;
    bool m_lexBotsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
