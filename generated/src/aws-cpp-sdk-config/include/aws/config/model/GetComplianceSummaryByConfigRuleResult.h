/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ComplianceSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult() = default;
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceSummaryByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of Config rules that are compliant and the number that are
     * noncompliant, up to a maximum of 25 for each.</p>
     */
    inline const ComplianceSummary& GetComplianceSummary() const { return m_complianceSummary; }
    template<typename ComplianceSummaryT = ComplianceSummary>
    void SetComplianceSummary(ComplianceSummaryT&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::forward<ComplianceSummaryT>(value); }
    template<typename ComplianceSummaryT = ComplianceSummary>
    GetComplianceSummaryByConfigRuleResult& WithComplianceSummary(ComplianceSummaryT&& value) { SetComplianceSummary(std::forward<ComplianceSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComplianceSummaryByConfigRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
