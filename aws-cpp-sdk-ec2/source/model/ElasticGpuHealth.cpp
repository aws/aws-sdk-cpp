/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
