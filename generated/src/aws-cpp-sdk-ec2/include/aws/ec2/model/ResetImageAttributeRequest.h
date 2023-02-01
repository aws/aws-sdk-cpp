/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ResetImageAttributeName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ResetImageAttribute.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ResetImageAttributeRequest">AWS
   * API Reference</a></p>
   */
  class ResetImageAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ResetImageAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetImageAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline const ResetImageAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline void SetAttribute(const ResetImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline void SetAttribute(ResetImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline ResetImageAttributeRequest& WithAttribute(const ResetImageAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to reset (currently you can only reset the launch permission
     * attribute).</p>
     */
    inline ResetImageAttributeRequest& WithAttribute(ResetImageAttributeName&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The ID of the AMI.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The ID of the AMI.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

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
    inline ResetImageAttributeRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline ResetImageAttributeRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


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
    inline ResetImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    ResetImageAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
