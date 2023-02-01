/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessLogCloudWatchLogsDestinationOptions.h>
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

VerifiedAccessLogCloudWatchLogsDestinationOptions::VerifiedAccessLogCloudWatchLogsDestinationOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupHasBeenSet(false)
{
}

VerifiedAccessLogCloudWatchLogsDestinationOptions::VerifiedAccessLogCloudWatchLogsDestinationOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_logGroupHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessLogCloudWatchLogsDestinationOptions& VerifiedAccessLogCloudWatchLogsDestinationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode logGroupNode = resultNode.FirstChild("LogGroup");
    if(!logGroupNode.IsNull())
    {
      m_logGroup = Aws::Utils::Xml::DecodeEscapedXmlText(logGroupNode.GetText());
      m_logGroupHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessLogCloudWatchLogsDestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_logGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogGroup=" << StringUtils::URLEncode(m_logGroup.c_str()) << "&";
  }

}

void VerifiedAccessLogCloudWatchLogsDestinationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_logGroupHasBeenSet)
  {
      oStream << location << ".LogGroup=" << StringUtils::URLEncode(m_logGroup.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
