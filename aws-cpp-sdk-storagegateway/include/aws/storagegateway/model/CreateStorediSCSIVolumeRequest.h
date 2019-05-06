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
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

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
   * <a>CreateStorediSCSIVolumeInput$TargetName</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateStorediSCSIVolumeInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CreateStorediSCSIVolumeRequest : public StorageGatewayRequest
  {
  public:
    CreateStorediSCSIVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStorediSCSIVolume"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline CreateStorediSCSIVolumeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline const Aws::String& GetDiskId() const{ return m_diskId; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline bool DiskIdHasBeenSet() const { return m_diskIdHasBeenSet; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(const Aws::String& value) { m_diskIdHasBeenSet = true; m_diskId = value; }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(Aws::String&& value) { m_diskIdHasBeenSet = true; m_diskId = std::move(value); }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline void SetDiskId(const char* value) { m_diskIdHasBeenSet = true; m_diskId.assign(value); }

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(const Aws::String& value) { SetDiskId(value); return *this;}

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(Aws::String&& value) { SetDiskId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the gateway local disk that is configured as a
     * stored volume. Use <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/API_ListLocalDisks.html">ListLocalDisks</a>
     * to list disk IDs for a gateway.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithDiskId(const char* value) { SetDiskId(value); return *this;}


    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
     * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID (e.g. "snap-1122aabb") of the snapshot to restore as the new
     * stored volume. Specify this field if you want to create the iSCSI storage volume
     * from a snapshot otherwise do not include this field. To list snapshots for your
     * account use <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
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
    inline bool PreserveExistingDataHasBeenSet() const { return m_preserveExistingDataHasBeenSet; }

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
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
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
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

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
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

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
    inline CreateStorediSCSIVolumeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The network interface of the gateway on which to expose the iSCSI target.
     * Only IPv4 addresses are accepted. Use <a>DescribeGatewayInformation</a> to get a
     * list of the network interfaces available on a gateway.</p> <p> Valid Values: A
     * valid IP address.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>True to use Amazon S3 server side encryption with your own AWS KMS key, or
     * false to use a key managed by Amazon S3. Optional.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used for Amazon S3 server side
     * encryption. This value can only be set when KMSEncrypted is true. Optional.</p>
     */
    inline CreateStorediSCSIVolumeRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateStorediSCSIVolumeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateStorediSCSIVolumeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateStorediSCSIVolumeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to a stored volume. Each tag is
     * a key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline CreateStorediSCSIVolumeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
