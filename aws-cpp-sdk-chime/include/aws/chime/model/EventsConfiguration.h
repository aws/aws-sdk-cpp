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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>The configuration that allows a bot to receive outgoing events. Can be either
   * an HTTPS endpoint or a Lambda function ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/EventsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API EventsConfiguration
  {
  public:
    EventsConfiguration();
    EventsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EventsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline EventsConfiguration& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline EventsConfiguration& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot ID.</p>
     */
    inline EventsConfiguration& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const{ return m_outboundEventsHTTPSEndpoint; }

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(const Aws::String& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = value; }

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(Aws::String&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::move(value); }

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline void SetOutboundEventsHTTPSEndpoint(const char* value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint.assign(value); }

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(const Aws::String& value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(Aws::String&& value) { SetOutboundEventsHTTPSEndpoint(std::move(value)); return *this;}

    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(const char* value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}


    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline EventsConfiguration& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

  private:

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
