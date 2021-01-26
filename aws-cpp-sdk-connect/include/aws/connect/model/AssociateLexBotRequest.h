/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/LexBot.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API AssociateLexBotRequest : public ConnectRequest
  {
  public:
    AssociateLexBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateLexBot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline AssociateLexBotRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline AssociateLexBotRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline AssociateLexBotRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline const LexBot& GetLexBot() const{ return m_lexBot; }

    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline bool LexBotHasBeenSet() const { return m_lexBotHasBeenSet; }

    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline void SetLexBot(const LexBot& value) { m_lexBotHasBeenSet = true; m_lexBot = value; }

    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline void SetLexBot(LexBot&& value) { m_lexBotHasBeenSet = true; m_lexBot = std::move(value); }

    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline AssociateLexBotRequest& WithLexBot(const LexBot& value) { SetLexBot(value); return *this;}

    /**
     * <p>The Amazon Lex box to associate with the instance.</p>
     */
    inline AssociateLexBotRequest& WithLexBot(LexBot&& value) { SetLexBot(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    LexBot m_lexBot;
    bool m_lexBotHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
