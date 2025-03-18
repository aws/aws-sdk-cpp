﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContextualGroundingFilterType.h>
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
   * <p>The details for the guardrails contextual grounding filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingFilter">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingFilter
  {
  public:
    AWS_BEDROCK_API GuardrailContextualGroundingFilter() = default;
    AWS_BEDROCK_API GuardrailContextualGroundingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContextualGroundingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter type details for the guardrails contextual grounding filter.</p>
     */
    inline GuardrailContextualGroundingFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContextualGroundingFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContextualGroundingFilter& WithType(GuardrailContextualGroundingFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold details for the guardrails contextual grounding filter.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline GuardrailContextualGroundingFilter& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    GuardrailContextualGroundingFilterType m_type{GuardrailContextualGroundingFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
