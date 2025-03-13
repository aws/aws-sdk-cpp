/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/Rule.h>
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
namespace FraudDetector
{
namespace Model
{
  class UpdateRuleVersionResult
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult() = default;
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API UpdateRuleVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The new rule version that was created.</p>
     */
    inline const Rule& GetRule() const { return m_rule; }
    template<typename RuleT = Rule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = Rule>
    UpdateRuleVersionResult& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRuleVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
