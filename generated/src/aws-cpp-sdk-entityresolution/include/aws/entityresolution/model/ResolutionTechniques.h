/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ProviderProperties.h>
#include <aws/entityresolution/model/ResolutionType.h>
#include <aws/entityresolution/model/RuleBasedProperties.h>
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
    AWS_ENTITYRESOLUTION_API ResolutionTechniques();
    AWS_ENTITYRESOLUTION_API ResolutionTechniques(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ResolutionTechniques& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The properties of the provider service.</p>
     */
    inline const ProviderProperties& GetProviderProperties() const{ return m_providerProperties; }

    /**
     * <p>The properties of the provider service.</p>
     */
    inline bool ProviderPropertiesHasBeenSet() const { return m_providerPropertiesHasBeenSet; }

    /**
     * <p>The properties of the provider service.</p>
     */
    inline void SetProviderProperties(const ProviderProperties& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = value; }

    /**
     * <p>The properties of the provider service.</p>
     */
    inline void SetProviderProperties(ProviderProperties&& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = std::move(value); }

    /**
     * <p>The properties of the provider service.</p>
     */
    inline ResolutionTechniques& WithProviderProperties(const ProviderProperties& value) { SetProviderProperties(value); return *this;}

    /**
     * <p>The properties of the provider service.</p>
     */
    inline ResolutionTechniques& WithProviderProperties(ProviderProperties&& value) { SetProviderProperties(std::move(value)); return *this;}


    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline const ResolutionType& GetResolutionType() const{ return m_resolutionType; }

    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline bool ResolutionTypeHasBeenSet() const { return m_resolutionTypeHasBeenSet; }

    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline void SetResolutionType(const ResolutionType& value) { m_resolutionTypeHasBeenSet = true; m_resolutionType = value; }

    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline void SetResolutionType(ResolutionType&& value) { m_resolutionTypeHasBeenSet = true; m_resolutionType = std::move(value); }

    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline ResolutionTechniques& WithResolutionType(const ResolutionType& value) { SetResolutionType(value); return *this;}

    /**
     * <p>The type of matching. There are two types of matching:
     * <code>RULE_MATCHING</code> and <code>ML_MATCHING</code>.</p>
     */
    inline ResolutionTechniques& WithResolutionType(ResolutionType&& value) { SetResolutionType(std::move(value)); return *this;}


    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline const RuleBasedProperties& GetRuleBasedProperties() const{ return m_ruleBasedProperties; }

    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline bool RuleBasedPropertiesHasBeenSet() const { return m_ruleBasedPropertiesHasBeenSet; }

    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline void SetRuleBasedProperties(const RuleBasedProperties& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = value; }

    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline void SetRuleBasedProperties(RuleBasedProperties&& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = std::move(value); }

    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline ResolutionTechniques& WithRuleBasedProperties(const RuleBasedProperties& value) { SetRuleBasedProperties(value); return *this;}

    /**
     * <p>An object which defines the list of matching rules to run and has a field
     * <code>Rules</code>, which is a list of rule objects.</p>
     */
    inline ResolutionTechniques& WithRuleBasedProperties(RuleBasedProperties&& value) { SetRuleBasedProperties(std::move(value)); return *this;}

  private:

    ProviderProperties m_providerProperties;
    bool m_providerPropertiesHasBeenSet = false;

    ResolutionType m_resolutionType;
    bool m_resolutionTypeHasBeenSet = false;

    RuleBasedProperties m_ruleBasedProperties;
    bool m_ruleBasedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
