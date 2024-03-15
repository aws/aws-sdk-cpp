/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NeuronDeviceCoreInfo.h>
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

NeuronDeviceCoreInfo::NeuronDeviceCoreInfo() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

NeuronDeviceCoreInfo::NeuronDeviceCoreInfo(const XmlNode& xmlNode) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = xmlNode;
}

NeuronDeviceCoreInfo& NeuronDeviceCoreInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("version");
    if(!versionNode.IsNull())
    {
      m_version = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText()).c_str()).c_str());
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void NeuronDeviceCoreInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << m_version << "&";
  }

}

void NeuronDeviceCoreInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << m_version << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
