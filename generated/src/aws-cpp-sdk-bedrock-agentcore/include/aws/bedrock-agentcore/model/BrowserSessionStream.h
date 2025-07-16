/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AutomationStream.h>
#include <aws/bedrock-agentcore/model/LiveViewStream.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>The collection of streams associated with a browser session in Amazon
   * Bedrock. These streams provide different ways to interact with and observe the
   * browser session, including programmatic control and visual representation of the
   * browser content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserSessionStream">AWS
   * API Reference</a></p>
   */
  class BrowserSessionStream
  {
  public:
    AWS_BEDROCKAGENTCORE_API BrowserSessionStream() = default;
    AWS_BEDROCKAGENTCORE_API BrowserSessionStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API BrowserSessionStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stream that enables programmatic control of the browser. This stream
     * allows agents to perform actions such as navigating to URLs, clicking elements,
     * and filling forms.</p>
     */
    inline const AutomationStream& GetAutomationStream() const { return m_automationStream; }
    inline bool AutomationStreamHasBeenSet() const { return m_automationStreamHasBeenSet; }
    template<typename AutomationStreamT = AutomationStream>
    void SetAutomationStream(AutomationStreamT&& value) { m_automationStreamHasBeenSet = true; m_automationStream = std::forward<AutomationStreamT>(value); }
    template<typename AutomationStreamT = AutomationStream>
    BrowserSessionStream& WithAutomationStream(AutomationStreamT&& value) { SetAutomationStream(std::forward<AutomationStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream that provides a visual representation of the browser content. This
     * stream allows agents to observe the current state of the browser, including
     * rendered web pages and visual elements.</p>
     */
    inline const LiveViewStream& GetLiveViewStream() const { return m_liveViewStream; }
    inline bool LiveViewStreamHasBeenSet() const { return m_liveViewStreamHasBeenSet; }
    template<typename LiveViewStreamT = LiveViewStream>
    void SetLiveViewStream(LiveViewStreamT&& value) { m_liveViewStreamHasBeenSet = true; m_liveViewStream = std::forward<LiveViewStreamT>(value); }
    template<typename LiveViewStreamT = LiveViewStream>
    BrowserSessionStream& WithLiveViewStream(LiveViewStreamT&& value) { SetLiveViewStream(std::forward<LiveViewStreamT>(value)); return *this;}
    ///@}
  private:

    AutomationStream m_automationStream;
    bool m_automationStreamHasBeenSet = false;

    LiveViewStream m_liveViewStream;
    bool m_liveViewStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
