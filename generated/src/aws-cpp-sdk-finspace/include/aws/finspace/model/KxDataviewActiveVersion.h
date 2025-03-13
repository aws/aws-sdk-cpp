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
    AWS_FINSPACE_API KxDataviewActiveVersion() = default;
    AWS_FINSPACE_API KxDataviewActiveVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxDataviewActiveVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the changeset.</p>
     */
    inline const Aws::String& GetChangesetId() const { return m_changesetId; }
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }
    template<typename ChangesetIdT = Aws::String>
    void SetChangesetId(ChangesetIdT&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::forward<ChangesetIdT>(value); }
    template<typename ChangesetIdT = Aws::String>
    KxDataviewActiveVersion& WithChangesetId(ChangesetIdT&& value) { SetChangesetId(std::forward<ChangesetIdT>(value)); return *this;}
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
    KxDataviewActiveVersion& WithSegmentConfigurations(SegmentConfigurationsT&& value) { SetSegmentConfigurations(std::forward<SegmentConfigurationsT>(value)); return *this;}
    template<typename SegmentConfigurationsT = KxDataviewSegmentConfiguration>
    KxDataviewActiveVersion& AddSegmentConfigurations(SegmentConfigurationsT&& value) { m_segmentConfigurationsHasBeenSet = true; m_segmentConfigurations.emplace_back(std::forward<SegmentConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of clusters that are currently using this dataview. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedClusters() const { return m_attachedClusters; }
    inline bool AttachedClustersHasBeenSet() const { return m_attachedClustersHasBeenSet; }
    template<typename AttachedClustersT = Aws::Vector<Aws::String>>
    void SetAttachedClusters(AttachedClustersT&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters = std::forward<AttachedClustersT>(value); }
    template<typename AttachedClustersT = Aws::Vector<Aws::String>>
    KxDataviewActiveVersion& WithAttachedClusters(AttachedClustersT&& value) { SetAttachedClusters(std::forward<AttachedClustersT>(value)); return *this;}
    template<typename AttachedClustersT = Aws::String>
    KxDataviewActiveVersion& AddAttachedClusters(AttachedClustersT&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters.emplace_back(std::forward<AttachedClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the dataview version was active. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    KxDataviewActiveVersion& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier of the active version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    KxDataviewActiveVersion& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;

    Aws::Vector<KxDataviewSegmentConfiguration> m_segmentConfigurations;
    bool m_segmentConfigurationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_attachedClusters;
    bool m_attachedClustersHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
