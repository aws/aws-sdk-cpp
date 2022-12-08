/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ImageAttributeName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeImageAttribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImageAttributeRequest">AWS
   * API Reference</a></p>
   */
  class DescribeImageAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeImageAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline const ImageAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline void SetAttribute(const ImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline void SetAttribute(ImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline DescribeImageAttributeRequest& WithAttribute(const ImageAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The AMI attribute.</p> <p> <b>Note</b>: The <code>blockDeviceMapping</code>
     * attribute is deprecated. Using this attribute returns the
     * <code>Client.AuthFailure</code> error. To get information about the block device
     * mappings for an AMI, use the <a>DescribeImages</a> action.</p>
     */
    inline DescribeImageAttributeRequest& WithAttribute(ImageAttributeName&& value) { SetAttribute(std::move(value)); return *this;}


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
    inline DescribeImageAttributeRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline DescribeImageAttributeRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


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
    inline DescribeImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    ImageAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
