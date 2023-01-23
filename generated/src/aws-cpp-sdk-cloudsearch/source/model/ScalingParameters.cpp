/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/ScalingParameters.h>
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

ScalingParameters::ScalingParameters() : 
    m_desiredInstanceType(PartitionInstanceType::NOT_SET),
    m_desiredInstanceTypeHasBeenSet(false),
    m_desiredReplicationCount(0),
    m_desiredReplicationCountHasBeenSet(false),
    m_desiredPartitionCount(0),
    m_desiredPartitionCountHasBeenSet(false)
{
}

ScalingParameters::ScalingParameters(const XmlNode& xmlNode) : 
    m_desiredInstanceType(PartitionInstanceType::NOT_SET),
    m_desiredInstanceTypeHasBeenSet(false),
    m_desiredReplicationCount(0),
    m_desiredReplicationCountHasBeenSet(false),
    m_desiredPartitionCount(0),
    m_desiredPartitionCountHasBeenSet(false)
{
  *this = xmlNode;
}

ScalingParameters& ScalingParameters::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode desiredInstanceTypeNode = resultNode.FirstChild("DesiredInstanceType");
    if(!desiredInstanceTypeNode.IsNull())
    {
      m_desiredInstanceType = PartitionInstanceTypeMapper::GetPartitionInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredInstanceTypeNode.GetText()).c_str()).c_str());
      m_desiredInstanceTypeHasBeenSet = true;
    }
    XmlNode desiredReplicationCountNode = resultNode.FirstChild("DesiredReplicationCount");
    if(!desiredReplicationCountNode.IsNull())
    {
      m_desiredReplicationCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredReplicationCountNode.GetText()).c_str()).c_str());
      m_desiredReplicationCountHasBeenSet = true;
    }
    XmlNode desiredPartitionCountNode = resultNode.FirstChild("DesiredPartitionCount");
    if(!desiredPartitionCountNode.IsNull())
    {
      m_desiredPartitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredPartitionCountNode.GetText()).c_str()).c_str());
      m_desiredPartitionCountHasBeenSet = true;
    }
  }

  return *this;
}

void ScalingParameters::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_desiredInstanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredInstanceType=" << PartitionInstanceTypeMapper::GetNameForPartitionInstanceType(m_desiredInstanceType) << "&";
  }

  if(m_desiredReplicationCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredReplicationCount=" << m_desiredReplicationCount << "&";
  }

  if(m_desiredPartitionCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredPartitionCount=" << m_desiredPartitionCount << "&";
  }

}

void ScalingParameters::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_desiredInstanceTypeHasBeenSet)
  {
      oStream << location << ".DesiredInstanceType=" << PartitionInstanceTypeMapper::GetNameForPartitionInstanceType(m_desiredInstanceType) << "&";
  }
  if(m_desiredReplicationCountHasBeenSet)
  {
      oStream << location << ".DesiredReplicationCount=" << m_desiredReplicationCount << "&";
  }
  if(m_desiredPartitionCountHasBeenSet)
  {
      oStream << location << ".DesiredPartitionCount=" << m_desiredPartitionCount << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
