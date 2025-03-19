/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OperatorRequest.h>
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

OperatorRequest::OperatorRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

OperatorRequest& OperatorRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode principalNode = resultNode.FirstChild("Principal");
    if(!principalNode.IsNull())
    {
      m_principal = Aws::Utils::Xml::DecodeEscapedXmlText(principalNode.GetText());
      m_principalHasBeenSet = true;
    }
  }

  return *this;
}

void OperatorRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_principalHasBeenSet)
  {
      oStream << location << index << locationValue << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }

}

void OperatorRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_principalHasBeenSet)
  {
      oStream << location << ".Principal=" << StringUtils::URLEncode(m_principal.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
