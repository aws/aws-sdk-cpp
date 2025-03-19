/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackComplianceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Filters a conformance pack by Config rule names, compliance types, Amazon Web
   * Services resource types, and resource IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackEvaluationFilters">AWS
   * API Reference</a></p>
   */
  class ConformancePackEvaluationFilters
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters() = default;
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const { return m_configRuleNames; }
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    void SetConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::forward<ConfigRuleNamesT>(value); }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    ConformancePackEvaluationFilters& WithConfigRuleNames(ConfigRuleNamesT&& value) { SetConfigRuleNames(std::forward<ConfigRuleNamesT>(value)); return *this;}
    template<typename ConfigRuleNamesT = Aws::String>
    ConformancePackEvaluationFilters& AddConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.emplace_back(std::forward<ConfigRuleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackComplianceType GetComplianceType() const { return m_complianceType; }
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }
    inline void SetComplianceType(ConformancePackComplianceType value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }
    inline ConformancePackEvaluationFilters& WithComplianceType(ConformancePackComplianceType value) { SetComplianceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ConformancePackEvaluationFilters& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<Aws::String>>
    ConformancePackEvaluationFilters& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = Aws::String>
    ConformancePackEvaluationFilters& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    ConformancePackComplianceType m_complianceType{ConformancePackComplianceType::NOT_SET};
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
