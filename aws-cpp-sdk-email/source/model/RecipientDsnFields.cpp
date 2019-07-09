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

#include <aws/email/model/RecipientDsnFields.h>
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

RecipientDsnFields::RecipientDsnFields() : 
    m_finalRecipientHasBeenSet(false),
    m_action(DsnAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_remoteMtaHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_diagnosticCodeHasBeenSet(false),
    m_lastAttemptDateHasBeenSet(false),
    m_extensionFieldsHasBeenSet(false)
{
}

RecipientDsnFields::RecipientDsnFields(const XmlNode& xmlNode) : 
    m_finalRecipientHasBeenSet(false),
    m_action(DsnAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_remoteMtaHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_diagnosticCodeHasBeenSet(false),
    m_lastAttemptDateHasBeenSet(false),
    m_extensionFieldsHasBeenSet(false)
{
  *this = xmlNode;
}

RecipientDsnFields& RecipientDsnFields::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode finalRecipientNode = resultNode.FirstChild("FinalRecipient");
    if(!finalRecipientNode.IsNull())
    {
      m_finalRecipient = finalRecipientNode.GetText();
      m_finalRecipientHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = DsnActionMapper::GetDsnActionForName(StringUtils::Trim(actionNode.GetText().c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode remoteMtaNode = resultNode.FirstChild("RemoteMta");
    if(!remoteMtaNode.IsNull())
    {
      m_remoteMta = remoteMtaNode.GetText();
      m_remoteMtaHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode diagnosticCodeNode = resultNode.FirstChild("DiagnosticCode");
    if(!diagnosticCodeNode.IsNull())
    {
      m_diagnosticCode = diagnosticCodeNode.GetText();
      m_diagnosticCodeHasBeenSet = true;
    }
    XmlNode lastAttemptDateNode = resultNode.FirstChild("LastAttemptDate");
    if(!lastAttemptDateNode.IsNull())
    {
      m_lastAttemptDate = DateTime(StringUtils::Trim(lastAttemptDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastAttemptDateHasBeenSet = true;
    }
    XmlNode extensionFieldsNode = resultNode.FirstChild("ExtensionFields");
    if(!extensionFieldsNode.IsNull())
    {
      XmlNode extensionFieldsMember = extensionFieldsNode.FirstChild("member");
      while(!extensionFieldsMember.IsNull())
      {
        m_extensionFields.push_back(extensionFieldsMember);
        extensionFieldsMember = extensionFieldsMember.NextNode("member");
      }

      m_extensionFieldsHasBeenSet = true;
    }
  }

  return *this;
}

void RecipientDsnFields::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_finalRecipientHasBeenSet)
  {
      oStream << location << index << locationValue << ".FinalRecipient=" << StringUtils::URLEncode(m_finalRecipient.c_str()) << "&";
  }

  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << DsnActionMapper::GetNameForDsnAction(m_action) << "&";
  }

  if(m_remoteMtaHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemoteMta=" << StringUtils::URLEncode(m_remoteMta.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_diagnosticCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DiagnosticCode=" << StringUtils::URLEncode(m_diagnosticCode.c_str()) << "&";
  }

  if(m_lastAttemptDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastAttemptDate=" << StringUtils::URLEncode(m_lastAttemptDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_extensionFieldsHasBeenSet)
  {
      unsigned extensionFieldsIdx = 1;
      for(auto& item : m_extensionFields)
      {
        Aws::StringStream extensionFieldsSs;
        extensionFieldsSs << location << index << locationValue << ".ExtensionFields.member." << extensionFieldsIdx++;
        item.OutputToStream(oStream, extensionFieldsSs.str().c_str());
      }
  }

}

void RecipientDsnFields::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_finalRecipientHasBeenSet)
  {
      oStream << location << ".FinalRecipient=" << StringUtils::URLEncode(m_finalRecipient.c_str()) << "&";
  }
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << DsnActionMapper::GetNameForDsnAction(m_action) << "&";
  }
  if(m_remoteMtaHasBeenSet)
  {
      oStream << location << ".RemoteMta=" << StringUtils::URLEncode(m_remoteMta.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_diagnosticCodeHasBeenSet)
  {
      oStream << location << ".DiagnosticCode=" << StringUtils::URLEncode(m_diagnosticCode.c_str()) << "&";
  }
  if(m_lastAttemptDateHasBeenSet)
  {
      oStream << location << ".LastAttemptDate=" << StringUtils::URLEncode(m_lastAttemptDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_extensionFieldsHasBeenSet)
  {
      unsigned extensionFieldsIdx = 1;
      for(auto& item : m_extensionFields)
      {
        Aws::StringStream extensionFieldsSs;
        extensionFieldsSs << location <<  ".ExtensionFields.member." << extensionFieldsIdx++;
        item.OutputToStream(oStream, extensionFieldsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
