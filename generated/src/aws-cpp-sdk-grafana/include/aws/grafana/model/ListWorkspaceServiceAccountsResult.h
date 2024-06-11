/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/ServiceAccountSummary.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class ListWorkspaceServiceAccountsResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult();
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use when requesting the next set of service accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkspaceServiceAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures containing information about the service accounts.</p>
     */
    inline const Aws::Vector<ServiceAccountSummary>& GetServiceAccounts() const{ return m_serviceAccounts; }
    inline void SetServiceAccounts(const Aws::Vector<ServiceAccountSummary>& value) { m_serviceAccounts = value; }
    inline void SetServiceAccounts(Aws::Vector<ServiceAccountSummary>&& value) { m_serviceAccounts = std::move(value); }
    inline ListWorkspaceServiceAccountsResult& WithServiceAccounts(const Aws::Vector<ServiceAccountSummary>& value) { SetServiceAccounts(value); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithServiceAccounts(Aws::Vector<ServiceAccountSummary>&& value) { SetServiceAccounts(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountsResult& AddServiceAccounts(const ServiceAccountSummary& value) { m_serviceAccounts.push_back(value); return *this; }
    inline ListWorkspaceServiceAccountsResult& AddServiceAccounts(ServiceAccountSummary&& value) { m_serviceAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workspace to which the service accounts are associated.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline ListWorkspaceServiceAccountsResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkspaceServiceAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceAccountSummary> m_serviceAccounts;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
