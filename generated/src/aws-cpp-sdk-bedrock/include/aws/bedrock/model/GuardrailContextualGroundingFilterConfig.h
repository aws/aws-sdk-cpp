/**
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
   * <p>The filter configuration details for the guardrails contextual grounding
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingFilterConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingFilterConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig();
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContextualGroundingFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter details for the guardrails contextual grounding filter.</p>
     */
    inline const GuardrailContextualGroundingFilterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GuardrailContextualGroundingFilterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GuardrailContextualGroundingFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GuardrailContextualGroundingFilterConfig& WithType(const GuardrailContextualGroundingFilterType& value) { SetType(value); return *this;}
    inline GuardrailContextualGroundingFilterConfig& WithType(GuardrailContextualGroundingFilterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold details for the guardrails contextual grounding filter.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline GuardrailContextualGroundingFilterConfig& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    GuardrailContextualGroundingFilterType m_type;
    bool m_typeHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
