/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailContentFilter.h>
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
   * <p>An assessment of a content policy for a guardrail.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailContentPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailContentPolicyAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailContentPolicyAssessment();
    AWS_BEDROCKRUNTIME_API GuardrailContentPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailContentPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content policy filters.</p>
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
} // namespace BedrockRuntime
} // namespace Aws
