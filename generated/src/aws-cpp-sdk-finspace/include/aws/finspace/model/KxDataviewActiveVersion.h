/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
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
   * <p> The active version of the dataview that is currently in use by this cluster.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxDataviewActiveVersion">AWS
   * API Reference</a></p>
   */
  class KxDataviewActiveVersion
  {
  public:
    AWS_FINSPACE_API KxDataviewActiveVersion();
    AWS_FINSPACE_API KxDataviewActiveVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewActiveVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline KxDataviewActiveVersion& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewActiveVersion& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline KxDataviewActiveVersion& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}


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
    inline KxDataviewActiveVersion& WithSegmentConfigurations(const Aws::Vector<KxDataviewSegmentConfiguration>& value) { SetSegmentConfigurations(value); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewActiveVersion& WithSegmentConfigurations(Aws::Vector<KxDataviewSegmentConfiguration>&& value) { SetSegmentConfigurations(std::move(value)); return *this;}

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewActiveVersion& AddSegmentConfigurations(const KxDataviewSegmentConfiguration& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(value); return *this; }

    /**
     * <p> The configuration that contains the database path of the data that you want
     * to place on each selected volume. Each segment must have a unique database path
     * for each volume. If you do not explicitly specify any database path for a
     * volume, they are accessible from the cluster through the default S3/object store
     * segment. </p>
     */
    inline KxDataviewActiveVersion& AddSegmentConfigurations(KxDataviewSegmentConfiguration&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedClusters() const{ return m_attachedClusters; }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline bool AttachedClustersHasBeenSet() const { return m_attachedClustersHasBeenSet; }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline void SetAttachedClusters(const Aws::Vector<Aws::String>& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters = value; }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline void SetAttachedClusters(Aws::Vector<Aws::String>&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters = std::move(value); }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline KxDataviewActiveVersion& WithAttachedClusters(const Aws::Vector<Aws::String>& value) { SetAttachedClusters(value); return *this;}

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline KxDataviewActiveVersion& WithAttachedClusters(Aws::Vector<Aws::String>&& value) { SetAttachedClusters(std::move(value)); return *this;}

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline KxDataviewActiveVersion& AddAttachedClusters(const Aws::String& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters.push_back(value); return *this; }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline KxDataviewActiveVersion& AddAttachedClusters(Aws::String&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline KxDataviewActiveVersion& AddAttachedClusters(const char* value) { m_attachedClustersHasBeenSet = true; m_attachedClusters.push_back(value); return *this; }


    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewActiveVersion& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxDataviewActiveVersion& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline KxDataviewActiveVersion& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline KxDataviewActiveVersion& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline KxDataviewActiveVersion& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_attachedClusters;
    bool m_attachedClustersHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
