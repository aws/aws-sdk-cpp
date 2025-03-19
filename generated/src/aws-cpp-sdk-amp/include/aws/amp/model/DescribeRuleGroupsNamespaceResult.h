/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/RuleGroupsNamespaceDescription.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeRuleGroupsNamespace</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespaceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeRuleGroupsNamespaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about the rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceDescription& GetRuleGroupsNamespace() const { return m_ruleGroupsNamespace; }
    template<typename RuleGroupsNamespaceT = RuleGroupsNamespaceDescription>
    void SetRuleGroupsNamespace(RuleGroupsNamespaceT&& value) { m_ruleGroupsNamespaceHasBeenSet = true; m_ruleGroupsNamespace = std::forward<RuleGroupsNamespaceT>(value); }
    template<typename RuleGroupsNamespaceT = RuleGroupsNamespaceDescription>
    DescribeRuleGroupsNamespaceResult& WithRuleGroupsNamespace(RuleGroupsNamespaceT&& value) { SetRuleGroupsNamespace(std::forward<RuleGroupsNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRuleGroupsNamespaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RuleGroupsNamespaceDescription m_ruleGroupsNamespace;
    bool m_ruleGroupsNamespaceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
