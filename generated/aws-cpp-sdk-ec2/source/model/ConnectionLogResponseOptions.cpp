/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectionLogResponseOptions.h>
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

ConnectionLogResponseOptions::ConnectionLogResponseOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cloudwatchLogGroupHasBeenSet(false),
    m_cloudwatchLogStreamHasBeenSet(false)
{
}

ConnectionLogResponseOptions::ConnectionLogResponseOptions(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_cloudwatchLogGroupHasBeenSet(false),
    m_cloudwatchLogStreamHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionLogResponseOptions& ConnectionLogResponseOptions::operator =(const XmlNode& xmlNode)
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
    XmlNode cloudwatchLogGroupNode = resultNode.FirstChild("CloudwatchLogGroup");
    if(!cloudwatchLogGroupNode.IsNull())
    {
      m_cloudwatchLogGroup = Aws::Utils::Xml::DecodeEscapedXmlText(cloudwatchLogGroupNode.GetText());
      m_cloudwatchLogGroupHasBeenSet = true;
    }
    XmlNode cloudwatchLogStreamNode = resultNode.FirstChild("CloudwatchLogStream");
    if(!cloudwatchLogStreamNode.IsNull())
    {
      m_cloudwatchLogStream = Aws::Utils::Xml::DecodeEscapedXmlText(cloudwatchLogStreamNode.GetText());
      m_cloudwatchLogStreamHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionLogResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_cloudwatchLogGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".CloudwatchLogGroup=" << StringUtils::URLEncode(m_cloudwatchLogGroup.c_str()) << "&";
  }

  if(m_cloudwatchLogStreamHasBeenSet)
  {
      oStream << location << index << locationValue << ".CloudwatchLogStream=" << StringUtils::URLEncode(m_cloudwatchLogStream.c_str()) << "&";
  }

}

void ConnectionLogResponseOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_cloudwatchLogGroupHasBeenSet)
  {
      oStream << location << ".CloudwatchLogGroup=" << StringUtils::URLEncode(m_cloudwatchLogGroup.c_str()) << "&";
  }
  if(m_cloudwatchLogStreamHasBeenSet)
  {
      oStream << location << ".CloudwatchLogStream=" << StringUtils::URLEncode(m_cloudwatchLogStream.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
