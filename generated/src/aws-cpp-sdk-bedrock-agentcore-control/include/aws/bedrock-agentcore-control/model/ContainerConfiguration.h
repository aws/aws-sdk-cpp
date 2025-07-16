/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Representation of a container configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ContainerConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ContainerConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ContainerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ContainerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ECR URI of the container.</p>
     */
    inline const Aws::String& GetContainerUri() const { return m_containerUri; }
    inline bool ContainerUriHasBeenSet() const { return m_containerUriHasBeenSet; }
    template<typename ContainerUriT = Aws::String>
    void SetContainerUri(ContainerUriT&& value) { m_containerUriHasBeenSet = true; m_containerUri = std::forward<ContainerUriT>(value); }
    template<typename ContainerUriT = Aws::String>
    ContainerConfiguration& WithContainerUri(ContainerUriT&& value) { SetContainerUri(std::forward<ContainerUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerUri;
    bool m_containerUriHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
