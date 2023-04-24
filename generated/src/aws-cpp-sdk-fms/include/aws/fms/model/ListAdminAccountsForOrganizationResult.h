/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/AdminAccountSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListAdminAccountsForOrganizationResult
  {
  public:
    AWS_FMS_API ListAdminAccountsForOrganizationResult();
    AWS_FMS_API ListAdminAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListAdminAccountsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline const Aws::Vector<AdminAccountSummary>& GetAdminAccounts() const{ return m_adminAccounts; }

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline void SetAdminAccounts(const Aws::Vector<AdminAccountSummary>& value) { m_adminAccounts = value; }

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline void SetAdminAccounts(Aws::Vector<AdminAccountSummary>&& value) { m_adminAccounts = std::move(value); }

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline ListAdminAccountsForOrganizationResult& WithAdminAccounts(const Aws::Vector<AdminAccountSummary>& value) { SetAdminAccounts(value); return *this;}

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline ListAdminAccountsForOrganizationResult& WithAdminAccounts(Aws::Vector<AdminAccountSummary>&& value) { SetAdminAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline ListAdminAccountsForOrganizationResult& AddAdminAccounts(const AdminAccountSummary& value) { m_adminAccounts.push_back(value); return *this; }

    /**
     * <p>A list of Firewall Manager administrator accounts within the organization
     * that were onboarded as administrators by <a>AssociateAdminAccount</a> or
     * <a>PutAdminAccount</a>.</p>
     */
    inline ListAdminAccountsForOrganizationResult& AddAdminAccounts(AdminAccountSummary&& value) { m_adminAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListAdminAccountsForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListAdminAccountsForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Firewall Manager returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline ListAdminAccountsForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAdminAccountsForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAdminAccountsForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAdminAccountsForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AdminAccountSummary> m_adminAccounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
