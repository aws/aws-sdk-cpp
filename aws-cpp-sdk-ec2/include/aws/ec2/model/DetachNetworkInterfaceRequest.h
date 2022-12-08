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
   * <p>Contains the parameters for DetachNetworkInterface.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DetachNetworkInterfaceRequest">AWS
   * API Reference</a></p>
   */
  class DetachNetworkInterfaceRequest : public EC2Request
  {
  public:
    AWS_EC2_API DetachNetworkInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachNetworkInterface"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline DetachNetworkInterfaceRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline DetachNetworkInterfaceRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline DetachNetworkInterfaceRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


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
    inline DetachNetworkInterfaceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Specifies whether to force a detachment.</p>  <ul> <li> <p>Use the
     * <code>Force</code> parameter only as a last resort to detach a network interface
     * from a failed instance. </p> </li> <li> <p>If you use the <code>Force</code>
     * parameter to detach a network interface, you might not be able to attach a
     * different network interface to the same index on the instance without first
     * stopping and starting the instance.</p> </li> <li> <p>If you force the
     * detachment of a network interface, the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">instance
     * metadata</a> might not get updated. This means that the attributes associated
     * with the detached network interface might still be visible. The instance
     * metadata will get updated when you stop and start the instance.</p> </li> </ul>
     * 
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Specifies whether to force a detachment.</p>  <ul> <li> <p>Use the
     * <code>Force</code> parameter only as a last resort to detach a network interface
     * from a failed instance. </p> </li> <li> <p>If you use the <code>Force</code>
     * parameter to detach a network interface, you might not be able to attach a
     * different network interface to the same index on the instance without first
     * stopping and starting the instance.</p> </li> <li> <p>If you force the
     * detachment of a network interface, the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">instance
     * metadata</a> might not get updated. This means that the attributes associated
     * with the detached network interface might still be visible. The instance
     * metadata will get updated when you stop and start the instance.</p> </li> </ul>
     * 
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Specifies whether to force a detachment.</p>  <ul> <li> <p>Use the
     * <code>Force</code> parameter only as a last resort to detach a network interface
     * from a failed instance. </p> </li> <li> <p>If you use the <code>Force</code>
     * parameter to detach a network interface, you might not be able to attach a
     * different network interface to the same index on the instance without first
     * stopping and starting the instance.</p> </li> <li> <p>If you force the
     * detachment of a network interface, the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">instance
     * metadata</a> might not get updated. This means that the attributes associated
     * with the detached network interface might still be visible. The instance
     * metadata will get updated when you stop and start the instance.</p> </li> </ul>
     * 
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Specifies whether to force a detachment.</p>  <ul> <li> <p>Use the
     * <code>Force</code> parameter only as a last resort to detach a network interface
     * from a failed instance. </p> </li> <li> <p>If you use the <code>Force</code>
     * parameter to detach a network interface, you might not be able to attach a
     * different network interface to the same index on the instance without first
     * stopping and starting the instance.</p> </li> <li> <p>If you force the
     * detachment of a network interface, the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">instance
     * metadata</a> might not get updated. This means that the attributes associated
     * with the detached network interface might still be visible. The instance
     * metadata will get updated when you stop and start the instance.</p> </li> </ul>
     * 
     */
    inline DetachNetworkInterfaceRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
