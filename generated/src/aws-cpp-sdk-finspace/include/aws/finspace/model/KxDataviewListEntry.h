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
    AWS_FINSPACE_API KxDataviewListEntry();
    AWS_FINSPACE_API KxDataviewListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxDataviewListEntry& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxDataviewListEntry& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline KxDataviewListEntry& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p> A unique identifier of the database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline KxDataviewListEntry& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline KxDataviewListEntry& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p> A unique identifier of the database.</p>
     */
    inline KxDataviewListEntry& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline KxDataviewListEntry& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline KxDataviewListEntry& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p> A unique identifier of the dataview.</p>
     */
    inline KxDataviewListEntry& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline KxDataviewListEntry& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline KxDataviewListEntry& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline KxDataviewListEntry& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline KxDataviewListEntry& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline KxDataviewListEntry& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewListEntry& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewListEntry& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewListEntry& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline const Aws::Vector<KxDataviewSegmentConfiguration>& GetSegmentConfigurations() const{ return m_segmentConfigurations; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline bool SegmentConfigurationsHasBeenSet() const { return m_segmentConfigurationsHasBeenSet; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = value; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations = std::move(value); }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewListEntry& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewListEntry& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewListEntry& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewListEntry& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline const Aws::Vector<KxDataviewActiveVersion>& GetActiveVersions() const{ return m_activeVersions; }

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline bool ActiveVersionsHasBeenSet() const { return m_activeVersionsHasBeenSet; }

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline void SetActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = value; }

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline void SetActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions = std::move(value); }

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline KxDataviewListEntry& WithActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { SetActiveVersions(value); return *this;}

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline KxDataviewListEntry& WithActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { SetActiveVersions(std::move(value)); return *this;}

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline KxDataviewListEntry& AddActiveVersions(const KxDataviewActiveVersion& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.push_back(value); return *this; }

    /**
     * <p> The active changeset versions for the given dataview entry. </p>
     */
    inline KxDataviewListEntry& AddActiveVersions(KxDataviewActiveVersion&& value) { m_activeVersionsHasBeenSet = true; m_activeVersions.push_back(std::move(value)); return *this; }


    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline const KxDataviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline void SetStatus(const KxDataviewStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline void SetStatus(KxDataviewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline KxDataviewListEntry& WithStatus(const KxDataviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of a given dataview entry. </p>
     */
    inline KxDataviewListEntry& WithStatus(KxDataviewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline KxDataviewListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline KxDataviewListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description for the dataview list entry.</p>
     */
    inline KxDataviewListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }

    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }

    /**
     * <p> The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false. </p>
     */
    inline KxDataviewListEntry& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewListEntry& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp at which the dataview list entry was created in FinSpace. The
     * value is determined as epoch time in milliseconds. For example, the value for
     * Monday, November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewListEntry& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }

    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }

    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewListEntry& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The last time that the dataview list was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewListEntry& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline KxDataviewListEntry& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline KxDataviewListEntry& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline KxDataviewListEntry& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

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
