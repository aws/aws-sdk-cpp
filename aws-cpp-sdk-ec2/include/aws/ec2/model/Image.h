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
  class AWS_EC2_API Image
  {
  public:
    Image();
    Image(const Aws::Utils::Xml::XmlNode& xmlNode);
    Image& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The AWS account ID of the image owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline Image& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline Image& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the image owner.</p>
     */
    inline Image& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline const PlatformValues& GetPlatform() const{ return m_platform; }

    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline void SetPlatform(const PlatformValues& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline void SetPlatform(PlatformValues&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline Image& WithPlatform(const PlatformValues& value) { SetPlatform(value); return *this;}

    /**
     * <p>This value is set for Windows AMIs; otherwise, it is blank.</p>
     */
    inline Image& WithPlatform(PlatformValues&& value) { SetPlatform(std::move(value)); return *this;}


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
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline const Aws::String& GetImageOwnerAlias() const{ return m_imageOwnerAlias; }

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline bool ImageOwnerAliasHasBeenSet() const { return m_imageOwnerAliasHasBeenSet; }

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(const Aws::String& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = value; }

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(Aws::String&& value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias = std::move(value); }

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline void SetImageOwnerAlias(const char* value) { m_imageOwnerAliasHasBeenSet = true; m_imageOwnerAlias.assign(value); }

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline Image& WithImageOwnerAlias(const Aws::String& value) { SetImageOwnerAlias(value); return *this;}

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
     */
    inline Image& WithImageOwnerAlias(Aws::String&& value) { SetImageOwnerAlias(std::move(value)); return *this;}

    /**
     * <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>)
     * or the AWS account ID of the AMI owner.</p>
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
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline const DeviceType& GetRootDeviceType() const{ return m_rootDeviceType; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline bool RootDeviceTypeHasBeenSet() const { return m_rootDeviceTypeHasBeenSet; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline void SetRootDeviceType(const DeviceType& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = value; }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline void SetRootDeviceType(DeviceType&& value) { m_rootDeviceTypeHasBeenSet = true; m_rootDeviceType = std::move(value); }

    /**
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
     */
    inline Image& WithRootDeviceType(const DeviceType& value) { SetRootDeviceType(value); return *this;}

    /**
     * <p>The type of root device used by the AMI. The AMI can use an EBS volume or an
     * instance store volume.</p>
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

  private:

    ArchitectureValues m_architecture;
    bool m_architectureHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_imageLocation;
    bool m_imageLocationHasBeenSet;

    ImageTypeValues m_imageType;
    bool m_imageTypeHasBeenSet;

    bool m_public;
    bool m_publicHasBeenSet;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    PlatformValues m_platform;
    bool m_platformHasBeenSet;

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet;

    ImageState m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_enaSupport;
    bool m_enaSupportHasBeenSet;

    HypervisorType m_hypervisor;
    bool m_hypervisorHasBeenSet;

    Aws::String m_imageOwnerAlias;
    bool m_imageOwnerAliasHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_rootDeviceName;
    bool m_rootDeviceNameHasBeenSet;

    DeviceType m_rootDeviceType;
    bool m_rootDeviceTypeHasBeenSet;

    Aws::String m_sriovNetSupport;
    bool m_sriovNetSupportHasBeenSet;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    VirtualizationType m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
