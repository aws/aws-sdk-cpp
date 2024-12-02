/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcBlockPublicAccessOptions.h>
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

VpcBlockPublicAccessOptions::VpcBlockPublicAccessOptions() : 
    m_awsAccountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_state(VpcBlockPublicAccessState::NOT_SET),
    m_stateHasBeenSet(false),
    m_internetGatewayBlockMode(InternetGatewayBlockMode::NOT_SET),
    m_internetGatewayBlockModeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_managedBy(ManagedBy::NOT_SET),
    m_managedByHasBeenSet(false),
    m_exclusionsAllowed(VpcBlockPublicAccessExclusionsAllowed::NOT_SET),
    m_exclusionsAllowedHasBeenSet(false)
{
}

VpcBlockPublicAccessOptions::VpcBlockPublicAccessOptions(const XmlNode& xmlNode)
  : VpcBlockPublicAccessOptions()
{
  *this = xmlNode;
}

VpcBlockPublicAccessOptions& VpcBlockPublicAccessOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode awsAccountIdNode = resultNode.FirstChild("awsAccountId");
    if(!awsAccountIdNode.IsNull())
    {
      m_awsAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(awsAccountIdNode.GetText());
      m_awsAccountIdHasBeenSet = true;
    }
    XmlNode awsRegionNode = resultNode.FirstChild("awsRegion");
    if(!awsRegionNode.IsNull())
    {
      m_awsRegion = Aws::Utils::Xml::DecodeEscapedXmlText(awsRegionNode.GetText());
      m_awsRegionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = VpcBlockPublicAccessStateMapper::GetVpcBlockPublicAccessStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode internetGatewayBlockModeNode = resultNode.FirstChild("internetGatewayBlockMode");
    if(!internetGatewayBlockModeNode.IsNull())
    {
      m_internetGatewayBlockMode = InternetGatewayBlockModeMapper::GetInternetGatewayBlockModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(internetGatewayBlockModeNode.GetText()).c_str()).c_str());
      m_internetGatewayBlockModeHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("reason");
    if(!reasonNode.IsNull())
    {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
    XmlNode lastUpdateTimestampNode = resultNode.FirstChild("lastUpdateTimestamp");
    if(!lastUpdateTimestampNode.IsNull())
    {
      m_lastUpdateTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdateTimestampHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()).c_str());
      m_managedByHasBeenSet = true;
    }
    XmlNode exclusionsAllowedNode = resultNode.FirstChild("exclusionsAllowed");
    if(!exclusionsAllowedNode.IsNull())
    {
      m_exclusionsAllowed = VpcBlockPublicAccessExclusionsAllowedMapper::GetVpcBlockPublicAccessExclusionsAllowedForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(exclusionsAllowedNode.GetText()).c_str()).c_str());
      m_exclusionsAllowedHasBeenSet = true;
    }
  }

  return *this;
}

void VpcBlockPublicAccessOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }

  if(m_awsRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".AwsRegion=" << StringUtils::URLEncode(m_awsRegion.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << VpcBlockPublicAccessStateMapper::GetNameForVpcBlockPublicAccessState(m_state) << "&";
  }

  if(m_internetGatewayBlockModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InternetGatewayBlockMode=" << InternetGatewayBlockModeMapper::GetNameForInternetGatewayBlockMode(m_internetGatewayBlockMode) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdateTimestamp=" << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_managedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagedBy=" << ManagedByMapper::GetNameForManagedBy(m_managedBy) << "&";
  }

  if(m_exclusionsAllowedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExclusionsAllowed=" << VpcBlockPublicAccessExclusionsAllowedMapper::GetNameForVpcBlockPublicAccessExclusionsAllowed(m_exclusionsAllowed) << "&";
  }

}

void VpcBlockPublicAccessOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_awsAccountIdHasBeenSet)
  {
      oStream << location << ".AwsAccountId=" << StringUtils::URLEncode(m_awsAccountId.c_str()) << "&";
  }
  if(m_awsRegionHasBeenSet)
  {
      oStream << location << ".AwsRegion=" << StringUtils::URLEncode(m_awsRegion.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << VpcBlockPublicAccessStateMapper::GetNameForVpcBlockPublicAccessState(m_state) << "&";
  }
  if(m_internetGatewayBlockModeHasBeenSet)
  {
      oStream << location << ".InternetGatewayBlockMode=" << InternetGatewayBlockModeMapper::GetNameForInternetGatewayBlockMode(m_internetGatewayBlockMode) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
  if(m_lastUpdateTimestampHasBeenSet)
  {
      oStream << location << ".LastUpdateTimestamp=" << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_managedByHasBeenSet)
  {
      oStream << location << ".ManagedBy=" << ManagedByMapper::GetNameForManagedBy(m_managedBy) << "&";
  }
  if(m_exclusionsAllowedHasBeenSet)
  {
      oStream << location << ".ExclusionsAllowed=" << VpcBlockPublicAccessExclusionsAllowedMapper::GetNameForVpcBlockPublicAccessExclusionsAllowed(m_exclusionsAllowed) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
