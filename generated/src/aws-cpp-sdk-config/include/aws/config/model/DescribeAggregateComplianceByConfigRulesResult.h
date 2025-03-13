/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateComplianceByConfigRule.h>
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
  class DescribeAggregateComplianceByConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult() = default;
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline const Aws::Vector<AggregateComplianceByConfigRule>& GetAggregateComplianceByConfigRules() const { return m_aggregateComplianceByConfigRules; }
    template<typename AggregateComplianceByConfigRulesT = Aws::Vector<AggregateComplianceByConfigRule>>
    void SetAggregateComplianceByConfigRules(AggregateComplianceByConfigRulesT&& value) { m_aggregateComplianceByConfigRulesHasBeenSet = true; m_aggregateComplianceByConfigRules = std::forward<AggregateComplianceByConfigRulesT>(value); }
    template<typename AggregateComplianceByConfigRulesT = Aws::Vector<AggregateComplianceByConfigRule>>
    DescribeAggregateComplianceByConfigRulesResult& WithAggregateComplianceByConfigRules(AggregateComplianceByConfigRulesT&& value) { SetAggregateComplianceByConfigRules(std::forward<AggregateComplianceByConfigRulesT>(value)); return *this;}
    template<typename AggregateComplianceByConfigRulesT = AggregateComplianceByConfigRule>
    DescribeAggregateComplianceByConfigRulesResult& AddAggregateComplianceByConfigRules(AggregateComplianceByConfigRulesT&& value) { m_aggregateComplianceByConfigRulesHasBeenSet = true; m_aggregateComplianceByConfigRules.emplace_back(std::forward<AggregateComplianceByConfigRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAggregateComplianceByConfigRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAggregateComplianceByConfigRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateComplianceByConfigRule> m_aggregateComplianceByConfigRules;
    bool m_aggregateComplianceByConfigRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
