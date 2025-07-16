/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/AutomationStreamStatus.h>
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
   * <p>The configuration for a stream that enables programmatic control of a browser
   * session in Amazon Bedrock. This stream provides a bidirectional communication
   * channel for sending commands to the browser and receiving responses, allowing
   * agents to automate web interactions such as navigation, form filling, and
   * element clicking.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AutomationStream">AWS
   * API Reference</a></p>
   */
  class AutomationStream
  {
  public:
    AWS_BEDROCKAGENTCORE_API AutomationStream() = default;
    AWS_BEDROCKAGENTCORE_API AutomationStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API AutomationStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL for the automation stream. This URL is used to establish a
     * WebSocket connection to the stream for sending commands and receiving
     * responses.</p>
     */
    inline const Aws::String& GetStreamEndpoint() const { return m_streamEndpoint; }
    inline bool StreamEndpointHasBeenSet() const { return m_streamEndpointHasBeenSet; }
    template<typename StreamEndpointT = Aws::String>
    void SetStreamEndpoint(StreamEndpointT&& value) { m_streamEndpointHasBeenSet = true; m_streamEndpoint = std::forward<StreamEndpointT>(value); }
    template<typename StreamEndpointT = Aws::String>
    AutomationStream& WithStreamEndpoint(StreamEndpointT&& value) { SetStreamEndpoint(std::forward<StreamEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the automation stream. This indicates whether the
     * stream is available for use. Possible values include ACTIVE, CONNECTING, and
     * DISCONNECTED.</p>
     */
    inline AutomationStreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(AutomationStreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline AutomationStream& WithStreamStatus(AutomationStreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_streamEndpoint;
    bool m_streamEndpointHasBeenSet = false;

    AutomationStreamStatus m_streamStatus{AutomationStreamStatus::NOT_SET};
    bool m_streamStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
