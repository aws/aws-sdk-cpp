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
    AWS_CHIME_API PutEventsConfigurationRequest();

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
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline PutEventsConfigurationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline PutEventsConfigurationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline PutEventsConfigurationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline PutEventsConfigurationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline PutEventsConfigurationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline PutEventsConfigurationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const{ return m_outboundEventsHTTPSEndpoint; }
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }
    inline void SetOutboundEventsHTTPSEndpoint(const Aws::String& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = value; }
    inline void SetOutboundEventsHTTPSEndpoint(Aws::String&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::move(value); }
    inline void SetOutboundEventsHTTPSEndpoint(const char* value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint.assign(value); }
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(const Aws::String& value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(Aws::String&& value) { SetOutboundEventsHTTPSEndpoint(std::move(value)); return *this;}
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(const char* value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}
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
