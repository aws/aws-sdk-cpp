/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotDatafeedSubscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

SpotDatafeedSubscription::SpotDatafeedSubscription() : 
    m_bucketHasBeenSet(false),
    m_faultHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_state(DatafeedSubscriptionState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

SpotDatafeedSubscription::SpotDatafeedSubscription(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_faultHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_state(DatafeedSubscriptionState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

SpotDatafeedSubscription& SpotDatafeedSubscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode faultNode = resultNode.FirstChild("fault");
    if(!faultNode.IsNull())
    {
      m_fault = faultNode;
      m_faultHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = DatafeedSubscriptionStateMapper::GetDatafeedSubscriptionStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void SpotDatafeedSubscription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_faultHasBeenSet)
  {
      Aws::StringStream faultLocationAndMemberSs;
      faultLocationAndMemberSs << location << index << locationValue << ".Fault";
      m_fault.OutputToStream(oStream, faultLocationAndMemberSs.str().c_str());
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_prefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << DatafeedSubscriptionStateMapper::GetNameForDatafeedSubscriptionState(m_state) << "&";
  }

}

void SpotDatafeedSubscription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bucketHasBeenSet)
  {
      oStream << location << ".Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }
  if(m_faultHasBeenSet)
  {
      Aws::String faultLocationAndMember(location);
      faultLocationAndMember += ".Fault";
      m_fault.OutputToStream(oStream, faultLocationAndMember.c_str());
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_prefixHasBeenSet)
  {
      oStream << location << ".Prefix=" << StringUtils::URLEncode(m_prefix.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << DatafeedSubscriptionStateMapper::GetNameForDatafeedSubscriptionState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
