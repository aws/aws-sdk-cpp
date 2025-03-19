/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RelationalDatabaseHardware.h>
#include <aws/lightsail/model/PendingModifiedRelationalDatabaseValues.h>
#include <aws/lightsail/model/RelationalDatabaseEndpoint.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/PendingMaintenanceAction.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabase">AWS
   * API Reference</a></p>
   */
  class RelationalDatabase
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabase() = default;
    AWS_LIGHTSAIL_API RelationalDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RelationalDatabase& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RelationalDatabase& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    RelationalDatabase& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RelationalDatabase& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    RelationalDatabase& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline RelationalDatabase& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RelationalDatabase& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RelationalDatabase& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBlueprintId() const { return m_relationalDatabaseBlueprintId; }
    inline bool RelationalDatabaseBlueprintIdHasBeenSet() const { return m_relationalDatabaseBlueprintIdHasBeenSet; }
    template<typename RelationalDatabaseBlueprintIdT = Aws::String>
    void SetRelationalDatabaseBlueprintId(RelationalDatabaseBlueprintIdT&& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = std::forward<RelationalDatabaseBlueprintIdT>(value); }
    template<typename RelationalDatabaseBlueprintIdT = Aws::String>
    RelationalDatabase& WithRelationalDatabaseBlueprintId(RelationalDatabaseBlueprintIdT&& value) { SetRelationalDatabaseBlueprintId(std::forward<RelationalDatabaseBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const { return m_relationalDatabaseBundleId; }
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }
    template<typename RelationalDatabaseBundleIdT = Aws::String>
    void SetRelationalDatabaseBundleId(RelationalDatabaseBundleIdT&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::forward<RelationalDatabaseBundleIdT>(value); }
    template<typename RelationalDatabaseBundleIdT = Aws::String>
    RelationalDatabase& WithRelationalDatabaseBundleId(RelationalDatabaseBundleIdT&& value) { SetRelationalDatabaseBundleId(std::forward<RelationalDatabaseBundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline const Aws::String& GetMasterDatabaseName() const { return m_masterDatabaseName; }
    inline bool MasterDatabaseNameHasBeenSet() const { return m_masterDatabaseNameHasBeenSet; }
    template<typename MasterDatabaseNameT = Aws::String>
    void SetMasterDatabaseName(MasterDatabaseNameT&& value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName = std::forward<MasterDatabaseNameT>(value); }
    template<typename MasterDatabaseNameT = Aws::String>
    RelationalDatabase& WithMasterDatabaseName(MasterDatabaseNameT&& value) { SetMasterDatabaseName(std::forward<MasterDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline const RelationalDatabaseHardware& GetHardware() const { return m_hardware; }
    inline bool HardwareHasBeenSet() const { return m_hardwareHasBeenSet; }
    template<typename HardwareT = RelationalDatabaseHardware>
    void SetHardware(HardwareT&& value) { m_hardwareHasBeenSet = true; m_hardware = std::forward<HardwareT>(value); }
    template<typename HardwareT = RelationalDatabaseHardware>
    RelationalDatabase& WithHardware(HardwareT&& value) { SetHardware(std::forward<HardwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current state of the database.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    RelationalDatabase& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value); }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    RelationalDatabase& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled for
     * the database.</p>
     */
    inline bool GetBackupRetentionEnabled() const { return m_backupRetentionEnabled; }
    inline bool BackupRetentionEnabledHasBeenSet() const { return m_backupRetentionEnabledHasBeenSet; }
    inline void SetBackupRetentionEnabled(bool value) { m_backupRetentionEnabledHasBeenSet = true; m_backupRetentionEnabled = value; }
    inline RelationalDatabase& WithBackupRetentionEnabled(bool value) { SetBackupRetentionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline const PendingModifiedRelationalDatabaseValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = PendingModifiedRelationalDatabaseValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = PendingModifiedRelationalDatabaseValues>
    RelationalDatabase& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RelationalDatabase& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RelationalDatabase& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const { return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    void SetLatestRestorableTime(LatestRestorableTimeT&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value); }
    template<typename LatestRestorableTimeT = Aws::Utils::DateTime>
    RelationalDatabase& WithLatestRestorableTime(LatestRestorableTimeT&& value) { SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name of the database.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    RelationalDatabase& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    RelationalDatabase& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    RelationalDatabase& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    RelationalDatabase& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the database is publicly accessible.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RelationalDatabase& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master endpoint for the database.</p>
     */
    inline const RelationalDatabaseEndpoint& GetMasterEndpoint() const { return m_masterEndpoint; }
    inline bool MasterEndpointHasBeenSet() const { return m_masterEndpointHasBeenSet; }
    template<typename MasterEndpointT = RelationalDatabaseEndpoint>
    void SetMasterEndpoint(MasterEndpointT&& value) { m_masterEndpointHasBeenSet = true; m_masterEndpoint = std::forward<MasterEndpointT>(value); }
    template<typename MasterEndpointT = RelationalDatabaseEndpoint>
    RelationalDatabase& WithMasterEndpoint(MasterEndpointT&& value) { SetMasterEndpoint(std::forward<MasterEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActions() const { return m_pendingMaintenanceActions; }
    inline bool PendingMaintenanceActionsHasBeenSet() const { return m_pendingMaintenanceActionsHasBeenSet; }
    template<typename PendingMaintenanceActionsT = Aws::Vector<PendingMaintenanceAction>>
    void SetPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions = std::forward<PendingMaintenanceActionsT>(value); }
    template<typename PendingMaintenanceActionsT = Aws::Vector<PendingMaintenanceAction>>
    RelationalDatabase& WithPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { SetPendingMaintenanceActions(std::forward<PendingMaintenanceActionsT>(value)); return *this;}
    template<typename PendingMaintenanceActionsT = PendingMaintenanceAction>
    RelationalDatabase& AddPendingMaintenanceActions(PendingMaintenanceActionsT&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions.emplace_back(std::forward<PendingMaintenanceActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The certificate associated with the database.</p>
     */
    inline const Aws::String& GetCaCertificateIdentifier() const { return m_caCertificateIdentifier; }
    inline bool CaCertificateIdentifierHasBeenSet() const { return m_caCertificateIdentifierHasBeenSet; }
    template<typename CaCertificateIdentifierT = Aws::String>
    void SetCaCertificateIdentifier(CaCertificateIdentifierT&& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = std::forward<CaCertificateIdentifierT>(value); }
    template<typename CaCertificateIdentifierT = Aws::String>
    RelationalDatabase& WithCaCertificateIdentifier(CaCertificateIdentifierT&& value) { SetCaCertificateIdentifier(std::forward<CaCertificateIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_relationalDatabaseBlueprintId;
    bool m_relationalDatabaseBlueprintIdHasBeenSet = false;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet = false;

    Aws::String m_masterDatabaseName;
    bool m_masterDatabaseNameHasBeenSet = false;

    RelationalDatabaseHardware m_hardware;
    bool m_hardwareHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    bool m_backupRetentionEnabled{false};
    bool m_backupRetentionEnabledHasBeenSet = false;

    PendingModifiedRelationalDatabaseValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableTime{};
    bool m_latestRestorableTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    RelationalDatabaseEndpoint m_masterEndpoint;
    bool m_masterEndpointHasBeenSet = false;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActions;
    bool m_pendingMaintenanceActionsHasBeenSet = false;

    Aws::String m_caCertificateIdentifier;
    bool m_caCertificateIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
