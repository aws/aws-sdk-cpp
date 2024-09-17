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


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline DevEnvironmentSummary& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DevEnvironmentSummary& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DevEnvironmentSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DevEnvironmentSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DevEnvironmentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DevEnvironmentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline DevEnvironmentSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DevEnvironmentSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline const Aws::String& GetCreatorId() const{ return m_creatorId; }
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }
    inline void SetCreatorId(const Aws::String& value) { m_creatorIdHasBeenSet = true; m_creatorId = value; }
    inline void SetCreatorId(Aws::String&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::move(value); }
    inline void SetCreatorId(const char* value) { m_creatorIdHasBeenSet = true; m_creatorId.assign(value); }
    inline DevEnvironmentSummary& WithCreatorId(const Aws::String& value) { SetCreatorId(value); return *this;}
    inline DevEnvironmentSummary& WithCreatorId(Aws::String&& value) { SetCreatorId(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithCreatorId(const char* value) { SetCreatorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline const DevEnvironmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DevEnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DevEnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DevEnvironmentSummary& WithStatus(const DevEnvironmentStatus& value) { SetStatus(value); return *this;}
    inline DevEnvironmentSummary& WithStatus(DevEnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline DevEnvironmentSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DevEnvironmentSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline const Aws::Vector<DevEnvironmentRepositorySummary>& GetRepositories() const{ return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    inline void SetRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }
    inline void SetRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }
    inline DevEnvironmentSummary& WithRepositories(const Aws::Vector<DevEnvironmentRepositorySummary>& value) { SetRepositories(value); return *this;}
    inline DevEnvironmentSummary& WithRepositories(Aws::Vector<DevEnvironmentRepositorySummary>&& value) { SetRepositories(std::move(value)); return *this;}
    inline DevEnvironmentSummary& AddRepositories(const DevEnvironmentRepositorySummary& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }
    inline DevEnvironmentSummary& AddRepositories(DevEnvironmentRepositorySummary&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline DevEnvironmentSummary& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline DevEnvironmentSummary& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline const Aws::Vector<Ide>& GetIdes() const{ return m_ides; }
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }
    inline void SetIdes(const Aws::Vector<Ide>& value) { m_idesHasBeenSet = true; m_ides = value; }
    inline void SetIdes(Aws::Vector<Ide>&& value) { m_idesHasBeenSet = true; m_ides = std::move(value); }
    inline DevEnvironmentSummary& WithIdes(const Aws::Vector<Ide>& value) { SetIdes(value); return *this;}
    inline DevEnvironmentSummary& WithIdes(Aws::Vector<Ide>&& value) { SetIdes(std::move(value)); return *this;}
    inline DevEnvironmentSummary& AddIdes(const Ide& value) { m_idesHasBeenSet = true; m_ides.push_back(value); return *this; }
    inline DevEnvironmentSummary& AddIdes(Ide&& value) { m_idesHasBeenSet = true; m_ides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline DevEnvironmentSummary& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline DevEnvironmentSummary& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }
    inline bool InactivityTimeoutMinutesHasBeenSet() const { return m_inactivityTimeoutMinutesHasBeenSet; }
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutesHasBeenSet = true; m_inactivityTimeoutMinutes = value; }
    inline DevEnvironmentSummary& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline const PersistentStorage& GetPersistentStorage() const{ return m_persistentStorage; }
    inline bool PersistentStorageHasBeenSet() const { return m_persistentStorageHasBeenSet; }
    inline void SetPersistentStorage(const PersistentStorage& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = value; }
    inline void SetPersistentStorage(PersistentStorage&& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = std::move(value); }
    inline DevEnvironmentSummary& WithPersistentStorage(const PersistentStorage& value) { SetPersistentStorage(value); return *this;}
    inline DevEnvironmentSummary& WithPersistentStorage(PersistentStorage&& value) { SetPersistentStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection used to connect to Amazon VPC used when the Dev
     * Environment was created, if any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const{ return m_vpcConnectionName; }
    inline bool VpcConnectionNameHasBeenSet() const { return m_vpcConnectionNameHasBeenSet; }
    inline void SetVpcConnectionName(const Aws::String& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = value; }
    inline void SetVpcConnectionName(Aws::String&& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = std::move(value); }
    inline void SetVpcConnectionName(const char* value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName.assign(value); }
    inline DevEnvironmentSummary& WithVpcConnectionName(const Aws::String& value) { SetVpcConnectionName(value); return *this;}
    inline DevEnvironmentSummary& WithVpcConnectionName(Aws::String&& value) { SetVpcConnectionName(std::move(value)); return *this;}
    inline DevEnvironmentSummary& WithVpcConnectionName(const char* value) { SetVpcConnectionName(value); return *this;}
    ///@}
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

    Aws::String m_vpcConnectionName;
    bool m_vpcConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
