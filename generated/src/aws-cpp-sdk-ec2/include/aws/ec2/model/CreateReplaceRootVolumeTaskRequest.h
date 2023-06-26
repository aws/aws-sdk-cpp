/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateReplaceRootVolumeTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateReplaceRootVolumeTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplaceRootVolumeTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>Indicates whether to automatically delete the original root volume after the
     * root volume replacement task completes. To delete the original root volume,
     * specify <code>true</code>. If you choose to keep the original root volume after
     * the replacement task completes, you must manually delete it when you no longer
     * need it.</p>
     */
    inline bool GetDeleteReplacedRootVolume() const{ return m_deleteReplacedRootVolume; }

    /**
     * <p>Indicates whether to automatically delete the original root volume after the
     * root volume replacement task completes. To delete the original root volume,
     * specify <code>true</code>. If you choose to keep the original root volume after
     * the replacement task completes, you must manually delete it when you no longer
     * need it.</p>
     */
    inline bool DeleteReplacedRootVolumeHasBeenSet() const { return m_deleteReplacedRootVolumeHasBeenSet; }

    /**
     * <p>Indicates whether to automatically delete the original root volume after the
     * root volume replacement task completes. To delete the original root volume,
     * specify <code>true</code>. If you choose to keep the original root volume after
     * the replacement task completes, you must manually delete it when you no longer
     * need it.</p>
     */
    inline void SetDeleteReplacedRootVolume(bool value) { m_deleteReplacedRootVolumeHasBeenSet = true; m_deleteReplacedRootVolume = value; }

    /**
     * <p>Indicates whether to automatically delete the original root volume after the
     * root volume replacement task completes. To delete the original root volume,
     * specify <code>true</code>. If you choose to keep the original root volume after
     * the replacement task completes, you must manually delete it when you no longer
     * need it.</p>
     */
    inline CreateReplaceRootVolumeTaskRequest& WithDeleteReplacedRootVolume(bool value) { SetDeleteReplacedRootVolume(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_deleteReplacedRootVolume;
    bool m_deleteReplacedRootVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
