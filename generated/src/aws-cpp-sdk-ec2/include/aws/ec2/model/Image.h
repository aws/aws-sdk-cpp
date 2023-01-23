/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ArchitectureValues.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ImageTypeValues.h>
#include <aws/ec2/model/PlatformValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImageState.h>
#include <aws/ec2/model/HypervisorType.h>
#include <aws/ec2/model/DeviceType.h>
#include <aws/ec2/model/StateReason.h>
#include <aws/ec2/model/VirtualizationType.h>
#include <aws/ec2/model/BootModeValues.h>
#include <aws/ec2/model/TpmSupportValues.h>
#include <aws/ec2/model/ImdsSupportValues.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Image">AWS API
   * Reference</a></p>
   */
  class Image
  {
  public:
    AWS_EC2_API Image();
    AWS_EC2_API Image(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Image& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The architecture of the image.</p>
     */
    inline const ArchitectureValues& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline void SetArchitecture(const ArchitectureValues& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the image.</p>
     */
    inline void SetArchitecture(ArchitectureValues&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the image.</p>
     */
    inline Image& WithArchitecture(const ArchitectureValues& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the image.</p>
     */
    inline Image& WithArchitecture(ArchitectureValues&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The date and time the image was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the image was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the image was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the image was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the image was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time the image was created.</p>
     */
    inline Image& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the image was created.</p>
     */
    inline Image& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time the image was created.</p>
     */
    inline Image& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


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
    inline Image& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline Image& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AMI.</p>
     */
    inline Image& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The location of the AMI.</p>
     */
    inline const Aws::String& GetImageLocation() const{ return m_imageLocation; }

    /**
     * <p>The location of the AMI.</p>
     */
    inline bool ImageLocationHasBeenSet() const { return m_imageLocationHasBeenSet; }

    /**
     * <p>The location of the AMI.</p>
     */
    inline void SetImageLocation(const Aws::String& value) { m_imageLocationHasBeenSet = true; m_imageLocation = value; }

    /**
     * <p>The location of the AMI.</p>
     */
    inline void SetImageLocation(Aws::String&& value) { m_imageLocationHasBeenSet = true; m_imageLocation = std::move(value); }

    /**
     * <p>The location of the AMI.</p>
     */
    inline void SetImageLocation(const char* value) { m_imageLocationHasBeenSet = true; m_imageLocation.assign(value); }

    /**
     * <p>The location of the AMI.</p>
     */
    inline Image& WithImageLocation(const Aws::String& value) { SetImageLocation(value); return *this;}

    /**
     * <p>The location of the AMI.</p>
     */
    inline Image& WithImageLocation(Aws::String&& value) { SetImageLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the AMI.</p>
     */
    inline Image& WithImageLocation(const char* value) { SetImageLocation(value); return *this;}


    /**
     * <p>The type of image.</p>
     */
    inline const ImageTypeValues& GetImageType() const{ return m_imageType; }

    /**
     * <p>The type of image.</p>
     */
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }

    /**
     * <p>The type of image.</p>
     */
    inline void SetImageType(const ImageTypeValues& value) { m_imageTypeHasBeenSet = true; m_imageType = value; }

    /**
     * <p>The type of image.</p>
     */
    inline void SetImageType(ImageTypeValues&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::move(value); }

    /**
     * <p>The type of image.</p>
     */
    inline Image& WithImageType(const ImageTypeValues& value) { SetImageType(value); return *this;}

    /**
     * <p>The type of image.</p>
     */
    inline Image& WithImageType(ImageTypeValues&& value) { SetImageType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline bool GetPublic() const{ return m_public; }

    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline bool PublicHasBeenSet() const { return m_publicHasBeenSet; }

    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline void SetPublic(bool value) { m_publicHasBeenSet = true; m_public = value; }

    /**
     * <p>Indicates whether the image has public launch permissions. The value is
     * <code>true</code> if this image has public launch permissions or
     * <code>false</code> if it has only implicit and explicit launch permissions.</p>
     */
    inline Image& WithPublic(bool value) { SetPublic(value); return *this;}


    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p>The kernel associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline Image& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline Image& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the image.</p>
     */
    inline Image& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline Image& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>This value is set to <code>windows</code> for Windows AMIs; otherwise, it is
     * blank.</p>
     */
    inline Image& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformDetails() const{ return m_platformDetails; }

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool PlatformDetailsHasBeenSet() const { return m_platformDetailsHasBeenSet; }

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(const Aws::String& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = value; }

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(Aws::String&& value) { m_platformDetailsHasBeenSet = true; m_platformDetails = std::move(value); }

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetPlatformDetails(const char* value) { m_platformDetailsHasBeenSet = true; m_platformDetails.assign(value); }

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithPlatformDetails(const Aws::String& value) { SetPlatformDetails(value); return *this;}

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithPlatformDetails(Aws::String&& value) { SetPlatformDetails(std::move(value)); return *this;}

    /**
     * <p>The platform details associated with the billing code of the AMI. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-billing-info.html">Understand
     * AMI billing information</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithPlatformDetails(const char* value) { SetPlatformDetails(value); return *this;}


    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline const Aws::String& GetUsageOperation() const{ return m_usageOperation; }

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline bool UsageOperationHasBeenSet() const { return m_usageOperationHasBeenSet; }

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline void SetUsageOperation(const Aws::String& value) { m_usageOperationHasBeenSet = true; m_usageOperation = value; }

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline void SetUsageOperation(Aws::String&& value) { m_usageOperationHasBeenSet = true; m_usageOperation = std::move(value); }

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline void SetUsageOperation(const char* value) { m_usageOperationHasBeenSet = true; m_usageOperation.assign(value); }

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline Image& WithUsageOperation(const Aws::String& value) { SetUsageOperation(value); return *this;}

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline Image& WithUsageOperation(Aws::String&& value) { SetUsageOperation(std::move(value)); return *this;}

    /**
     * <p>The operation of the Amazon EC2 instance and the billing code that is
     * associated with the AMI. <code>usageOperation</code> corresponds to the <a
     * href="https://docs.aws.amazon.com/cur/latest/userguide/Lineitem-columns.html#Lineitem-details-O-Operation">lineitem/Operation</a>
     * column on your Amazon Web Services Cost and Usage Report and in the <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Amazon
     * Web Services Price List API</a>. You can view these fields on the
     * <b>Instances</b> or <b>AMIs</b> pages in the Amazon EC2 console, or in the
     * responses that are returned by the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeImages.html">DescribeImages</a>
     * command in the Amazon EC2 API, or the <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-images.html">describe-images</a>
     * command in the CLI.</p>
     */
    inline Image& WithUsageOperation(const char* value) { SetUsageOperation(value); return *this;}


    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline Image& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline Image& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline Image& AddProductCodes(const ProductCode& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }

    /**
     * <p>Any product codes associated with the AMI.</p>
     */
    inline Image& AddProductCodes(ProductCode&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}

    /**
     * <p>The RAM disk associated with the image, if any. Only applicable for machine
     * images.</p>
     */
    inline Image& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}


    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline const ImageState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline void SetState(const ImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline void SetState(ImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline Image& WithState(const ImageState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the AMI. If the state is <code>available</code>, the
     * image is successfully registered and can be used to launch an instance.</p>
     */
    inline Image& WithState(ImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Any block device mapping entries.</p>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline Image& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline Image& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline Image& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>Any block device mapping entries.</p>
     */
    inline Image& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline Image& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline Image& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the AMI that was provided during image creation.</p>
     */
    inline Image& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool GetEnaSupport() const{ return m_enaSupport; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline bool EnaSupportHasBeenSet() const { return m_enaSupportHasBeenSet; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline void SetEnaSupport(bool value) { m_enaSupportHasBeenSet = true; m_enaSupport = value; }

    /**
     * <p>Specifies whether enhanced networking with ENA is enabled.</p>
     */
    inline Image& WithEnaSupport(bool value) { SetEnaSupport(value); return *this;}


    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline const HypervisorType& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline bool HypervisorHasBeenSet() const { return m_hypervisorHasBeenSet; }

    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline void SetHypervisor(const HypervisorType& value) { m_hypervisorHasBeenSet = true; m_hypervisor = value; }

    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline void SetHypervisor(HypervisorType&& value) { m_hypervisorHasBeenSet = true; m_hypervisor = std::move(value); }

    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline Image& WithHypervisor(const HypervisorType& value) { SetHypervisor(value); return *this;}

    /**
     * <p>The hypervisor type of the image.</p>
     */
    inline Image& WithHypervisor(HypervisorType&& value) { SetHypervisor(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline const Aws::String& GetImageOwnerAlias() const{ return m_imageOwnerAlias; }

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(const Aws::String& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = value; }

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(Aws::String&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::move(value); }

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(const char* value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias.assign(value); }

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline Image& WithImageOwnerAlias(const Aws::String& value) { SetImageOwnerAlias(value); return *this;}

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline Image& WithImageOwnerAlias(Aws::String&& value) { SetImageOwnerAlias(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account alias (for example, <code>amazon</code>,
     * <code>self</code>) or the Amazon Web Services account ID of the AMI owner.</p>
     */
    inline Image& WithImageOwnerAlias(const char* value) { SetImageOwnerAlias(value); return *this;}


    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline Image& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline Image& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AMI that was provided during image creation.</p>
     */
    inline Image& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline const Aws::String& GetRootDeviceName() const{ return m_rootDeviceName; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline bool RootDeviceNameHasBeenSet() const { return m_rootDeviceNameHasBeenSet; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const Aws::String& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = value; }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(Aws::String&& value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName = std::move(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline void SetRootDeviceName(const char* value) { m_rootDeviceNameHasBeenSet = true; m_rootDeviceName.assign(value); }

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Image& WithRootDeviceName(const Aws::String& value) { SetRootDeviceName(value); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Image& WithRootDeviceName(Aws::String&& value) { SetRootDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device name of the root device volume (for example,
     * <code>/dev/sda1</code>).</p>
     */
    inline Image& WithRootDeviceName(const char* value) { SetRootDeviceName(value); return *this;}


    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline const DeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline void SetRootDeviceType(const DeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline void SetRootDeviceType(DeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline Image& WithRootDeviceType(const DeviceType& value) { SetRootDeviceType(value); return *this;}

    /**
     * <p>The type of root device used by the AMI. The AMI can use an Amazon EBS volume
     * or an instance store volume.</p>
     */
    inline Image& WithRootDeviceType(DeviceType&& value) { SetRootDeviceType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline const Aws::String& GetSriovNetSupport() const{ return m_sriovNetSupport; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline bool SriovNetSupportHasBeenSet() const { return m_sriovNetSupportHasBeenSet; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(const Aws::String& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = value; }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(Aws::String&& value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport = std::move(value); }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline void SetSriovNetSupport(const char* value) { m_sriovNetSupportHasBeenSet = true; m_sriovNetSupport.assign(value); }

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Image& WithSriovNetSupport(const Aws::String& value) { SetSriovNetSupport(value); return *this;}

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Image& WithSriovNetSupport(Aws::String&& value) { SetSriovNetSupport(std::move(value)); return *this;}

    /**
     * <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function
     * interface is enabled.</p>
     */
    inline Image& WithSriovNetSupport(const char* value) { SetSriovNetSupport(value); return *this;}


    /**
     * <p>The reason for the state change.</p>
     */
    inline const StateReason& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline void SetStateReason(const StateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason for the state change.</p>
     */
    inline void SetStateReason(StateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason for the state change.</p>
     */
    inline Image& WithStateReason(const StateReason& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason for the state change.</p>
     */
    inline Image& WithStateReason(StateReason&& value) { SetStateReason(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline Image& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline Image& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline Image& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the image.</p>
     */
    inline Image& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline const VirtualizationType& GetVirtualizationType() const{ return m_virtualizationType; }

    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }

    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline void SetVirtualizationType(const VirtualizationType& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }

    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline void SetVirtualizationType(VirtualizationType&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }

    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline Image& WithVirtualizationType(const VirtualizationType& value) { SetVirtualizationType(value); return *this;}

    /**
     * <p>The type of virtualization of the AMI.</p>
     */
    inline Image& WithVirtualizationType(VirtualizationType&& value) { SetVirtualizationType(std::move(value)); return *this;}


    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BootModeValues& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }

    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetBootMode(const BootModeValues& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }

    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetBootMode(BootModeValues&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }

    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithBootMode(const BootModeValues& value) { SetBootMode(value); return *this;}

    /**
     * <p>The boot mode of the image. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ami-boot.html">Boot
     * modes</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithBootMode(BootModeValues&& value) { SetBootMode(std::move(value)); return *this;}


    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const TpmSupportValues& GetTpmSupport() const{ return m_tpmSupport; }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool TpmSupportHasBeenSet() const { return m_tpmSupportHasBeenSet; }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTpmSupport(const TpmSupportValues& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = value; }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetTpmSupport(TpmSupportValues&& value) { m_tpmSupportHasBeenSet = true; m_tpmSupport = std::move(value); }

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithTpmSupport(const TpmSupportValues& value) { SetTpmSupport(value); return *this;}

    /**
     * <p>If the image is configured for NitroTPM support, the value is
     * <code>v2.0</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitrotpm.html">NitroTPM</a>
     * in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithTpmSupport(TpmSupportValues&& value) { SetTpmSupport(std::move(value)); return *this;}


    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline const Aws::String& GetDeprecationTime() const{ return m_deprecationTime; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline void SetDeprecationTime(const Aws::String& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = value; }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline void SetDeprecationTime(Aws::String&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::move(value); }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline void SetDeprecationTime(const char* value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime.assign(value); }

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline Image& WithDeprecationTime(const Aws::String& value) { SetDeprecationTime(value); return *this;}

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline Image& WithDeprecationTime(Aws::String&& value) { SetDeprecationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time to deprecate the AMI, in UTC, in the following format:
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z. If you specified
     * a value for seconds, Amazon EC2 rounds the seconds to the nearest minute.</p>
     */
    inline Image& WithDeprecationTime(const char* value) { SetDeprecationTime(value); return *this;}


    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const ImdsSupportValues& GetImdsSupport() const{ return m_imdsSupport; }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool ImdsSupportHasBeenSet() const { return m_imdsSupportHasBeenSet; }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetImdsSupport(const ImdsSupportValues& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = value; }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetImdsSupport(ImdsSupportValues&& value) { m_imdsSupportHasBeenSet = true; m_imdsSupport = std::move(value); }

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithImdsSupport(const ImdsSupportValues& value) { SetImdsSupport(value); return *this;}

    /**
     * <p>If <code>v2.0</code>, it indicates that IMDSv2 is specified in the AMI.
     * Instances launched from this AMI will have <code>HttpTokens</code> automatically
     * set to <code>required</code> so that, by default, the instance requires that
     * IMDSv2 is used when requesting instance metadata. In addition,
     * <code>HttpPutResponseHopLimit</code> is set to <code>2</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/configuring-IMDS-new-instances.html#configure-IMDS-new-instances-ami-configuration">Configure
     * the AMI</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline Image& WithImdsSupport(ImdsSupportValues&& value) { SetImdsSupport(std::move(value)); return *this;}

  private:

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet = false;

    ImageTypeValues m_imageType;
    bool m_imageTypeHasBeenSet = false;

    bool m_public;
    bool m_publicHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    PlatformValues m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_platformDetails;
    bool m_platformDetailsHasBeenSet = false;

    Aws::String m_usageOperation;
    bool m_usageOperationHasBeenSet = false;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet = false;

    HypervisorType m_hypervisor;
    bool m_hypervisorHasBeenSet = false;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet = false;

    DeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet = false;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    BootModeValues m_bootMode;
    bool m_bootModeHasBeenSet = false;

    TpmSupportValues m_tpmSupport;
    bool m_tpmSupportHasBeenSet = false;

    Aws::String m_deprecationTime;
    bool m_deprecationTimeHasBeenSet = false;

    ImdsSupportValues m_imdsSupport;
    bool m_imdsSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
