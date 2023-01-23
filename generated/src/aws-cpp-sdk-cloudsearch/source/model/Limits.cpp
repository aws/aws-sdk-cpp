/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/Limits.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

Limits::Limits() : 
    m_maximumReplicationCount(0),
    m_maximumReplicationCountHasBeenSet(false),
    m_maximumPartitionCount(0),
    m_maximumPartitionCountHasBeenSet(false)
{
}

Limits::Limits(const XmlNode& xmlNode) : 
    m_maximumReplicationCount(0),
    m_maximumReplicationCountHasBeenSet(false),
    m_maximumPartitionCount(0),
    m_maximumPartitionCountHasBeenSet(false)
{
  *this = xmlNode;
}

Limits& Limits::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maximumReplicationCountNode = resultNode.FirstChild("MaximumReplicationCount");
    if(!maximumReplicationCountNode.IsNull())
    {
      m_maximumReplicationCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumReplicationCountNode.GetText()).c_str()).c_str());
      m_maximumReplicationCountHasBeenSet = true;
    }
    XmlNode maximumPartitionCountNode = resultNode.FirstChild("MaximumPartitionCount");
    if(!maximumPartitionCountNode.IsNull())
    {
      m_maximumPartitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumPartitionCountNode.GetText()).c_str()).c_str());
      m_maximumPartitionCountHasBeenSet = true;
    }
  }

  return *this;
}

void Limits::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maximumReplicationCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumReplicationCount=" << m_maximumReplicationCount << "&";
  }

  if(m_maximumPartitionCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaximumPartitionCount=" << m_maximumPartitionCount << "&";
  }

}

void Limits::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maximumReplicationCountHasBeenSet)
  {
      oStream << location << ".MaximumReplicationCount=" << m_maximumReplicationCount << "&";
  }
  if(m_maximumPartitionCountHasBeenSet)
  {
      oStream << location << ".MaximumPartitionCount=" << m_maximumPartitionCount << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
