﻿/**
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
    AWS_FINSPACE_API KxDataviewListEntry();
    AWS_FINSPACE_API KxDataviewListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline KxDataviewListEntry& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline KxDataviewListEntry& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline KxDataviewListEntry& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline KxDataviewListEntry& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }
    inline KxDataviewListEntry& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}
    inline KxDataviewListEntry& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }
    inline KxDataviewListEntry& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline KxDataviewListEntry& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline KxDataviewListEntry& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline KxDataviewListEntry& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }
    inline KxDataviewListEntry& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}
    inline KxDataviewListEntry& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const{ return m_segmentConfigurations; }
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = value; }
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::move(value); }
    inline KxDataviewListEntry& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}
    inline KxDataviewListEntry& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}
    inline KxDataviewListEntry& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }
    inline KxDataviewListEntry& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline const Aws::Vector<KxDataviewActiveVersion>& GetActiveVersions() const{ return m_activeVersions; }
    inline bool ActiveVersionsHasBeenSet() const { return m_activeVersionsHasBeenSet; }
    inline void SetActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = value; }
    inline void SetActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = std::move(value); }
    inline KxDataviewListEntry& WithActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { SetActiveVersions(value); return *this;}
    inline KxDataviewListEntry& WithActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { SetActiveVersions(std::move(value)); return *this;}
    inline KxDataviewListEntry& AddActiveVersions(const KxDataviewActiveVersion& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.push_back(value); return *this; }
    inline KxDataviewListEntry& AddActiveVersions(KxDataviewActiveVersion&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline const KxDataviewStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const KxDataviewStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(KxDataviewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KxDataviewListEntry& WithStatus(const KxDataviewStatus& value) { SetStatus(value); return *this;}
    inline KxDataviewListEntry& WithStatus(KxDataviewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline KxDataviewListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline KxDataviewListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline KxDataviewListEntry& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns True if the dataview is created as writeable and False otherwise.
     * </p>
     */
    inline bool GetReadWrite() const{ return m_readWrite; }
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
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline KxDataviewListEntry& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline KxDataviewListEntry& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }
    inline KxDataviewListEntry& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline KxDataviewListEntry& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline KxDataviewListEntry& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline KxDataviewListEntry& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline KxDataviewListEntry& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::Vector<KxDataviewActiveVersion> m_activeVersions;
    bool m_activeVersionsHasBeenSet = false;

    KxDataviewStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;

    bool m_readWrite;
    bool m_readWriteHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
