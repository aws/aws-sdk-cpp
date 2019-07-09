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

#include <aws/ec2/model/Image.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

Image::Image() : 
    m_architecture(ArchitectureValues::NOT_SET),
    m_architectureHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageLocationHasBeenSet(false),
    m_imageType(ImageTypeValues::NOT_SET),
    m_imageTypeHasBeenSet(false),
    m_public(false),
    m_publicHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_state(ImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enaSupport(false),
    m_enaSupportHasBeenSet(false),
    m_hypervisor(HypervisorType::NOT_SET),
    m_hypervisorHasBeenSet(false),
    m_imageOwnerAliasHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rootDeviceNameHasBeenSet(false),
    m_rootDeviceType(DeviceType::NOT_SET),
    m_rootDeviceTypeHasBeenSet(false),
    m_sriovNetSupportHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_virtualizationType(VirtualizationType::NOT_SET),
    m_virtualizationTypeHasBeenSet(false)
{
}

Image::Image(const XmlNode& xmlNode) : 
    m_architecture(ArchitectureValues::NOT_SET),
    m_architectureHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageLocationHasBeenSet(false),
    m_imageType(ImageTypeValues::NOT_SET),
    m_imageTypeHasBeenSet(false),
    m_public(false),
    m_publicHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_state(ImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enaSupport(false),
    m_enaSupportHasBeenSet(false),
    m_hypervisor(HypervisorType::NOT_SET),
    m_hypervisorHasBeenSet(false),
    m_imageOwnerAliasHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rootDeviceNameHasBeenSet(false),
    m_rootDeviceType(DeviceType::NOT_SET),
    m_rootDeviceTypeHasBeenSet(false),
    m_sriovNetSupportHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_virtualizationType(VirtualizationType::NOT_SET),
    m_virtualizationTypeHasBeenSet(false)
{
  *this = xmlNode;
}

Image& Image::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = ArchitectureValuesMapper::GetArchitectureValuesForName(StringUtils::Trim(architectureNode.GetText().c_str()).c_str());
      m_architectureHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("creationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = creationDateNode.GetText();
      m_creationDateHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
      m_imageIdHasBeenSet = true;
    }
    XmlNode imageLocationNode = resultNode.FirstChild("imageLocation");
    if(!imageLocationNode.IsNull())
    {
      m_imageLocation = imageLocationNode.GetText();
      m_imageLocationHasBeenSet = true;
    }
    XmlNode imageTypeNode = resultNode.FirstChild("imageType");
    if(!imageTypeNode.IsNull())
    {
      m_imageType = ImageTypeValuesMapper::GetImageTypeValuesForName(StringUtils::Trim(imageTypeNode.GetText().c_str()).c_str());
      m_imageTypeHasBeenSet = true;
    }
    XmlNode publicNode = resultNode.FirstChild("isPublic");
    if(!publicNode.IsNull())
    {
      m_public = StringUtils::ConvertToBool(StringUtils::Trim(publicNode.GetText().c_str()).c_str());
      m_publicHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode.GetText();
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("imageOwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = PlatformValuesMapper::GetPlatformValuesForName(StringUtils::Trim(platformNode.GetText().c_str()).c_str());
      m_platformHasBeenSet = true;
    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

      m_productCodesHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdiskId");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = ramdiskIdNode.GetText();
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("imageState");
    if(!stateNode.IsNull())
    {
      m_state = ImageStateMapper::GetImageStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("item");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode enaSupportNode = resultNode.FirstChild("enaSupport");
    if(!enaSupportNode.IsNull())
    {
      m_enaSupport = StringUtils::ConvertToBool(StringUtils::Trim(enaSupportNode.GetText().c_str()).c_str());
      m_enaSupportHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = HypervisorTypeMapper::GetHypervisorTypeForName(StringUtils::Trim(hypervisorNode.GetText().c_str()).c_str());
      m_hypervisorHasBeenSet = true;
    }
    XmlNode imageOwnerAliasNode = resultNode.FirstChild("imageOwnerAlias");
    if(!imageOwnerAliasNode.IsNull())
    {
      m_imageOwnerAlias = imageOwnerAliasNode.GetText();
      m_imageOwnerAliasHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode rootDeviceNameNode = resultNode.FirstChild("rootDeviceName");
    if(!rootDeviceNameNode.IsNull())
    {
      m_rootDeviceName = rootDeviceNameNode.GetText();
      m_rootDeviceNameHasBeenSet = true;
    }
    XmlNode rootDeviceTypeNode = resultNode.FirstChild("rootDeviceType");
    if(!rootDeviceTypeNode.IsNull())
    {
      m_rootDeviceType = DeviceTypeMapper::GetDeviceTypeForName(StringUtils::Trim(rootDeviceTypeNode.GetText().c_str()).c_str());
      m_rootDeviceTypeHasBeenSet = true;
    }
    XmlNode sriovNetSupportNode = resultNode.FirstChild("sriovNetSupport");
    if(!sriovNetSupportNode.IsNull())
    {
      m_sriovNetSupport = sriovNetSupportNode.GetText();
      m_sriovNetSupportHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = stateReasonNode;
      m_stateReasonHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode virtualizationTypeNode = resultNode.FirstChild("virtualizationType");
    if(!virtualizationTypeNode.IsNull())
    {
      m_virtualizationType = VirtualizationTypeMapper::GetVirtualizationTypeForName(StringUtils::Trim(virtualizationTypeNode.GetText().c_str()).c_str());
      m_virtualizationTypeHasBeenSet = true;
    }
  }

  return *this;
}

void Image::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture) << "&";
  }

  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_imageLocationHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }

  if(m_imageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageType=" << ImageTypeValuesMapper::GetNameForImageTypeValues(m_imageType) << "&";
  }

  if(m_publicHasBeenSet)
  {
      oStream << location << index << locationValue << ".Public=" << std::boolalpha << m_public << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }

  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location << index << locationValue << ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }

  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ImageStateMapper::GetNameForImageState(m_state) << "&";
  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location << index << locationValue << ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_enaSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Hypervisor=" << HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor) << "&";
  }

  if(m_imageOwnerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_rootDeviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }

  if(m_rootDeviceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RootDeviceType=" << DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType) << "&";
  }

  if(m_sriovNetSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      Aws::StringStream stateReasonLocationAndMemberSs;
      stateReasonLocationAndMemberSs << location << index << locationValue << ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMemberSs.str().c_str());
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualizationType=" << VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType) << "&";
  }

}

void Image::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture) << "&";
  }
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_imageLocationHasBeenSet)
  {
      oStream << location << ".ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }
  if(m_imageTypeHasBeenSet)
  {
      oStream << location << ".ImageType=" << ImageTypeValuesMapper::GetNameForImageTypeValues(m_imageType) << "&";
  }
  if(m_publicHasBeenSet)
  {
      oStream << location << ".Public=" << std::boolalpha << m_public << "&";
  }
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }
  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location <<  ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }
  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ImageStateMapper::GetNameForImageState(m_state) << "&";
  }
  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location <<  ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_enaSupportHasBeenSet)
  {
      oStream << location << ".EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }
  if(m_hypervisorHasBeenSet)
  {
      oStream << location << ".Hypervisor=" << HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor) << "&";
  }
  if(m_imageOwnerAliasHasBeenSet)
  {
      oStream << location << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_rootDeviceNameHasBeenSet)
  {
      oStream << location << ".RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }
  if(m_rootDeviceTypeHasBeenSet)
  {
      oStream << location << ".RootDeviceType=" << DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType) << "&";
  }
  if(m_sriovNetSupportHasBeenSet)
  {
      oStream << location << ".SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      Aws::String stateReasonLocationAndMember(location);
      stateReasonLocationAndMember += ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << ".VirtualizationType=" << VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
