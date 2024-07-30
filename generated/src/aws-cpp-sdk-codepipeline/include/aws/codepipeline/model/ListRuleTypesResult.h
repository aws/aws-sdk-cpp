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
    AWS_CODEPIPELINE_API ListRuleTypesResult();
    AWS_CODEPIPELINE_API ListRuleTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListRuleTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the rules that are configured for the condition.</p>
     */
    inline const Aws::Vector<RuleType>& GetRuleTypes() const{ return m_ruleTypes; }
    inline void SetRuleTypes(const Aws::Vector<RuleType>& value) { m_ruleTypes = value; }
    inline void SetRuleTypes(Aws::Vector<RuleType>&& value) { m_ruleTypes = std::move(value); }
    inline ListRuleTypesResult& WithRuleTypes(const Aws::Vector<RuleType>& value) { SetRuleTypes(value); return *this;}
    inline ListRuleTypesResult& WithRuleTypes(Aws::Vector<RuleType>&& value) { SetRuleTypes(std::move(value)); return *this;}
    inline ListRuleTypesResult& AddRuleTypes(const RuleType& value) { m_ruleTypes.push_back(value); return *this; }
    inline ListRuleTypesResult& AddRuleTypes(RuleType&& value) { m_ruleTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RuleType> m_ruleTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
