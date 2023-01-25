/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamDiscoveredAccount.h>
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

IpamDiscoveredAccount::IpamDiscoveredAccount() : 
    m_accountIdHasBeenSet(false),
    m_discoveryRegionHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_lastAttemptedDiscoveryTimeHasBeenSet(false),
    m_lastSuccessfulDiscoveryTimeHasBeenSet(false)
{
}

IpamDiscoveredAccount::IpamDiscoveredAccount(const XmlNode& xmlNode) : 
    m_accountIdHasBeenSet(false),
    m_discoveryRegionHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_lastAttemptedDiscoveryTimeHasBeenSet(false),
    m_lastSuccessfulDiscoveryTimeHasBeenSet(false)
{
  *this = xmlNode;
}

IpamDiscoveredAccount& IpamDiscoveredAccount::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountIdNode = resultNode.FirstChild("accountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode discoveryRegionNode = resultNode.FirstChild("discoveryRegion");
    if(!discoveryRegionNode.IsNull())
    {
      m_discoveryRegion = Aws::Utils::Xml::DecodeEscapedXmlText(discoveryRegionNode.GetText());
      m_discoveryRegionHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = failureReasonNode;
      m_failureReasonHasBeenSet = true;
    }
    XmlNode lastAttemptedDiscoveryTimeNode = resultNode.FirstChild("lastAttemptedDiscoveryTime");
    if(!lastAttemptedDiscoveryTimeNode.IsNull())
    {
      m_lastAttemptedDiscoveryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastAttemptedDiscoveryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastAttemptedDiscoveryTimeHasBeenSet = true;
    }
    XmlNode lastSuccessfulDiscoveryTimeNode = resultNode.FirstChild("lastSuccessfulDiscoveryTime");
    if(!lastSuccessfulDiscoveryTimeNode.IsNull())
    {
      m_lastSuccessfulDiscoveryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastSuccessfulDiscoveryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastSuccessfulDiscoveryTimeHasBeenSet = true;
    }
  }

  return *this;
}

void IpamDiscoveredAccount::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_discoveryRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DiscoveryRegion=" << StringUtils::URLEncode(m_discoveryRegion.c_str()) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      Aws::StringStream failureReasonLocationAndMemberSs;
      failureReasonLocationAndMemberSs << location << index << locationValue << ".FailureReason";
      m_failureReason.OutputToStream(oStream, failureReasonLocationAndMemberSs.str().c_str());
  }

  if(m_lastAttemptedDiscoveryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastAttemptedDiscoveryTime=" << StringUtils::URLEncode(m_lastAttemptedDiscoveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastSuccessfulDiscoveryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastSuccessfulDiscoveryTime=" << StringUtils::URLEncode(m_lastSuccessfulDiscoveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IpamDiscoveredAccount::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_discoveryRegionHasBeenSet)
  {
      oStream << location << ".DiscoveryRegion=" << StringUtils::URLEncode(m_discoveryRegion.c_str()) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      Aws::String failureReasonLocationAndMember(location);
      failureReasonLocationAndMember += ".FailureReason";
      m_failureReason.OutputToStream(oStream, failureReasonLocationAndMember.c_str());
  }
  if(m_lastAttemptedDiscoveryTimeHasBeenSet)
  {
      oStream << location << ".LastAttemptedDiscoveryTime=" << StringUtils::URLEncode(m_lastAttemptedDiscoveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastSuccessfulDiscoveryTimeHasBeenSet)
  {
      oStream << location << ".LastSuccessfulDiscoveryTime=" << StringUtils::URLEncode(m_lastSuccessfulDiscoveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
