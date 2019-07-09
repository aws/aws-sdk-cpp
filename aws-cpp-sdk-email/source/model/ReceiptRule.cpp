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

#include <aws/email/model/ReceiptRule.h>
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

ReceiptRule::ReceiptRule() : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_recipientsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_scanEnabled(false),
    m_scanEnabledHasBeenSet(false)
{
}

ReceiptRule::ReceiptRule(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_recipientsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_scanEnabled(false),
    m_scanEnabledHasBeenSet(false)
{
  *this = xmlNode;
}

ReceiptRule& ReceiptRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode tlsPolicyNode = resultNode.FirstChild("TlsPolicy");
    if(!tlsPolicyNode.IsNull())
    {
      m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(StringUtils::Trim(tlsPolicyNode.GetText().c_str()).c_str());
      m_tlsPolicyHasBeenSet = true;
    }
    XmlNode recipientsNode = resultNode.FirstChild("Recipients");
    if(!recipientsNode.IsNull())
    {
      XmlNode recipientsMember = recipientsNode.FirstChild("member");
      while(!recipientsMember.IsNull())
      {
        m_recipients.push_back(recipientsMember.GetText());
        recipientsMember = recipientsMember.NextNode("member");
      }

      m_recipientsHasBeenSet = true;
    }
    XmlNode actionsNode = resultNode.FirstChild("Actions");
    if(!actionsNode.IsNull())
    {
      XmlNode actionsMember = actionsNode.FirstChild("member");
      while(!actionsMember.IsNull())
      {
        m_actions.push_back(actionsMember);
        actionsMember = actionsMember.NextNode("member");
      }

      m_actionsHasBeenSet = true;
    }
    XmlNode scanEnabledNode = resultNode.FirstChild("ScanEnabled");
    if(!scanEnabledNode.IsNull())
    {
      m_scanEnabled = StringUtils::ConvertToBool(StringUtils::Trim(scanEnabledNode.GetText().c_str()).c_str());
      m_scanEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TlsPolicy=" << TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy) << "&";
  }

  if(m_recipientsHasBeenSet)
  {
      unsigned recipientsIdx = 1;
      for(auto& item : m_recipients)
      {
        oStream << location << index << locationValue << ".Recipients.member." << recipientsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location << index << locationValue << ".Actions.member." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }

  if(m_scanEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScanEnabled=" << std::boolalpha << m_scanEnabled << "&";
  }

}

void ReceiptRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << ".TlsPolicy=" << TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy) << "&";
  }
  if(m_recipientsHasBeenSet)
  {
      unsigned recipientsIdx = 1;
      for(auto& item : m_recipients)
      {
        oStream << location << ".Recipients.member." << recipientsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location <<  ".Actions.member." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }
  if(m_scanEnabledHasBeenSet)
  {
      oStream << location << ".ScanEnabled=" << std::boolalpha << m_scanEnabled << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
