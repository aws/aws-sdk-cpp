/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPool.h>
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

IpamPool::IpamPool() : 
    m_ownerIdHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_sourceIpamPoolIdHasBeenSet(false),
    m_ipamPoolArnHasBeenSet(false),
    m_ipamScopeArnHasBeenSet(false),
    m_ipamScopeType(IpamScopeType::NOT_SET),
    m_ipamScopeTypeHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_poolDepth(0),
    m_poolDepthHasBeenSet(false),
    m_state(IpamPoolState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoImport(false),
    m_autoImportHasBeenSet(false),
    m_publiclyAdvertisable(false),
    m_publiclyAdvertisableHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_allocationMinNetmaskLength(0),
    m_allocationMinNetmaskLengthHasBeenSet(false),
    m_allocationMaxNetmaskLength(0),
    m_allocationMaxNetmaskLengthHasBeenSet(false),
    m_allocationDefaultNetmaskLength(0),
    m_allocationDefaultNetmaskLengthHasBeenSet(false),
    m_allocationResourceTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_awsService(IpamPoolAwsService::NOT_SET),
    m_awsServiceHasBeenSet(false),
    m_publicIpSource(IpamPoolPublicIpSource::NOT_SET),
    m_publicIpSourceHasBeenSet(false),
    m_sourceResourceHasBeenSet(false)
{
}

IpamPool::IpamPool(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_sourceIpamPoolIdHasBeenSet(false),
    m_ipamPoolArnHasBeenSet(false),
    m_ipamScopeArnHasBeenSet(false),
    m_ipamScopeType(IpamScopeType::NOT_SET),
    m_ipamScopeTypeHasBeenSet(false),
    m_ipamArnHasBeenSet(false),
    m_ipamRegionHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_poolDepth(0),
    m_poolDepthHasBeenSet(false),
    m_state(IpamPoolState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoImport(false),
    m_autoImportHasBeenSet(false),
    m_publiclyAdvertisable(false),
    m_publiclyAdvertisableHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_allocationMinNetmaskLength(0),
    m_allocationMinNetmaskLengthHasBeenSet(false),
    m_allocationMaxNetmaskLength(0),
    m_allocationMaxNetmaskLengthHasBeenSet(false),
    m_allocationDefaultNetmaskLength(0),
    m_allocationDefaultNetmaskLengthHasBeenSet(false),
    m_allocationResourceTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_awsService(IpamPoolAwsService::NOT_SET),
    m_awsServiceHasBeenSet(false),
    m_publicIpSource(IpamPoolPublicIpSource::NOT_SET),
    m_publicIpSourceHasBeenSet(false),
    m_sourceResourceHasBeenSet(false)
{
  *this = xmlNode;
}

IpamPool& IpamPool::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ipamPoolIdNode = resultNode.FirstChild("ipamPoolId");
    if(!ipamPoolIdNode.IsNull())
    {
      m_ipamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolIdNode.GetText());
      m_ipamPoolIdHasBeenSet = true;
    }
    XmlNode sourceIpamPoolIdNode = resultNode.FirstChild("sourceIpamPoolId");
    if(!sourceIpamPoolIdNode.IsNull())
    {
      m_sourceIpamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceIpamPoolIdNode.GetText());
      m_sourceIpamPoolIdHasBeenSet = true;
    }
    XmlNode ipamPoolArnNode = resultNode.FirstChild("ipamPoolArn");
    if(!ipamPoolArnNode.IsNull())
    {
      m_ipamPoolArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolArnNode.GetText());
      m_ipamPoolArnHasBeenSet = true;
    }
    XmlNode ipamScopeArnNode = resultNode.FirstChild("ipamScopeArn");
    if(!ipamScopeArnNode.IsNull())
    {
      m_ipamScopeArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeArnNode.GetText());
      m_ipamScopeArnHasBeenSet = true;
    }
    XmlNode ipamScopeTypeNode = resultNode.FirstChild("ipamScopeType");
    if(!ipamScopeTypeNode.IsNull())
    {
      m_ipamScopeType = IpamScopeTypeMapper::GetIpamScopeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeTypeNode.GetText()).c_str()).c_str());
      m_ipamScopeTypeHasBeenSet = true;
    }
    XmlNode ipamArnNode = resultNode.FirstChild("ipamArn");
    if(!ipamArnNode.IsNull())
    {
      m_ipamArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamArnNode.GetText());
      m_ipamArnHasBeenSet = true;
    }
    XmlNode ipamRegionNode = resultNode.FirstChild("ipamRegion");
    if(!ipamRegionNode.IsNull())
    {
      m_ipamRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamRegionNode.GetText());
      m_ipamRegionHasBeenSet = true;
    }
    XmlNode localeNode = resultNode.FirstChild("locale");
    if(!localeNode.IsNull())
    {
      m_locale = Aws::Utils::Xml::DecodeEscapedXmlText(localeNode.GetText());
      m_localeHasBeenSet = true;
    }
    XmlNode poolDepthNode = resultNode.FirstChild("poolDepth");
    if(!poolDepthNode.IsNull())
    {
      m_poolDepth = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(poolDepthNode.GetText()).c_str()).c_str());
      m_poolDepthHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamPoolStateMapper::GetIpamPoolStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode autoImportNode = resultNode.FirstChild("autoImport");
    if(!autoImportNode.IsNull())
    {
      m_autoImport = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoImportNode.GetText()).c_str()).c_str());
      m_autoImportHasBeenSet = true;
    }
    XmlNode publiclyAdvertisableNode = resultNode.FirstChild("publiclyAdvertisable");
    if(!publiclyAdvertisableNode.IsNull())
    {
      m_publiclyAdvertisable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publiclyAdvertisableNode.GetText()).c_str()).c_str());
      m_publiclyAdvertisableHasBeenSet = true;
    }
    XmlNode addressFamilyNode = resultNode.FirstChild("addressFamily");
    if(!addressFamilyNode.IsNull())
    {
      m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(addressFamilyNode.GetText()).c_str()).c_str());
      m_addressFamilyHasBeenSet = true;
    }
    XmlNode allocationMinNetmaskLengthNode = resultNode.FirstChild("allocationMinNetmaskLength");
    if(!allocationMinNetmaskLengthNode.IsNull())
    {
      m_allocationMinNetmaskLength = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationMinNetmaskLengthNode.GetText()).c_str()).c_str());
      m_allocationMinNetmaskLengthHasBeenSet = true;
    }
    XmlNode allocationMaxNetmaskLengthNode = resultNode.FirstChild("allocationMaxNetmaskLength");
    if(!allocationMaxNetmaskLengthNode.IsNull())
    {
      m_allocationMaxNetmaskLength = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationMaxNetmaskLengthNode.GetText()).c_str()).c_str());
      m_allocationMaxNetmaskLengthHasBeenSet = true;
    }
    XmlNode allocationDefaultNetmaskLengthNode = resultNode.FirstChild("allocationDefaultNetmaskLength");
    if(!allocationDefaultNetmaskLengthNode.IsNull())
    {
      m_allocationDefaultNetmaskLength = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationDefaultNetmaskLengthNode.GetText()).c_str()).c_str());
      m_allocationDefaultNetmaskLengthHasBeenSet = true;
    }
    XmlNode allocationResourceTagsNode = resultNode.FirstChild("allocationResourceTagSet");
    if(!allocationResourceTagsNode.IsNull())
    {
      XmlNode allocationResourceTagsMember = allocationResourceTagsNode.FirstChild("item");
      while(!allocationResourceTagsMember.IsNull())
      {
        m_allocationResourceTags.push_back(allocationResourceTagsMember);
        allocationResourceTagsMember = allocationResourceTagsMember.NextNode("item");
      }

      m_allocationResourceTagsHasBeenSet = true;
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
    XmlNode awsServiceNode = resultNode.FirstChild("awsService");
    if(!awsServiceNode.IsNull())
    {
      m_awsService = IpamPoolAwsServiceMapper::GetIpamPoolAwsServiceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(awsServiceNode.GetText()).c_str()).c_str());
      m_awsServiceHasBeenSet = true;
    }
    XmlNode publicIpSourceNode = resultNode.FirstChild("publicIpSource");
    if(!publicIpSourceNode.IsNull())
    {
      m_publicIpSource = IpamPoolPublicIpSourceMapper::GetIpamPoolPublicIpSourceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publicIpSourceNode.GetText()).c_str()).c_str());
      m_publicIpSourceHasBeenSet = true;
    }
    XmlNode sourceResourceNode = resultNode.FirstChild("sourceResource");
    if(!sourceResourceNode.IsNull())
    {
      m_sourceResource = sourceResourceNode;
      m_sourceResourceHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPool::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_sourceIpamPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceIpamPoolId=" << StringUtils::URLEncode(m_sourceIpamPoolId.c_str()) << "&";
  }

  if(m_ipamPoolArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamPoolArn=" << StringUtils::URLEncode(m_ipamPoolArn.c_str()) << "&";
  }

  if(m_ipamScopeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeArn=" << StringUtils::URLEncode(m_ipamScopeArn.c_str()) << "&";
  }

  if(m_ipamScopeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeType=" << IpamScopeTypeMapper::GetNameForIpamScopeType(m_ipamScopeType) << "&";
  }

  if(m_ipamArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }

  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if(m_localeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  if(m_poolDepthHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolDepth=" << m_poolDepth << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamPoolStateMapper::GetNameForIpamPoolState(m_state) << "&";
  }

  if(m_stateMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_autoImportHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoImport=" << std::boolalpha << m_autoImport << "&";
  }

  if(m_publiclyAdvertisableHasBeenSet)
  {
      oStream << location << index << locationValue << ".PubliclyAdvertisable=" << std::boolalpha << m_publiclyAdvertisable << "&";
  }

  if(m_addressFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressFamily=" << AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily) << "&";
  }

  if(m_allocationMinNetmaskLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationMinNetmaskLength=" << m_allocationMinNetmaskLength << "&";
  }

  if(m_allocationMaxNetmaskLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationMaxNetmaskLength=" << m_allocationMaxNetmaskLength << "&";
  }

  if(m_allocationDefaultNetmaskLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationDefaultNetmaskLength=" << m_allocationDefaultNetmaskLength << "&";
  }

  if(m_allocationResourceTagsHasBeenSet)
  {
      unsigned allocationResourceTagsIdx = 1;
      for(auto& item : m_allocationResourceTags)
      {
        Aws::StringStream allocationResourceTagsSs;
        allocationResourceTagsSs << location << index << locationValue << ".AllocationResourceTagSet." << allocationResourceTagsIdx++;
        item.OutputToStream(oStream, allocationResourceTagsSs.str().c_str());
      }
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

  if(m_awsServiceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsService=" << IpamPoolAwsServiceMapper::GetNameForIpamPoolAwsService(m_awsService) << "&";
  }

  if(m_publicIpSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIpSource=" << IpamPoolPublicIpSourceMapper::GetNameForIpamPoolPublicIpSource(m_publicIpSource) << "&";
  }

  if(m_sourceResourceHasBeenSet)
  {
      Aws::StringStream sourceResourceLocationAndMemberSs;
      sourceResourceLocationAndMemberSs << location << index << locationValue << ".SourceResource";
      m_sourceResource.OutputToStream(oStream, sourceResourceLocationAndMemberSs.str().c_str());
  }

}

void IpamPool::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ipamPoolIdHasBeenSet)
  {
      oStream << location << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }
  if(m_sourceIpamPoolIdHasBeenSet)
  {
      oStream << location << ".SourceIpamPoolId=" << StringUtils::URLEncode(m_sourceIpamPoolId.c_str()) << "&";
  }
  if(m_ipamPoolArnHasBeenSet)
  {
      oStream << location << ".IpamPoolArn=" << StringUtils::URLEncode(m_ipamPoolArn.c_str()) << "&";
  }
  if(m_ipamScopeArnHasBeenSet)
  {
      oStream << location << ".IpamScopeArn=" << StringUtils::URLEncode(m_ipamScopeArn.c_str()) << "&";
  }
  if(m_ipamScopeTypeHasBeenSet)
  {
      oStream << location << ".IpamScopeType=" << IpamScopeTypeMapper::GetNameForIpamScopeType(m_ipamScopeType) << "&";
  }
  if(m_ipamArnHasBeenSet)
  {
      oStream << location << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }
  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if(m_localeHasBeenSet)
  {
      oStream << location << ".Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }
  if(m_poolDepthHasBeenSet)
  {
      oStream << location << ".PoolDepth=" << m_poolDepth << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamPoolStateMapper::GetNameForIpamPoolState(m_state) << "&";
  }
  if(m_stateMessageHasBeenSet)
  {
      oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_autoImportHasBeenSet)
  {
      oStream << location << ".AutoImport=" << std::boolalpha << m_autoImport << "&";
  }
  if(m_publiclyAdvertisableHasBeenSet)
  {
      oStream << location << ".PubliclyAdvertisable=" << std::boolalpha << m_publiclyAdvertisable << "&";
  }
  if(m_addressFamilyHasBeenSet)
  {
      oStream << location << ".AddressFamily=" << AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily) << "&";
  }
  if(m_allocationMinNetmaskLengthHasBeenSet)
  {
      oStream << location << ".AllocationMinNetmaskLength=" << m_allocationMinNetmaskLength << "&";
  }
  if(m_allocationMaxNetmaskLengthHasBeenSet)
  {
      oStream << location << ".AllocationMaxNetmaskLength=" << m_allocationMaxNetmaskLength << "&";
  }
  if(m_allocationDefaultNetmaskLengthHasBeenSet)
  {
      oStream << location << ".AllocationDefaultNetmaskLength=" << m_allocationDefaultNetmaskLength << "&";
  }
  if(m_allocationResourceTagsHasBeenSet)
  {
      unsigned allocationResourceTagsIdx = 1;
      for(auto& item : m_allocationResourceTags)
      {
        Aws::StringStream allocationResourceTagsSs;
        allocationResourceTagsSs << location <<  ".AllocationResourceTagSet." << allocationResourceTagsIdx++;
        item.OutputToStream(oStream, allocationResourceTagsSs.str().c_str());
      }
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
  if(m_awsServiceHasBeenSet)
  {
      oStream << location << ".AwsService=" << IpamPoolAwsServiceMapper::GetNameForIpamPoolAwsService(m_awsService) << "&";
  }
  if(m_publicIpSourceHasBeenSet)
  {
      oStream << location << ".PublicIpSource=" << IpamPoolPublicIpSourceMapper::GetNameForIpamPoolPublicIpSource(m_publicIpSource) << "&";
  }
  if(m_sourceResourceHasBeenSet)
  {
      Aws::String sourceResourceLocationAndMember(location);
      sourceResourceLocationAndMember += ".SourceResource";
      m_sourceResource.OutputToStream(oStream, sourceResourceLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
