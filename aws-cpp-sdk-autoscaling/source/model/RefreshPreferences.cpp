/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RefreshPreferences.h>
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

RefreshPreferences::RefreshPreferences() : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_instanceWarmup(0),
    m_instanceWarmupHasBeenSet(false)
{
}

RefreshPreferences::RefreshPreferences(const XmlNode& xmlNode) : 
    m_minHealthyPercentage(0),
    m_minHealthyPercentageHasBeenSet(false),
    m_instanceWarmup(0),
    m_instanceWarmupHasBeenSet(false)
{
  *this = xmlNode;
}

RefreshPreferences& RefreshPreferences::operator =(const XmlNode& xmlNode)
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
    XmlNode instanceWarmupNode = resultNode.FirstChild("InstanceWarmup");
    if(!instanceWarmupNode.IsNull())
    {
      m_instanceWarmup = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceWarmupNode.GetText()).c_str()).c_str());
      m_instanceWarmupHasBeenSet = true;
    }
  }

  return *this;
}

void RefreshPreferences::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }

  if(m_instanceWarmupHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceWarmup=" << m_instanceWarmup << "&";
  }

}

void RefreshPreferences::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minHealthyPercentageHasBeenSet)
  {
      oStream << location << ".MinHealthyPercentage=" << m_minHealthyPercentage << "&";
  }
  if(m_instanceWarmupHasBeenSet)
  {
      oStream << location << ".InstanceWarmup=" << m_instanceWarmup << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
