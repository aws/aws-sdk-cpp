/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SemanticExtractionOverride.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceExtractionOverride.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Contains custom extraction configuration information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomExtractionConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The semantic extraction override configuration.</p>
     */
    inline const SemanticExtractionOverride& GetSemanticExtractionOverride() const { return m_semanticExtractionOverride; }
    inline bool SemanticExtractionOverrideHasBeenSet() const { return m_semanticExtractionOverrideHasBeenSet; }
    template<typename SemanticExtractionOverrideT = SemanticExtractionOverride>
    void SetSemanticExtractionOverride(SemanticExtractionOverrideT&& value) { m_semanticExtractionOverrideHasBeenSet = true; m_semanticExtractionOverride = std::forward<SemanticExtractionOverrideT>(value); }
    template<typename SemanticExtractionOverrideT = SemanticExtractionOverride>
    CustomExtractionConfiguration& WithSemanticExtractionOverride(SemanticExtractionOverrideT&& value) { SetSemanticExtractionOverride(std::forward<SemanticExtractionOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user preference extraction override configuration.</p>
     */
    inline const UserPreferenceExtractionOverride& GetUserPreferenceExtractionOverride() const { return m_userPreferenceExtractionOverride; }
    inline bool UserPreferenceExtractionOverrideHasBeenSet() const { return m_userPreferenceExtractionOverrideHasBeenSet; }
    template<typename UserPreferenceExtractionOverrideT = UserPreferenceExtractionOverride>
    void SetUserPreferenceExtractionOverride(UserPreferenceExtractionOverrideT&& value) { m_userPreferenceExtractionOverrideHasBeenSet = true; m_userPreferenceExtractionOverride = std::forward<UserPreferenceExtractionOverrideT>(value); }
    template<typename UserPreferenceExtractionOverrideT = UserPreferenceExtractionOverride>
    CustomExtractionConfiguration& WithUserPreferenceExtractionOverride(UserPreferenceExtractionOverrideT&& value) { SetUserPreferenceExtractionOverride(std::forward<UserPreferenceExtractionOverrideT>(value)); return *this;}
    ///@}
  private:

    SemanticExtractionOverride m_semanticExtractionOverride;
    bool m_semanticExtractionOverrideHasBeenSet = false;

    UserPreferenceExtractionOverride m_userPreferenceExtractionOverride;
    bool m_userPreferenceExtractionOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
