/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/DeregisterInstanceTagAttributeRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DeregisterInstanceEventNotificationAttributesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeregisterInstanceEventNotificationAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterInstanceEventNotificationAttributes"; }

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
    inline DeregisterInstanceEventNotificationAttributesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline const DeregisterInstanceTagAttributeRequest& GetInstanceTagAttribute() const{ return m_instanceTagAttribute; }

    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline bool InstanceTagAttributeHasBeenSet() const { return m_instanceTagAttributeHasBeenSet; }

    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline void SetInstanceTagAttribute(const DeregisterInstanceTagAttributeRequest& value) { m_instanceTagAttributeHasBeenSet = true; m_instanceTagAttribute = value; }

    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline void SetInstanceTagAttribute(DeregisterInstanceTagAttributeRequest&& value) { m_instanceTagAttributeHasBeenSet = true; m_instanceTagAttribute = std::move(value); }

    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline DeregisterInstanceEventNotificationAttributesRequest& WithInstanceTagAttribute(const DeregisterInstanceTagAttributeRequest& value) { SetInstanceTagAttribute(value); return *this;}

    /**
     * <p>Information about the tag keys to deregister.</p>
     */
    inline DeregisterInstanceEventNotificationAttributesRequest& WithInstanceTagAttribute(DeregisterInstanceTagAttributeRequest&& value) { SetInstanceTagAttribute(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    DeregisterInstanceTagAttributeRequest m_instanceTagAttribute;
    bool m_instanceTagAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
