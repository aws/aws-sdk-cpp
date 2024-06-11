﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult();
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListRuleGroupsNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListRuleGroupsNamespaces</code> request to
     * retrieve those results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRuleGroupsNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRuleGroupsNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRuleGroupsNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned list of rule groups namespaces.</p>
     */
    inline const Aws::Vector<RuleGroupsNamespaceSummary>& GetRuleGroupsNamespaces() const{ return m_ruleGroupsNamespaces; }
    inline void SetRuleGroupsNamespaces(const Aws::Vector<RuleGroupsNamespaceSummary>& value) { m_ruleGroupsNamespaces = value; }
    inline void SetRuleGroupsNamespaces(Aws::Vector<RuleGroupsNamespaceSummary>&& value) { m_ruleGroupsNamespaces = std::move(value); }
    inline ListRuleGroupsNamespacesResult& WithRuleGroupsNamespaces(const Aws::Vector<RuleGroupsNamespaceSummary>& value) { SetRuleGroupsNamespaces(value); return *this;}
    inline ListRuleGroupsNamespacesResult& WithRuleGroupsNamespaces(Aws::Vector<RuleGroupsNamespaceSummary>&& value) { SetRuleGroupsNamespaces(std::move(value)); return *this;}
    inline ListRuleGroupsNamespacesResult& AddRuleGroupsNamespaces(const RuleGroupsNamespaceSummary& value) { m_ruleGroupsNamespaces.push_back(value); return *this; }
    inline ListRuleGroupsNamespacesResult& AddRuleGroupsNamespaces(RuleGroupsNamespaceSummary&& value) { m_ruleGroupsNamespaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleGroupsNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleGroupsNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleGroupsNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RuleGroupsNamespaceSummary> m_ruleGroupsNamespaces;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
