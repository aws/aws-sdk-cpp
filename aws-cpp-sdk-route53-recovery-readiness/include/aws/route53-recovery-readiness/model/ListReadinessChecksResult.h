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
  class AWS_ROUTE53RECOVERYREADINESS_API ListReadinessChecksResult
  {
  public:
    ListReadinessChecksResult();
    ListReadinessChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListReadinessChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListReadinessChecksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListReadinessChecksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListReadinessChecksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of ReadinessCheck associated with the account
     */
    inline const Aws::Vector<ReadinessCheckOutput>& GetReadinessChecks() const{ return m_readinessChecks; }

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline void SetReadinessChecks(const Aws::Vector<ReadinessCheckOutput>& value) { m_readinessChecks = value; }

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline void SetReadinessChecks(Aws::Vector<ReadinessCheckOutput>&& value) { m_readinessChecks = std::move(value); }

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline ListReadinessChecksResult& WithReadinessChecks(const Aws::Vector<ReadinessCheckOutput>& value) { SetReadinessChecks(value); return *this;}

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline ListReadinessChecksResult& WithReadinessChecks(Aws::Vector<ReadinessCheckOutput>&& value) { SetReadinessChecks(std::move(value)); return *this;}

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline ListReadinessChecksResult& AddReadinessChecks(const ReadinessCheckOutput& value) { m_readinessChecks.push_back(value); return *this; }

    /**
     * A list of ReadinessCheck associated with the account
     */
    inline ListReadinessChecksResult& AddReadinessChecks(ReadinessCheckOutput&& value) { m_readinessChecks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReadinessCheckOutput> m_readinessChecks;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
