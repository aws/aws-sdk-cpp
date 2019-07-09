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

#include <aws/redshift/model/EventSubscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
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
    m_severityHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
    m_severityHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
      m_customerAwsId = customerAwsIdNode.GetText();
      m_customerAwsIdHasBeenSet = true;
    }
    XmlNode custSubscriptionIdNode = resultNode.FirstChild("CustSubscriptionId");
    if(!custSubscriptionIdNode.IsNull())
    {
      m_custSubscriptionId = custSubscriptionIdNode.GetText();
      m_custSubscriptionIdHasBeenSet = true;
    }
    XmlNode snsTopicArnNode = resultNode.FirstChild("SnsTopicArn");
    if(!snsTopicArnNode.IsNull())
    {
      m_snsTopicArn = snsTopicArnNode.GetText();
      m_snsTopicArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode subscriptionCreationTimeNode = resultNode.FirstChild("SubscriptionCreationTime");
    if(!subscriptionCreationTimeNode.IsNull())
    {
      m_subscriptionCreationTime = DateTime(StringUtils::Trim(subscriptionCreationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_subscriptionCreationTimeHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = sourceTypeNode.GetText();
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
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = severityNode.GetText();
      m_severityHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".SubscriptionCreationTime=" << StringUtils::URLEncode(m_subscriptionCreationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }

  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
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
      oStream << location << ".SubscriptionCreationTime=" << StringUtils::URLEncode(m_subscriptionCreationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
