/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeregisterImage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeregisterImageRequest">AWS
   * API Reference</a></p>
   */
  class DeregisterImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeregisterImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    DeregisterImageRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to delete the snapshots associated with the AMI during
     * deregistration.</p>  <p>If a snapshot is associated with multiple AMIs, it
     * is not deleted, regardless of this setting.</p>  <p>Default: The
     * snapshots are not deleted.</p>
     */
    inline bool GetDeleteAssociatedSnapshots() const { return m_deleteAssociatedSnapshots; }
    inline bool DeleteAssociatedSnapshotsHasBeenSet() const { return m_deleteAssociatedSnapshotsHasBeenSet; }
    inline void SetDeleteAssociatedSnapshots(bool value) { m_deleteAssociatedSnapshotsHasBeenSet = true; m_deleteAssociatedSnapshots = value; }
    inline DeregisterImageRequest& WithDeleteAssociatedSnapshots(bool value) { SetDeleteAssociatedSnapshots(value); return *this;}
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
    inline DeregisterImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_deleteAssociatedSnapshots{false};
    bool m_deleteAssociatedSnapshotsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
