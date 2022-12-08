/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/RecoveryGroupOutput.h>
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
  class ListRecoveryGroupsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRecoveryGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRecoveryGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListRecoveryGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of recovery groups.</p>
     */
    inline const Aws::Vector<RecoveryGroupOutput>& GetRecoveryGroups() const{ return m_recoveryGroups; }

    /**
     * <p>A list of recovery groups.</p>
     */
    inline void SetRecoveryGroups(const Aws::Vector<RecoveryGroupOutput>& value) { m_recoveryGroups = value; }

    /**
     * <p>A list of recovery groups.</p>
     */
    inline void SetRecoveryGroups(Aws::Vector<RecoveryGroupOutput>&& value) { m_recoveryGroups = std::move(value); }

    /**
     * <p>A list of recovery groups.</p>
     */
    inline ListRecoveryGroupsResult& WithRecoveryGroups(const Aws::Vector<RecoveryGroupOutput>& value) { SetRecoveryGroups(value); return *this;}

    /**
     * <p>A list of recovery groups.</p>
     */
    inline ListRecoveryGroupsResult& WithRecoveryGroups(Aws::Vector<RecoveryGroupOutput>&& value) { SetRecoveryGroups(std::move(value)); return *this;}

    /**
     * <p>A list of recovery groups.</p>
     */
    inline ListRecoveryGroupsResult& AddRecoveryGroups(const RecoveryGroupOutput& value) { m_recoveryGroups.push_back(value); return *this; }

    /**
     * <p>A list of recovery groups.</p>
     */
    inline ListRecoveryGroupsResult& AddRecoveryGroups(RecoveryGroupOutput&& value) { m_recoveryGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecoveryGroupOutput> m_recoveryGroups;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
