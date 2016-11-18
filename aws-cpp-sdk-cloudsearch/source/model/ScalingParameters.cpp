/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
      m_desiredInstanceType = PartitionInstanceTypeMapper::GetPartitionInstanceTypeForName(StringUtils::Trim(desiredInstanceTypeNode.GetText().c_str()).c_str());
      m_desiredInstanceTypeHasBeenSet = true;
    }
    XmlNode desiredReplicationCountNode = resultNode.FirstChild("DesiredReplicationCount");
    if(!desiredReplicationCountNode.IsNull())
    {
      m_desiredReplicationCount = StringUtils::ConvertToInt32(StringUtils::Trim(desiredReplicationCountNode.GetText().c_str()).c_str());
      m_desiredReplicationCountHasBeenSet = true;
    }
    XmlNode desiredPartitionCountNode = resultNode.FirstChild("DesiredPartitionCount");
    if(!desiredPartitionCountNode.IsNull())
    {
      m_desiredPartitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(desiredPartitionCountNode.GetText().c_str()).c_str());
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
