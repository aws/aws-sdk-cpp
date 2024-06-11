﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/RulesetItem.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class ListRulesetsResult
  {
  public:
    AWS_GLUEDATABREW_API ListRulesetsResult();
    AWS_GLUEDATABREW_API ListRulesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListRulesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of RulesetItem. RulesetItem contains meta data of a ruleset.</p>
     */
    inline const Aws::Vector<RulesetItem>& GetRulesets() const{ return m_rulesets; }
    inline void SetRulesets(const Aws::Vector<RulesetItem>& value) { m_rulesets = value; }
    inline void SetRulesets(Aws::Vector<RulesetItem>&& value) { m_rulesets = std::move(value); }
    inline ListRulesetsResult& WithRulesets(const Aws::Vector<RulesetItem>& value) { SetRulesets(value); return *this;}
    inline ListRulesetsResult& WithRulesets(Aws::Vector<RulesetItem>&& value) { SetRulesets(std::move(value)); return *this;}
    inline ListRulesetsResult& AddRulesets(const RulesetItem& value) { m_rulesets.push_back(value); return *this; }
    inline ListRulesetsResult& AddRulesets(RulesetItem&& value) { m_rulesets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRulesetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRulesetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRulesetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRulesetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRulesetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRulesetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RulesetItem> m_rulesets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
