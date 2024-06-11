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

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateBotRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateBot"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DisassociateBotRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DisassociateBotRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DisassociateBotRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    
    inline const LexBot& GetLexBot() const{ return m_lexBot; }
    inline bool LexBotHasBeenSet() const { return m_lexBotHasBeenSet; }
    inline void SetLexBot(const LexBot& value) { m_lexBotHasBeenSet = true; m_lexBot = value; }
    inline void SetLexBot(LexBot&& value) { m_lexBotHasBeenSet = true; m_lexBot = std::move(value); }
    inline DisassociateBotRequest& WithLexBot(const LexBot& value) { SetLexBot(value); return *this;}
    inline DisassociateBotRequest& WithLexBot(LexBot&& value) { SetLexBot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Lex V2 bot to disassociate from the instance.</p>
     */
    inline const LexV2Bot& GetLexV2Bot() const{ return m_lexV2Bot; }
    inline bool LexV2BotHasBeenSet() const { return m_lexV2BotHasBeenSet; }
    inline void SetLexV2Bot(const LexV2Bot& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = value; }
    inline void SetLexV2Bot(LexV2Bot&& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = std::move(value); }
    inline DisassociateBotRequest& WithLexV2Bot(const LexV2Bot& value) { SetLexV2Bot(value); return *this;}
    inline DisassociateBotRequest& WithLexV2Bot(LexV2Bot&& value) { SetLexV2Bot(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    LexBot m_lexBot;
    bool m_lexBotHasBeenSet = false;

    LexV2Bot m_lexV2Bot;
    bool m_lexV2BotHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
