/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingType.h>
#include <aws/entityresolution/model/NamespaceProviderProperties.h>
#include <aws/entityresolution/model/NamespaceRuleBasedProperties.h>
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
   * <p>An object containing <code>IdMappingType</code>,
   * <code>ProviderProperties</code>, and
   * <code>RuleBasedProperties</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdNamespaceIdMappingWorkflowProperties">AWS
   * API Reference</a></p>
   */
  class IdNamespaceIdMappingWorkflowProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties();
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of ID mapping.</p>
     */
    inline const IdMappingType& GetIdMappingType() const{ return m_idMappingType; }
    inline bool IdMappingTypeHasBeenSet() const { return m_idMappingTypeHasBeenSet; }
    inline void SetIdMappingType(const IdMappingType& value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = value; }
    inline void SetIdMappingType(IdMappingType&& value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = std::move(value); }
    inline IdNamespaceIdMappingWorkflowProperties& WithIdMappingType(const IdMappingType& value) { SetIdMappingType(value); return *this;}
    inline IdNamespaceIdMappingWorkflowProperties& WithIdMappingType(IdMappingType&& value) { SetIdMappingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline const NamespaceProviderProperties& GetProviderProperties() const{ return m_providerProperties; }
    inline bool ProviderPropertiesHasBeenSet() const { return m_providerPropertiesHasBeenSet; }
    inline void SetProviderProperties(const NamespaceProviderProperties& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = value; }
    inline void SetProviderProperties(NamespaceProviderProperties&& value) { m_providerPropertiesHasBeenSet = true; m_providerProperties = std::move(value); }
    inline IdNamespaceIdMappingWorkflowProperties& WithProviderProperties(const NamespaceProviderProperties& value) { SetProviderProperties(value); return *this;}
    inline IdNamespaceIdMappingWorkflowProperties& WithProviderProperties(NamespaceProviderProperties&& value) { SetProviderProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object which defines any additional configurations required by rule-based
     * matching.</p>
     */
    inline const NamespaceRuleBasedProperties& GetRuleBasedProperties() const{ return m_ruleBasedProperties; }
    inline bool RuleBasedPropertiesHasBeenSet() const { return m_ruleBasedPropertiesHasBeenSet; }
    inline void SetRuleBasedProperties(const NamespaceRuleBasedProperties& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = value; }
    inline void SetRuleBasedProperties(NamespaceRuleBasedProperties&& value) { m_ruleBasedPropertiesHasBeenSet = true; m_ruleBasedProperties = std::move(value); }
    inline IdNamespaceIdMappingWorkflowProperties& WithRuleBasedProperties(const NamespaceRuleBasedProperties& value) { SetRuleBasedProperties(value); return *this;}
    inline IdNamespaceIdMappingWorkflowProperties& WithRuleBasedProperties(NamespaceRuleBasedProperties&& value) { SetRuleBasedProperties(std::move(value)); return *this;}
    ///@}
  private:

    IdMappingType m_idMappingType;
    bool m_idMappingTypeHasBeenSet = false;

    NamespaceProviderProperties m_providerProperties;
    bool m_providerPropertiesHasBeenSet = false;

    NamespaceRuleBasedProperties m_ruleBasedProperties;
    bool m_ruleBasedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
