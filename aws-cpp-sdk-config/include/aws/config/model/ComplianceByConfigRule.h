/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Compliance.h>
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
   * <p>Indicates whether an AWS Config rule is compliant. A rule is compliant if all
   * of the resources that the rule evaluated comply with it. A rule is noncompliant
   * if any of these resources do not comply.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceByConfigRule">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ComplianceByConfigRule
  {
  public:
    ComplianceByConfigRule();
    ComplianceByConfigRule(Aws::Utils::Json::JsonView jsonValue);
    ComplianceByConfigRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ComplianceByConfigRule& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline const Compliance& GetCompliance() const{ return m_compliance; }

    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }

    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline void SetCompliance(const Compliance& value) { m_complianceHasBeenSet = true; m_compliance = value; }

    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline void SetCompliance(Compliance&& value) { m_complianceHasBeenSet = true; m_compliance = std::move(value); }

    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline ComplianceByConfigRule& WithCompliance(const Compliance& value) { SetCompliance(value); return *this;}

    /**
     * <p>Indicates whether the AWS Config rule is compliant.</p>
     */
    inline ComplianceByConfigRule& WithCompliance(Compliance&& value) { SetCompliance(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Compliance m_compliance;
    bool m_complianceHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
