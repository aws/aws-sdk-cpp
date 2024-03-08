/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BedrockModelSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains specifications for the assisted slot resolution
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotResolutionImprovementSpecification">AWS
   * API Reference</a></p>
   */
  class SlotResolutionImprovementSpecification
  {
  public:
    AWS_LEXMODELSV2_API SlotResolutionImprovementSpecification();
    AWS_LEXMODELSV2_API SlotResolutionImprovementSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionImprovementSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether assisted slot resolution is turned on or off.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether assisted slot resolution is turned on or off.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether assisted slot resolution is turned on or off.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether assisted slot resolution is turned on or off.</p>
     */
    inline SlotResolutionImprovementSpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline const BedrockModelSpecification& GetBedrockModelSpecification() const{ return m_bedrockModelSpecification; }

    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline bool BedrockModelSpecificationHasBeenSet() const { return m_bedrockModelSpecificationHasBeenSet; }

    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline void SetBedrockModelSpecification(const BedrockModelSpecification& value) { m_bedrockModelSpecificationHasBeenSet = true; m_bedrockModelSpecification = value; }

    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline void SetBedrockModelSpecification(BedrockModelSpecification&& value) { m_bedrockModelSpecificationHasBeenSet = true; m_bedrockModelSpecification = std::move(value); }

    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline SlotResolutionImprovementSpecification& WithBedrockModelSpecification(const BedrockModelSpecification& value) { SetBedrockModelSpecification(value); return *this;}

    /**
     * <p>An object containing information about the Amazon Bedrock model used to
     * assist slot resolution.</p>
     */
    inline SlotResolutionImprovementSpecification& WithBedrockModelSpecification(BedrockModelSpecification&& value) { SetBedrockModelSpecification(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    BedrockModelSpecification m_bedrockModelSpecification;
    bool m_bedrockModelSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
