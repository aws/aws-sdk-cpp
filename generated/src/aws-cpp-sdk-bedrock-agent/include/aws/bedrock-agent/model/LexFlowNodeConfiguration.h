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
   * <p>Contains configurations for a Lex node in the flow. You specify a Amazon Lex
   * bot to invoke. This node takes an utterance as the input and returns as the
   * output the intent identified by the Amazon Lex bot. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in a flow</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LexFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LexFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex bot alias to invoke.</p>
     */
    inline const Aws::String& GetBotAliasArn() const { return m_botAliasArn; }
    inline bool BotAliasArnHasBeenSet() const { return m_botAliasArnHasBeenSet; }
    template<typename BotAliasArnT = Aws::String>
    void SetBotAliasArn(BotAliasArnT&& value) { m_botAliasArnHasBeenSet = true; m_botAliasArn = std::forward<BotAliasArnT>(value); }
    template<typename BotAliasArnT = Aws::String>
    LexFlowNodeConfiguration& WithBotAliasArn(BotAliasArnT&& value) { SetBotAliasArn(std::forward<BotAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region to invoke the Amazon Lex bot in.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    LexFlowNodeConfiguration& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botAliasArn;
    bool m_botAliasArnHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
