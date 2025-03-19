/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MediaAcceleratorInfo.h>
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

MediaAcceleratorInfo::MediaAcceleratorInfo(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MediaAcceleratorInfo& MediaAcceleratorInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode acceleratorsNode = resultNode.FirstChild("accelerators");
    if(!acceleratorsNode.IsNull())
    {
      XmlNode acceleratorsMember = acceleratorsNode.FirstChild("item");
      m_acceleratorsHasBeenSet = !acceleratorsMember.IsNull();
      while(!acceleratorsMember.IsNull())
      {
        m_accelerators.push_back(acceleratorsMember);
        acceleratorsMember = acceleratorsMember.NextNode("item");
      }

      m_acceleratorsHasBeenSet = true;
    }
    XmlNode totalMediaMemoryInMiBNode = resultNode.FirstChild("totalMediaMemoryInMiB");
    if(!totalMediaMemoryInMiBNode.IsNull())
    {
      m_totalMediaMemoryInMiB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalMediaMemoryInMiBNode.GetText()).c_str()).c_str());
      m_totalMediaMemoryInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void MediaAcceleratorInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_acceleratorsHasBeenSet)
  {
      unsigned acceleratorsIdx = 1;
      for(auto& item : m_accelerators)
      {
        Aws::StringStream acceleratorsSs;
        acceleratorsSs << location << index << locationValue << ".Accelerators." << acceleratorsIdx++;
        item.OutputToStream(oStream, acceleratorsSs.str().c_str());
      }
  }

  if(m_totalMediaMemoryInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalMediaMemoryInMiB=" << m_totalMediaMemoryInMiB << "&";
  }

}

void MediaAcceleratorInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_acceleratorsHasBeenSet)
  {
      unsigned acceleratorsIdx = 1;
      for(auto& item : m_accelerators)
      {
        Aws::StringStream acceleratorsSs;
        acceleratorsSs << location << ".Accelerators." << acceleratorsIdx++;
        item.OutputToStream(oStream, acceleratorsSs.str().c_str());
      }
  }
  if(m_totalMediaMemoryInMiBHasBeenSet)
  {
      oStream << location << ".TotalMediaMemoryInMiB=" << m_totalMediaMemoryInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
