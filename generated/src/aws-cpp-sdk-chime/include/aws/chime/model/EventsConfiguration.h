/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EventsConfiguration
  {
  public:
    AWS_CHIME_API EventsConfiguration();
    AWS_CHIME_API EventsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API EventsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline EventsConfiguration& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline EventsConfiguration& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline EventsConfiguration& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const{ return m_outboundEventsHTTPSEndpoint; }
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }
    inline void SetOutboundEventsHTTPSEndpoint(const Aws::String& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = value; }
    inline void SetOutboundEventsHTTPSEndpoint(Aws::String&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::move(value); }
    inline void SetOutboundEventsHTTPSEndpoint(const char* value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint.assign(value); }
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(const Aws::String& value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(Aws::String&& value) { SetOutboundEventsHTTPSEndpoint(std::move(value)); return *this;}
    inline EventsConfiguration& WithOutboundEventsHTTPSEndpoint(const char* value) { SetOutboundEventsHTTPSEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }
    inline EventsConfiguration& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}
    inline EventsConfiguration& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}
    inline EventsConfiguration& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}
    ///@}
  private:

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
