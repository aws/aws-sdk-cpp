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
    AWS_EC2_API CreateReplaceRootVolumeTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplaceRootVolumeTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance for which to replace the root volume.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateReplaceRootVolumeTaskRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot from which to restore the replacement root volume. The
     * specified snapshot must be a snapshot that you previously created from the
     * original root volume.</p> <p>If you want to restore the replacement root volume
     * to the initial launch state, or if you want to restore the replacement root
     * volume from an AMI, omit this parameter.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CreateReplaceRootVolumeTaskRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If you do not specify a client token, a randomly generated token is
     * used for the request to ensure idempotency. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateReplaceRootVolumeTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateReplaceRootVolumeTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the root volume replacement task.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateReplaceRootVolumeTaskRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateReplaceRootVolumeTaskRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI to use to restore the root volume. The specified AMI must
     * have the same product code, billing information, architecture type, and
     * virtualization type as that of the instance.</p> <p>If you want to restore the
     * replacement volume from a specific snapshot, or if you want to restore it to its
     * launch state, omit this parameter.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CreateReplaceRootVolumeTaskRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to automatically delete the original root volume after the
     * root volume replacement task completes. To delete the original root volume,
     * specify <code>true</code>. If you choose to keep the original root volume after
     * the replacement task completes, you must manually delete it when you no longer
     * need it.</p>
     */
    inline bool GetDeleteReplacedRootVolume() const { return m_deleteReplacedRootVolume; }
    inline bool DeleteReplacedRootVolumeHasBeenSet() const { return m_deleteReplacedRootVolumeHasBeenSet; }
    inline void SetDeleteReplacedRootVolume(bool value) { m_deleteReplacedRootVolumeHasBeenSet = true; m_deleteReplacedRootVolume = value; }
    inline CreateReplaceRootVolumeTaskRequest& WithDeleteReplacedRootVolume(bool value) { SetDeleteReplacedRootVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon EBS Provisioned Rate for Volume Initialization (volume
     * initialization rate), in MiB/s, at which to download the snapshot blocks from
     * Amazon S3 to the replacement root volume. This is also known as <i>volume
     * initialization</i>. Specifying a volume initialization rate ensures that the
     * volume is initialized at a predictable and consistent rate after creation.</p>
     * <p>Omit this parameter if:</p> <ul> <li> <p>You want to create the volume using
     * fast snapshot restore. You must specify a snapshot that is enabled for fast
     * snapshot restore. In this case, the volume is fully initialized at creation.</p>
     *  <p>If you specify a snapshot that is enabled for fast snapshot restore
     * and a volume initialization rate, the volume will be initialized at the
     * specified rate instead of fast snapshot restore.</p>  </li> <li> <p>You
     * want to create a volume that is initialized at the default rate.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">
     * Initialize Amazon EBS volumes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     * <p>Valid range: 100 - 300 MiB/s</p>
     */
    inline long long GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
    inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
    inline void SetVolumeInitializationRate(long long value) { m_volumeInitializationRateHasBeenSet = true; m_volumeInitializationRate = value; }
    inline CreateReplaceRootVolumeTaskRequest& WithVolumeInitializationRate(long long value) { SetVolumeInitializationRate(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_deleteReplacedRootVolume{false};
    bool m_deleteReplacedRootVolumeHasBeenSet = false;

    long long m_volumeInitializationRate{0};
    bool m_volumeInitializationRateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
