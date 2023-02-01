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
  class DeleteInstanceEventWindowRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteInstanceEventWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInstanceEventWindow"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DeleteInstanceEventWindowRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Specify <code>true</code> to force delete the event window. Use the force
     * delete parameter if the event window is currently associated with targets.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>Specify <code>true</code> to force delete the event window. Use the force
     * delete parameter if the event window is currently associated with targets.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>Specify <code>true</code> to force delete the event window. Use the force
     * delete parameter if the event window is currently associated with targets.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>Specify <code>true</code> to force delete the event window. Use the force
     * delete parameter if the event window is currently associated with targets.</p>
     */
    inline DeleteInstanceEventWindowRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}


    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const{ return m_instanceEventWindowId; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const Aws::String& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = value; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(Aws::String&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::move(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const char* value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId.assign(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline DeleteInstanceEventWindowRequest& WithInstanceEventWindowId(const Aws::String& value) { SetInstanceEventWindowId(value); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline DeleteInstanceEventWindowRequest& WithInstanceEventWindowId(Aws::String&& value) { SetInstanceEventWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline DeleteInstanceEventWindowRequest& WithInstanceEventWindowId(const char* value) { SetInstanceEventWindowId(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;

    Aws::String m_instanceEventWindowId;
    bool m_instanceEventWindowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
