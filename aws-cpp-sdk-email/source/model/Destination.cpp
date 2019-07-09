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

#include <aws/email/model/Destination.h>
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

Destination::Destination() : 
    m_toAddressesHasBeenSet(false),
    m_ccAddressesHasBeenSet(false),
    m_bccAddressesHasBeenSet(false)
{
}

Destination::Destination(const XmlNode& xmlNode) : 
    m_toAddressesHasBeenSet(false),
    m_ccAddressesHasBeenSet(false),
    m_bccAddressesHasBeenSet(false)
{
  *this = xmlNode;
}

Destination& Destination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode toAddressesNode = resultNode.FirstChild("ToAddresses");
    if(!toAddressesNode.IsNull())
    {
      XmlNode toAddressesMember = toAddressesNode.FirstChild("member");
      while(!toAddressesMember.IsNull())
      {
        m_toAddresses.push_back(toAddressesMember.GetText());
        toAddressesMember = toAddressesMember.NextNode("member");
      }

      m_toAddressesHasBeenSet = true;
    }
    XmlNode ccAddressesNode = resultNode.FirstChild("CcAddresses");
    if(!ccAddressesNode.IsNull())
    {
      XmlNode ccAddressesMember = ccAddressesNode.FirstChild("member");
      while(!ccAddressesMember.IsNull())
      {
        m_ccAddresses.push_back(ccAddressesMember.GetText());
        ccAddressesMember = ccAddressesMember.NextNode("member");
      }

      m_ccAddressesHasBeenSet = true;
    }
    XmlNode bccAddressesNode = resultNode.FirstChild("BccAddresses");
    if(!bccAddressesNode.IsNull())
    {
      XmlNode bccAddressesMember = bccAddressesNode.FirstChild("member");
      while(!bccAddressesMember.IsNull())
      {
        m_bccAddresses.push_back(bccAddressesMember.GetText());
        bccAddressesMember = bccAddressesMember.NextNode("member");
      }

      m_bccAddressesHasBeenSet = true;
    }
  }

  return *this;
}

void Destination::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_toAddressesHasBeenSet)
  {
      unsigned toAddressesIdx = 1;
      for(auto& item : m_toAddresses)
      {
        oStream << location << index << locationValue << ".ToAddresses.member." << toAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_ccAddressesHasBeenSet)
  {
      unsigned ccAddressesIdx = 1;
      for(auto& item : m_ccAddresses)
      {
        oStream << location << index << locationValue << ".CcAddresses.member." << ccAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_bccAddressesHasBeenSet)
  {
      unsigned bccAddressesIdx = 1;
      for(auto& item : m_bccAddresses)
      {
        oStream << location << index << locationValue << ".BccAddresses.member." << bccAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void Destination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_toAddressesHasBeenSet)
  {
      unsigned toAddressesIdx = 1;
      for(auto& item : m_toAddresses)
      {
        oStream << location << ".ToAddresses.member." << toAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ccAddressesHasBeenSet)
  {
      unsigned ccAddressesIdx = 1;
      for(auto& item : m_ccAddresses)
      {
        oStream << location << ".CcAddresses.member." << ccAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_bccAddressesHasBeenSet)
  {
      unsigned bccAddressesIdx = 1;
      for(auto& item : m_bccAddresses)
      {
        oStream << location << ".BccAddresses.member." << bccAddressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
