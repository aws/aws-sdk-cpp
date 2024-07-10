/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailContextualGroundingFilterConfig.h>
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
   * <p>The policy configuration details for the guardrails contextual grounding
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig();
    AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContextualGroundingPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter configuration details for the guardrails contextual grounding
     * policy.</p>
     */
    inline const Aws::Vector<GuardrailContextualGroundingFilterConfig>& GetFiltersConfig() const{ return m_filtersConfig; }
    inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }
    inline void SetFiltersConfig(const Aws::Vector<GuardrailContextualGroundingFilterConfig>& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = value; }
    inline void SetFiltersConfig(Aws::Vector<GuardrailContextualGroundingFilterConfig>&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = std::move(value); }
    inline GuardrailContextualGroundingPolicyConfig& WithFiltersConfig(const Aws::Vector<GuardrailContextualGroundingFilterConfig>& value) { SetFiltersConfig(value); return *this;}
    inline GuardrailContextualGroundingPolicyConfig& WithFiltersConfig(Aws::Vector<GuardrailContextualGroundingFilterConfig>&& value) { SetFiltersConfig(std::move(value)); return *this;}
    inline GuardrailContextualGroundingPolicyConfig& AddFiltersConfig(const GuardrailContextualGroundingFilterConfig& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(value); return *this; }
    inline GuardrailContextualGroundingPolicyConfig& AddFiltersConfig(GuardrailContextualGroundingFilterConfig&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContextualGroundingFilterConfig> m_filtersConfig;
    bool m_filtersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
