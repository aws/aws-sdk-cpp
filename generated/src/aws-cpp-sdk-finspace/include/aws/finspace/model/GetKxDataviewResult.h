/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxDataviewStatus.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <aws/finspace/model/KxDataviewActiveVersion.h>
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
namespace finspace
{
namespace Model
{
  class GetKxDataviewResult
  {
  public:
    AWS_FINSPACE_API GetKxDataviewResult();
    AWS_FINSPACE_API GetKxDataviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxDataviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the database where you created the dataview.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }
    inline GetKxDataviewResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GetKxDataviewResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }
    inline void SetDataviewName(const Aws::String& value) { m_dataviewName = value; }
    inline void SetDataviewName(Aws::String&& value) { m_dataviewName = std::move(value); }
    inline void SetDataviewName(const char* value) { m_dataviewName.assign(value); }
    inline GetKxDataviewResult& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}
    inline GetKxDataviewResult& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline void SetAzMode(const KxAzMode& value) { m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azMode = std::move(value); }
    inline GetKxDataviewResult& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline GetKxDataviewResult& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }
    inline GetKxDataviewResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline GetKxDataviewResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the changeset that you want to use to ingest data.
     * </p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }
    inline void SetChangesetId(const Aws::String& value) { m_changesetId = value; }
    inline void SetChangesetId(Aws::String&& value) { m_changesetId = std::move(value); }
    inline void SetChangesetId(const char* value) { m_changesetId.assign(value); }
    inline GetKxDataviewResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}
    inline GetKxDataviewResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}
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
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurations = value; }
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurations = std::move(value); }
    inline GetKxDataviewResult& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}
    inline GetKxDataviewResult& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}
    inline GetKxDataviewResult& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurations.push_back(value); return *this; }
    inline GetKxDataviewResult& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The current active changeset versions of the database on the given dataview.
     * </p>
     */
    inline const Aws::Vector<KxDataviewActiveVersion>& GetActiveVersions() const{ return m_activeVersions; }
    inline void SetActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { m_activeVersions = value; }
    inline void SetActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { m_activeVersions = std::move(value); }
    inline GetKxDataviewResult& WithActiveVersions(const Aws::Vector<KxDataviewActiveVersion>& value) { SetActiveVersions(value); return *this;}
    inline GetKxDataviewResult& WithActiveVersions(Aws::Vector<KxDataviewActiveVersion>&& value) { SetActiveVersions(std::move(value)); return *this;}
    inline GetKxDataviewResult& AddActiveVersions(const KxDataviewActiveVersion& value) { m_activeVersions.push_back(value); return *this; }
    inline GetKxDataviewResult& AddActiveVersions(KxDataviewActiveVersion&& value) { m_activeVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the dataview.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetKxDataviewResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetKxDataviewResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to specify whether you want to apply all the future additions and
     * corrections automatically to the dataview when new changesets are ingested. The
     * default value is false.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }
    inline void SetAutoUpdate(bool value) { m_autoUpdate = value; }
    inline GetKxDataviewResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns True if the dataview is created as writeable and False otherwise.
     * </p>
     */
    inline bool GetReadWrite() const{ return m_readWrite; }
    inline void SetReadWrite(bool value) { m_readWrite = value; }
    inline GetKxDataviewResult& WithReadWrite(bool value) { SetReadWrite(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment, from where you want to retrieve
     * the dataview details.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetKxDataviewResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetKxDataviewResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetKxDataviewResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetKxDataviewResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline GetKxDataviewResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline GetKxDataviewResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline const KxDataviewStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const KxDataviewStatus& value) { m_status = value; }
    inline void SetStatus(KxDataviewStatus&& value) { m_status = std::move(value); }
    inline GetKxDataviewResult& WithStatus(const KxDataviewStatus& value) { SetStatus(value); return *this;}
    inline GetKxDataviewResult& WithStatus(KxDataviewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetKxDataviewResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetKxDataviewResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetKxDataviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetKxDataviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetKxDataviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;

    Aws::String m_dataviewName;

    KxAzMode m_azMode;

    Aws::String m_availabilityZoneId;

    Aws::String m_changesetId;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;

    Aws::Vector<KxDataviewActiveVersion> m_activeVersions;

    Aws::String m_description;

    bool m_autoUpdate;

    bool m_readWrite;

    Aws::String m_environmentId;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    KxDataviewStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
