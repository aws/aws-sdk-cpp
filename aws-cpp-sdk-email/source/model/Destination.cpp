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
#include <aws/email/model/Destination.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

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
    XmlNode toAddressesNodeParent = resultNode.FirstChild("ToAddresses");
    XmlNode toAddressesNode = toAddressesNodeParent.FirstChild("member");
    if(!toAddressesNode.IsNull())
    {
      while(!toAddressesNode.IsNull())
      {
        m_toAddresses.push_back(StringUtils::Trim(toAddressesNode.GetText().c_str()));
        toAddressesNode = toAddressesNode.NextNode("member");
      }

      m_toAddressesHasBeenSet = true;
    }
    XmlNode ccAddressesNodeParent = resultNode.FirstChild("CcAddresses");
    XmlNode ccAddressesNode = ccAddressesNodeParent.FirstChild("member");
    if(!ccAddressesNode.IsNull())
    {
      while(!ccAddressesNode.IsNull())
      {
        m_ccAddresses.push_back(StringUtils::Trim(ccAddressesNode.GetText().c_str()));
        ccAddressesNode = ccAddressesNode.NextNode("member");
      }

      m_ccAddressesHasBeenSet = true;
    }
    XmlNode bccAddressesNodeParent = resultNode.FirstChild("BccAddresses");
    XmlNode bccAddressesNode = bccAddressesNodeParent.FirstChild("member");
    if(!bccAddressesNode.IsNull())
    {
      while(!bccAddressesNode.IsNull())
      {
        m_bccAddresses.push_back(StringUtils::Trim(bccAddressesNode.GetText().c_str()));
        bccAddressesNode = bccAddressesNode.NextNode("member");
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
      for(auto& item : m_toAddresses)
      {
        oStream << location << index << locationValue << ".ToAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ccAddressesHasBeenSet)
  {
      for(auto& item : m_ccAddresses)
      {
        oStream << location << index << locationValue << ".CcAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_bccAddressesHasBeenSet)
  {
      for(auto& item : m_bccAddresses)
      {
        oStream << location << index << locationValue << ".BccAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

void Destination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_toAddressesHasBeenSet)
  {
      for(auto& item : m_toAddresses)
      {
        oStream << location << ".ToAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ccAddressesHasBeenSet)
  {
      for(auto& item : m_ccAddresses)
      {
        oStream << location << ".CcAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_bccAddressesHasBeenSet)
  {
      for(auto& item : m_bccAddresses)
      {
        oStream << location << ".BccAddresses=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}
