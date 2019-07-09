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

#include <aws/sns/model/Subscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

Subscription::Subscription() : 
    m_subscriptionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
}

Subscription::Subscription(const XmlNode& xmlNode) : 
    m_subscriptionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_topicArnHasBeenSet(false)
{
  *this = xmlNode;
}

Subscription& Subscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subscriptionArnNode = resultNode.FirstChild("SubscriptionArn");
    if(!subscriptionArnNode.IsNull())
    {
      m_subscriptionArn = subscriptionArnNode.GetText();
      m_subscriptionArnHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode.GetText();
      m_ownerHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = protocolNode.GetText();
      m_protocolHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = endpointNode.GetText();
      m_endpointHasBeenSet = true;
    }
    XmlNode topicArnNode = resultNode.FirstChild("TopicArn");
    if(!topicArnNode.IsNull())
    {
      m_topicArn = topicArnNode.GetText();
      m_topicArnHasBeenSet = true;
    }
  }

  return *this;
}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subscriptionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }

  if(m_ownerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_topicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

}

void Subscription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subscriptionArnHasBeenSet)
  {
      oStream << location << ".SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }
  if(m_ownerHasBeenSet)
  {
      oStream << location << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_topicArnHasBeenSet)
  {
      oStream << location << ".TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
