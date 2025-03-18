/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByConfigRule.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRuleResponse">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult() = default;
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline const Aws::Vector<ComplianceByConfigRule>& GetComplianceByConfigRules() const { return m_complianceByConfigRules; }
    template<typename ComplianceByConfigRulesT = Aws::Vector<ComplianceByConfigRule>>
    void SetComplianceByConfigRules(ComplianceByConfigRulesT&& value) { m_complianceByConfigRulesHasBeenSet = true; m_complianceByConfigRules = std::forward<ComplianceByConfigRulesT>(value); }
    template<typename ComplianceByConfigRulesT = Aws::Vector<ComplianceByConfigRule>>
    DescribeComplianceByConfigRuleResult& WithComplianceByConfigRules(ComplianceByConfigRulesT&& value) { SetComplianceByConfigRules(std::forward<ComplianceByConfigRulesT>(value)); return *this;}
    template<typename ComplianceByConfigRulesT = ComplianceByConfigRule>
    DescribeComplianceByConfigRuleResult& AddComplianceByConfigRules(ComplianceByConfigRulesT&& value) { m_complianceByConfigRulesHasBeenSet = true; m_complianceByConfigRules.emplace_back(std::forward<ComplianceByConfigRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeComplianceByConfigRuleResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComplianceByConfigRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceByConfigRule> m_complianceByConfigRules;
    bool m_complianceByConfigRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
