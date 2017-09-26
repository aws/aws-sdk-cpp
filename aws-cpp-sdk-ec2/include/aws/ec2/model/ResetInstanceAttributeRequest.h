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
   * <p>Contains the parameters for ResetInstanceAttribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetInstanceAttributeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ResetInstanceAttributeRequest : public EC2Request
  {
  public:
    ResetInstanceAttributeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetInstanceAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The attribute to reset.</p> <important> <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>. To change an instance attribute, use
     * <a>ModifyInstanceAttribute</a>.</p> </important>
     */
    inline const InstanceAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to reset.</p> <important> <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>. To change an instance attribute, use
     * <a>ModifyInstanceAttribute</a>.</p> </important>
     */
    inline void SetAttribute(const InstanceAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to reset.</p> <important> <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>. To change an instance attribute, use
     * <a>ModifyInstanceAttribute</a>.</p> </important>
     */
    inline void SetAttribute(InstanceAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to reset.</p> <important> <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>. To change an instance attribute, use
     * <a>ModifyInstanceAttribute</a>.</p> </important>
     */
    inline ResetInstanceAttributeRequest& WithAttribute(const InstanceAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to reset.</p> <important> <p>You can only reset the following
     * attributes: <code>kernel</code> | <code>ramdisk</code> |
     * <code>sourceDestCheck</code>. To change an instance attribute, use
     * <a>ModifyInstanceAttribute</a>.</p> </important>
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
    bool m_attributeHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
