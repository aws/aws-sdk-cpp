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
   * <p>Contains details about the system-defined guardrail profile that you're using
   * with your guardrail for cross-Region inference.</p> <p>For more information, see
   * the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region.html">Amazon
   * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailCrossRegionDetails">AWS
   * API Reference</a></p>
   */
  class GuardrailCrossRegionDetails
  {
  public:
    AWS_BEDROCK_API GuardrailCrossRegionDetails() = default;
    AWS_BEDROCK_API GuardrailCrossRegionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailCrossRegionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the guardrail profile that your guardrail is using. Profile
     * availability depends on your current Amazon Web Services Region. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region-support.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::String& GetGuardrailProfileId() const { return m_guardrailProfileId; }
    inline bool GuardrailProfileIdHasBeenSet() const { return m_guardrailProfileIdHasBeenSet; }
    template<typename GuardrailProfileIdT = Aws::String>
    void SetGuardrailProfileId(GuardrailProfileIdT&& value) { m_guardrailProfileIdHasBeenSet = true; m_guardrailProfileId = std::forward<GuardrailProfileIdT>(value); }
    template<typename GuardrailProfileIdT = Aws::String>
    GuardrailCrossRegionDetails& WithGuardrailProfileId(GuardrailProfileIdT&& value) { SetGuardrailProfileId(std::forward<GuardrailProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the guardrail profile that you're using
     * with your guardrail.</p>
     */
    inline const Aws::String& GetGuardrailProfileArn() const { return m_guardrailProfileArn; }
    inline bool GuardrailProfileArnHasBeenSet() const { return m_guardrailProfileArnHasBeenSet; }
    template<typename GuardrailProfileArnT = Aws::String>
    void SetGuardrailProfileArn(GuardrailProfileArnT&& value) { m_guardrailProfileArnHasBeenSet = true; m_guardrailProfileArn = std::forward<GuardrailProfileArnT>(value); }
    template<typename GuardrailProfileArnT = Aws::String>
    GuardrailCrossRegionDetails& WithGuardrailProfileArn(GuardrailProfileArnT&& value) { SetGuardrailProfileArn(std::forward<GuardrailProfileArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_guardrailProfileId;
    bool m_guardrailProfileIdHasBeenSet = false;

    Aws::String m_guardrailProfileArn;
    bool m_guardrailProfileArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
