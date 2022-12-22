/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetComplianceSummaryByConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult();
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline void SetComplianceSummary(const ComplianceSummary& value) { m_complianceSummary = value; }

    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline void SetComplianceSummary(ComplianceSummary&& value) { m_complianceSummary = std::move(value); }

    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline GetComplianceSummaryByConfigRuleResult& WithComplianceSummary(const ComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline GetComplianceSummaryByConfigRuleResult& WithComplianceSummary(ComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    ComplianceSummary m_complianceSummary;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
