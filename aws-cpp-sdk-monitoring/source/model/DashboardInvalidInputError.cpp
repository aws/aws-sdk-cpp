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

#include <aws/monitoring/model/DashboardInvalidInputError.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

DashboardInvalidInputError::DashboardInvalidInputError() : 
    m_messageHasBeenSet(false),
    m_dashboardValidationMessagesHasBeenSet(false)
{
}

DashboardInvalidInputError::DashboardInvalidInputError(const XmlNode& xmlNode) : 
    m_messageHasBeenSet(false),
    m_dashboardValidationMessagesHasBeenSet(false)
{
  *this = xmlNode;
}

DashboardInvalidInputError& DashboardInvalidInputError::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode dashboardValidationMessagesNode = resultNode.FirstChild("dashboardValidationMessages");
    if(!dashboardValidationMessagesNode.IsNull())
    {
      XmlNode dashboardValidationMessagesMember = dashboardValidationMessagesNode.FirstChild("member");
      while(!dashboardValidationMessagesMember.IsNull())
      {
        m_dashboardValidationMessages.push_back(dashboardValidationMessagesMember);
        dashboardValidationMessagesMember = dashboardValidationMessagesMember.NextNode("member");
      }

      m_dashboardValidationMessagesHasBeenSet = true;
    }
  }

  return *this;
}

void DashboardInvalidInputError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_dashboardValidationMessagesHasBeenSet)
  {
      unsigned dashboardValidationMessagesIdx = 1;
      for(auto& item : m_dashboardValidationMessages)
      {
        Aws::StringStream dashboardValidationMessagesSs;
        dashboardValidationMessagesSs << location << index << locationValue << ".dashboardValidationMessages.member." << dashboardValidationMessagesIdx++;
        item.OutputToStream(oStream, dashboardValidationMessagesSs.str().c_str());
      }
  }

}

void DashboardInvalidInputError::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_messageHasBeenSet)
  {
      oStream << location << ".message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_dashboardValidationMessagesHasBeenSet)
  {
      unsigned dashboardValidationMessagesIdx = 1;
      for(auto& item : m_dashboardValidationMessages)
      {
        Aws::StringStream dashboardValidationMessagesSs;
        dashboardValidationMessagesSs << location <<  ".dashboardValidationMessages.member." << dashboardValidationMessagesIdx++;
        item.OutputToStream(oStream, dashboardValidationMessagesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
