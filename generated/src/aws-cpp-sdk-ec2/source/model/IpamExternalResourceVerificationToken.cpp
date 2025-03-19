/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamExternalResourceVerificationToken.h>
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

IpamExternalResourceVerificationToken::IpamExternalResourceVerificationToken(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

IpamExternalResourceVerificationToken& IpamExternalResourceVerificationToken::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipamExternalResourceVerificationTokenIdNode = resultNode.FirstChild("ipamExternalResourceVerificationTokenId");
    if(!ipamExternalResourceVerificationTokenIdNode.IsNull())
    {
      m_ipamExternalResourceVerificationTokenId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamExternalResourceVerificationTokenIdNode.GetText());
      m_ipamExternalResourceVerificationTokenIdHasBeenSet = true;
    }
    XmlNode ipamExternalResourceVerificationTokenArnNode = resultNode.FirstChild("ipamExternalResourceVerificationTokenArn");
    if(!ipamExternalResourceVerificationTokenArnNode.IsNull())
    {
      m_ipamExternalResourceVerificationTokenArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamExternalResourceVerificationTokenArnNode.GetText());
      m_ipamExternalResourceVerificationTokenArnHasBeenSet = true;
    }
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if(!ipamIdNode.IsNull())
    {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
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
    XmlNode tokenValueNode = resultNode.FirstChild("tokenValue");
    if(!tokenValueNode.IsNull())
    {
      m_tokenValue = Aws::Utils::Xml::DecodeEscapedXmlText(tokenValueNode.GetText());
      m_tokenValueHasBeenSet = true;
    }
    XmlNode tokenNameNode = resultNode.FirstChild("tokenName");
    if(!tokenNameNode.IsNull())
    {
      m_tokenName = Aws::Utils::Xml::DecodeEscapedXmlText(tokenNameNode.GetText());
      m_tokenNameHasBeenSet = true;
    }
    XmlNode notAfterNode = resultNode.FirstChild("notAfter");
    if(!notAfterNode.IsNull())
    {
      m_notAfter = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(notAfterNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_notAfterHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = TokenStateMapper::GetTokenStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
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
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamExternalResourceVerificationTokenStateMapper::GetIpamExternalResourceVerificationTokenStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void IpamExternalResourceVerificationToken::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipamExternalResourceVerificationTokenIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamExternalResourceVerificationTokenId=" << StringUtils::URLEncode(m_ipamExternalResourceVerificationTokenId.c_str()) << "&";
  }

  if(m_ipamExternalResourceVerificationTokenArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamExternalResourceVerificationTokenArn=" << StringUtils::URLEncode(m_ipamExternalResourceVerificationTokenArn.c_str()) << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_ipamArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }

  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if(m_tokenValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".TokenValue=" << StringUtils::URLEncode(m_tokenValue.c_str()) << "&";
  }

  if(m_tokenNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TokenName=" << StringUtils::URLEncode(m_tokenName.c_str()) << "&";
  }

  if(m_notAfterHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(TokenStateMapper::GetNameForTokenState(m_status)) << "&";
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

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(IpamExternalResourceVerificationTokenStateMapper::GetNameForIpamExternalResourceVerificationTokenState(m_state)) << "&";
  }

}

void IpamExternalResourceVerificationToken::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipamExternalResourceVerificationTokenIdHasBeenSet)
  {
      oStream << location << ".IpamExternalResourceVerificationTokenId=" << StringUtils::URLEncode(m_ipamExternalResourceVerificationTokenId.c_str()) << "&";
  }
  if(m_ipamExternalResourceVerificationTokenArnHasBeenSet)
  {
      oStream << location << ".IpamExternalResourceVerificationTokenArn=" << StringUtils::URLEncode(m_ipamExternalResourceVerificationTokenArn.c_str()) << "&";
  }
  if(m_ipamIdHasBeenSet)
  {
      oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
  if(m_ipamArnHasBeenSet)
  {
      oStream << location << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }
  if(m_ipamRegionHasBeenSet)
  {
      oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if(m_tokenValueHasBeenSet)
  {
      oStream << location << ".TokenValue=" << StringUtils::URLEncode(m_tokenValue.c_str()) << "&";
  }
  if(m_tokenNameHasBeenSet)
  {
      oStream << location << ".TokenName=" << StringUtils::URLEncode(m_tokenName.c_str()) << "&";
  }
  if(m_notAfterHasBeenSet)
  {
      oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(TokenStateMapper::GetNameForTokenState(m_status)) << "&";
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
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(IpamExternalResourceVerificationTokenStateMapper::GetNameForIpamExternalResourceVerificationTokenState(m_state)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
