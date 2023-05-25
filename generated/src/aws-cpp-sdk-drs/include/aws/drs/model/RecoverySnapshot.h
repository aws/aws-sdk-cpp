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
    AWS_DRS_API RecoverySnapshot();
    AWS_DRS_API RecoverySnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoverySnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEbsSnapshots() const{ return m_ebsSnapshots; }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline bool EbsSnapshotsHasBeenSet() const { return m_ebsSnapshotsHasBeenSet; }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline void SetEbsSnapshots(const Aws::Vector<Aws::String>& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots = value; }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline void SetEbsSnapshots(Aws::Vector<Aws::String>&& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots = std::move(value); }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline RecoverySnapshot& WithEbsSnapshots(const Aws::Vector<Aws::String>& value) { SetEbsSnapshots(value); return *this;}

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline RecoverySnapshot& WithEbsSnapshots(Aws::Vector<Aws::String>&& value) { SetEbsSnapshots(std::move(value)); return *this;}

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline RecoverySnapshot& AddEbsSnapshots(const Aws::String& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots.push_back(value); return *this; }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline RecoverySnapshot& AddEbsSnapshots(Aws::String&& value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EBS snapshots.</p>
     */
    inline RecoverySnapshot& AddEbsSnapshots(const char* value) { m_ebsSnapshotsHasBeenSet = true; m_ebsSnapshots.push_back(value); return *this; }


    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline const Aws::String& GetExpectedTimestamp() const{ return m_expectedTimestamp; }

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline bool ExpectedTimestampHasBeenSet() const { return m_expectedTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline void SetExpectedTimestamp(const Aws::String& value) { m_expectedTimestampHasBeenSet = true; m_expectedTimestamp = value; }

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline void SetExpectedTimestamp(Aws::String&& value) { m_expectedTimestampHasBeenSet = true; m_expectedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline void SetExpectedTimestamp(const char* value) { m_expectedTimestampHasBeenSet = true; m_expectedTimestamp.assign(value); }

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline RecoverySnapshot& WithExpectedTimestamp(const Aws::String& value) { SetExpectedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline RecoverySnapshot& WithExpectedTimestamp(Aws::String&& value) { SetExpectedTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp of when we expect the snapshot to be taken.</p>
     */
    inline RecoverySnapshot& WithExpectedTimestamp(const char* value) { SetExpectedTimestamp(value); return *this;}


    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline const Aws::String& GetSnapshotID() const{ return m_snapshotID; }

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline bool SnapshotIDHasBeenSet() const { return m_snapshotIDHasBeenSet; }

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline void SetSnapshotID(const Aws::String& value) { m_snapshotIDHasBeenSet = true; m_snapshotID = value; }

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline void SetSnapshotID(Aws::String&& value) { m_snapshotIDHasBeenSet = true; m_snapshotID = std::move(value); }

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline void SetSnapshotID(const char* value) { m_snapshotIDHasBeenSet = true; m_snapshotID.assign(value); }

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline RecoverySnapshot& WithSnapshotID(const Aws::String& value) { SetSnapshotID(value); return *this;}

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline RecoverySnapshot& WithSnapshotID(Aws::String&& value) { SetSnapshotID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recovery Snapshot.</p>
     */
    inline RecoverySnapshot& WithSnapshotID(const char* value) { SetSnapshotID(value); return *this;}


    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline RecoverySnapshot& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline RecoverySnapshot& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Source Server that the snapshot was taken for.</p>
     */
    inline RecoverySnapshot& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline RecoverySnapshot& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline RecoverySnapshot& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The actual timestamp that the snapshot was taken.</p>
     */
    inline RecoverySnapshot& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}

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
