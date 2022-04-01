/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DiskInfo.h>
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

DiskInfo::DiskInfo() : 
    m_sizeInGB(0),
    m_sizeInGBHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_type(DiskType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DiskInfo::DiskInfo(const XmlNode& xmlNode) : 
    m_sizeInGB(0),
    m_sizeInGBHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_type(DiskType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

DiskInfo& DiskInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sizeInGBNode = resultNode.FirstChild("sizeInGB");
    if(!sizeInGBNode.IsNull())
    {
      m_sizeInGB = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeInGBNode.GetText()).c_str()).c_str());
      m_sizeInGBHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = DiskTypeMapper::GetDiskTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void DiskInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sizeInGBHasBeenSet)
  {
      oStream << location << index << locationValue << ".SizeInGB=" << m_sizeInGB << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << DiskTypeMapper::GetNameForDiskType(m_type) << "&";
  }

}

void DiskInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sizeInGBHasBeenSet)
  {
      oStream << location << ".SizeInGB=" << m_sizeInGB << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << DiskTypeMapper::GetNameForDiskType(m_type) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
