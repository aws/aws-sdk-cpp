/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The system-defined guardrail profile that you're using with your guardrail.
   * Guardrail profiles define the destination Amazon Web Services Regions where
   * guardrail inference requests can be automatically routed. Using guardrail
   * profiles helps maintain guardrail performance and reliability when demand
   * increases.</p> <p>For more information, see the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region.html">Amazon
   * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailCrossRegionConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailCrossRegionConfig
  {
  public:
    AWS_BEDROCK_API GuardrailCrossRegionConfig() = default;
    AWS_BEDROCK_API GuardrailCrossRegionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailCrossRegionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the guardrail profile that your
     * guardrail is using. Guardrail profile availability depends on your current
     * Amazon Web Services Region. For more information, see the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region-support.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::String& GetGuardrailProfileIdentifier() const { return m_guardrailProfileIdentifier; }
    inline bool GuardrailProfileIdentifierHasBeenSet() const { return m_guardrailProfileIdentifierHasBeenSet; }
    template<typename GuardrailProfileIdentifierT = Aws::String>
    void SetGuardrailProfileIdentifier(GuardrailProfileIdentifierT&& value) { m_guardrailProfileIdentifierHasBeenSet = true; m_guardrailProfileIdentifier = std::forward<GuardrailProfileIdentifierT>(value); }
    template<typename GuardrailProfileIdentifierT = Aws::String>
    GuardrailCrossRegionConfig& WithGuardrailProfileIdentifier(GuardrailProfileIdentifierT&& value) { SetGuardrailProfileIdentifier(std::forward<GuardrailProfileIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailProfileIdentifier;
    bool m_guardrailProfileIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
