/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/AccountEnrollmentStatus.h>
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
namespace CostOptimizationHub
{
namespace Model
{
  class ListEnrollmentStatusesResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API ListEnrollmentStatusesResult();
    AWS_COSTOPTIMIZATIONHUB_API ListEnrollmentStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API ListEnrollmentStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The enrollment status of all member accounts in the organization if the
     * account is the management account.</p>
     */
    inline bool GetIncludeMemberAccounts() const{ return m_includeMemberAccounts; }

    /**
     * <p>The enrollment status of all member accounts in the organization if the
     * account is the management account.</p>
     */
    inline void SetIncludeMemberAccounts(bool value) { m_includeMemberAccounts = value; }

    /**
     * <p>The enrollment status of all member accounts in the organization if the
     * account is the management account.</p>
     */
    inline ListEnrollmentStatusesResult& WithIncludeMemberAccounts(bool value) { SetIncludeMemberAccounts(value); return *this;}


    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline const Aws::Vector<AccountEnrollmentStatus>& GetItems() const{ return m_items; }

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline void SetItems(const Aws::Vector<AccountEnrollmentStatus>& value) { m_items = value; }

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline void SetItems(Aws::Vector<AccountEnrollmentStatus>&& value) { m_items = std::move(value); }

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline ListEnrollmentStatusesResult& WithItems(const Aws::Vector<AccountEnrollmentStatus>& value) { SetItems(value); return *this;}

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline ListEnrollmentStatusesResult& WithItems(Aws::Vector<AccountEnrollmentStatus>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline ListEnrollmentStatusesResult& AddItems(const AccountEnrollmentStatus& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The enrollment status of a specific account ID, including creation and last
     * updated timestamps.</p>
     */
    inline ListEnrollmentStatusesResult& AddItems(AccountEnrollmentStatus&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListEnrollmentStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEnrollmentStatusesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEnrollmentStatusesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEnrollmentStatusesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_includeMemberAccounts;

    Aws::Vector<AccountEnrollmentStatus> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
