﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

  /**
   */
  class GetSessionRequest : public LexRuntimeV2Request
  {
  public:
    AWS_LEXRUNTIMEV2_API GetSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

    AWS_LEXRUNTIMEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline GetSessionRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline GetSessionRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline GetSessionRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias identifier in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }
    inline GetSessionRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline GetSessionRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline GetSessionRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale where the session is in use.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline GetSessionRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline GetSessionRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline GetSessionRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session to return.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline GetSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
