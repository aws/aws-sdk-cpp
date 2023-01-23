/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/AccountEnrollmentStatus.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetEnrollmentStatusesForOrganizationResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult();
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline const Aws::Vector<AccountEnrollmentStatus>& GetAccountEnrollmentStatuses() const{ return m_accountEnrollmentStatuses; }

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline void SetAccountEnrollmentStatuses(const Aws::Vector<AccountEnrollmentStatus>& value) { m_accountEnrollmentStatuses = value; }

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline void SetAccountEnrollmentStatuses(Aws::Vector<AccountEnrollmentStatus>&& value) { m_accountEnrollmentStatuses = std::move(value); }

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& WithAccountEnrollmentStatuses(const Aws::Vector<AccountEnrollmentStatus>& value) { SetAccountEnrollmentStatuses(value); return *this;}

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& WithAccountEnrollmentStatuses(Aws::Vector<AccountEnrollmentStatus>&& value) { SetAccountEnrollmentStatuses(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& AddAccountEnrollmentStatuses(const AccountEnrollmentStatus& value) { m_accountEnrollmentStatuses.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the enrollment statuses of organization
     * member accounts.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& AddAccountEnrollmentStatuses(AccountEnrollmentStatus&& value) { m_accountEnrollmentStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of account enrollment
     * statuses.</p> <p>This value is null when there are no more pages of account
     * enrollment statuses to return.</p>
     */
    inline GetEnrollmentStatusesForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountEnrollmentStatus> m_accountEnrollmentStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
