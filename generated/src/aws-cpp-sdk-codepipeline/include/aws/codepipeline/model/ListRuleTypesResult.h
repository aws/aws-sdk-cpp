/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/RuleType.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListRuleTypesResult
  {
  public:
    AWS_CODEPIPELINE_API ListRuleTypesResult() = default;
    AWS_CODEPIPELINE_API ListRuleTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListRuleTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the rules that are configured for the condition.</p>
     */
    inline const Aws::Vector<RuleType>& GetRuleTypes() const { return m_ruleTypes; }
    template<typename RuleTypesT = Aws::Vector<RuleType>>
    void SetRuleTypes(RuleTypesT&& value) { m_ruleTypesHasBeenSet = true; m_ruleTypes = std::forward<RuleTypesT>(value); }
    template<typename RuleTypesT = Aws::Vector<RuleType>>
    ListRuleTypesResult& WithRuleTypes(RuleTypesT&& value) { SetRuleTypes(std::forward<RuleTypesT>(value)); return *this;}
    template<typename RuleTypesT = RuleType>
    ListRuleTypesResult& AddRuleTypes(RuleTypesT&& value) { m_ruleTypesHasBeenSet = true; m_ruleTypes.emplace_back(std::forward<RuleTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRuleTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleType> m_ruleTypes;
    bool m_ruleTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
