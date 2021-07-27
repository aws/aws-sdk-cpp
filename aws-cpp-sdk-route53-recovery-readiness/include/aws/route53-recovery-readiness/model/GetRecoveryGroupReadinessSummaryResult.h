/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ReadinessCheckSummary.h>
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
  class AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupReadinessSummaryResult
  {
  public:
    GetRecoveryGroupReadinessSummaryResult();
    GetRecoveryGroupReadinessSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRecoveryGroupReadinessSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetRecoveryGroupReadinessSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The readiness at RecoveryGroup level.
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness at RecoveryGroup level.
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * The readiness at RecoveryGroup level.
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * The readiness at RecoveryGroup level.
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness at RecoveryGroup level.
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline const Aws::Vector<ReadinessCheckSummary>& GetReadinessChecks() const{ return m_readinessChecks; }

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline void SetReadinessChecks(const Aws::Vector<ReadinessCheckSummary>& value) { m_readinessChecks = value; }

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline void SetReadinessChecks(Aws::Vector<ReadinessCheckSummary>&& value) { m_readinessChecks = std::move(value); }

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithReadinessChecks(const Aws::Vector<ReadinessCheckSummary>& value) { SetReadinessChecks(value); return *this;}

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline GetRecoveryGroupReadinessSummaryResult& WithReadinessChecks(Aws::Vector<ReadinessCheckSummary>&& value) { SetReadinessChecks(std::move(value)); return *this;}

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline GetRecoveryGroupReadinessSummaryResult& AddReadinessChecks(const ReadinessCheckSummary& value) { m_readinessChecks.push_back(value); return *this; }

    /**
     * Summaries for the ReadinessChecks making up the RecoveryGroup
     */
    inline GetRecoveryGroupReadinessSummaryResult& AddReadinessChecks(ReadinessCheckSummary&& value) { m_readinessChecks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Readiness m_readiness;

    Aws::Vector<ReadinessCheckSummary> m_readinessChecks;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
