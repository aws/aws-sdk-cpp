﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/EventSubscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

EventSubscription::EventSubscription() : 
    m_customerAwsIdHasBeenSet(false),
    m_custSubscriptionIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventSubscriptionArnHasBeenSet(false)
{
}

EventSubscription::EventSubscription(const XmlNode& xmlNode) : 
    m_customerAwsIdHasBeenSet(false),
    m_custSubscriptionIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subscriptionCreationTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdsListHasBeenSet(false),
    m_eventCategoriesListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventSubscriptionArnHasBeenSet(false)
{
  *this = xmlNode;
}

EventSubscription& EventSubscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customerAwsIdNode = resultNode.FirstChild("CustomerAwsId");
    if(!customerAwsIdNode.IsNull())
    {
      m_customerAwsId = Aws::Utils::Xml::DecodeEscapedXmlText(customerAwsIdNode.GetText());
      m_customerAwsIdHasBeenSet = true;
    }
    XmlNode custSubscriptionIdNode = resultNode.FirstChild("CustSubscriptionId");
    if(!custSubscriptionIdNode.IsNull())
    {
      m_custSubscriptionId = Aws::Utils::Xml::DecodeEscapedXmlText(custSubscriptionIdNode.GetText());
      m_custSubscriptionIdHasBeenSet = true;
    }
    XmlNode snsTopicArnNode = resultNode.FirstChild("SnsTopicArn");
    if(!snsTopicArnNode.IsNull())
    {
      m_snsTopicArn = Aws::Utils::Xml::DecodeEscapedXmlText(snsTopicArnNode.GetText());
      m_snsTopicArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode subscriptionCreationTimeNode = resultNode.FirstChild("SubscriptionCreationTime");
    if(!subscriptionCreationTimeNode.IsNull())
    {
      m_subscriptionCreationTime = Aws::Utils::Xml::DecodeEscapedXmlText(subscriptionCreationTimeNode.GetText());
      m_subscriptionCreationTimeHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode sourceIdsListNode = resultNode.FirstChild("SourceIdsList");
    if(!sourceIdsListNode.IsNull())
    {
      XmlNode sourceIdsListMember = sourceIdsListNode.FirstChild("SourceId");
      while(!sourceIdsListMember.IsNull())
      {
        m_sourceIdsList.push_back(sourceIdsListMember.GetText());
        sourceIdsListMember = sourceIdsListMember.NextNode("SourceId");
      }

      m_sourceIdsListHasBeenSet = true;
    }
    XmlNode eventCategoriesListNode = resultNode.FirstChild("EventCategoriesList");
    if(!eventCategoriesListNode.IsNull())
    {
      XmlNode eventCategoriesListMember = eventCategoriesListNode.FirstChild("EventCategory");
      while(!eventCategoriesListMember.IsNull())
      {
        m_eventCategoriesList.push_back(eventCategoriesListMember.GetText());
        eventCategoriesListMember = eventCategoriesListMember.NextNode("EventCategory");
      }

      m_eventCategoriesListHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode eventSubscriptionArnNode = resultNode.FirstChild("EventSubscriptionArn");
    if(!eventSubscriptionArnNode.IsNull())
    {
      m_eventSubscriptionArn = Aws::Utils::Xml::DecodeEscapedXmlText(eventSubscriptionArnNode.GetText());
      m_eventSubscriptionArnHasBeenSet = true;
    }
  }

  return *this;
}

void EventSubscription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customerAwsIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerAwsId=" << StringUtils::URLEncode(m_customerAwsId.c_str()) << "&";
  }

  if(m_custSubscriptionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustSubscriptionId=" << StringUtils::URLEncode(m_custSubscriptionId.c_str()) << "&";
  }

  if(m_snsTopicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_subscriptionCreationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubscriptionCreationTime=" << StringUtils::URLEncode(m_subscriptionCreationTime.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_sourceIdsListHasBeenSet)
  {
      unsigned sourceIdsListIdx = 1;
      for(auto& item : m_sourceIdsList)
      {
        oStream << location << index << locationValue << ".SourceId." << sourceIdsListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_eventCategoriesListHasBeenSet)
  {
      unsigned eventCategoriesListIdx = 1;
      for(auto& item : m_eventCategoriesList)
      {
        oStream << location << index << locationValue << ".EventCategory." << eventCategoriesListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_eventSubscriptionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventSubscriptionArn=" << StringUtils::URLEncode(m_eventSubscriptionArn.c_str()) << "&";
  }

}

void EventSubscription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customerAwsIdHasBeenSet)
  {
      oStream << location << ".CustomerAwsId=" << StringUtils::URLEncode(m_customerAwsId.c_str()) << "&";
  }
  if(m_custSubscriptionIdHasBeenSet)
  {
      oStream << location << ".CustSubscriptionId=" << StringUtils::URLEncode(m_custSubscriptionId.c_str()) << "&";
  }
  if(m_snsTopicArnHasBeenSet)
  {
      oStream << location << ".SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_subscriptionCreationTimeHasBeenSet)
  {
      oStream << location << ".SubscriptionCreationTime=" << StringUtils::URLEncode(m_subscriptionCreationTime.c_str()) << "&";
  }
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_sourceIdsListHasBeenSet)
  {
      unsigned sourceIdsListIdx = 1;
      for(auto& item : m_sourceIdsList)
      {
        oStream << location << ".SourceId." << sourceIdsListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_eventCategoriesListHasBeenSet)
  {
      unsigned eventCategoriesListIdx = 1;
      for(auto& item : m_eventCategoriesList)
      {
        oStream << location << ".EventCategory." << eventCategoriesListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_eventSubscriptionArnHasBeenSet)
  {
      oStream << location << ".EventSubscriptionArn=" << StringUtils::URLEncode(m_eventSubscriptionArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
