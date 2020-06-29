/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GpuDeviceMemoryInfo.h>
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

GpuDeviceMemoryInfo::GpuDeviceMemoryInfo() : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
}

GpuDeviceMemoryInfo::GpuDeviceMemoryInfo(const XmlNode& xmlNode) : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
  *this = xmlNode;
}

GpuDeviceMemoryInfo& GpuDeviceMemoryInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sizeInMiBNode = resultNode.FirstChild("sizeInMiB");
    if(!sizeInMiBNode.IsNull())
    {
      m_sizeInMiB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeInMiBNode.GetText()).c_str()).c_str());
      m_sizeInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void GpuDeviceMemoryInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sizeInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".SizeInMiB=" << m_sizeInMiB << "&";
  }

}

void GpuDeviceMemoryInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sizeInMiBHasBeenSet)
  {
      oStream << location << ".SizeInMiB=" << m_sizeInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
