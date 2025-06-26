/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/keyspacesstreams/model/OriginType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/keyspacesstreams/model/KeyspacesRow.h>
#include <aws/keyspacesstreams/model/KeyspacesCellValue.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>Represents a change data capture record for a row in an Amazon Keyspaces
   * table, containing both the new and old states of the row.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_KEYSPACESSTREAMS_API Record() = default;
    AWS_KEYSPACESSTREAMS_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the record format, used to track the evolution of the record
     * structure over time.</p>
     */
    inline const Aws::String& GetEventVersion() const { return m_eventVersion; }
    inline bool EventVersionHasBeenSet() const { return m_eventVersionHasBeenSet; }
    template<typename EventVersionT = Aws::String>
    void SetEventVersion(EventVersionT&& value) { m_eventVersionHasBeenSet = true; m_eventVersion = std::forward<EventVersionT>(value); }
    template<typename EventVersionT = Aws::String>
    Record& WithEventVersion(EventVersionT&& value) { SetEventVersion(std::forward<EventVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when this change data capture record was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Record& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin or source of this change data capture record.</p>
     */
    inline OriginType GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(OriginType value) { m_originHasBeenSet = true; m_origin = value; }
    inline Record& WithOrigin(OriginType value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partition key columns and their values for the affected row.</p>
     */
    inline const Aws::Map<Aws::String, KeyspacesCellValue>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Map<Aws::String, KeyspacesCellValue>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Map<Aws::String, KeyspacesCellValue>>
    Record& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysKeyT = Aws::String, typename PartitionKeysValueT = KeyspacesCellValue>
    Record& AddPartitionKeys(PartitionKeysKeyT&& key, PartitionKeysValueT&& value) {
      m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace(std::forward<PartitionKeysKeyT>(key), std::forward<PartitionKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The clustering key columns and their values for the affected row, which
     * determine the order of rows within a partition.</p>
     */
    inline const Aws::Map<Aws::String, KeyspacesCellValue>& GetClusteringKeys() const { return m_clusteringKeys; }
    inline bool ClusteringKeysHasBeenSet() const { return m_clusteringKeysHasBeenSet; }
    template<typename ClusteringKeysT = Aws::Map<Aws::String, KeyspacesCellValue>>
    void SetClusteringKeys(ClusteringKeysT&& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys = std::forward<ClusteringKeysT>(value); }
    template<typename ClusteringKeysT = Aws::Map<Aws::String, KeyspacesCellValue>>
    Record& WithClusteringKeys(ClusteringKeysT&& value) { SetClusteringKeys(std::forward<ClusteringKeysT>(value)); return *this;}
    template<typename ClusteringKeysKeyT = Aws::String, typename ClusteringKeysValueT = KeyspacesCellValue>
    Record& AddClusteringKeys(ClusteringKeysKeyT&& key, ClusteringKeysValueT&& value) {
      m_clusteringKeysHasBeenSet = true; m_clusteringKeys.emplace(std::forward<ClusteringKeysKeyT>(key), std::forward<ClusteringKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The state of the row after the change operation that generated this
     * record.</p>
     */
    inline const KeyspacesRow& GetNewImage() const { return m_newImage; }
    inline bool NewImageHasBeenSet() const { return m_newImageHasBeenSet; }
    template<typename NewImageT = KeyspacesRow>
    void SetNewImage(NewImageT&& value) { m_newImageHasBeenSet = true; m_newImage = std::forward<NewImageT>(value); }
    template<typename NewImageT = KeyspacesRow>
    Record& WithNewImage(NewImageT&& value) { SetNewImage(std::forward<NewImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the row before the change operation that generated this
     * record.</p>
     */
    inline const KeyspacesRow& GetOldImage() const { return m_oldImage; }
    inline bool OldImageHasBeenSet() const { return m_oldImageHasBeenSet; }
    template<typename OldImageT = KeyspacesRow>
    void SetOldImage(OldImageT&& value) { m_oldImageHasBeenSet = true; m_oldImage = std::forward<OldImageT>(value); }
    template<typename OldImageT = KeyspacesRow>
    Record& WithOldImage(OldImageT&& value) { SetOldImage(std::forward<OldImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier assigned to this record within the shard, used for
     * ordering and tracking purposes.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    Record& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventVersion;
    bool m_eventVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    OriginType m_origin{OriginType::NOT_SET};
    bool m_originHasBeenSet = false;

    Aws::Map<Aws::String, KeyspacesCellValue> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::Map<Aws::String, KeyspacesCellValue> m_clusteringKeys;
    bool m_clusteringKeysHasBeenSet = false;

    KeyspacesRow m_newImage;
    bool m_newImageHasBeenSet = false;

    KeyspacesRow m_oldImage;
    bool m_oldImageHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
