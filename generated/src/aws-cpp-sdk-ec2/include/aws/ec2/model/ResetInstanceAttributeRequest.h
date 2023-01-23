/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/InstanceAttributeName.h>
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
  class ResetInstanceAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ResetInstanceAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetInstanceAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline const InstanceAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline void SetAttribute(const InstanceAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline void SetAttribute(InstanceAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline ResetInstanceAttributeRequest& WithAttribute(const InstanceAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to reset.</p>  <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>.</p> 
     */
    inline ResetInstanceAttributeRequest& WithAttribute(InstanceAttributeName&& value) { SetAttribute(std::move(value)); return *this;}


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
    inline ResetInstanceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ResetInstanceAttributeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ResetInstanceAttributeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ResetInstanceAttributeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    InstanceAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
