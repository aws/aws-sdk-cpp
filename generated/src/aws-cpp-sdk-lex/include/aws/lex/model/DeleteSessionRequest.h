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
    AWS_LEXRUNTIMESERVICE_API DeleteSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSession"; }

    AWS_LEXRUNTIMESERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline DeleteSessionRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline DeleteSessionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline DeleteSessionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user associated with the session data.</p>
     */
    inline DeleteSessionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

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
