/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CHIME_API PutEventsConfigurationRequest : public ChimeRequest
  {
  public:
    PutEventsConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEventsConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline PutEventsConfigurationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline PutEventsConfigurationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline PutEventsConfigurationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The bot ID.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The bot ID.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The bot ID.</p>
     */
    inline PutEventsConfigurationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline PutEventsConfigurationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline PutEventsConfigurationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const{ return m_outboundEventsHTTPSEndpoint; }

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(const Aws::String& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = value; }

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(Aws::String&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::move(value); }

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(const char* value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint.assign(value); }

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(const Aws::String& value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(Aws::String&& value) { SetOutboundEventsHTTPSEndpoint(std::move(value)); return *this;}

    /**
     * <p>HTTPS endpoint that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithOutboundEventsHTTPSEndpoint(const char* value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}


    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>Lambda function ARN that allows the bot to receive outgoing events.</p>
     */
    inline PutEventsConfigurationRequest& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_botId;
    bool m_botIdHasBeenSet;

    Aws::String m_outboundEventsHTTPSEndpoint;
    bool m_outboundEventsHTTPSEndpointHasBeenSet;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
