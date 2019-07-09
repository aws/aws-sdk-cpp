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

#include <aws/ec2/model/FpgaImage.h>
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

FpgaImage::FpgaImage() : 
    m_fpgaImageIdHasBeenSet(false),
    m_fpgaImageGlobalIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_shellVersionHasBeenSet(false),
    m_pciIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerAliasHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_public(false),
    m_publicHasBeenSet(false),
    m_dataRetentionSupport(false),
    m_dataRetentionSupportHasBeenSet(false)
{
}

FpgaImage::FpgaImage(const XmlNode& xmlNode) : 
    m_fpgaImageIdHasBeenSet(false),
    m_fpgaImageGlobalIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_shellVersionHasBeenSet(false),
    m_pciIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerAliasHasBeenSet(false),
    m_productCodesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_public(false),
    m_publicHasBeenSet(false),
    m_dataRetentionSupport(false),
    m_dataRetentionSupportHasBeenSet(false)
{
  *this = xmlNode;
}

FpgaImage& FpgaImage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fpgaImageIdNode = resultNode.FirstChild("fpgaImageId");
    if(!fpgaImageIdNode.IsNull())
    {
      m_fpgaImageId = fpgaImageIdNode.GetText();
      m_fpgaImageIdHasBeenSet = true;
    }
    XmlNode fpgaImageGlobalIdNode = resultNode.FirstChild("fpgaImageGlobalId");
    if(!fpgaImageGlobalIdNode.IsNull())
    {
      m_fpgaImageGlobalId = fpgaImageGlobalIdNode.GetText();
      m_fpgaImageGlobalIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode shellVersionNode = resultNode.FirstChild("shellVersion");
    if(!shellVersionNode.IsNull())
    {
      m_shellVersion = shellVersionNode.GetText();
      m_shellVersionHasBeenSet = true;
    }
    XmlNode pciIdNode = resultNode.FirstChild("pciId");
    if(!pciIdNode.IsNull())
    {
      m_pciId = pciIdNode;
      m_pciIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = stateNode;
      m_stateHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode updateTimeNode = resultNode.FirstChild("updateTime");
    if(!updateTimeNode.IsNull())
    {
      m_updateTime = DateTime(StringUtils::Trim(updateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_updateTimeHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = ownerAliasNode.GetText();
      m_ownerAliasHasBeenSet = true;
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
    XmlNode tagsNode = resultNode.FirstChild("tags");
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
    XmlNode publicNode = resultNode.FirstChild("public");
    if(!publicNode.IsNull())
    {
      m_public = StringUtils::ConvertToBool(StringUtils::Trim(publicNode.GetText().c_str()).c_str());
      m_publicHasBeenSet = true;
    }
    XmlNode dataRetentionSupportNode = resultNode.FirstChild("dataRetentionSupport");
    if(!dataRetentionSupportNode.IsNull())
    {
      m_dataRetentionSupport = StringUtils::ConvertToBool(StringUtils::Trim(dataRetentionSupportNode.GetText().c_str()).c_str());
      m_dataRetentionSupportHasBeenSet = true;
    }
  }

  return *this;
}

void FpgaImage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fpgaImageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }

  if(m_fpgaImageGlobalIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FpgaImageGlobalId=" << StringUtils::URLEncode(m_fpgaImageGlobalId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_shellVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ShellVersion=" << StringUtils::URLEncode(m_shellVersion.c_str()) << "&";
  }

  if(m_pciIdHasBeenSet)
  {
      Aws::StringStream pciIdLocationAndMemberSs;
      pciIdLocationAndMemberSs << location << index << locationValue << ".PciId";
      m_pciId.OutputToStream(oStream, pciIdLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      Aws::StringStream stateLocationAndMemberSs;
      stateLocationAndMemberSs << location << index << locationValue << ".State";
      m_state.OutputToStream(oStream, stateLocationAndMemberSs.str().c_str());
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
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

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_publicHasBeenSet)
  {
      oStream << location << index << locationValue << ".Public=" << std::boolalpha << m_public << "&";
  }

  if(m_dataRetentionSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataRetentionSupport=" << std::boolalpha << m_dataRetentionSupport << "&";
  }

}

void FpgaImage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fpgaImageIdHasBeenSet)
  {
      oStream << location << ".FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }
  if(m_fpgaImageGlobalIdHasBeenSet)
  {
      oStream << location << ".FpgaImageGlobalId=" << StringUtils::URLEncode(m_fpgaImageGlobalId.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_shellVersionHasBeenSet)
  {
      oStream << location << ".ShellVersion=" << StringUtils::URLEncode(m_shellVersion.c_str()) << "&";
  }
  if(m_pciIdHasBeenSet)
  {
      Aws::String pciIdLocationAndMember(location);
      pciIdLocationAndMember += ".PciId";
      m_pciId.OutputToStream(oStream, pciIdLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      Aws::String stateLocationAndMember(location);
      stateLocationAndMember += ".State";
      m_state.OutputToStream(oStream, stateLocationAndMember.c_str());
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateTimeHasBeenSet)
  {
      oStream << location << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
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
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tags." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_publicHasBeenSet)
  {
      oStream << location << ".Public=" << std::boolalpha << m_public << "&";
  }
  if(m_dataRetentionSupportHasBeenSet)
  {
      oStream << location << ".DataRetentionSupport=" << std::boolalpha << m_dataRetentionSupport << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
