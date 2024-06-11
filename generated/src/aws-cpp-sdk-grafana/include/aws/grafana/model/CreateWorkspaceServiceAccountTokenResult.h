/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/ServiceAccountTokenSummaryWithKey.h>
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
  class CreateWorkspaceServiceAccountTokenResult
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult();
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the service account where the token was created.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountId = value; }
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountId = std::move(value); }
    inline void SetServiceAccountId(const char* value) { m_serviceAccountId.assign(value); }
    inline CreateWorkspaceServiceAccountTokenResult& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the created token, including the key. Be sure to store the
     * key securely.</p>
     */
    inline const ServiceAccountTokenSummaryWithKey& GetServiceAccountToken() const{ return m_serviceAccountToken; }
    inline void SetServiceAccountToken(const ServiceAccountTokenSummaryWithKey& value) { m_serviceAccountToken = value; }
    inline void SetServiceAccountToken(ServiceAccountTokenSummaryWithKey&& value) { m_serviceAccountToken = std::move(value); }
    inline CreateWorkspaceServiceAccountTokenResult& WithServiceAccountToken(const ServiceAccountTokenSummaryWithKey& value) { SetServiceAccountToken(value); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithServiceAccountToken(ServiceAccountTokenSummaryWithKey&& value) { SetServiceAccountToken(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the token was created.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline CreateWorkspaceServiceAccountTokenResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkspaceServiceAccountTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountId;

    ServiceAccountTokenSummaryWithKey m_serviceAccountToken;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
