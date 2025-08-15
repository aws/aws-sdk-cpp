/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/RuleGroupsNamespaceSummary.h>
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
   * <p>Represents the output of a <code>ListRuleGroupsNamespaces</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespacesResponse">AWS
   * API Reference</a></p>
   */
  class ListRuleGroupsNamespacesResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult() = default;
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned list of rule groups namespaces.</p>
     */
    inline const Aws::Vector<RuleGroupsNamespaceSummary>& GetRuleGroupsNamespaces() const { return m_ruleGroupsNamespaces; }
    template<typename RuleGroupsNamespacesT = Aws::Vector<RuleGroupsNamespaceSummary>>
    void SetRuleGroupsNamespaces(RuleGroupsNamespacesT&& value) { m_ruleGroupsNamespacesHasBeenSet = true; m_ruleGroupsNamespaces = std::forward<RuleGroupsNamespacesT>(value); }
    template<typename RuleGroupsNamespacesT = Aws::Vector<RuleGroupsNamespaceSummary>>
    ListRuleGroupsNamespacesResult& WithRuleGroupsNamespaces(RuleGroupsNamespacesT&& value) { SetRuleGroupsNamespaces(std::forward<RuleGroupsNamespacesT>(value)); return *this;}
    template<typename RuleGroupsNamespacesT = RuleGroupsNamespaceSummary>
    ListRuleGroupsNamespacesResult& AddRuleGroupsNamespaces(RuleGroupsNamespacesT&& value) { m_ruleGroupsNamespacesHasBeenSet = true; m_ruleGroupsNamespaces.emplace_back(std::forward<RuleGroupsNamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListRuleGroupsNamespaces</code> request to
     * retrieve those results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleGroupsNamespacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleGroupsNamespacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleGroupsNamespaceSummary> m_ruleGroupsNamespaces;
    bool m_ruleGroupsNamespacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
