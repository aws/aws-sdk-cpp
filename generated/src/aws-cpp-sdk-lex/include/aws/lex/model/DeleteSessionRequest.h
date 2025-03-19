/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class DeleteSessionRequest : public LexRuntimeServiceRequest
  {
  public:
    AWS_LEXRUNTIMESERVICE_API DeleteSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSession"; }

    AWS_LEXRUNTIMESERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    DeleteSessionRequest& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const { return m_botAlias; }
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }
    template<typename BotAliasT = Aws::String>
    void SetBotAlias(BotAliasT&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::forward<BotAliasT>(value); }
    template<typename BotAliasT = Aws::String>
    DeleteSessionRequest& WithBotAlias(BotAliasT&& value) { SetBotAlias(std::forward<BotAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    DeleteSessionRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
