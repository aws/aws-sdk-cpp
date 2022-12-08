/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/RuleGroupsNamespaceDescription.h>
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
   * <p>Represents the output of a DescribeRuleGroupsNamespace
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespaceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeRuleGroupsNamespaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult();
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeRuleGroupsNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The selected rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceDescription& GetRuleGroupsNamespace() const{ return m_ruleGroupsNamespace; }

    /**
     * <p>The selected rule groups namespace.</p>
     */
    inline void SetRuleGroupsNamespace(const RuleGroupsNamespaceDescription& value) { m_ruleGroupsNamespace = value; }

    /**
     * <p>The selected rule groups namespace.</p>
     */
    inline void SetRuleGroupsNamespace(RuleGroupsNamespaceDescription&& value) { m_ruleGroupsNamespace = std::move(value); }

    /**
     * <p>The selected rule groups namespace.</p>
     */
    inline DescribeRuleGroupsNamespaceResult& WithRuleGroupsNamespace(const RuleGroupsNamespaceDescription& value) { SetRuleGroupsNamespace(value); return *this;}

    /**
     * <p>The selected rule groups namespace.</p>
     */
    inline DescribeRuleGroupsNamespaceResult& WithRuleGroupsNamespace(RuleGroupsNamespaceDescription&& value) { SetRuleGroupsNamespace(std::move(value)); return *this;}

  private:

    RuleGroupsNamespaceDescription m_ruleGroupsNamespace;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
