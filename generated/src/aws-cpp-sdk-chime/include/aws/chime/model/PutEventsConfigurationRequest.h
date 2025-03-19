/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class PutEventsConfigurationRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API PutEventsConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEventsConfiguration"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutEventsConfigurationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    PutEventsConfigurationRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const { return m_outboundEventsHTTPSEndpoint; }
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }
    template<typename OutboundEventsHTTPSEndpointT = Aws::String>
    void SetOutboundEventsHTTPSEndpoint(OutboundEventsHTTPSEndpointT&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::forward<OutboundEventsHTTPSEndpointT>(value); }
    template<typename OutboundEventsHTTPSEndpointT = Aws::String>
    PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(OutboundEventsHTTPSEndpointT&& value) { SetOutboundEventsHTTPSEndpoint(std::forward<OutboundEventsHTTPSEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    PutEventsConfigurationRequest& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_outboundEventsHTTPSEndpoint;
    bool m_outboundEventsHTTPSEndpointHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
