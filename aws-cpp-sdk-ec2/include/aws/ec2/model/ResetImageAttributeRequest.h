/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResetImageAttributeName.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ResetImageAttribute.</p>
   */
  class AWS_EC2_API ResetImageAttributeRequest : public EC2Request
  {
  public:
    ResetImageAttributeRequest();
    Aws::String SerializePayload() const override;

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
    inline ResetImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ResetImageAttributeRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ResetImageAttributeRequest& WithImageId(Aws::String&& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ResetImageAttributeRequest& WithImageId(const char* value) { SetImageId(value); return *this;}

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline const ResetImageAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline void SetAttribute(const ResetImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline void SetAttribute(ResetImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline ResetImageAttributeRequest& WithAttribute(const ResetImageAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline ResetImageAttributeRequest& WithAttribute(ResetImageAttributeName&& value) { SetAttribute(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;
    ResetImageAttributeName m_attribute;
    bool m_attributeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
