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

#include <aws/ec2/model/CidrAuthorizationContext.h>
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

CidrAuthorizationContext::CidrAuthorizationContext() : 
    m_messageHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
}

CidrAuthorizationContext::CidrAuthorizationContext(const XmlNode& xmlNode) : 
    m_messageHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
  *this = xmlNode;
}

CidrAuthorizationContext& CidrAuthorizationContext::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = messageNode.GetText();
      m_messageHasBeenSet = true;
    }
    XmlNode signatureNode = resultNode.FirstChild("Signature");
    if(!signatureNode.IsNull())
    {
      m_signature = signatureNode.GetText();
      m_signatureHasBeenSet = true;
    }
  }

  return *this;
}

void CidrAuthorizationContext::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_signatureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Signature=" << StringUtils::URLEncode(m_signature.c_str()) << "&";
  }

}

void CidrAuthorizationContext::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_signatureHasBeenSet)
  {
      oStream << location << ".Signature=" << StringUtils::URLEncode(m_signature.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
