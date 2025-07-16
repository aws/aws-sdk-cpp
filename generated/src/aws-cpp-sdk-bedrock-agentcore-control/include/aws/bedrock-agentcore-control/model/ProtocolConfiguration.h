/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ServerProtocol.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The protocol configuration for an agent runtime. This structure defines how
   * the agent runtime communicates with clients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ProtocolConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtocolConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server protocol for the agent runtime. This field specifies which
     * protocol the agent runtime uses to communicate with clients.</p>
     */
    inline ServerProtocol GetServerProtocol() const { return m_serverProtocol; }
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
    inline void SetServerProtocol(ServerProtocol value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }
    inline ProtocolConfiguration& WithServerProtocol(ServerProtocol value) { SetServerProtocol(value); return *this;}
    ///@}
  private:

    ServerProtocol m_serverProtocol{ServerProtocol::NOT_SET};
    bool m_serverProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
