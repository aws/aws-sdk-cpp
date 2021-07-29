/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/RuleResult.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResourceStatusResult
  {
  public:
    GetReadinessCheckResourceStatusResult();
    GetReadinessCheckResourceStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetReadinessCheckResourceStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckResourceStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckResourceStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetReadinessCheckResourceStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The readiness at rule level.
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * The readiness at rule level.
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * The readiness at rule level.
     */
    inline GetReadinessCheckResourceStatusResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness at rule level.
     */
    inline GetReadinessCheckResourceStatusResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * Details of the rules's results
     */
    inline const Aws::Vector<RuleResult>& GetRules() const{ return m_rules; }

    /**
     * Details of the rules's results
     */
    inline void SetRules(const Aws::Vector<RuleResult>& value) { m_rules = value; }

    /**
     * Details of the rules's results
     */
    inline void SetRules(Aws::Vector<RuleResult>&& value) { m_rules = std::move(value); }

    /**
     * Details of the rules's results
     */
    inline GetReadinessCheckResourceStatusResult& WithRules(const Aws::Vector<RuleResult>& value) { SetRules(value); return *this;}

    /**
     * Details of the rules's results
     */
    inline GetReadinessCheckResourceStatusResult& WithRules(Aws::Vector<RuleResult>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * Details of the rules's results
     */
    inline GetReadinessCheckResourceStatusResult& AddRules(const RuleResult& value) { m_rules.push_back(value); return *this; }

    /**
     * Details of the rules's results
     */
    inline GetReadinessCheckResourceStatusResult& AddRules(RuleResult&& value) { m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Readiness m_readiness;

    Aws::Vector<RuleResult> m_rules;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
