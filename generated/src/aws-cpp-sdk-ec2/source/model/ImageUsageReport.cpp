/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageUsageReport.h>
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

ImageUsageReport::ImageUsageReport(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageUsageReport& ImageUsageReport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode reportIdNode = resultNode.FirstChild("reportId");
    if(!reportIdNode.IsNull())
    {
      m_reportId = Aws::Utils::Xml::DecodeEscapedXmlText(reportIdNode.GetText());
      m_reportIdHasBeenSet = true;
    }
    XmlNode resourceTypesNode = resultNode.FirstChild("resourceTypeSet");
    if(!resourceTypesNode.IsNull())
    {
      XmlNode resourceTypesMember = resourceTypesNode.FirstChild("item");
      m_resourceTypesHasBeenSet = !resourceTypesMember.IsNull();
      while(!resourceTypesMember.IsNull())
      {
        m_resourceTypes.push_back(resourceTypesMember);
        resourceTypesMember = resourceTypesMember.NextNode("item");
      }

      m_resourceTypesHasBeenSet = true;
    }
    XmlNode accountIdsNode = resultNode.FirstChild("accountIdSet");
    if(!accountIdsNode.IsNull())
    {
      XmlNode accountIdsMember = accountIdsNode.FirstChild("item");
      m_accountIdsHasBeenSet = !accountIdsMember.IsNull();
      while(!accountIdsMember.IsNull())
      {
        m_accountIds.push_back(accountIdsMember.GetText());
        accountIdsMember = accountIdsMember.NextNode("item");
      }

      m_accountIdsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("expirationTime");
    if(!expirationTimeNode.IsNull())
    {
      m_expirationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_expirationTimeHasBeenSet = true;
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
  }

  return *this;
}

void ImageUsageReport::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_reportIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReportId=" << StringUtils::URLEncode(m_reportId.c_str()) << "&";
  }

  if(m_resourceTypesHasBeenSet)
  {
      unsigned resourceTypesIdx = 1;
      for(auto& item : m_resourceTypes)
      {
        Aws::StringStream resourceTypesSs;
        resourceTypesSs << location << index << locationValue << ".ResourceTypeSet." << resourceTypesIdx++;
        item.OutputToStream(oStream, resourceTypesSs.str().c_str());
      }
  }

  if(m_accountIdsHasBeenSet)
  {
      unsigned accountIdsIdx = 1;
      for(auto& item : m_accountIds)
      {
        oStream << location << index << locationValue << ".AccountIdSet." << accountIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

}

void ImageUsageReport::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_reportIdHasBeenSet)
  {
      oStream << location << ".ReportId=" << StringUtils::URLEncode(m_reportId.c_str()) << "&";
  }
  if(m_resourceTypesHasBeenSet)
  {
      unsigned resourceTypesIdx = 1;
      for(auto& item : m_resourceTypes)
      {
        Aws::StringStream resourceTypesSs;
        resourceTypesSs << location << ".ResourceTypeSet." << resourceTypesIdx++;
        item.OutputToStream(oStream, resourceTypesSs.str().c_str());
      }
  }
  if(m_accountIdsHasBeenSet)
  {
      unsigned accountIdsIdx = 1;
      for(auto& item : m_accountIds)
      {
        oStream << location << ".AccountIdSet." << accountIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_expirationTimeHasBeenSet)
  {
      oStream << location << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
