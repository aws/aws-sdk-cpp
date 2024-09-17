/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentFilter.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The details of the policy assessment in the Guardrails filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailContentPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailContentPolicyAssessment
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentPolicyAssessment();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailContentPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter details of the policy assessment used in the Guardrails
     * filter.</p>
     */
    inline const Aws::Vector<GuardrailContentFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<GuardrailContentFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<GuardrailContentFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GuardrailContentPolicyAssessment& WithFilters(const Aws::Vector<GuardrailContentFilter>& value) { SetFilters(value); return *this;}
    inline GuardrailContentPolicyAssessment& WithFilters(Aws::Vector<GuardrailContentFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GuardrailContentPolicyAssessment& AddFilters(const GuardrailContentFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GuardrailContentPolicyAssessment& AddFilters(GuardrailContentFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContentFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
