/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/StorediSCSIVolume.h>
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
namespace StorageGateway
{
namespace Model
{
  class DescribeStorediSCSIVolumesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesResult();
    AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline const Aws::Vector<StorediSCSIVolume>& GetStorediSCSIVolumes() const{ return m_storediSCSIVolumes; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline void SetStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { m_storediSCSIVolumes = value; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline void SetStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { m_storediSCSIVolumes = std::move(value); }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { SetStorediSCSIVolumes(value); return *this;}

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { SetStorediSCSIVolumes(std::move(value)); return *this;}

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(const StorediSCSIVolume& value) { m_storediSCSIVolumes.push_back(value); return *this; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <code>ChapEnabled</code>:
     * Indicates whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li>
     * <p> <code>LunNumber</code>: The logical disk number.</p> </li> <li> <p>
     * <code>NetworkInterfaceId</code>: The network interface ID of the stored volume
     * that initiator use to map the stored volume as an iSCSI target.</p> </li> <li>
     * <p> <code>NetworkInterfacePort</code>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <code>PreservedExistingData</code>: Indicates when
     * the stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <code>SourceSnapshotId</code>: If the stored
     * volume was created from a snapshot, this field contains the snapshot ID used,
     * e.g. <code>snap-1122aabb</code>. Otherwise, this field is not included.</p>
     * </li> <li> <p> <code>StorediSCSIVolumes</code>: An array of StorediSCSIVolume
     * objects where each object contains metadata about one stored volume.</p> </li>
     * <li> <p> <code>TargetARN</code>: The Amazon Resource Name (ARN) of the volume
     * target.</p> </li> <li> <p> <code>VolumeARN</code>: The Amazon Resource Name
     * (ARN) of the stored volume.</p> </li> <li> <p> <code>VolumeDiskId</code>: The
     * disk ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p> </li> <li> <p>
     * <code>VolumeId</code>: The unique identifier of the storage volume, e.g.
     * <code>vol-1122AABB</code>.</p> </li> <li> <p>
     * <code>VolumeiSCSIAttributes</code>: An <a>VolumeiSCSIAttributes</a> object that
     * represents a collection of iSCSI attributes for one stored volume.</p> </li>
     * <li> <p> <code>VolumeProgress</code>: Represents the percentage complete if the
     * volume is restoring or bootstrapping that represents the percent of data
     * transferred. This field does not appear in the response if the stored volume is
     * not restoring or bootstrapping.</p> </li> <li> <p>
     * <code>VolumeSizeInBytes</code>: The size of the volume in bytes.</p> </li> <li>
     * <p> <code>VolumeStatus</code>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <code>VolumeType</code>:
     * One of the enumeration values describing the type of the volume. Currently, only
     * <code>STORED</code> volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(StorediSCSIVolume&& value) { m_storediSCSIVolumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StorediSCSIVolume> m_storediSCSIVolumes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
