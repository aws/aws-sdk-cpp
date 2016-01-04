/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReceiptRule::ReceiptRule() : 
    m_nameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_stop(false),
    m_stopHasBeenSet(false),
    m_tlsPolicyHasBeenSet(false),
    m_domainsHasBeenSet(false),
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
    m_stop(false),
    m_stopHasBeenSet(false),
    m_tlsPolicyHasBeenSet(false),
    m_domainsHasBeenSet(false),
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
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode stopNode = resultNode.FirstChild("Stop");
    if(!stopNode.IsNull())
    {
      m_stop = StringUtils::ConvertToBool(StringUtils::Trim(stopNode.GetText().c_str()).c_str());
      m_stopHasBeenSet = true;
    }
    XmlNode tlsPolicyNode = resultNode.FirstChild("TlsPolicy");
    if(!tlsPolicyNode.IsNull())
    {
      m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(StringUtils::Trim(tlsPolicyNode.GetText().c_str()).c_str());
      m_tlsPolicyHasBeenSet = true;
    }
    XmlNode domainsNode = resultNode.FirstChild("Domains");
    if(!domainsNode.IsNull())
    {
      XmlNode domainsMember = domainsNode.FirstChild("member");
      while(!domainsMember.IsNull())
      {
        m_domains.push_back(StringUtils::Trim(domainsMember.GetText().c_str()));
        domainsMember = domainsMember.NextNode("member");
      }

      m_domainsHasBeenSet = true;
    }
    XmlNode recipientsNode = resultNode.FirstChild("Recipients");
    if(!recipientsNode.IsNull())
    {
      XmlNode recipientsMember = recipientsNode.FirstChild("member");
      while(!recipientsMember.IsNull())
      {
        m_recipients.push_back(StringUtils::Trim(recipientsMember.GetText().c_str()));
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
      oStream << location << index << locationValue << ".Enabled=" << m_enabled << "&";
  }
  if(m_stopHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stop=" << m_stop << "&";
  }
  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TlsPolicy=" << TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy) << "&";
  }
  if(m_domainsHasBeenSet)
  {
      for(auto& item : m_domains)
      {
        oStream << location << index << locationValue << ".Domains=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_recipientsHasBeenSet)
  {
      for(auto& item : m_recipients)
      {
        oStream << location << index << locationValue << ".Recipients=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_actionsHasBeenSet)
  {
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location << index << locationValue << ".Actions";
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }
  if(m_scanEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScanEnabled=" << m_scanEnabled << "&";
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
      oStream << location << ".Enabled=" << m_enabled << "&";
  }
  if(m_stopHasBeenSet)
  {
      oStream << location << ".Stop=" << m_stop << "&";
  }
  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << ".TlsPolicy=" << TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy) << "&";
  }
  if(m_domainsHasBeenSet)
  {
      for(auto& item : m_domains)
      {
        oStream << location << ".Domains=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_recipientsHasBeenSet)
  {
      for(auto& item : m_recipients)
      {
        oStream << location << ".Recipients=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_actionsHasBeenSet)
  {
      for(auto& item : m_actions)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Actions";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_scanEnabledHasBeenSet)
  {
      oStream << location << ".ScanEnabled=" << m_scanEnabled << "&";
  }
}
