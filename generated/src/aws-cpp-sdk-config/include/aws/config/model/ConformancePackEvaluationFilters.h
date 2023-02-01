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
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters();
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackEvaluationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::move(value); }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackEvaluationFilters& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackEvaluationFilters& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(std::move(value)); return *this;}

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackEvaluationFilters& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackEvaluationFilters& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by Config rule names.</p>
     */
    inline ConformancePackEvaluationFilters& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }


    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline const ConformancePackComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline void SetComplianceType(const ConformancePackComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline void SetComplianceType(ConformancePackComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackEvaluationFilters& WithComplianceType(const ConformancePackComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * <code>INSUFFICIENT_DATA</code> is not supported.</p>
     */
    inline ConformancePackEvaluationFilters& WithComplianceType(ConformancePackComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline ConformancePackEvaluationFilters& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline ConformancePackEvaluationFilters& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Filters the results by the resource type (for example,
     * <code>"AWS::EC2::Instance"</code>). </p>
     */
    inline ConformancePackEvaluationFilters& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline ConformancePackEvaluationFilters& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline ConformancePackEvaluationFilters& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline ConformancePackEvaluationFilters& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline ConformancePackEvaluationFilters& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by resource IDs.</p>  <p>This is valid only when
     * you provide resource type. If there is no resource type, you will see an
     * error.</p> 
     */
    inline ConformancePackEvaluationFilters& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    ConformancePackComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
