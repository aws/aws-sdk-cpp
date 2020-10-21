/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceStorageInfo.h>
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

InstanceStorageInfo::InstanceStorageInfo() : 
    m_totalSizeInGB(0),
    m_totalSizeInGBHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_nvmeSupport(EphemeralNvmeSupport::NOT_SET),
    m_nvmeSupportHasBeenSet(false)
{
}

InstanceStorageInfo::InstanceStorageInfo(const XmlNode& xmlNode) : 
    m_totalSizeInGB(0),
    m_totalSizeInGBHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_nvmeSupport(EphemeralNvmeSupport::NOT_SET),
    m_nvmeSupportHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStorageInfo& InstanceStorageInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode totalSizeInGBNode = resultNode.FirstChild("totalSizeInGB");
    if(!totalSizeInGBNode.IsNull())
    {
      m_totalSizeInGB = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalSizeInGBNode.GetText()).c_str()).c_str());
      m_totalSizeInGBHasBeenSet = true;
    }
    XmlNode disksNode = resultNode.FirstChild("disks");
    if(!disksNode.IsNull())
    {
      XmlNode disksMember = disksNode.FirstChild("item");
      while(!disksMember.IsNull())
      {
        m_disks.push_back(disksMember);
        disksMember = disksMember.NextNode("item");
      }

      m_disksHasBeenSet = true;
    }
    XmlNode nvmeSupportNode = resultNode.FirstChild("nvmeSupport");
    if(!nvmeSupportNode.IsNull())
    {
      m_nvmeSupport = EphemeralNvmeSupportMapper::GetEphemeralNvmeSupportForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nvmeSupportNode.GetText()).c_str()).c_str());
      m_nvmeSupportHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStorageInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_totalSizeInGBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalSizeInGB=" << m_totalSizeInGB << "&";
  }

  if(m_disksHasBeenSet)
  {
      unsigned disksIdx = 1;
      for(auto& item : m_disks)
      {
        Aws::StringStream disksSs;
        disksSs << location << index << locationValue << ".Disks." << disksIdx++;
        item.OutputToStream(oStream, disksSs.str().c_str());
      }
  }

  if(m_nvmeSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".NvmeSupport=" << EphemeralNvmeSupportMapper::GetNameForEphemeralNvmeSupport(m_nvmeSupport) << "&";
  }

}

void InstanceStorageInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_totalSizeInGBHasBeenSet)
  {
      oStream << location << ".TotalSizeInGB=" << m_totalSizeInGB << "&";
  }
  if(m_disksHasBeenSet)
  {
      unsigned disksIdx = 1;
      for(auto& item : m_disks)
      {
        Aws::StringStream disksSs;
        disksSs << location <<  ".Disks." << disksIdx++;
        item.OutputToStream(oStream, disksSs.str().c_str());
      }
  }
  if(m_nvmeSupportHasBeenSet)
  {
      oStream << location << ".NvmeSupport=" << EphemeralNvmeSupportMapper::GetNameForEphemeralNvmeSupport(m_nvmeSupport) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
