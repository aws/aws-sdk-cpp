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
    AWS_FRAUDDETECTOR_API GetRulesResult();
    AWS_FRAUDDETECTOR_API GetRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the requested rule.</p>
     */
    inline const Aws::Vector<RuleDetail>& GetRuleDetails() const{ return m_ruleDetails; }

    /**
     * <p>The details of the requested rule.</p>
     */
    inline void SetRuleDetails(const Aws::Vector<RuleDetail>& value) { m_ruleDetails = value; }

    /**
     * <p>The details of the requested rule.</p>
     */
    inline void SetRuleDetails(Aws::Vector<RuleDetail>&& value) { m_ruleDetails = std::move(value); }

    /**
     * <p>The details of the requested rule.</p>
     */
    inline GetRulesResult& WithRuleDetails(const Aws::Vector<RuleDetail>& value) { SetRuleDetails(value); return *this;}

    /**
     * <p>The details of the requested rule.</p>
     */
    inline GetRulesResult& WithRuleDetails(Aws::Vector<RuleDetail>&& value) { SetRuleDetails(std::move(value)); return *this;}

    /**
     * <p>The details of the requested rule.</p>
     */
    inline GetRulesResult& AddRuleDetails(const RuleDetail& value) { m_ruleDetails.push_back(value); return *this; }

    /**
     * <p>The details of the requested rule.</p>
     */
    inline GetRulesResult& AddRuleDetails(RuleDetail&& value) { m_ruleDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests.</p>
     */
    inline GetRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RuleDetail> m_ruleDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
