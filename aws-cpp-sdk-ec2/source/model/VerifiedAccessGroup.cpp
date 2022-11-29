/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessGroup.h>
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

VerifiedAccessGroup::VerifiedAccessGroup() : 
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_verifiedAccessGroupArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VerifiedAccessGroup::VerifiedAccessGroup(const XmlNode& xmlNode) : 
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_verifiedAccessGroupArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessGroup& VerifiedAccessGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessGroupIdNode = resultNode.FirstChild("verifiedAccessGroupId");
    if(!verifiedAccessGroupIdNode.IsNull())
    {
      m_verifiedAccessGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessGroupIdNode.GetText());
      m_verifiedAccessGroupIdHasBeenSet = true;
    }
    XmlNode verifiedAccessInstanceIdNode = resultNode.FirstChild("verifiedAccessInstanceId");
    if(!verifiedAccessInstanceIdNode.IsNull())
    {
      m_verifiedAccessInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessInstanceIdNode.GetText());
      m_verifiedAccessInstanceIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("owner");
    if(!ownerNode.IsNull())
    {
      m_owner = Aws::Utils::Xml::DecodeEscapedXmlText(ownerNode.GetText());
      m_ownerHasBeenSet = true;
    }
    XmlNode verifiedAccessGroupArnNode = resultNode.FirstChild("verifiedAccessGroupArn");
    if(!verifiedAccessGroupArnNode.IsNull())
    {
      m_verifiedAccessGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessGroupArnNode.GetText());
      m_verifiedAccessGroupArnHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText());
      m_creationTimeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("lastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimeNode.GetText());
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("deletionTime");
    if(!deletionTimeNode.IsNull())
    {
      m_deletionTime = Aws::Utils::Xml::DecodeEscapedXmlText(deletionTimeNode.GetText());
      m_deletionTimeHasBeenSet = true;
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
  }

  return *this;
}

void VerifiedAccessGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_ownerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }

  if(m_verifiedAccessGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessGroupArn=" << StringUtils::URLEncode(m_verifiedAccessGroupArn.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
  }

  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
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

void VerifiedAccessGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_ownerHasBeenSet)
  {
      oStream << location << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }
  if(m_verifiedAccessGroupArnHasBeenSet)
  {
      oStream << location << ".VerifiedAccessGroupArn=" << StringUtils::URLEncode(m_verifiedAccessGroupArn.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
  }
  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
