/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingType.h>
#include <aws/entityresolution/model/NamespaceRuleBasedProperties.h>
#include <aws/entityresolution/model/NamespaceProviderProperties.h>
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
   * <p>An object containing <code>idMappingType</code>,
   * <code>providerProperties</code>, and
   * <code>ruleBasedProperties</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdNamespaceIdMappingWorkflowProperties">AWS
   * API Reference</a></p>
   */
  class IdNamespaceIdMappingWorkflowProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties() = default;
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of ID mapping.</p>
     */
    inline IdMappingType GetIdMappingType() const { return m_idMappingType; }
    inline bool IdMappingTypeHasBeenSet() const { return m_idMappingTypeHasBeenSet; }
    inline void SetIdMappingType(IdMappingType value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = value; }
    inline IdNamespaceIdMappingWorkflowProperties& WithIdMappingType(IdMappingType value) { SetIdMappingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object which defines any additional configurations required by rule-based
     * matching.</p>
     */
    inline const NamespaceRuleBasedProperties& GetRuleBasedProperties() const { return m_ruleBasedProperties; }
    inline bool RuleBasedPropertiesHasBeenSet() const { return m_ruleBasedPropertiesHasBeenSet; }
    template<typename RuleBasedPropertiesT = NamespaceRuleBasedProperties>
    void SetRuleBasedProperties(RuleBasedPropertiesT&& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = std::forward<RuleBasedPropertiesT>(value); }
    template<typename RuleBasedPropertiesT = NamespaceRuleBasedProperties>
    IdNamespaceIdMappingWorkflowProperties& WithRuleBasedProperties(RuleBasedPropertiesT&& value) { SetRuleBasedProperties(std::forward<RuleBasedPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline const NamespaceProviderProperties& GetProviderProperties() const { return m_providerProperties; }
    inline bool ProviderPropertiesHasBeenSet() const { return m_providerPropertiesHasBeenSet; }
    template<typename ProviderPropertiesT = NamespaceProviderProperties>
    void SetProviderProperties(ProviderPropertiesT&& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = std::forward<ProviderPropertiesT>(value); }
    template<typename ProviderPropertiesT = NamespaceProviderProperties>
    IdNamespaceIdMappingWorkflowProperties& WithProviderProperties(ProviderPropertiesT&& value) { SetProviderProperties(std::forward<ProviderPropertiesT>(value)); return *this;}
    ///@}
  private:

    IdMappingType m_idMappingType{IdMappingType::NOT_SET};
    bool m_idMappingTypeHasBeenSet = false;

    NamespaceRuleBasedProperties m_ruleBasedProperties;
    bool m_ruleBasedPropertiesHasBeenSet = false;

    NamespaceProviderProperties m_providerProperties;
    bool m_providerPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
