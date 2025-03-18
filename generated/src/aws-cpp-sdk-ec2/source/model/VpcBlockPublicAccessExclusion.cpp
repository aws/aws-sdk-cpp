/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcBlockPublicAccessExclusion.h>
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

VpcBlockPublicAccessExclusion::VpcBlockPublicAccessExclusion(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcBlockPublicAccessExclusion& VpcBlockPublicAccessExclusion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode exclusionIdNode = resultNode.FirstChild("exclusionId");
    if(!exclusionIdNode.IsNull())
    {
      m_exclusionId = Aws::Utils::Xml::DecodeEscapedXmlText(exclusionIdNode.GetText());
      m_exclusionIdHasBeenSet = true;
    }
    XmlNode internetGatewayExclusionModeNode = resultNode.FirstChild("internetGatewayExclusionMode");
    if(!internetGatewayExclusionModeNode.IsNull())
    {
      m_internetGatewayExclusionMode = InternetGatewayExclusionModeMapper::GetInternetGatewayExclusionModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(internetGatewayExclusionModeNode.GetText()).c_str()));
      m_internetGatewayExclusionModeHasBeenSet = true;
    }
    XmlNode resourceArnNode = resultNode.FirstChild("resourceArn");
    if(!resourceArnNode.IsNull())
    {
      m_resourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceArnNode.GetText());
      m_resourceArnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpcBlockPublicAccessExclusionStateMapper::GetVpcBlockPublicAccessExclusionStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("reason");
    if(!reasonNode.IsNull())
    {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("creationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
    }
    XmlNode lastUpdateTimestampNode = resultNode.FirstChild("lastUpdateTimestamp");
    if(!lastUpdateTimestampNode.IsNull())
    {
      m_lastUpdateTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdateTimestampHasBeenSet = true;
    }
    XmlNode deletionTimestampNode = resultNode.FirstChild("deletionTimestamp");
    if(!deletionTimestampNode.IsNull())
    {
      m_deletionTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_deletionTimestampHasBeenSet = true;
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

void VpcBlockPublicAccessExclusion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_exclusionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExclusionId=" << StringUtils::URLEncode(m_exclusionId.c_str()) << "&";
  }

  if(m_internetGatewayExclusionModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InternetGatewayExclusionMode=" << StringUtils::URLEncode(InternetGatewayExclusionModeMapper::GetNameForInternetGatewayExclusionMode(m_internetGatewayExclusionMode)) << "&";
  }

  if(m_resourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(VpcBlockPublicAccessExclusionStateMapper::GetNameForVpcBlockPublicAccessExclusionState(m_state)) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }

  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdateTimestamp=" << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deletionTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionTimestamp=" << StringUtils::URLEncode(m_deletionTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

void VpcBlockPublicAccessExclusion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_exclusionIdHasBeenSet)
  {
      oStream << location << ".ExclusionId=" << StringUtils::URLEncode(m_exclusionId.c_str()) << "&";
  }
  if(m_internetGatewayExclusionModeHasBeenSet)
  {
      oStream << location << ".InternetGatewayExclusionMode=" << StringUtils::URLEncode(InternetGatewayExclusionModeMapper::GetNameForInternetGatewayExclusionMode(m_internetGatewayExclusionMode)) << "&";
  }
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(VpcBlockPublicAccessExclusionStateMapper::GetNameForVpcBlockPublicAccessExclusionState(m_state)) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastUpdateTimestampHasBeenSet)
  {
      oStream << location << ".LastUpdateTimestamp=" << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deletionTimestampHasBeenSet)
  {
      oStream << location << ".DeletionTimestamp=" << StringUtils::URLEncode(m_deletionTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
