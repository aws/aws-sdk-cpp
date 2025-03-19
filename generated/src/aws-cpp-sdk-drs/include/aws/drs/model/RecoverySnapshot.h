/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A snapshot of a Source Server used during recovery.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoverySnapshot">AWS
   * API Reference</a></p>
   */
  class RecoverySnapshot
  {
  public:
    AWS_DRS_API RecoverySnapshot() = default;
    AWS_DRS_API RecoverySnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoverySnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEbsSnapshots() const { return m_ebsSnapshots; }
    inline bool EbsSnapshotsHasBeenSet() const { return m_ebsSnapshotsHasBeenSet; }
    template<typename EbsSnapshotsT = Aws::Vector<Aws::String>>
    void SetEbsSnapshots(EbsSnapshotsT&& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots = std::forward<EbsSnapshotsT>(value); }
    template<typename EbsSnapshotsT = Aws::Vector<Aws::String>>
    RecoverySnapshot& WithEbsSnapshots(EbsSnapshotsT&& value) { SetEbsSnapshots(std::forward<EbsSnapshotsT>(value)); return *this;}
    template<typename EbsSnapshotsT = Aws::String>
    RecoverySnapshot& AddEbsSnapshots(EbsSnapshotsT&& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots.emplace_back(std::forward<EbsSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline const Aws::String& GetExpectedTimestamp() const { return m_expectedTimestamp; }
    inline bool ExpectedTimestampHasBeenSet() const { return m_expectedTimestampHasBeenSet; }
    template<typename ExpectedTimestampT = Aws::String>
    void SetExpectedTimestamp(ExpectedTimestampT&& value) { m_expectedTimestampHasBeenSet = true; m_expectedTimestamp = std::forward<ExpectedTimestampT>(value); }
    template<typename ExpectedTimestampT = Aws::String>
    RecoverySnapshot& WithExpectedTimestamp(ExpectedTimestampT&& value) { SetExpectedTimestamp(std::forward<ExpectedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline const Aws::String& GetSnapshotID() const { return m_snapshotID; }
    inline bool SnapshotIDHasBeenSet() const { return m_snapshotIDHasBeenSet; }
    template<typename SnapshotIDT = Aws::String>
    void SetSnapshotID(SnapshotIDT&& value) { m_snapshotIDHasBeenSet = true; m_snapshotID = std::forward<SnapshotIDT>(value); }
    template<typename SnapshotIDT = Aws::String>
    RecoverySnapshot& WithSnapshotID(SnapshotIDT&& value) { SetSnapshotID(std::forward<SnapshotIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    RecoverySnapshot& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline const Aws::String& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::String>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::String>
    RecoverySnapshot& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ebsSnapshots;
    bool m_ebsSnapshotsHasBeenSet = false;

    Aws::String m_expectedTimestamp;
    bool m_expectedTimestampHasBeenSet = false;

    Aws::String m_snapshotID;
    bool m_snapshotIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
