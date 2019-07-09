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

#include <aws/email/model/WorkmailAction.h>
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

WorkmailAction::WorkmailAction() : 
    m_topicArnHasBeenSet(false),
    m_organizationArnHasBeenSet(false)
{
}

WorkmailAction::WorkmailAction(const XmlNode& xmlNode) : 
    m_topicArnHasBeenSet(false),
    m_organizationArnHasBeenSet(false)
{
  *this = xmlNode;
}

WorkmailAction& WorkmailAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
    XmlNode organizationArnNode = resultNode.FirstChild("OrganizationArn");
    if(!organizationArnNode.IsNull())
    {
      m_organizationArn = organizationArnNode.GetText();
      m_organizationArnHasBeenSet = true;
    }
  }

  return *this;
}

void WorkmailAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_organizationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OrganizationArn=" << StringUtils::URLEncode(m_organizationArn.c_str()) << "&";
  }

}

void WorkmailAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
  if(m_organizationArnHasBeenSet)
  {
      oStream << location << ".OrganizationArn=" << StringUtils::URLEncode(m_organizationArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
