/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessInstance.h>
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

VerifiedAccessInstance::VerifiedAccessInstance() : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_verifiedAccessTrustProvidersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VerifiedAccessInstance::VerifiedAccessInstance(const XmlNode& xmlNode) : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_verifiedAccessTrustProvidersHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessInstance& VerifiedAccessInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode verifiedAccessTrustProvidersNode = resultNode.FirstChild("verifiedAccessTrustProviderSet");
    if(!verifiedAccessTrustProvidersNode.IsNull())
    {
      XmlNode verifiedAccessTrustProvidersMember = verifiedAccessTrustProvidersNode.FirstChild("item");
      while(!verifiedAccessTrustProvidersMember.IsNull())
      {
        m_verifiedAccessTrustProviders.push_back(verifiedAccessTrustProvidersMember);
        verifiedAccessTrustProvidersMember = verifiedAccessTrustProvidersMember.NextNode("item");
      }

      m_verifiedAccessTrustProvidersHasBeenSet = true;
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

void VerifiedAccessInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_verifiedAccessTrustProvidersHasBeenSet)
  {
      unsigned verifiedAccessTrustProvidersIdx = 1;
      for(auto& item : m_verifiedAccessTrustProviders)
      {
        Aws::StringStream verifiedAccessTrustProvidersSs;
        verifiedAccessTrustProvidersSs << location << index << locationValue << ".VerifiedAccessTrustProviderSet." << verifiedAccessTrustProvidersIdx++;
        item.OutputToStream(oStream, verifiedAccessTrustProvidersSs.str().c_str());
      }
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
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

void VerifiedAccessInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_verifiedAccessTrustProvidersHasBeenSet)
  {
      unsigned verifiedAccessTrustProvidersIdx = 1;
      for(auto& item : m_verifiedAccessTrustProviders)
      {
        Aws::StringStream verifiedAccessTrustProvidersSs;
        verifiedAccessTrustProvidersSs << location <<  ".VerifiedAccessTrustProviderSet." << verifiedAccessTrustProvidersIdx++;
        item.OutputToStream(oStream, verifiedAccessTrustProvidersSs.str().c_str());
      }
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
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
