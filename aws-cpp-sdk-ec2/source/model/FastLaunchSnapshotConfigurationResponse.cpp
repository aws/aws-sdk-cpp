/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FastLaunchSnapshotConfigurationResponse.h>
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

FastLaunchSnapshotConfigurationResponse::FastLaunchSnapshotConfigurationResponse() : 
    m_targetResourceCount(0),
    m_targetResourceCountHasBeenSet(false)
{
}

FastLaunchSnapshotConfigurationResponse::FastLaunchSnapshotConfigurationResponse(const XmlNode& xmlNode) : 
    m_targetResourceCount(0),
    m_targetResourceCountHasBeenSet(false)
{
  *this = xmlNode;
}

FastLaunchSnapshotConfigurationResponse& FastLaunchSnapshotConfigurationResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetResourceCountNode = resultNode.FirstChild("targetResourceCount");
    if(!targetResourceCountNode.IsNull())
    {
      m_targetResourceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetResourceCountNode.GetText()).c_str()).c_str());
      m_targetResourceCountHasBeenSet = true;
    }
  }

  return *this;
}

void FastLaunchSnapshotConfigurationResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetResourceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetResourceCount=" << m_targetResourceCount << "&";
  }

}

void FastLaunchSnapshotConfigurationResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetResourceCountHasBeenSet)
  {
      oStream << location << ".TargetResourceCount=" << m_targetResourceCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
