/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LexRuntimeService
{
namespace Model
{
  class DeleteSessionResult
  {
  public:
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult() = default;
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXRUNTIMESERVICE_API DeleteSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot associated with the session data.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    DeleteSessionResult& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias in use for the bot associated with the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const { return m_botAlias; }
    template<typename BotAliasT = Aws::String>
    void SetBotAlias(BotAliasT&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::forward<BotAliasT>(value); }
    template<typename BotAliasT = Aws::String>
    DeleteSessionResult& WithBotAlias(BotAliasT&& value) { SetBotAlias(std::forward<BotAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client application user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    DeleteSessionResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    DeleteSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
