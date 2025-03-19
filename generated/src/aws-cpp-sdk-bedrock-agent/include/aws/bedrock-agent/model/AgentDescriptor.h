/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>An agent descriptor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentDescriptor">AWS
   * API Reference</a></p>
   */
  class AgentDescriptor
  {
  public:
    AWS_BEDROCKAGENT_API AgentDescriptor() = default;
    AWS_BEDROCKAGENT_API AgentDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent's alias ARN.</p>
     */
    inline const Aws::String& GetAliasArn() const { return m_aliasArn; }
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }
    template<typename AliasArnT = Aws::String>
    void SetAliasArn(AliasArnT&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::forward<AliasArnT>(value); }
    template<typename AliasArnT = Aws::String>
    AgentDescriptor& WithAliasArn(AliasArnT&& value) { SetAliasArn(std::forward<AliasArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
