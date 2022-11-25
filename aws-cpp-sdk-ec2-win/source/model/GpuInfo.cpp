/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GpuInfo.h>
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

GpuInfo::GpuInfo() : 
    m_gpusHasBeenSet(false),
    m_totalGpuMemoryInMiB(0),
    m_totalGpuMemoryInMiBHasBeenSet(false)
{
}

GpuInfo::GpuInfo(const XmlNode& xmlNode) : 
    m_gpusHasBeenSet(false),
    m_totalGpuMemoryInMiB(0),
    m_totalGpuMemoryInMiBHasBeenSet(false)
{
  *this = xmlNode;
}

GpuInfo& GpuInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode gpusNode = resultNode.FirstChild("gpus");
    if(!gpusNode.IsNull())
    {
      XmlNode gpusMember = gpusNode.FirstChild("item");
      while(!gpusMember.IsNull())
      {
        m_gpus.push_back(gpusMember);
        gpusMember = gpusMember.NextNode("item");
      }

      m_gpusHasBeenSet = true;
    }
    XmlNode totalGpuMemoryInMiBNode = resultNode.FirstChild("totalGpuMemoryInMiB");
    if(!totalGpuMemoryInMiBNode.IsNull())
    {
      m_totalGpuMemoryInMiB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalGpuMemoryInMiBNode.GetText()).c_str()).c_str());
      m_totalGpuMemoryInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void GpuInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_gpusHasBeenSet)
  {
      unsigned gpusIdx = 1;
      for(auto& item : m_gpus)
      {
        Aws::StringStream gpusSs;
        gpusSs << location << index << locationValue << ".Gpus." << gpusIdx++;
        item.OutputToStream(oStream, gpusSs.str().c_str());
      }
  }

  if(m_totalGpuMemoryInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalGpuMemoryInMiB=" << m_totalGpuMemoryInMiB << "&";
  }

}

void GpuInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_gpusHasBeenSet)
  {
      unsigned gpusIdx = 1;
      for(auto& item : m_gpus)
      {
        Aws::StringStream gpusSs;
        gpusSs << location <<  ".Gpus." << gpusIdx++;
        item.OutputToStream(oStream, gpusSs.str().c_str());
      }
  }
  if(m_totalGpuMemoryInMiBHasBeenSet)
  {
      oStream << location << ".TotalGpuMemoryInMiB=" << m_totalGpuMemoryInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
