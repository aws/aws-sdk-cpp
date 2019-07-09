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

#include <aws/ec2/model/NetworkInterfaceAttachmentChanges.h>
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

NetworkInterfaceAttachmentChanges::NetworkInterfaceAttachmentChanges() : 
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
}

NetworkInterfaceAttachmentChanges::NetworkInterfaceAttachmentChanges(const XmlNode& xmlNode) : 
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfaceAttachmentChanges& NetworkInterfaceAttachmentChanges::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attachmentIdNode = resultNode.FirstChild("attachmentId");
    if(!attachmentIdNode.IsNull())
    {
      m_attachmentId = attachmentIdNode.GetText();
      m_attachmentIdHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(deleteOnTerminationNode.GetText().c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfaceAttachmentChanges::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

}

void NetworkInterfaceAttachmentChanges::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attachmentIdHasBeenSet)
  {
      oStream << location << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
