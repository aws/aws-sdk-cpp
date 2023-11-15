/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceMaintenancePolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

InstanceMaintenancePolicy::InstanceMaintenancePolicy() : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_maxHealthyPercentage(0),
    m_maxHealthyPercentageHasBeenSet(false)
{
}

InstanceMaintenancePolicy::InstanceMaintenancePolicy(const XmlNode& xmlNode) : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_maxHealthyPercentage(0),
    m_maxHealthyPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceMaintenancePolicy& InstanceMaintenancePolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minHealthyPercentageNode = resultNode.FirstChild("MinHealthyPercentage");
    if(!minHealthyPercentageNode.IsNull())
    {
      m_minHealthyPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minHealthyPercentageNode.GetText()).c_str()).c_str());
      m_minHealthyPercentageHasBeenSet = true;
    }
    XmlNode maxHealthyPercentageNode = resultNode.FirstChild("MaxHealthyPercentage");
    if(!maxHealthyPercentageNode.IsNull())
    {
      m_maxHealthyPercentage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxHealthyPercentageNode.GetText()).c_str()).c_str());
      m_maxHealthyPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMaintenancePolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }

  if(m_maxHealthyPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxHealthyPercentage=" << m_maxHealthyPercentage << "&";
  }

}

void InstanceMaintenancePolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }
  if(m_maxHealthyPercentageHasBeenSet)
  {
      oStream << location << ".MaxHealthyPercentage=" << m_maxHealthyPercentage << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
