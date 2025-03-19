/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NeuronDeviceInfo.h>
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

NeuronDeviceInfo::NeuronDeviceInfo(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

NeuronDeviceInfo& NeuronDeviceInfo::operator =(const XmlNode& xmlNode)
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
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode coreInfoNode = resultNode.FirstChild("coreInfo");
    if(!coreInfoNode.IsNull())
    {
      m_coreInfo = coreInfoNode;
      m_coreInfoHasBeenSet = true;
    }
    XmlNode memoryInfoNode = resultNode.FirstChild("memoryInfo");
    if(!memoryInfoNode.IsNull())
    {
      m_memoryInfo = memoryInfoNode;
      m_memoryInfoHasBeenSet = true;
    }
  }

  return *this;
}

void NeuronDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_coreInfoHasBeenSet)
  {
      Aws::StringStream coreInfoLocationAndMemberSs;
      coreInfoLocationAndMemberSs << location << index << locationValue << ".CoreInfo";
      m_coreInfo.OutputToStream(oStream, coreInfoLocationAndMemberSs.str().c_str());
  }

  if(m_memoryInfoHasBeenSet)
  {
      Aws::StringStream memoryInfoLocationAndMemberSs;
      memoryInfoLocationAndMemberSs << location << index << locationValue << ".MemoryInfo";
      m_memoryInfo.OutputToStream(oStream, memoryInfoLocationAndMemberSs.str().c_str());
  }

}

void NeuronDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_coreInfoHasBeenSet)
  {
      Aws::String coreInfoLocationAndMember(location);
      coreInfoLocationAndMember += ".CoreInfo";
      m_coreInfo.OutputToStream(oStream, coreInfoLocationAndMember.c_str());
  }
  if(m_memoryInfoHasBeenSet)
  {
      Aws::String memoryInfoLocationAndMember(location);
      memoryInfoLocationAndMember += ".MemoryInfo";
      m_memoryInfo.OutputToStream(oStream, memoryInfoLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
