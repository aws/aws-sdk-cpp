/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/CloudWatchLogsDestinationDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CloudWatchLogsDestinationDetails::CloudWatchLogsDestinationDetails() : 
    m_logGroupHasBeenSet(false)
{
}

CloudWatchLogsDestinationDetails::CloudWatchLogsDestinationDetails(const XmlNode& xmlNode) : 
    m_logGroupHasBeenSet(false)
{
  *this = xmlNode;
}

CloudWatchLogsDestinationDetails& CloudWatchLogsDestinationDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logGroupNode = resultNode.FirstChild("LogGroup");
    if(!logGroupNode.IsNull())
    {
      m_logGroup = Aws::Utils::Xml::DecodeEscapedXmlText(logGroupNode.GetText());
      m_logGroupHasBeenSet = true;
    }
  }

  return *this;
}

void CloudWatchLogsDestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogGroup=" << StringUtils::URLEncode(m_logGroup.c_str()) << "&";
  }

}

void CloudWatchLogsDestinationDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logGroupHasBeenSet)
  {
      oStream << location << ".LogGroup=" << StringUtils::URLEncode(m_logGroup.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
