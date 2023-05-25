/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessInstanceLoggingConfiguration.h>
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

VerifiedAccessInstanceLoggingConfiguration::VerifiedAccessInstanceLoggingConfiguration() : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_accessLogsHasBeenSet(false)
{
}

VerifiedAccessInstanceLoggingConfiguration::VerifiedAccessInstanceLoggingConfiguration(const XmlNode& xmlNode) : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_accessLogsHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessInstanceLoggingConfiguration& VerifiedAccessInstanceLoggingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessInstanceIdNode = resultNode.FirstChild("verifiedAccessInstanceId");
    if(!verifiedAccessInstanceIdNode.IsNull())
    {
      m_verifiedAccessInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessInstanceIdNode.GetText());
      m_verifiedAccessInstanceIdHasBeenSet = true;
    }
    XmlNode accessLogsNode = resultNode.FirstChild("accessLogs");
    if(!accessLogsNode.IsNull())
    {
      m_accessLogs = accessLogsNode;
      m_accessLogsHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessInstanceLoggingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_accessLogsHasBeenSet)
  {
      Aws::StringStream accessLogsLocationAndMemberSs;
      accessLogsLocationAndMemberSs << location << index << locationValue << ".AccessLogs";
      m_accessLogs.OutputToStream(oStream, accessLogsLocationAndMemberSs.str().c_str());
  }

}

void VerifiedAccessInstanceLoggingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }
  if(m_accessLogsHasBeenSet)
  {
      Aws::String accessLogsLocationAndMember(location);
      accessLogsLocationAndMember += ".AccessLogs";
      m_accessLogs.OutputToStream(oStream, accessLogsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
