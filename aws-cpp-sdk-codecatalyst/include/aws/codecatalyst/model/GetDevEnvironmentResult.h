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


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline GetDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline GetDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline GetDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetDevEnvironmentResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetDevEnvironmentResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorId = value; }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(const char* value) { m_creatorId.assign(value); }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline GetDevEnvironmentResult& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline GetDevEnvironmentResult& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline GetDevEnvironmentResult& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline void SetStatus(const DevEnvironmentStatus& value) { m_status = value; }

    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline void SetStatus(DevEnvironmentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline GetDevEnvironmentResult& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Dev Environment.</p>
     */
    inline GetDevEnvironmentResult& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline GetDevEnvironmentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline GetDevEnvironmentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline GetDevEnvironmentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline const Aws::Vector<DevEnvironmentRepositorySummary>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline void SetRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { m_repositories = value; }

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline void SetRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { m_repositories = std::move(value); }

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline GetDevEnvironmentResult& WithRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { SetRepositories(value); return *this;}

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline GetDevEnvironmentResult& WithRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline GetDevEnvironmentResult& AddRepositories(const DevEnvironmentRepositorySummary& value) { m_repositories.push_back(value); return *this; }

    /**
     * <p>The source repository that contains the branch cloned into the Dev
     * Environment. </p>
     */
    inline GetDevEnvironmentResult& AddRepositories(DevEnvironmentRepositorySummary&& value) { m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline const Aws::Vector<Ide>& GetIdes() const{ return m_ides; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline void SetIdes(const Aws::Vector<Ide>& value) { m_ides = value; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline void SetIdes(Aws::Vector<Ide>&& value) { m_ides = std::move(value); }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithIdes(const Aws::Vector<Ide>& value) { SetIdes(value); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithIdes(Aws::Vector<Ide>&& value) { SetIdes(std::move(value)); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& AddIdes(const Ide& value) { m_ides.push_back(value); return *this; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& AddIdes(Ide&& value) { m_ides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline GetDevEnvironmentResult& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes.</p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes.</p>
     */
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutes = value; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes.</p>
     */
    inline GetDevEnvironmentResult& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}


    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline const PersistentStorage& GetPersistentStorage() const{ return m_persistentStorage; }

    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline void SetPersistentStorage(const PersistentStorage& value) { m_persistentStorage = value; }

    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline void SetPersistentStorage(PersistentStorage&& value) { m_persistentStorage = std::move(value); }

    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline GetDevEnvironmentResult& WithPersistentStorage(const PersistentStorage& value) { SetPersistentStorage(value); return *this;}

    /**
     * <p>Information about the amount of storage allocated to the Dev Environment. By
     * default, a Dev Environment is configured to have 16GB of persistent storage.</p>
     */
    inline GetDevEnvironmentResult& WithPersistentStorage(PersistentStorage&& value) { SetPersistentStorage(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
