/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailContextualGroundingFilter.h>
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
   * <p>The details for the guardrails contextual grounding policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingPolicy">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingPolicy
  {
  public:
    AWS_BEDROCK_API GuardrailContextualGroundingPolicy() = default;
    AWS_BEDROCK_API GuardrailContextualGroundingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContextualGroundingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter details for the guardrails contextual grounding policy.</p>
     */
    inline const Aws::Vector<GuardrailContextualGroundingFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<GuardrailContextualGroundingFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<GuardrailContextualGroundingFilter>>
    GuardrailContextualGroundingPolicy& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = GuardrailContextualGroundingFilter>
    GuardrailContextualGroundingPolicy& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContextualGroundingFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
