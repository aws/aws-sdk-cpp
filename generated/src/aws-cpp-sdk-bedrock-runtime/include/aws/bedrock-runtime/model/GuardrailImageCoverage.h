/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The details of the guardrail image coverage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailImageCoverage">AWS
   * API Reference</a></p>
   */
  class GuardrailImageCoverage
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailImageCoverage() = default;
    AWS_BEDROCKRUNTIME_API GuardrailImageCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailImageCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The count (integer) of images guardrails guarded.</p>
     */
    inline int GetGuarded() const { return m_guarded; }
    inline bool GuardedHasBeenSet() const { return m_guardedHasBeenSet; }
    inline void SetGuarded(int value) { m_guardedHasBeenSet = true; m_guarded = value; }
    inline GuardrailImageCoverage& WithGuarded(int value) { SetGuarded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total number of images (integer) that were in the request
     * (guarded and unguarded).</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline GuardrailImageCoverage& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}
  private:

    int m_guarded{0};
    bool m_guardedHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
