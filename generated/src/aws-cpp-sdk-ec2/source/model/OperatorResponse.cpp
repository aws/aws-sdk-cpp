/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OperatorResponse.h>
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

OperatorResponse::OperatorResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

OperatorResponse& OperatorResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode managedNode = resultNode.FirstChild("managed");
    if(!managedNode.IsNull())
    {
      m_managed = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedNode.GetText()).c_str()).c_str());
      m_managedHasBeenSet = true;
    }
    XmlNode principalNode = resultNode.FirstChild("principal");
    if(!principalNode.IsNull())
    {
      m_principal = Aws::Utils::Xml::DecodeEscapedXmlText(principalNode.GetText());
      m_principalHasBeenSet = true;
    }
  }

  return *this;
}

void OperatorResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_managedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Managed=" << std::boolalpha << m_managed << "&";
  }

  if(m_principalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }

}

void OperatorResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_managedHasBeenSet)
  {
      oStream << location << ".Managed=" << std::boolalpha << m_managed << "&";
  }
  if(m_principalHasBeenSet)
  {
      oStream << location << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
