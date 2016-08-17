/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>CreateStorediSCSIVolumeInput$DiskId</a> </p> </li> <li> <p>
   * <a>CreateStorediSCSIVolumeInput$NetworkInterfaceId</a> </p> </li> <li> <p>
   * <a>CreateStorediSCSIVolumeInput$PreserveExistingData</a> </p> </li> <li> <p>
   * <a>CreateStorediSCSIVolumeInput$SnapshotId</a> </p> </li> <li> <p>
   * <a>CreateStorediSCSIVolumeInput$TargetName</a> </p> </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API CreateStorediSCSIVolumeRequest : public StorageGatewayRequest
  {
  public:
    CreateStorediSCSIVolumeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline const Aws::String& GetDiskId() const{ return m_diskId; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(const Aws::String& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(Aws::String&& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(const char* value) { m_diskIdHasBeenSet = true; m_diskId.assign(value); }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(const Aws::String& value) { SetDiskId(value); return *this;}

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(Aws::String&& value) { SetDiskId(value); return *this;}

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(const char* value) { SetDiskId(value); return *this;}

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /**
     * <p>Specify this field as true if you want to preserve the data on the local
     * disk. Otherwise, specifying this field as false creates an empty volume.</p> <p>
     * Valid Values: true, false</p>
     */
    inline bool GetPreserveExistingData() const{ return m_preserveExistingData; }

    /**
     * <p>Specify this field as true if you want to preserve the data on the local
     * disk. Otherwise, specifying this field as false creates an empty volume.</p> <p>
     * Valid Values: true, false</p>
     */
    inline void SetPreserveExistingData(bool value) { m_preserveExistingDataHasBeenSet = true; m_preserveExistingData = value; }

    /**
     * <p>Specify this field as true if you want to preserve the data on the local
     * disk. Otherwise, specifying this field as false creates an empty volume.</p> <p>
     * Valid Values: true, false</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithPreserveExistingData(bool value) { SetPreserveExistingData(value); return *this;}

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithTargetName(Aws::String&& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the iSCSI target used by initiators to connect to the target and
     * as a suffix for the target ARN. For example, specifying <code>TargetName</code>
     * as <i>myvolume</i> results in the target ARN of
     * arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume.
     * The target name must be unique across all volumes of a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_diskId;
    bool m_diskIdHasBeenSet;
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    bool m_preserveExistingData;
    bool m_preserveExistingDataHasBeenSet;
    Aws::String m_targetName;
    bool m_targetNameHasBeenSet;
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
