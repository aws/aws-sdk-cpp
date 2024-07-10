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
   * types in Amazon Bedrock works</a> in the Amazon Bedrock User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LexFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LexFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration();
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LexFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex bot alias to invoke.</p>
     */
    inline const Aws::String& GetBotAliasArn() const{ return m_botAliasArn; }
    inline bool BotAliasArnHasBeenSet() const { return m_botAliasArnHasBeenSet; }
    inline void SetBotAliasArn(const Aws::String& value) { m_botAliasArnHasBeenSet = true; m_botAliasArn = value; }
    inline void SetBotAliasArn(Aws::String&& value) { m_botAliasArnHasBeenSet = true; m_botAliasArn = std::move(value); }
    inline void SetBotAliasArn(const char* value) { m_botAliasArnHasBeenSet = true; m_botAliasArn.assign(value); }
    inline LexFlowNodeConfiguration& WithBotAliasArn(const Aws::String& value) { SetBotAliasArn(value); return *this;}
    inline LexFlowNodeConfiguration& WithBotAliasArn(Aws::String&& value) { SetBotAliasArn(std::move(value)); return *this;}
    inline LexFlowNodeConfiguration& WithBotAliasArn(const char* value) { SetBotAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region to invoke the Amazon Lex bot in.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline LexFlowNodeConfiguration& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline LexFlowNodeConfiguration& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline LexFlowNodeConfiguration& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
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
