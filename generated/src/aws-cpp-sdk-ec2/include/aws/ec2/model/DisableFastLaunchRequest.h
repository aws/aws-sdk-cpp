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
   */
  class DisableFastLaunchRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisableFastLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableFastLaunch"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline DisableFastLaunchRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline DisableFastLaunchRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the image for which you’re turning off faster launching, and
     * removing pre-provisioned snapshots.</p>
     */
    inline DisableFastLaunchRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>Forces the image settings to turn off faster launching for your Windows AMI.
     * This parameter overrides any errors that are encountered while cleaning up
     * resources in your account.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces the image settings to turn off faster launching for your Windows AMI.
     * This parameter overrides any errors that are encountered while cleaning up
     * resources in your account.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces the image settings to turn off faster launching for your Windows AMI.
     * This parameter overrides any errors that are encountered while cleaning up
     * resources in your account.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces the image settings to turn off faster launching for your Windows AMI.
     * This parameter overrides any errors that are encountered while cleaning up
     * resources in your account.</p>
     */
    inline DisableFastLaunchRequest& WithForce(bool value) { SetForce(value); return *this;}


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
    inline DisableFastLaunchRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
