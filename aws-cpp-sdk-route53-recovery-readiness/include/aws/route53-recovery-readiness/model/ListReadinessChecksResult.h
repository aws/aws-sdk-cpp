/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ReadinessCheckOutput.h>
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
  class ListReadinessChecksResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListReadinessChecksResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListReadinessChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListReadinessChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListReadinessChecksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListReadinessChecksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListReadinessChecksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline const Aws::Vector<ReadinessCheckOutput>& GetReadinessChecks() const{ return m_readinessChecks; }

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline void SetReadinessChecks(const Aws::Vector<ReadinessCheckOutput>& value) { m_readinessChecks = value; }

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline void SetReadinessChecks(Aws::Vector<ReadinessCheckOutput>&& value) { m_readinessChecks = std::move(value); }

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline ListReadinessChecksResult& WithReadinessChecks(const Aws::Vector<ReadinessCheckOutput>& value) { SetReadinessChecks(value); return *this;}

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline ListReadinessChecksResult& WithReadinessChecks(Aws::Vector<ReadinessCheckOutput>&& value) { SetReadinessChecks(std::move(value)); return *this;}

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline ListReadinessChecksResult& AddReadinessChecks(const ReadinessCheckOutput& value) { m_readinessChecks.push_back(value); return *this; }

    /**
     * <p>A list of readiness checks associated with the account.</p>
     */
    inline ListReadinessChecksResult& AddReadinessChecks(ReadinessCheckOutput&& value) { m_readinessChecks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReadinessCheckOutput> m_readinessChecks;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
