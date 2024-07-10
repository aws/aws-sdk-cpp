/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailContextualGroundingFilter.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The policy assessment details for the guardrails contextual grounding
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailContextualGroundingPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingPolicyAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailContextualGroundingPolicyAssessment();
    AWS_BEDROCKRUNTIME_API GuardrailContextualGroundingPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailContextualGroundingPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter details for the guardrails contextual grounding filter.</p>
     */
    inline const Aws::Vector<GuardrailContextualGroundingFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<GuardrailContextualGroundingFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<GuardrailContextualGroundingFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GuardrailContextualGroundingPolicyAssessment& WithFilters(const Aws::Vector<GuardrailContextualGroundingFilter>& value) { SetFilters(value); return *this;}
    inline GuardrailContextualGroundingPolicyAssessment& WithFilters(Aws::Vector<GuardrailContextualGroundingFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GuardrailContextualGroundingPolicyAssessment& AddFilters(const GuardrailContextualGroundingFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GuardrailContextualGroundingPolicyAssessment& AddFilters(GuardrailContextualGroundingFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContextualGroundingFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
