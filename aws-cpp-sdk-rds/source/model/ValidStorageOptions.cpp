/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ValidStorageOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ValidStorageOptions::ValidStorageOptions() : 
    m_storageTypeHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_provisionedIopsHasBeenSet(false),
    m_iopsToStorageRatioHasBeenSet(false),
    m_supportsStorageAutoscaling(false),
    m_supportsStorageAutoscalingHasBeenSet(false),
    m_provisionedStorageThroughputHasBeenSet(false),
    m_storageThroughputToIopsRatioHasBeenSet(false)
{
}

ValidStorageOptions::ValidStorageOptions(const XmlNode& xmlNode) : 
    m_storageTypeHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_provisionedIopsHasBeenSet(false),
    m_iopsToStorageRatioHasBeenSet(false),
    m_supportsStorageAutoscaling(false),
    m_supportsStorageAutoscalingHasBeenSet(false),
    m_provisionedStorageThroughputHasBeenSet(false),
    m_storageThroughputToIopsRatioHasBeenSet(false)
{
  *this = xmlNode;
}

ValidStorageOptions& ValidStorageOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode storageSizeNode = resultNode.FirstChild("StorageSize");
    if(!storageSizeNode.IsNull())
    {
      XmlNode storageSizeMember = storageSizeNode.FirstChild("Range");
      while(!storageSizeMember.IsNull())
      {
        m_storageSize.push_back(storageSizeMember);
        storageSizeMember = storageSizeMember.NextNode("Range");
      }

      m_storageSizeHasBeenSet = true;
    }
    XmlNode provisionedIopsNode = resultNode.FirstChild("ProvisionedIops");
    if(!provisionedIopsNode.IsNull())
    {
      XmlNode provisionedIopsMember = provisionedIopsNode.FirstChild("Range");
      while(!provisionedIopsMember.IsNull())
      {
        m_provisionedIops.push_back(provisionedIopsMember);
        provisionedIopsMember = provisionedIopsMember.NextNode("Range");
      }

      m_provisionedIopsHasBeenSet = true;
    }
    XmlNode iopsToStorageRatioNode = resultNode.FirstChild("IopsToStorageRatio");
    if(!iopsToStorageRatioNode.IsNull())
    {
      XmlNode iopsToStorageRatioMember = iopsToStorageRatioNode.FirstChild("DoubleRange");
      while(!iopsToStorageRatioMember.IsNull())
      {
        m_iopsToStorageRatio.push_back(iopsToStorageRatioMember);
        iopsToStorageRatioMember = iopsToStorageRatioMember.NextNode("DoubleRange");
      }

      m_iopsToStorageRatioHasBeenSet = true;
    }
    XmlNode supportsStorageAutoscalingNode = resultNode.FirstChild("SupportsStorageAutoscaling");
    if(!supportsStorageAutoscalingNode.IsNull())
    {
      m_supportsStorageAutoscaling = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageAutoscalingNode.GetText()).c_str()).c_str());
      m_supportsStorageAutoscalingHasBeenSet = true;
    }
    XmlNode provisionedStorageThroughputNode = resultNode.FirstChild("ProvisionedStorageThroughput");
    if(!provisionedStorageThroughputNode.IsNull())
    {
      XmlNode provisionedStorageThroughputMember = provisionedStorageThroughputNode.FirstChild("Range");
      while(!provisionedStorageThroughputMember.IsNull())
      {
        m_provisionedStorageThroughput.push_back(provisionedStorageThroughputMember);
        provisionedStorageThroughputMember = provisionedStorageThroughputMember.NextNode("Range");
      }

      m_provisionedStorageThroughputHasBeenSet = true;
    }
    XmlNode storageThroughputToIopsRatioNode = resultNode.FirstChild("StorageThroughputToIopsRatio");
    if(!storageThroughputToIopsRatioNode.IsNull())
    {
      XmlNode storageThroughputToIopsRatioMember = storageThroughputToIopsRatioNode.FirstChild("DoubleRange");
      while(!storageThroughputToIopsRatioMember.IsNull())
      {
        m_storageThroughputToIopsRatio.push_back(storageThroughputToIopsRatioMember);
        storageThroughputToIopsRatioMember = storageThroughputToIopsRatioMember.NextNode("DoubleRange");
      }

      m_storageThroughputToIopsRatioHasBeenSet = true;
    }
  }

  return *this;
}

void ValidStorageOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_storageSizeHasBeenSet)
  {
      unsigned storageSizeIdx = 1;
      for(auto& item : m_storageSize)
      {
        Aws::StringStream storageSizeSs;
        storageSizeSs << location << index << locationValue << ".Range." << storageSizeIdx++;
        item.OutputToStream(oStream, storageSizeSs.str().c_str());
      }
  }

  if(m_provisionedIopsHasBeenSet)
  {
      unsigned provisionedIopsIdx = 1;
      for(auto& item : m_provisionedIops)
      {
        Aws::StringStream provisionedIopsSs;
        provisionedIopsSs << location << index << locationValue << ".Range." << provisionedIopsIdx++;
        item.OutputToStream(oStream, provisionedIopsSs.str().c_str());
      }
  }

  if(m_iopsToStorageRatioHasBeenSet)
  {
      unsigned iopsToStorageRatioIdx = 1;
      for(auto& item : m_iopsToStorageRatio)
      {
        Aws::StringStream iopsToStorageRatioSs;
        iopsToStorageRatioSs << location << index << locationValue << ".DoubleRange." << iopsToStorageRatioIdx++;
        item.OutputToStream(oStream, iopsToStorageRatioSs.str().c_str());
      }
  }

  if(m_supportsStorageAutoscalingHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling << "&";
  }

  if(m_provisionedStorageThroughputHasBeenSet)
  {
      unsigned provisionedStorageThroughputIdx = 1;
      for(auto& item : m_provisionedStorageThroughput)
      {
        Aws::StringStream provisionedStorageThroughputSs;
        provisionedStorageThroughputSs << location << index << locationValue << ".Range." << provisionedStorageThroughputIdx++;
        item.OutputToStream(oStream, provisionedStorageThroughputSs.str().c_str());
      }
  }

  if(m_storageThroughputToIopsRatioHasBeenSet)
  {
      unsigned storageThroughputToIopsRatioIdx = 1;
      for(auto& item : m_storageThroughputToIopsRatio)
      {
        Aws::StringStream storageThroughputToIopsRatioSs;
        storageThroughputToIopsRatioSs << location << index << locationValue << ".DoubleRange." << storageThroughputToIopsRatioIdx++;
        item.OutputToStream(oStream, storageThroughputToIopsRatioSs.str().c_str());
      }
  }

}

void ValidStorageOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_storageSizeHasBeenSet)
  {
      unsigned storageSizeIdx = 1;
      for(auto& item : m_storageSize)
      {
        Aws::StringStream storageSizeSs;
        storageSizeSs << location <<  ".Range." << storageSizeIdx++;
        item.OutputToStream(oStream, storageSizeSs.str().c_str());
      }
  }
  if(m_provisionedIopsHasBeenSet)
  {
      unsigned provisionedIopsIdx = 1;
      for(auto& item : m_provisionedIops)
      {
        Aws::StringStream provisionedIopsSs;
        provisionedIopsSs << location <<  ".Range." << provisionedIopsIdx++;
        item.OutputToStream(oStream, provisionedIopsSs.str().c_str());
      }
  }
  if(m_iopsToStorageRatioHasBeenSet)
  {
      unsigned iopsToStorageRatioIdx = 1;
      for(auto& item : m_iopsToStorageRatio)
      {
        Aws::StringStream iopsToStorageRatioSs;
        iopsToStorageRatioSs << location <<  ".DoubleRange." << iopsToStorageRatioIdx++;
        item.OutputToStream(oStream, iopsToStorageRatioSs.str().c_str());
      }
  }
  if(m_supportsStorageAutoscalingHasBeenSet)
  {
      oStream << location << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling << "&";
  }
  if(m_provisionedStorageThroughputHasBeenSet)
  {
      unsigned provisionedStorageThroughputIdx = 1;
      for(auto& item : m_provisionedStorageThroughput)
      {
        Aws::StringStream provisionedStorageThroughputSs;
        provisionedStorageThroughputSs << location <<  ".Range." << provisionedStorageThroughputIdx++;
        item.OutputToStream(oStream, provisionedStorageThroughputSs.str().c_str());
      }
  }
  if(m_storageThroughputToIopsRatioHasBeenSet)
  {
      unsigned storageThroughputToIopsRatioIdx = 1;
      for(auto& item : m_storageThroughputToIopsRatio)
      {
        Aws::StringStream storageThroughputToIopsRatioSs;
        storageThroughputToIopsRatioSs << location <<  ".DoubleRange." << storageThroughputToIopsRatioIdx++;
        item.OutputToStream(oStream, storageThroughputToIopsRatioSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
