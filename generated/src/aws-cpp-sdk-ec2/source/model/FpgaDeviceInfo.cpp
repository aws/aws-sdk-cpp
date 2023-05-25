/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FpgaDeviceInfo.h>
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

FpgaDeviceInfo::FpgaDeviceInfo() : 
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_memoryInfoHasBeenSet(false)
{
}

FpgaDeviceInfo::FpgaDeviceInfo(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_memoryInfoHasBeenSet(false)
{
  *this = xmlNode;
}

FpgaDeviceInfo& FpgaDeviceInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode manufacturerNode = resultNode.FirstChild("manufacturer");
    if(!manufacturerNode.IsNull())
    {
      m_manufacturer = Aws::Utils::Xml::DecodeEscapedXmlText(manufacturerNode.GetText());
      m_manufacturerHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
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

void FpgaDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_manufacturerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Manufacturer=" << StringUtils::URLEncode(m_manufacturer.c_str()) << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_memoryInfoHasBeenSet)
  {
      Aws::StringStream memoryInfoLocationAndMemberSs;
      memoryInfoLocationAndMemberSs << location << index << locationValue << ".MemoryInfo";
      m_memoryInfo.OutputToStream(oStream, memoryInfoLocationAndMemberSs.str().c_str());
  }

}

void FpgaDeviceInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_manufacturerHasBeenSet)
  {
      oStream << location << ".Manufacturer=" << StringUtils::URLEncode(m_manufacturer.c_str()) << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
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
