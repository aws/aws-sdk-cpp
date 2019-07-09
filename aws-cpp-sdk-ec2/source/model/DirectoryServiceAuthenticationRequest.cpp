/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_directoryId = directoryIdNode.GetText();
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
