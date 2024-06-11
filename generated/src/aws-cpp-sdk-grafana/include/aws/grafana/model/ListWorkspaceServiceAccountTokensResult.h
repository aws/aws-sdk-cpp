/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/ServiceAccountTokenSummary.h>
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
  class ListWorkspaceServiceAccountTokensResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult();
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use when requesting the next set of service accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkspaceServiceAccountTokensResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service account where the tokens reside.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountId = value; }
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountId = std::move(value); }
    inline void SetServiceAccountId(const char* value) { m_serviceAccountId.assign(value); }
    inline ListWorkspaceServiceAccountTokensResult& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures containing information about the tokens.</p>
     */
    inline const Aws::Vector<ServiceAccountTokenSummary>& GetServiceAccountTokens() const{ return m_serviceAccountTokens; }
    inline void SetServiceAccountTokens(const Aws::Vector<ServiceAccountTokenSummary>& value) { m_serviceAccountTokens = value; }
    inline void SetServiceAccountTokens(Aws::Vector<ServiceAccountTokenSummary>&& value) { m_serviceAccountTokens = std::move(value); }
    inline ListWorkspaceServiceAccountTokensResult& WithServiceAccountTokens(const Aws::Vector<ServiceAccountTokenSummary>& value) { SetServiceAccountTokens(value); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithServiceAccountTokens(Aws::Vector<ServiceAccountTokenSummary>&& value) { SetServiceAccountTokens(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& AddServiceAccountTokens(const ServiceAccountTokenSummary& value) { m_serviceAccountTokens.push_back(value); return *this; }
    inline ListWorkspaceServiceAccountTokensResult& AddServiceAccountTokens(ServiceAccountTokenSummary&& value) { m_serviceAccountTokens.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the tokens reside.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline ListWorkspaceServiceAccountTokensResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkspaceServiceAccountTokensResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::String m_serviceAccountId;

    Aws::Vector<ServiceAccountTokenSummary> m_serviceAccountTokens;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
