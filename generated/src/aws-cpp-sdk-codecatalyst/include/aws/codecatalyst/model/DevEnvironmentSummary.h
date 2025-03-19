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
    AWS_CODECATALYST_API DevEnvironmentSummary() = default;
    AWS_CODECATALYST_API DevEnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    DevEnvironmentSummary& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DevEnvironmentSummary& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID for the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DevEnvironmentSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Dev Environment was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DevEnvironmentSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the user who created the Dev Environment.
     * </p>
     */
    inline const Aws::String& GetCreatorId() const { return m_creatorId; }
    inline bool CreatorIdHasBeenSet() const { return m_creatorIdHasBeenSet; }
    template<typename CreatorIdT = Aws::String>
    void SetCreatorId(CreatorIdT&& value) { m_creatorIdHasBeenSet = true; m_creatorId = std::forward<CreatorIdT>(value); }
    template<typename CreatorIdT = Aws::String>
    DevEnvironmentSummary& WithCreatorId(CreatorIdT&& value) { SetCreatorId(std::forward<CreatorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Dev Environment. </p>
     */
    inline DevEnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DevEnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DevEnvironmentSummary& WithStatus(DevEnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DevEnvironmentSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the repositories that will be cloned into the Dev
     * Environment. If no rvalue is specified, no repository is cloned.</p>
     */
    inline const Aws::Vector<DevEnvironmentRepositorySummary>& GetRepositories() const { return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    template<typename RepositoriesT = Aws::Vector<DevEnvironmentRepositorySummary>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<DevEnvironmentRepositorySummary>>
    DevEnvironmentSummary& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = DevEnvironmentRepositorySummary>
    DevEnvironmentSummary& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    DevEnvironmentSummary& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * a Dev Environment.</p>
     */
    inline const Aws::Vector<Ide>& GetIdes() const { return m_ides; }
    inline bool IdesHasBeenSet() const { return m_idesHasBeenSet; }
    template<typename IdesT = Aws::Vector<Ide>>
    void SetIdes(IdesT&& value) { m_idesHasBeenSet = true; m_ides = std::forward<IdesT>(value); }
    template<typename IdesT = Aws::Vector<Ide>>
    DevEnvironmentSummary& WithIdes(IdesT&& value) { SetIdes(std::forward<IdesT>(value)); return *this;}
    template<typename IdesT = Ide>
    DevEnvironmentSummary& AddIdes(IdesT&& value) { m_idesHasBeenSet = true; m_ides.emplace_back(std::forward<IdesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instace type used for the Dev Environment. </p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DevEnvironmentSummary& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. Dev Environments consume compute minutes when
     * running.</p>
     */
    inline int GetInactivityTimeoutMinutes() const { return m_inactivityTimeoutMinutes; }
    inline bool InactivityTimeoutMinutesHasBeenSet() const { return m_inactivityTimeoutMinutesHasBeenSet; }
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutesHasBeenSet = true; m_inactivityTimeoutMinutes = value; }
    inline DevEnvironmentSummary& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the configuration of persistent storage for the Dev
     * Environment.</p>
     */
    inline const PersistentStorage& GetPersistentStorage() const { return m_persistentStorage; }
    inline bool PersistentStorageHasBeenSet() const { return m_persistentStorageHasBeenSet; }
    template<typename PersistentStorageT = PersistentStorage>
    void SetPersistentStorage(PersistentStorageT&& value) { m_persistentStorageHasBeenSet = true; m_persistentStorage = std::forward<PersistentStorageT>(value); }
    template<typename PersistentStorageT = PersistentStorage>
    DevEnvironmentSummary& WithPersistentStorage(PersistentStorageT&& value) { SetPersistentStorage(std::forward<PersistentStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection used to connect to Amazon VPC used when the Dev
     * Environment was created, if any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const { return m_vpcConnectionName; }
    inline bool VpcConnectionNameHasBeenSet() const { return m_vpcConnectionNameHasBeenSet; }
    template<typename VpcConnectionNameT = Aws::String>
    void SetVpcConnectionName(VpcConnectionNameT&& value) { m_vpcConnectionNameHasBeenSet = true; m_vpcConnectionName = std::forward<VpcConnectionNameT>(value); }
    template<typename VpcConnectionNameT = Aws::String>
    DevEnvironmentSummary& WithVpcConnectionName(VpcConnectionNameT&& value) { SetVpcConnectionName(std::forward<VpcConnectionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_creatorId;
    bool m_creatorIdHasBeenSet = false;

    DevEnvironmentStatus m_status{DevEnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<DevEnvironmentRepositorySummary> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<Ide> m_ides;
    bool m_idesHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_inactivityTimeoutMinutes{0};
    bool m_inactivityTimeoutMinutesHasBeenSet = false;

    PersistentStorage m_persistentStorage;
    bool m_persistentStorageHasBeenSet = false;

    Aws::String m_vpcConnectionName;
    bool m_vpcConnectionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
