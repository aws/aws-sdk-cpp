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
    AWS_BEDROCKRUNTIME_API ApplyGuardrailRequest();

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
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }
    inline ApplyGuardrailRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}
    inline ApplyGuardrailRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}
    inline ApplyGuardrailRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail version used in the request to apply the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailVersion() const{ return m_guardrailVersion; }
    inline bool GuardrailVersionHasBeenSet() const { return m_guardrailVersionHasBeenSet; }
    inline void SetGuardrailVersion(const Aws::String& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = value; }
    inline void SetGuardrailVersion(Aws::String&& value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion = std::move(value); }
    inline void SetGuardrailVersion(const char* value) { m_guardrailVersionHasBeenSet = true; m_guardrailVersion.assign(value); }
    inline ApplyGuardrailRequest& WithGuardrailVersion(const Aws::String& value) { SetGuardrailVersion(value); return *this;}
    inline ApplyGuardrailRequest& WithGuardrailVersion(Aws::String&& value) { SetGuardrailVersion(std::move(value)); return *this;}
    inline ApplyGuardrailRequest& WithGuardrailVersion(const char* value) { SetGuardrailVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of data used in the request to apply the guardrail.</p>
     */
    inline const GuardrailContentSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const GuardrailContentSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(GuardrailContentSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ApplyGuardrailRequest& WithSource(const GuardrailContentSource& value) { SetSource(value); return *this;}
    inline ApplyGuardrailRequest& WithSource(GuardrailContentSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content details used in the request to apply the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailContentBlock>& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Vector<GuardrailContentBlock>& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Vector<GuardrailContentBlock>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline ApplyGuardrailRequest& WithContent(const Aws::Vector<GuardrailContentBlock>& value) { SetContent(value); return *this;}
    inline ApplyGuardrailRequest& WithContent(Aws::Vector<GuardrailContentBlock>&& value) { SetContent(std::move(value)); return *this;}
    inline ApplyGuardrailRequest& AddContent(const GuardrailContentBlock& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }
    inline ApplyGuardrailRequest& AddContent(GuardrailContentBlock&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    Aws::String m_guardrailVersion;
    bool m_guardrailVersionHasBeenSet = false;

    GuardrailContentSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<GuardrailContentBlock> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
