/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailContentSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailOutputScope.h>
#include <aws/bedrock-runtime/model/GuardrailContentBlock.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class ApplyGuardrailRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API ApplyGuardrailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyGuardrail"; }

    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The guardrail identifier used in the request to apply the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const { return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    template<typename GuardrailIdentifierT = Aws::String>
    void SetGuardrailIdentifier(GuardrailIdentifierT&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::forward<GuardrailIdentifierT>(value); }
    template<typename GuardrailIdentifierT = Aws::String>
    ApplyGuardrailRequest& WithGuardrailIdentifier(GuardrailIdentifierT&& value) { SetGuardrailIdentifier(std::forward<GuardrailIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail version used in the request to apply the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const { return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    template<typename GuardrailVersionT = Aws::String>
    void SetGuardrailVersion(GuardrailVersionT&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::forward<GuardrailVersionT>(value); }
    template<typename GuardrailVersionT = Aws::String>
    ApplyGuardrailRequest& WithGuardrailVersion(GuardrailVersionT&& value) { SetGuardrailVersion(std::forward<GuardrailVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of data used in the request to apply the guardrail.</p>
     */
    inline GuardrailContentSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(GuardrailContentSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline ApplyGuardrailRequest& WithSource(GuardrailContentSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content details used in the request to apply the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailContentBlock>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<GuardrailContentBlock>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<GuardrailContentBlock>>
    ApplyGuardrailRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = GuardrailContentBlock>
    ApplyGuardrailRequest& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the scope of the output that you get in the response. Set to
     * <code>FULL</code> to return the entire output, including any detected and
     * non-detected entries in the response for enhanced debugging.</p> <p>Note that
     * the full output scope doesn't apply to word filters or regex in sensitive
     * information filters. It does apply to all other filtering policies, including
     * sensitive information with filters that can detect personally identifiable
     * information (PII).</p>
     */
    inline GuardrailOutputScope GetOutputScope() const { return m_outputScope; }
    inline bool OutputScopeHasBeenSet() const { return m_outputScopeHasBeenSet; }
    inline void SetOutputScope(GuardrailOutputScope value) { m_outputScopeHasBeenSet = true; m_outputScope = value; }
    inline ApplyGuardrailRequest& WithOutputScope(GuardrailOutputScope value) { SetOutputScope(value); return *this;}
    ///@}
  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;

    GuardrailContentSource m_source{GuardrailContentSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    Aws::Vector<GuardrailContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    GuardrailOutputScope m_outputScope{GuardrailOutputScope::NOT_SET};
    bool m_outputScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
