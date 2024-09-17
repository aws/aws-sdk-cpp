/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateWorkspaceServiceAccountResult
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult();
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The permission level given to the service account.</p>
     */
    inline const Role& GetGrafanaRole() const{ return m_grafanaRole; }
    inline void SetGrafanaRole(const Role& value) { m_grafanaRole = value; }
    inline void SetGrafanaRole(Role&& value) { m_grafanaRole = std::move(value); }
    inline CreateWorkspaceServiceAccountResult& WithGrafanaRole(const Role& value) { SetGrafanaRole(value); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithGrafanaRole(Role&& value) { SetGrafanaRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateWorkspaceServiceAccountResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateWorkspaceServiceAccountResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workspace with which the service account is associated.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline CreateWorkspaceServiceAccountResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkspaceServiceAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkspaceServiceAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Role m_grafanaRole;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
