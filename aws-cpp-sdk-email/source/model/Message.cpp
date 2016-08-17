/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/Message.h>
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

Message::Message() : 
    m_subjectHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

Message::Message(const XmlNode& xmlNode) : 
    m_subjectHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
  *this = xmlNode;
}

Message& Message::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    if(!subjectNode.IsNull())
    {
      m_subject = subjectNode;
      m_subjectHasBeenSet = true;
    }
    XmlNode bodyNode = resultNode.FirstChild("Body");
    if(!bodyNode.IsNull())
    {
      m_body = bodyNode;
      m_bodyHasBeenSet = true;
    }
  }

  return *this;
}

void Message::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subjectHasBeenSet)
  {
      Aws::StringStream subjectLocationAndMemberSs;
      subjectLocationAndMemberSs << location << index << locationValue << ".Subject";
      m_subject.OutputToStream(oStream, subjectLocationAndMemberSs.str().c_str());
  }

  if(m_bodyHasBeenSet)
  {
      Aws::StringStream bodyLocationAndMemberSs;
      bodyLocationAndMemberSs << location << index << locationValue << ".Body";
      m_body.OutputToStream(oStream, bodyLocationAndMemberSs.str().c_str());
  }

}

void Message::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subjectHasBeenSet)
  {
      Aws::String subjectLocationAndMember(location);
      subjectLocationAndMember += ".Subject";
      m_subject.OutputToStream(oStream, subjectLocationAndMember.c_str());
  }
  if(m_bodyHasBeenSet)
  {
      Aws::String bodyLocationAndMember(location);
      bodyLocationAndMember += ".Body";
      m_body.OutputToStream(oStream, bodyLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
