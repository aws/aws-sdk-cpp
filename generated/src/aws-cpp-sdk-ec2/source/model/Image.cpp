/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Image::Image(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Image& Image::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode platformDetailsNode = resultNode.FirstChild("platformDetails");
    if(!platformDetailsNode.IsNull())
    {
      m_platformDetails = Aws::Utils::Xml::DecodeEscapedXmlText(platformDetailsNode.GetText());
      m_platformDetailsHasBeenSet = true;
    }
    XmlNode usageOperationNode = resultNode.FirstChild("usageOperation");
    if(!usageOperationNode.IsNull())
    {
      m_usageOperation = Aws::Utils::Xml::DecodeEscapedXmlText(usageOperationNode.GetText());
      m_usageOperationHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      m_blockDeviceMappingsHasBeenSet = !blockDeviceMappingsMember.IsNull();
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
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode enaSupportNode = resultNode.FirstChild("enaSupport");
    if(!enaSupportNode.IsNull())
    {
      m_enaSupport = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSupportNode.GetText()).c_str()).c_str());
      m_enaSupportHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = HypervisorTypeMapper::GetHypervisorTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hypervisorNode.GetText()).c_str()));
      m_hypervisorHasBeenSet = true;
    }
    XmlNode imageOwnerAliasNode = resultNode.FirstChild("imageOwnerAlias");
    if(!imageOwnerAliasNode.IsNull())
    {
      m_imageOwnerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(imageOwnerAliasNode.GetText());
      m_imageOwnerAliasHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode rootDeviceNameNode = resultNode.FirstChild("rootDeviceName");
    if(!rootDeviceNameNode.IsNull())
    {
      m_rootDeviceName = Aws::Utils::Xml::DecodeEscapedXmlText(rootDeviceNameNode.GetText());
      m_rootDeviceNameHasBeenSet = true;
    }
    XmlNode rootDeviceTypeNode = resultNode.FirstChild("rootDeviceType");
    if(!rootDeviceTypeNode.IsNull())
    {
      m_rootDeviceType = DeviceTypeMapper::GetDeviceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rootDeviceTypeNode.GetText()).c_str()));
      m_rootDeviceTypeHasBeenSet = true;
    }
    XmlNode sriovNetSupportNode = resultNode.FirstChild("sriovNetSupport");
    if(!sriovNetSupportNode.IsNull())
    {
      m_sriovNetSupport = Aws::Utils::Xml::DecodeEscapedXmlText(sriovNetSupportNode.GetText());
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
      m_tagsHasBeenSet = !tagsMember.IsNull();
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
      m_virtualizationType = VirtualizationTypeMapper::GetVirtualizationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(virtualizationTypeNode.GetText()).c_str()));
      m_virtualizationTypeHasBeenSet = true;
    }
    XmlNode bootModeNode = resultNode.FirstChild("bootMode");
    if(!bootModeNode.IsNull())
    {
      m_bootMode = BootModeValuesMapper::GetBootModeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bootModeNode.GetText()).c_str()));
      m_bootModeHasBeenSet = true;
    }
    XmlNode tpmSupportNode = resultNode.FirstChild("tpmSupport");
    if(!tpmSupportNode.IsNull())
    {
      m_tpmSupport = TpmSupportValuesMapper::GetTpmSupportValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tpmSupportNode.GetText()).c_str()));
      m_tpmSupportHasBeenSet = true;
    }
    XmlNode deprecationTimeNode = resultNode.FirstChild("deprecationTime");
    if(!deprecationTimeNode.IsNull())
    {
      m_deprecationTime = Aws::Utils::Xml::DecodeEscapedXmlText(deprecationTimeNode.GetText());
      m_deprecationTimeHasBeenSet = true;
    }
    XmlNode imdsSupportNode = resultNode.FirstChild("imdsSupport");
    if(!imdsSupportNode.IsNull())
    {
      m_imdsSupport = ImdsSupportValuesMapper::GetImdsSupportValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(imdsSupportNode.GetText()).c_str()));
      m_imdsSupportHasBeenSet = true;
    }
    XmlNode sourceInstanceIdNode = resultNode.FirstChild("sourceInstanceId");
    if(!sourceInstanceIdNode.IsNull())
    {
      m_sourceInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceInstanceIdNode.GetText());
      m_sourceInstanceIdHasBeenSet = true;
    }
    XmlNode deregistrationProtectionNode = resultNode.FirstChild("deregistrationProtection");
    if(!deregistrationProtectionNode.IsNull())
    {
      m_deregistrationProtection = Aws::Utils::Xml::DecodeEscapedXmlText(deregistrationProtectionNode.GetText());
      m_deregistrationProtectionHasBeenSet = true;
    }
    XmlNode lastLaunchedTimeNode = resultNode.FirstChild("lastLaunchedTime");
    if(!lastLaunchedTimeNode.IsNull())
    {
      m_lastLaunchedTime = Aws::Utils::Xml::DecodeEscapedXmlText(lastLaunchedTimeNode.GetText());
      m_lastLaunchedTimeHasBeenSet = true;
    }
    XmlNode imageAllowedNode = resultNode.FirstChild("imageAllowed");
    if(!imageAllowedNode.IsNull())
    {
      m_imageAllowed = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(imageAllowedNode.GetText()).c_str()).c_str());
      m_imageAllowedHasBeenSet = true;
    }
    XmlNode sourceImageIdNode = resultNode.FirstChild("sourceImageId");
    if(!sourceImageIdNode.IsNull())
    {
      m_sourceImageId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageIdNode.GetText());
      m_sourceImageIdHasBeenSet = true;
    }
    XmlNode sourceImageRegionNode = resultNode.FirstChild("sourceImageRegion");
    if(!sourceImageRegionNode.IsNull())
    {
      m_sourceImageRegion = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageRegionNode.GetText());
      m_sourceImageRegionHasBeenSet = true;
    }
    XmlNode freeTierEligibleNode = resultNode.FirstChild("freeTierEligible");
    if(!freeTierEligibleNode.IsNull())
    {
      m_freeTierEligible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(freeTierEligibleNode.GetText()).c_str()).c_str());
      m_freeTierEligibleHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode imageLocationNode = resultNode.FirstChild("imageLocation");
    if(!imageLocationNode.IsNull())
    {
      m_imageLocation = Aws::Utils::Xml::DecodeEscapedXmlText(imageLocationNode.GetText());
      m_imageLocationHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("imageState");
    if(!stateNode.IsNull())
    {
      m_state = ImageStateMapper::GetImageStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("imageOwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("creationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText());
      m_creationDateHasBeenSet = true;
    }
    XmlNode publicNode = resultNode.FirstChild("isPublic");
    if(!publicNode.IsNull())
    {
      m_public = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publicNode.GetText()).c_str()).c_str());
      m_publicHasBeenSet = true;
    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      m_productCodesHasBeenSet = !productCodesMember.IsNull();
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

      m_productCodesHasBeenSet = true;
    }
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = ArchitectureValuesMapper::GetArchitectureValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText()).c_str()));
      m_architectureHasBeenSet = true;
    }
    XmlNode imageTypeNode = resultNode.FirstChild("imageType");
    if(!imageTypeNode.IsNull())
    {
      m_imageType = ImageTypeValuesMapper::GetImageTypeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(imageTypeNode.GetText()).c_str()));
      m_imageTypeHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = Aws::Utils::Xml::DecodeEscapedXmlText(kernelIdNode.GetText());
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdiskId");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = Aws::Utils::Xml::DecodeEscapedXmlText(ramdiskIdNode.GetText());
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = PlatformValuesMapper::GetPlatformValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText()).c_str()));
      m_platformHasBeenSet = true;
    }
  }

  return *this;
}

void Image::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_platformDetailsHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformDetails=" << StringUtils::URLEncode(m_platformDetails.c_str()) << "&";
  }

  if(m_usageOperationHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageOperation=" << StringUtils::URLEncode(m_usageOperation.c_str()) << "&";
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
      oStream << location << index << locationValue << ".Hypervisor=" << StringUtils::URLEncode(HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor)) << "&";
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
      oStream << location << index << locationValue << ".RootDeviceType=" << StringUtils::URLEncode(DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType)) << "&";
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
      oStream << location << index << locationValue << ".VirtualizationType=" << StringUtils::URLEncode(VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType)) << "&";
  }

  if(m_bootModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }

  if(m_tpmSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".TpmSupport=" << StringUtils::URLEncode(TpmSupportValuesMapper::GetNameForTpmSupportValues(m_tpmSupport)) << "&";
  }

  if(m_deprecationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeprecationTime=" << StringUtils::URLEncode(m_deprecationTime.c_str()) << "&";
  }

  if(m_imdsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImdsSupport=" << StringUtils::URLEncode(ImdsSupportValuesMapper::GetNameForImdsSupportValues(m_imdsSupport)) << "&";
  }

  if(m_sourceInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceInstanceId=" << StringUtils::URLEncode(m_sourceInstanceId.c_str()) << "&";
  }

  if(m_deregistrationProtectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeregistrationProtection=" << StringUtils::URLEncode(m_deregistrationProtection.c_str()) << "&";
  }

  if(m_lastLaunchedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastLaunchedTime=" << StringUtils::URLEncode(m_lastLaunchedTime.c_str()) << "&";
  }

  if(m_imageAllowedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageAllowed=" << std::boolalpha << m_imageAllowed << "&";
  }

  if(m_sourceImageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }

  if(m_sourceImageRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }

  if(m_freeTierEligibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".FreeTierEligible=" << std::boolalpha << m_freeTierEligible << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_imageLocationHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(ImageStateMapper::GetNameForImageState(m_state)) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }

  if(m_publicHasBeenSet)
  {
      oStream << location << index << locationValue << ".Public=" << std::boolalpha << m_public << "&";
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

  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << StringUtils::URLEncode(ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture)) << "&";
  }

  if(m_imageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageType=" << StringUtils::URLEncode(ImageTypeValuesMapper::GetNameForImageTypeValues(m_imageType)) << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(PlatformValuesMapper::GetNameForPlatformValues(m_platform)) << "&";
  }

}

void Image::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_platformDetailsHasBeenSet)
  {
      oStream << location << ".PlatformDetails=" << StringUtils::URLEncode(m_platformDetails.c_str()) << "&";
  }
  if(m_usageOperationHasBeenSet)
  {
      oStream << location << ".UsageOperation=" << StringUtils::URLEncode(m_usageOperation.c_str()) << "&";
  }
  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location << ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
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
      oStream << location << ".Hypervisor=" << StringUtils::URLEncode(HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor)) << "&";
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
      oStream << location << ".RootDeviceType=" << StringUtils::URLEncode(DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType)) << "&";
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
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << ".VirtualizationType=" << StringUtils::URLEncode(VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType)) << "&";
  }
  if(m_bootModeHasBeenSet)
  {
      oStream << location << ".BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }
  if(m_tpmSupportHasBeenSet)
  {
      oStream << location << ".TpmSupport=" << StringUtils::URLEncode(TpmSupportValuesMapper::GetNameForTpmSupportValues(m_tpmSupport)) << "&";
  }
  if(m_deprecationTimeHasBeenSet)
  {
      oStream << location << ".DeprecationTime=" << StringUtils::URLEncode(m_deprecationTime.c_str()) << "&";
  }
  if(m_imdsSupportHasBeenSet)
  {
      oStream << location << ".ImdsSupport=" << StringUtils::URLEncode(ImdsSupportValuesMapper::GetNameForImdsSupportValues(m_imdsSupport)) << "&";
  }
  if(m_sourceInstanceIdHasBeenSet)
  {
      oStream << location << ".SourceInstanceId=" << StringUtils::URLEncode(m_sourceInstanceId.c_str()) << "&";
  }
  if(m_deregistrationProtectionHasBeenSet)
  {
      oStream << location << ".DeregistrationProtection=" << StringUtils::URLEncode(m_deregistrationProtection.c_str()) << "&";
  }
  if(m_lastLaunchedTimeHasBeenSet)
  {
      oStream << location << ".LastLaunchedTime=" << StringUtils::URLEncode(m_lastLaunchedTime.c_str()) << "&";
  }
  if(m_imageAllowedHasBeenSet)
  {
      oStream << location << ".ImageAllowed=" << std::boolalpha << m_imageAllowed << "&";
  }
  if(m_sourceImageIdHasBeenSet)
  {
      oStream << location << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }
  if(m_sourceImageRegionHasBeenSet)
  {
      oStream << location << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }
  if(m_freeTierEligibleHasBeenSet)
  {
      oStream << location << ".FreeTierEligible=" << std::boolalpha << m_freeTierEligible << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_imageLocationHasBeenSet)
  {
      oStream << location << ".ImageLocation=" << StringUtils::URLEncode(m_imageLocation.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(ImageStateMapper::GetNameForImageState(m_state)) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.c_str()) << "&";
  }
  if(m_publicHasBeenSet)
  {
      oStream << location << ".Public=" << std::boolalpha << m_public << "&";
  }
  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location << ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << StringUtils::URLEncode(ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture)) << "&";
  }
  if(m_imageTypeHasBeenSet)
  {
      oStream << location << ".ImageType=" << StringUtils::URLEncode(ImageTypeValuesMapper::GetNameForImageTypeValues(m_imageType)) << "&";
  }
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }
  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(PlatformValuesMapper::GetNameForPlatformValues(m_platform)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
