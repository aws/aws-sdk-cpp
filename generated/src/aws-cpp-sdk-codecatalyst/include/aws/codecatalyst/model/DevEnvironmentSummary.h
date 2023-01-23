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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a Dev Environment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DevEnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class DevEnvironmentSummary
  {
  public:
    AWS_CODECATALYST_API DevEnvironmentSummary();
    AWS_CODECATALYST_API DevEnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline DevEnvironmentSummary& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DevEnvironmentSummary& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DevEnvironmentSummary& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline DevEnvironmentSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline DevEnvironmentSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline DevEnvironmentSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline DevEnvironmentSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline DevEnvironmentSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline DevEnvironmentSummary& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline DevEnvironmentSummary& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline DevEnvironmentSummary& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}


    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline void SetStatus(const DevEnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline void SetStatus(DevEnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline DevEnvironmentSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline DevEnvironmentSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline DevEnvironmentSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline const Aws::Vector<DevEnvironmentRepositorySummary>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline void SetRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline void SetRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline DevEnvironmentSummary& WithRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { SetRepositories(value); return *this;}

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline DevEnvironmentSummary& WithRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline DevEnvironmentSummary& AddRepositories(const DevEnvironmentRepositorySummary& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }

    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline DevEnvironmentSummary& AddRepositories(DevEnvironmentRepositorySummary&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline DevEnvironmentSummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline DevEnvironmentSummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline DevEnvironmentSummary& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline const Aws::Vector<Ide>& GetIdes() const{ return m_ides; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline void SetIdes(const Aws::Vector<Ide>& value) { m_idesHasBeenSet = true; m_ides = value; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline void SetIdes(Aws::Vector<Ide>&& value) { m_idesHasBeenSet = true; m_ides = std::move(value); }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline DevEnvironmentSummary& WithIdes(const Aws::Vector<Ide>& value) { SetIdes(value); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline DevEnvironmentSummary& WithIdes(Aws::Vector<Ide>&& value) { SetIdes(std::move(value)); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline DevEnvironmentSummary& AddIdes(const Ide& value) { m_idesHasBeenSet = true; m_ides.push_back(value); return *this; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline DevEnvironmentSummary& AddIdes(Ide&& value) { m_idesHasBeenSet = true; m_ides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline DevEnvironmentSummary& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline bool InactivityTimeoutMinutesHasBeenSet() const { return m_inactivityTimeoutMinutesHasBeenSet; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutesHasBeenSet = true; m_inactivityTimeoutMinutes = value; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline DevEnvironmentSummary& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}


    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline const PersistentStorage& GetPersistentStorage() const{ return m_persistentStorage; }

    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline bool PersistentStorageHasBeenSet() const { return m_persistentStorageHasBeenSet; }

    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline void SetPersistentStorage(const PersistentStorage& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = value; }

    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline void SetPersistentStorage(PersistentStorage&& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = std::move(value); }

    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline DevEnvironmentSummary& WithPersistentStorage(const PersistentStorage& value) { SetPersistentStorage(value); return *this;}

    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline DevEnvironmentSummary& WithPersistentStorage(PersistentStorage&& value) { SetPersistentStorage(std::move(value)); return *this;}

  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    DevEnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<DevEnvironmentRepositorySummary> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<Ide> m_ides;
    bool m_idesHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_inactivityTimeoutMinutes;
    bool m_inactivityTimeoutMinutesHasBeenSet = false;

    PersistentStorage m_persistentStorage;
    bool m_persistentStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
