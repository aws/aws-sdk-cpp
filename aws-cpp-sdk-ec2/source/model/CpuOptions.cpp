/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CpuOptions.h>
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

CpuOptions::CpuOptions() : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

CpuOptions::CpuOptions(const XmlNode& xmlNode) : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = xmlNode;
}

CpuOptions& CpuOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode coreCountNode = resultNode.FirstChild("coreCount");
    if(!coreCountNode.IsNull())
    {
      m_coreCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coreCountNode.GetText()).c_str()).c_str());
      m_coreCountHasBeenSet = true;
    }
    XmlNode threadsPerCoreNode = resultNode.FirstChild("threadsPerCore");
    if(!threadsPerCoreNode.IsNull())
    {
      m_threadsPerCore = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(threadsPerCoreNode.GetText()).c_str()).c_str());
      m_threadsPerCoreHasBeenSet = true;
    }
  }

  return *this;
}

void CpuOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoreCount=" << m_coreCount << "&";
  }

  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << index << locationValue << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }

}

void CpuOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_coreCountHasBeenSet)
  {
      oStream << location << ".CoreCount=" << m_coreCount << "&";
  }
  if(m_threadsPerCoreHasBeenSet)
  {
      oStream << location << ".ThreadsPerCore=" << m_threadsPerCore << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
