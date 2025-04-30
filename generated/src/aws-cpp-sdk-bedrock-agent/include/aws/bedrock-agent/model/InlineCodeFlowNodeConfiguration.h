/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/SupportedLanguages.h>
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
   * <p>Contains configurations for an inline code node in your flow. Inline code
   * nodes let you write and execute code directly within your flow, enabling data
   * transformations, custom logic, and integrations without needing an external
   * Lambda function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/InlineCodeFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class InlineCodeFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API InlineCodeFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API InlineCodeFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API InlineCodeFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code that's executed in your inline code node. The code can access input
     * data from previous nodes in the flow, perform operations on that data, and
     * produce output that can be used by other nodes in your flow.</p> <p>The code
     * must be valid in the programming <code>language</code> that you specify.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    InlineCodeFlowNodeConfiguration& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The programming language used by your inline code node.</p> <p>The code must
     * be valid in the programming <code>language</code> that you specify. Currently,
     * only Python 3 (<code>Python_3</code>) is supported.</p>
     */
    inline SupportedLanguages GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(SupportedLanguages value) { m_languageHasBeenSet = true; m_language = value; }
    inline InlineCodeFlowNodeConfiguration& WithLanguage(SupportedLanguages value) { SetLanguage(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    SupportedLanguages m_language{SupportedLanguages::NOT_SET};
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
