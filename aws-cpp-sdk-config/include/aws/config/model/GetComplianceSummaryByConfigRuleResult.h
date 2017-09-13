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
#include <aws/config/model/ComplianceSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRuleResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult
  {
  public:
    GetComplianceSummaryByConfigRuleResult();
    GetComplianceSummaryByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComplianceSummaryByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of AWS Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of AWS Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummary = value; }

    /**
     * <p>The number of AWS Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummary = std::move(value); }

    /**
     * <p>The number of AWS Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline GetComplianceSummaryByConfigRuleResult& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of AWS Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline GetComplianceSummaryByConfigRuleResult& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    ComplianceSummary m_complianceSummary;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
