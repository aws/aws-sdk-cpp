/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxDataviewStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <aws/finspace/model/KxDataviewActiveVersion.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> A collection of kdb dataview entries. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDataviewListEntry">AWS
   * API Reference</a></p>
   */
  class KxDataviewListEntry
  {
  public:
    AWS_FINSPACE_API KxDataviewListEntry() = default;
    AWS_FINSPACE_API KxDataviewListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    KxDataviewListEntry& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    KxDataviewListEntry& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const { return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    template<typename DataviewNameT = Aws::String>
    void SetDataviewName(DataviewNameT&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::forward<DataviewNameT>(value); }
    template<typename DataviewNameT = Aws::String>
    KxDataviewListEntry& WithDataviewName(DataviewNameT&& value) { SetDataviewName(std::forward<DataviewNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline KxDataviewListEntry& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    KxDataviewListEntry& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    KxDataviewListEntry& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const { return m_segmentConfigurations; }
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    void SetSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::forward<SegmentConfigurationsT>(value); }
    template<typename SegmentConfigurationsT = Aws::Vector<KxDataviewSegmentConfiguration>>
    KxDataviewListEntry& WithSegmentConfigurations(SegmentConfigurationsT&& value) { SetSegmentConfigurations(std::forward<SegmentConfigurationsT>(value)); return *this;}
    template<typename SegmentConfigurationsT = KxDataviewSegmentConfiguration>
    KxDataviewListEntry& AddSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.emplace_back(std::forward<SegmentConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline const Aws::Vector<KxDataviewActiveVersion>& GetActiveVersions() const { return m_activeVersions; }
    inline bool ActiveVersionsHasBeenSet() const { return m_activeVersionsHasBeenSet; }
    template<typename ActiveVersionsT = Aws::Vector<KxDataviewActiveVersion>>
    void SetActiveVersions(ActiveVersionsT&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = std::forward<ActiveVersionsT>(value); }
    template<typename ActiveVersionsT = Aws::Vector<KxDataviewActiveVersion>>
    KxDataviewListEntry& WithActiveVersions(ActiveVersionsT&& value) { SetActiveVersions(std::forward<ActiveVersionsT>(value)); return *this;}
    template<typename ActiveVersionsT = KxDataviewActiveVersion>
    KxDataviewListEntry& AddActiveVersions(ActiveVersionsT&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.emplace_back(std::forward<ActiveVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline KxDataviewStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(KxDataviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KxDataviewListEntry& WithStatus(KxDataviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    KxDataviewListEntry& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline bool GetAutoUpdate() const { return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline KxDataviewListEntry& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns True if the dataview is created as writeable and False otherwise.
     * </p>
     */
    inline bool GetReadWrite() const { return m_readWrite; }
    inline bool ReadWriteHasBeenSet() const { return m_readWriteHasBeenSet; }
    inline void SetReadWrite(bool value) { m_readWriteHasBeenSet = true; m_readWrite = value; }
    inline KxDataviewListEntry& WithReadWrite(bool value) { SetReadWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    KxDataviewListEntry& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    KxDataviewListEntry& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    KxDataviewListEntry& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    KxAzMode m_azMode{KxAzMode::NOT_SET};
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::Vector<KxDataviewActiveVersion> m_activeVersions;
    bool m_activeVersionsHasBeenSet = false;

    KxDataviewStatus m_status{KxDataviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoUpdate{false};
    bool m_autoUpdateHasBeenSet = false;

    bool m_readWrite{false};
    bool m_readWriteHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
