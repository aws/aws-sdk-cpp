﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/LexBot.h>
#include <aws/connect/model/LexV2Bot.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateBotRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateBotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateBot"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AssociateBotRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LexBot& GetLexBot() const { return m_lexBot; }
    inline bool LexBotHasBeenSet() const { return m_lexBotHasBeenSet; }
    template<typename LexBotT = LexBot>
    void SetLexBot(LexBotT&& value) { m_lexBotHasBeenSet = true; m_lexBot = std::forward<LexBotT>(value); }
    template<typename LexBotT = LexBot>
    AssociateBotRequest& WithLexBot(LexBotT&& value) { SetLexBot(std::forward<LexBotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Lex V2 bot to associate with the instance.</p>
     */
    inline const LexV2Bot& GetLexV2Bot() const { return m_lexV2Bot; }
    inline bool LexV2BotHasBeenSet() const { return m_lexV2BotHasBeenSet; }
    template<typename LexV2BotT = LexV2Bot>
    void SetLexV2Bot(LexV2BotT&& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = std::forward<LexV2BotT>(value); }
    template<typename LexV2BotT = LexV2Bot>
    AssociateBotRequest& WithLexV2Bot(LexV2BotT&& value) { SetLexV2Bot(std::forward<LexV2BotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AssociateBotRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    LexBot m_lexBot;
    bool m_lexBotHasBeenSet = false;

    LexV2Bot m_lexV2Bot;
    bool m_lexV2BotHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
