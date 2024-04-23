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
   * <p>Contains details about how to handle harmful content.</p> <p>This data type
   * is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_CreateGuardrail.html#API_CreateGuardrail_RequestSyntax">CreateGuardrail
   * request body</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_UpdateGuardrail.html#API_UpdateGuardrail_RequestSyntax">UpdateGuardrail
   * request body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContentPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContentPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailContentPolicyConfig();
    AWS_BEDROCK_API GuardrailContentPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailContentPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline const Aws::Vector<GuardrailContentFilterConfig>& GetFiltersConfig() const{ return m_filtersConfig; }

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline bool FiltersConfigHasBeenSet() const { return m_filtersConfigHasBeenSet; }

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline void SetFiltersConfig(const Aws::Vector<GuardrailContentFilterConfig>& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = value; }

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline void SetFiltersConfig(Aws::Vector<GuardrailContentFilterConfig>&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig = std::move(value); }

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline GuardrailContentPolicyConfig& WithFiltersConfig(const Aws::Vector<GuardrailContentFilterConfig>& value) { SetFiltersConfig(value); return *this;}

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline GuardrailContentPolicyConfig& WithFiltersConfig(Aws::Vector<GuardrailContentFilterConfig>&& value) { SetFiltersConfig(std::move(value)); return *this;}

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline GuardrailContentPolicyConfig& AddFiltersConfig(const GuardrailContentFilterConfig& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(value); return *this; }

    /**
     * <p>Contains the type of the content filter and how strongly it should apply to
     * prompts and model responses.</p>
     */
    inline GuardrailContentPolicyConfig& AddFiltersConfig(GuardrailContentFilterConfig&& value) { m_filtersConfigHasBeenSet = true; m_filtersConfig.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailContentFilterConfig> m_filtersConfig;
    bool m_filtersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
