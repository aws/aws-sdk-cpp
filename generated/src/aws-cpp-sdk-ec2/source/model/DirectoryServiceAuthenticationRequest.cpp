/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DirectoryServiceAuthenticationRequest.h>
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

DirectoryServiceAuthenticationRequest::DirectoryServiceAuthenticationRequest() : 
    m_directoryIdHasBeenSet(false)
{
}

DirectoryServiceAuthenticationRequest::DirectoryServiceAuthenticationRequest(const XmlNode& xmlNode) : 
    m_directoryIdHasBeenSet(false)
{
  *this = xmlNode;
}

DirectoryServiceAuthenticationRequest& DirectoryServiceAuthenticationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode directoryIdNode = resultNode.FirstChild("DirectoryId");
    if(!directoryIdNode.IsNull())
    {
      m_directoryId = Aws::Utils::Xml::DecodeEscapedXmlText(directoryIdNode.GetText());
      m_directoryIdHasBeenSet = true;
    }
  }

  return *this;
}

void DirectoryServiceAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_directoryIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DirectoryId=" << StringUtils::URLEncode(m_directoryId.c_str()) << "&";
  }

}

void DirectoryServiceAuthenticationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_directoryIdHasBeenSet)
  {
      oStream << location << ".DirectoryId=" << StringUtils::URLEncode(m_directoryId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
