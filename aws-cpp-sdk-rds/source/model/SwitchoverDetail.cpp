/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SwitchoverDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

SwitchoverDetail::SwitchoverDetail() : 
    m_sourceMemberHasBeenSet(false),
    m_targetMemberHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

SwitchoverDetail::SwitchoverDetail(const XmlNode& xmlNode) : 
    m_sourceMemberHasBeenSet(false),
    m_targetMemberHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

SwitchoverDetail& SwitchoverDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceMemberNode = resultNode.FirstChild("SourceMember");
    if(!sourceMemberNode.IsNull())
    {
      m_sourceMember = Aws::Utils::Xml::DecodeEscapedXmlText(sourceMemberNode.GetText());
      m_sourceMemberHasBeenSet = true;
    }
    XmlNode targetMemberNode = resultNode.FirstChild("TargetMember");
    if(!targetMemberNode.IsNull())
    {
      m_targetMember = Aws::Utils::Xml::DecodeEscapedXmlText(targetMemberNode.GetText());
      m_targetMemberHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void SwitchoverDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceMemberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceMember=" << StringUtils::URLEncode(m_sourceMember.c_str()) << "&";
  }

  if(m_targetMemberHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetMember=" << StringUtils::URLEncode(m_targetMember.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void SwitchoverDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceMemberHasBeenSet)
  {
      oStream << location << ".SourceMember=" << StringUtils::URLEncode(m_sourceMember.c_str()) << "&";
  }
  if(m_targetMemberHasBeenSet)
  {
      oStream << location << ".TargetMember=" << StringUtils::URLEncode(m_targetMember.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
