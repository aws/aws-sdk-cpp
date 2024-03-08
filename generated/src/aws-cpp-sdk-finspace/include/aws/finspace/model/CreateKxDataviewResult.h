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
  class CreateKxDataviewResult
  {
  public:
    AWS_FINSPACE_API CreateKxDataviewResult();
    AWS_FINSPACE_API CreateKxDataviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateKxDataviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewName = value; }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewName = std::move(value); }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewName.assign(value); }

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseName = value; }

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseName = std::move(value); }

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseName.assign(value); }

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline CreateKxDataviewResult& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline CreateKxDataviewResult& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database where you want to create a dataview.</p>
     */
    inline CreateKxDataviewResult& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, where you want to create the
     * dataview. </p>
     */
    inline CreateKxDataviewResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


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
    inline void SetAzMode(const KxAzMode& value) { m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline CreateKxDataviewResult& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline CreateKxDataviewResult& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the availability zones. </p>
     */
    inline CreateKxDataviewResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetId = value; }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetId = std::move(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetId.assign(value); }

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline CreateKxDataviewResult& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline CreateKxDataviewResult& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline CreateKxDataviewResult& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


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
    inline void SetSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { m_segmentConfigurations = value; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline void SetSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { m_segmentConfigurations = std::move(value); }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewResult& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewResult& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewResult& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurations.push_back(value); return *this; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline CreateKxDataviewResult& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the dataview.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the dataview.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the dataview.</p>
     */
    inline CreateKxDataviewResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The option to select whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false.</p>
     */
    inline bool GetAutoUpdate() const{ return m_autoUpdate; }

    /**
     * <p>The option to select whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false.</p>
     */
    inline void SetAutoUpdate(bool value) { m_autoUpdate = value; }

    /**
     * <p>The option to select whether you want to apply all the future additions and
     * corrections automatically to the dataview when you ingest new changesets. The
     * default value is false.</p>
     */
    inline CreateKxDataviewResult& WithAutoUpdate(bool value) { SetAutoUpdate(value); return *this;}


    /**
     * <p> The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p> The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline CreateKxDataviewResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp at which the dataview was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline CreateKxDataviewResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline CreateKxDataviewResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p> The last time that the dataview was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline CreateKxDataviewResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline const KxDataviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline void SetStatus(const KxDataviewStatus& value) { m_status = value; }

    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline void SetStatus(KxDataviewStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline CreateKxDataviewResult& WithStatus(const KxDataviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of dataview creation.</p> <ul> <li> <p> <code>CREATING</code> –
     * The dataview creation is in progress.</p> </li> <li> <p> <code>UPDATING</code> –
     * The dataview is in the process of being updated.</p> </li> <li> <p>
     * <code>ACTIVE</code> – The dataview is active.</p> </li> </ul>
     */
    inline CreateKxDataviewResult& WithStatus(KxDataviewStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKxDataviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKxDataviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKxDataviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataviewName;

    Aws::String m_databaseName;

    Aws::String m_environmentId;

    KxAzMode m_azMode;

    Aws::String m_availabilityZoneId;

    Aws::String m_changesetId;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;

    Aws::String m_description;

    bool m_autoUpdate;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    KxDataviewStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
