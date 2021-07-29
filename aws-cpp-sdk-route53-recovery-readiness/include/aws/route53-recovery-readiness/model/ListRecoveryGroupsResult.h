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
  class AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult
  {
  public:
    ListRecoveryGroupsResult();
    ListRecoveryGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRecoveryGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRecoveryGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListRecoveryGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListRecoveryGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of RecoveryGroups
     */
    inline const Aws::Vector<RecoveryGroupOutput>& GetRecoveryGroups() const{ return m_recoveryGroups; }

    /**
     * A list of RecoveryGroups
     */
    inline void SetRecoveryGroups(const Aws::Vector<RecoveryGroupOutput>& value) { m_recoveryGroups = value; }

    /**
     * A list of RecoveryGroups
     */
    inline void SetRecoveryGroups(Aws::Vector<RecoveryGroupOutput>&& value) { m_recoveryGroups = std::move(value); }

    /**
     * A list of RecoveryGroups
     */
    inline ListRecoveryGroupsResult& WithRecoveryGroups(const Aws::Vector<RecoveryGroupOutput>& value) { SetRecoveryGroups(value); return *this;}

    /**
     * A list of RecoveryGroups
     */
    inline ListRecoveryGroupsResult& WithRecoveryGroups(Aws::Vector<RecoveryGroupOutput>&& value) { SetRecoveryGroups(std::move(value)); return *this;}

    /**
     * A list of RecoveryGroups
     */
    inline ListRecoveryGroupsResult& AddRecoveryGroups(const RecoveryGroupOutput& value) { m_recoveryGroups.push_back(value); return *this; }

    /**
     * A list of RecoveryGroups
     */
    inline ListRecoveryGroupsResult& AddRecoveryGroups(RecoveryGroupOutput&& value) { m_recoveryGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecoveryGroupOutput> m_recoveryGroups;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
