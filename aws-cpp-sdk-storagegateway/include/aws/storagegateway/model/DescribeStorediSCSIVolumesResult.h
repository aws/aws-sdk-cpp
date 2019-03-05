/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_STORAGEGATEWAY_API DescribeStorediSCSIVolumesResult
  {
  public:
    DescribeStorediSCSIVolumesResult();
    DescribeStorediSCSIVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStorediSCSIVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline const Aws::Vector<StorediSCSIVolume>& GetStorediSCSIVolumes() const{ return m_storediSCSIVolumes; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline void SetStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { m_storediSCSIVolumes = value; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline void SetStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { m_storediSCSIVolumes = std::move(value); }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(const Aws::Vector<StorediSCSIVolume>& value) { SetStorediSCSIVolumes(value); return *this;}

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& WithStorediSCSIVolumes(Aws::Vector<StorediSCSIVolume>&& value) { SetStorediSCSIVolumes(std::move(value)); return *this;}

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(const StorediSCSIVolume& value) { m_storediSCSIVolumes.push_back(value); return *this; }

    /**
     * <p>Describes a single unit of output from <a>DescribeStorediSCSIVolumes</a>. The
     * following fields are returned:</p> <ul> <li> <p> <b>ChapEnabled</b>: Indicates
     * whether mutual CHAP is enabled for the iSCSI target.</p> </li> <li> <p>
     * <b>LunNumber</b>: The logical disk number.</p> </li> <li> <p>
     * <b>NetworkInterfaceId</b>: The network interface ID of the stored volume that
     * initiator use to map the stored volume as an iSCSI target.</p> </li> <li> <p>
     * <b>NetworkInterfacePort</b>: The port used to communicate with iSCSI
     * targets.</p> </li> <li> <p> <b>PreservedExistingData</b>: Indicates if when the
     * stored volume was created, existing data on the underlying local disk was
     * preserved.</p> </li> <li> <p> <b>SourceSnapshotId</b>: If the stored volume was
     * created from a snapshot, this field contains the snapshot ID used, e.g.
     * snap-1122aabb. Otherwise, this field is not included.</p> </li> <li> <p>
     * <b>StorediSCSIVolumes</b>: An array of StorediSCSIVolume objects where each
     * object contains metadata about one stored volume.</p> </li> <li> <p>
     * <b>TargetARN</b>: The Amazon Resource Name (ARN) of the volume target.</p> </li>
     * <li> <p> <b>VolumeARN</b>: The Amazon Resource Name (ARN) of the stored
     * volume.</p> </li> <li> <p> <b>VolumeDiskId</b>: The disk ID of the local disk
     * that was specified in the <a>CreateStorediSCSIVolume</a> operation.</p> </li>
     * <li> <p> <b>VolumeId</b>: The unique identifier of the storage volume, e.g.
     * vol-1122AABB.</p> </li> <li> <p> <b>VolumeiSCSIAttributes</b>: An
     * <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p> </li> <li> <p> <b>VolumeProgress</b>:
     * Represents the percentage complete if the volume is restoring or bootstrapping
     * that represents the percent of data transferred. This field does not appear in
     * the response if the stored volume is not restoring or bootstrapping.</p> </li>
     * <li> <p> <b>VolumeSizeInBytes</b>: The size of the volume in bytes.</p> </li>
     * <li> <p> <b>VolumeStatus</b>: One of the <code>VolumeStatus</code> values that
     * indicates the state of the volume.</p> </li> <li> <p> <b>VolumeType</b>: One of
     * the enumeration values describing the type of the volume. Currently, on STORED
     * volumes are supported.</p> </li> </ul>
     */
    inline DescribeStorediSCSIVolumesResult& AddStorediSCSIVolumes(StorediSCSIVolume&& value) { m_storediSCSIVolumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StorediSCSIVolume> m_storediSCSIVolumes;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
