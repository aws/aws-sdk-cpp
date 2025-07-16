/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>The configuration for a stream that provides a visual representation of a
   * browser session in Amazon Bedrock. This stream enables agents to observe the
   * current state of the browser, including rendered web pages, visual elements, and
   * the results of interactions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LiveViewStream">AWS
   * API Reference</a></p>
   */
  class LiveViewStream
  {
  public:
    AWS_BEDROCKAGENTCORE_API LiveViewStream() = default;
    AWS_BEDROCKAGENTCORE_API LiveViewStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API LiveViewStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL for the live view stream. This URL is used to establish a
     * connection to receive visual updates from the browser session.</p>
     */
    inline const Aws::String& GetStreamEndpoint() const { return m_streamEndpoint; }
    inline bool StreamEndpointHasBeenSet() const { return m_streamEndpointHasBeenSet; }
    template<typename StreamEndpointT = Aws::String>
    void SetStreamEndpoint(StreamEndpointT&& value) { m_streamEndpointHasBeenSet = true; m_streamEndpoint = std::forward<StreamEndpointT>(value); }
    template<typename StreamEndpointT = Aws::String>
    LiveViewStream& WithStreamEndpoint(StreamEndpointT&& value) { SetStreamEndpoint(std::forward<StreamEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamEndpoint;
    bool m_streamEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
