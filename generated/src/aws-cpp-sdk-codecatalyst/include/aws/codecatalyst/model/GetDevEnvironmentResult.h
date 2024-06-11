/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/DevEnvironmentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/codecatalyst/model/PersistentStorage.h>
#include <aws/codecatalyst/model/DevEnvironmentRepositorySummary.h>
#include <aws/codecatalyst/model/Ide.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetDevEnvironmentResult
  {
  public:
    AWS_CODECATALYST_API GetDevEnvironmentResult();
    AWS_CODECATALYST_API GetDevEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetDevEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline GetDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline GetDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline GetDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline GetDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline GetDevEnvironmentResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GetDevEnvironmentResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }
    inline void SetCreatorId(const Aws::String& value) { m_creatorId = value; }
    inline void SetCreatorId(Aws::String&& value) { m_creatorId = std::move(value); }
    inline void SetCreatorId(const char* value) { m_creatorId.assign(value); }
    inline GetDevEnvironmentResult& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}
    inline GetDevEnvironmentResult& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DevEnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(DevEnvironmentStatus&& value) { m_status = std::move(value); }
    inline GetDevEnvironmentResult& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}
    inline GetDevEnvironmentResult& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetDevEnvironmentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetDevEnvironmentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline const Aws::Vector<DevEnvironmentRepositorySummary>& GetRepositories() const{ return m_repositories; }
    inline void SetRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { m_repositories = value; }
    inline void SetRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { m_repositories = std::move(value); }
    inline GetDevEnvironmentResult& WithRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { SetRepositories(value); return *this;}
    inline GetDevEnvironmentResult& WithRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& AddRepositories(const DevEnvironmentRepositorySummary& value) { m_repositories.push_back(value); return *this; }
    inline GetDevEnvironmentResult& AddRepositories(DevEnvironmentRepositorySummary&& value) { m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline void SetAlias(const Aws::String& value) { m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_alias.assign(value); }
    inline GetDevEnvironmentResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline GetDevEnvironmentResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline const Aws::Vector<Ide>& GetIdes() const{ return m_ides; }
    inline void SetIdes(const Aws::Vector<Ide>& value) { m_ides = value; }
    inline void SetIdes(Aws::Vector<Ide>&& value) { m_ides = std::move(value); }
    inline GetDevEnvironmentResult& WithIdes(const Aws::Vector<Ide>& value) { SetIdes(value); return *this;}
    inline GetDevEnvironmentResult& WithIdes(Aws::Vector<Ide>&& value) { SetIdes(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& AddIdes(const Ide& value) { m_ides.push_back(value); return *this; }
    inline GetDevEnvironmentResult& AddIdes(Ide&& value) { m_ides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceType = std::move(value); }
    inline GetDevEnvironmentResult& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline GetDevEnvironmentResult& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes.</p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutes = value; }
    inline GetDevEnvironmentResult& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline const PersistentStorage& GetPersistentStorage() const{ return m_persistentStorage; }
    inline void SetPersistentStorage(const PersistentStorage& value) { m_persistentStorage = value; }
    inline void SetPersistentStorage(PersistentStorage&& value) { m_persistentStorage = std::move(value); }
    inline GetDevEnvironmentResult& WithPersistentStorage(const PersistentStorage& value) { SetPersistentStorage(value); return *this;}
    inline GetDevEnvironmentResult& WithPersistentStorage(PersistentStorage&& value) { SetPersistentStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection used to connect to Amazon VPC used when the Dev
     * Environment was created, if any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const{ return m_vpcConnectionName; }
    inline void SetVpcConnectionName(const Aws::String& value) { m_vpcConnectionName = value; }
    inline void SetVpcConnectionName(Aws::String&& value) { m_vpcConnectionName = std::move(value); }
    inline void SetVpcConnectionName(const char* value) { m_vpcConnectionName.assign(value); }
    inline GetDevEnvironmentResult& WithVpcConnectionName(const Aws::String& value) { SetVpcConnectionName(value); return *this;}
    inline GetDevEnvironmentResult& WithVpcConnectionName(Aws::String&& value) { SetVpcConnectionName(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithVpcConnectionName(const char* value) { SetVpcConnectionName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDevEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDevEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDevEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_creatorId;

    DevEnvironmentStatus m_status;

    Aws::String m_statusReason;

    Aws::Vector<DevEnvironmentRepositorySummary> m_repositories;

    Aws::String m_alias;

    Aws::Vector<Ide> m_ides;

    InstanceType m_instanceType;

    int m_inactivityTimeoutMinutes;

    PersistentStorage m_persistentStorage;

    Aws::String m_vpcConnectionName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
