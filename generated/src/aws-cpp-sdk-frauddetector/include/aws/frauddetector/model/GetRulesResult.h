/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/RuleDetail.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetRulesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetRulesResult() = default;
    AWS_FRAUDDETECTOR_API GetRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the requested rule.</p>
     */
    inline const Aws::Vector<RuleDetail>& GetRuleDetails() const { return m_ruleDetails; }
    template<typename RuleDetailsT = Aws::Vector<RuleDetail>>
    void SetRuleDetails(RuleDetailsT&& value) { m_ruleDetailsHasBeenSet = true; m_ruleDetails = std::forward<RuleDetailsT>(value); }
    template<typename RuleDetailsT = Aws::Vector<RuleDetail>>
    GetRulesResult& WithRuleDetails(RuleDetailsT&& value) { SetRuleDetails(std::forward<RuleDetailsT>(value)); return *this;}
    template<typename RuleDetailsT = RuleDetail>
    GetRulesResult& AddRuleDetails(RuleDetailsT&& value) { m_ruleDetailsHasBeenSet = true; m_ruleDetails.emplace_back(std::forward<RuleDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleDetail> m_ruleDetails;
    bool m_ruleDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
