/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailContentFilterConfig.h>
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
   * <p>Contains details about how to handle harmful content.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContentPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContentPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContentPolicyConfig() = default;
    AWS_BEDROCK_API GuardrailContentPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContentPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline const Aws::Vector<GuardrailContentFilterConfig>& GetFiltersConfig() const { return m_filtersConfig; }
    inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }
    template<typename FiltersConfigT = Aws::Vector<GuardrailContentFilterConfig>>
    void SetFiltersConfig(FiltersConfigT&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = std::forward<FiltersConfigT>(value); }
    template<typename FiltersConfigT = Aws::Vector<GuardrailContentFilterConfig>>
    GuardrailContentPolicyConfig& WithFiltersConfig(FiltersConfigT&& value) { SetFiltersConfig(std::forward<FiltersConfigT>(value)); return *this;}
    template<typename FiltersConfigT = GuardrailContentFilterConfig>
    GuardrailContentPolicyConfig& AddFiltersConfig(FiltersConfigT&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.emplace_back(std::forward<FiltersConfigT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailContentFilterConfig> m_filtersConfig;
    bool m_filtersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
