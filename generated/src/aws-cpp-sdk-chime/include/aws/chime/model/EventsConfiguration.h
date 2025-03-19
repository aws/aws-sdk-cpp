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
    AWS_CHIME_API EventsConfiguration() = default;
    AWS_CHIME_API EventsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API EventsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot ID.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    EventsConfiguration& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTPS endpoint that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetOutboundEventsHTTPSEndpoint() const { return m_outboundEventsHTTPSEndpoint; }
    inline bool OutboundEventsHTTPSEndpointHasBeenSet() const { return m_outboundEventsHTTPSEndpointHasBeenSet; }
    template<typename OutboundEventsHTTPSEndpointT = Aws::String>
    void SetOutboundEventsHTTPSEndpoint(OutboundEventsHTTPSEndpointT&& value) { m_outboundEventsHTTPSEndpointHasBeenSet = true; m_outboundEventsHTTPSEndpoint = std::forward<OutboundEventsHTTPSEndpointT>(value); }
    template<typename OutboundEventsHTTPSEndpointT = Aws::String>
    EventsConfiguration& WithOutboundEventsHTTPSEndpoint(OutboundEventsHTTPSEndpointT&& value) { SetOutboundEventsHTTPSEndpoint(std::forward<OutboundEventsHTTPSEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lambda function ARN that allows a bot to receive outgoing events.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    EventsConfiguration& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
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
