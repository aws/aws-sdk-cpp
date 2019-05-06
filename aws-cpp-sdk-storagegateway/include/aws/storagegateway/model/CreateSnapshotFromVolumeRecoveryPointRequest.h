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
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointRequest : public StorageGatewayRequest
  {
  public:
    CreateSnapshotFromVolumeRecoveryPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshotFromVolumeRecoveryPoint"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline const Aws::String& GetSnapshotDescription() const{ return m_snapshotDescription; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline bool SnapshotDescriptionHasBeenSet() const { return m_snapshotDescriptionHasBeenSet; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(const Aws::String& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = value; }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(Aws::String&& value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription = std::move(value); }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline void SetSnapshotDescription(const char* value) { m_snapshotDescriptionHasBeenSet = true; m_snapshotDescription.assign(value); }

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const Aws::String& value) { SetSnapshotDescription(value); return *this;}

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(Aws::String&& value) { SetSnapshotDescription(std::move(value)); return *this;}

    /**
     * <p>Textual description of the snapshot that appears in the Amazon EC2 console,
     * Elastic Block Store snapshots panel in the <b>Description</b> field, and in the
     * AWS Storage Gateway snapshot <b>Details</b> pane, <b>Description</b> field</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointRequest& WithSnapshotDescription(const char* value) { SetSnapshotDescription(value); return *this;}

  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;

    Aws::String m_snapshotDescription;
    bool m_snapshotDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
