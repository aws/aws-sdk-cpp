/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ElasticGpuHealth.h>
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

ElasticGpuHealth::ElasticGpuHealth() : 
    m_status(ElasticGpuStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ElasticGpuHealth::ElasticGpuHealth(const XmlNode& xmlNode) : 
    m_status(ElasticGpuStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ElasticGpuHealth& ElasticGpuHealth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = ElasticGpuStatusMapper::GetElasticGpuStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ElasticGpuHealth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ElasticGpuStatusMapper::GetNameForElasticGpuStatus(m_status) << "&";
  }

}

void ElasticGpuHealth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ElasticGpuStatusMapper::GetNameForElasticGpuStatus(m_status) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
