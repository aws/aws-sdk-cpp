/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ResolutionType.h>
#include <aws/entityresolution/model/RuleBasedProperties.h>
#include <aws/entityresolution/model/RuleConditionProperties.h>
#include <aws/entityresolution/model/ProviderProperties.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object which defines the <code>resolutionType</code> and the
   * <code>ruleBasedProperties</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ResolutionTechniques">AWS
   * API Reference</a></p>
   */
  class ResolutionTechniques
  {
  public:
    AWS_ENTITYRESOLUTION_API ResolutionTechniques() = default;
    AWS_ENTITYRESOLUTION_API ResolutionTechniques(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ResolutionTechniques& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of matching. There are three types of matching:
     * <code>RULE_MATCHING</code>, <code>ML_MATCHING</code>, and
     * <code>PROVIDER</code>.</p>
     */
    inline ResolutionType GetResolutionType() const { return m_resolutionType; }
    inline bool ResolutionTypeHasBeenSet() const { return m_resolutionTypeHasBeenSet; }
    inline void SetResolutionType(ResolutionType value) { m_resolutionTypeHasBeenSet = true; m_resolutionType = value; }
    inline ResolutionTechniques& WithResolutionType(ResolutionType value) { SetResolutionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>rules</code>, which is a list of rule objects.</p>
     */
    inline const RuleBasedProperties& GetRuleBasedProperties() const { return m_ruleBasedProperties; }
    inline bool RuleBasedPropertiesHasBeenSet() const { return m_ruleBasedPropertiesHasBeenSet; }
    template<typename RuleBasedPropertiesT = RuleBasedProperties>
    void SetRuleBasedProperties(RuleBasedPropertiesT&& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = std::forward<RuleBasedPropertiesT>(value); }
    template<typename RuleBasedPropertiesT = RuleBasedProperties>
    ResolutionTechniques& WithRuleBasedProperties(RuleBasedPropertiesT&& value) { SetRuleBasedProperties(std::forward<RuleBasedPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the <code>rules</code> for a matching workflow.</p>
     */
    inline const RuleConditionProperties& GetRuleConditionProperties() const { return m_ruleConditionProperties; }
    inline bool RuleConditionPropertiesHasBeenSet() const { return m_ruleConditionPropertiesHasBeenSet; }
    template<typename RuleConditionPropertiesT = RuleConditionProperties>
    void SetRuleConditionProperties(RuleConditionPropertiesT&& value) { m_ruleConditionPropertiesHasBeenSet = true; m_ruleConditionProperties = std::forward<RuleConditionPropertiesT>(value); }
    template<typename RuleConditionPropertiesT = RuleConditionProperties>
    ResolutionTechniques& WithRuleConditionProperties(RuleConditionPropertiesT&& value) { SetRuleConditionProperties(std::forward<RuleConditionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the provider service.</p>
     */
    inline const ProviderProperties& GetProviderProperties() const { return m_providerProperties; }
    inline bool ProviderPropertiesHasBeenSet() const { return m_providerPropertiesHasBeenSet; }
    template<typename ProviderPropertiesT = ProviderProperties>
    void SetProviderProperties(ProviderPropertiesT&& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = std::forward<ProviderPropertiesT>(value); }
    template<typename ProviderPropertiesT = ProviderProperties>
    ResolutionTechniques& WithProviderProperties(ProviderPropertiesT&& value) { SetProviderProperties(std::forward<ProviderPropertiesT>(value)); return *this;}
    ///@}
  private:

    ResolutionType m_resolutionType{ResolutionType::NOT_SET};
    bool m_resolutionTypeHasBeenSet = false;

    RuleBasedProperties m_ruleBasedProperties;
    bool m_ruleBasedPropertiesHasBeenSet = false;

    RuleConditionProperties m_ruleConditionProperties;
    bool m_ruleConditionPropertiesHasBeenSet = false;

    ProviderProperties m_providerProperties;
    bool m_providerPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
