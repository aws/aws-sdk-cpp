/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ConnectAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

ConnectAction::ConnectAction(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConnectAction& ConnectAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceARNNode = resultNode.FirstChild("InstanceARN");
    if(!instanceARNNode.IsNull())
    {
      m_instanceARN = Aws::Utils::Xml::DecodeEscapedXmlText(instanceARNNode.GetText());
      m_instanceARNHasBeenSet = true;
    }
    XmlNode iAMRoleARNNode = resultNode.FirstChild("IAMRoleARN");
    if(!iAMRoleARNNode.IsNull())
    {
      m_iAMRoleARN = Aws::Utils::Xml::DecodeEscapedXmlText(iAMRoleARNNode.GetText());
      m_iAMRoleARNHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceARN=" << StringUtils::URLEncode(m_instanceARN.c_str()) << "&";
  }

  if(m_iAMRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMRoleARN=" << StringUtils::URLEncode(m_iAMRoleARN.c_str()) << "&";
  }

}

void ConnectAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceARNHasBeenSet)
  {
      oStream << location << ".InstanceARN=" << StringUtils::URLEncode(m_instanceARN.c_str()) << "&";
  }
  if(m_iAMRoleARNHasBeenSet)
  {
      oStream << location << ".IAMRoleARN=" << StringUtils::URLEncode(m_iAMRoleARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
