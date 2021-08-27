/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VCpuInfo.h>
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

VCpuInfo::VCpuInfo() : 
    m_defaultVCpus(0),
    m_defaultVCpusHasBeenSet(false),
    m_defaultCores(0),
    m_defaultCoresHasBeenSet(false),
    m_defaultThreadsPerCore(0),
    m_defaultThreadsPerCoreHasBeenSet(false),
    m_validCoresHasBeenSet(false),
    m_validThreadsPerCoreHasBeenSet(false)
{
}

VCpuInfo::VCpuInfo(const XmlNode& xmlNode) : 
    m_defaultVCpus(0),
    m_defaultVCpusHasBeenSet(false),
    m_defaultCores(0),
    m_defaultCoresHasBeenSet(false),
    m_defaultThreadsPerCore(0),
    m_defaultThreadsPerCoreHasBeenSet(false),
    m_validCoresHasBeenSet(false),
    m_validThreadsPerCoreHasBeenSet(false)
{
  *this = xmlNode;
}

VCpuInfo& VCpuInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode defaultVCpusNode = resultNode.FirstChild("defaultVCpus");
    if(!defaultVCpusNode.IsNull())
    {
      m_defaultVCpus = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultVCpusNode.GetText()).c_str()).c_str());
      m_defaultVCpusHasBeenSet = true;
    }
    XmlNode defaultCoresNode = resultNode.FirstChild("defaultCores");
    if(!defaultCoresNode.IsNull())
    {
      m_defaultCores = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultCoresNode.GetText()).c_str()).c_str());
      m_defaultCoresHasBeenSet = true;
    }
    XmlNode defaultThreadsPerCoreNode = resultNode.FirstChild("defaultThreadsPerCore");
    if(!defaultThreadsPerCoreNode.IsNull())
    {
      m_defaultThreadsPerCore = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultThreadsPerCoreNode.GetText()).c_str()).c_str());
      m_defaultThreadsPerCoreHasBeenSet = true;
    }
    XmlNode validCoresNode = resultNode.FirstChild("validCores");
    if(!validCoresNode.IsNull())
    {
      XmlNode validCoresMember = validCoresNode.FirstChild("item");
      while(!validCoresMember.IsNull())
      {
         m_validCores.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(validCoresMember.GetText().c_str()).c_str()));
        validCoresMember = validCoresMember.NextNode("item");
      }

      m_validCoresHasBeenSet = true;
    }
    XmlNode validThreadsPerCoreNode = resultNode.FirstChild("validThreadsPerCore");
    if(!validThreadsPerCoreNode.IsNull())
    {
      XmlNode validThreadsPerCoreMember = validThreadsPerCoreNode.FirstChild("item");
      while(!validThreadsPerCoreMember.IsNull())
      {
         m_validThreadsPerCore.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(validThreadsPerCoreMember.GetText().c_str()).c_str()));
        validThreadsPerCoreMember = validThreadsPerCoreMember.NextNode("item");
      }

      m_validThreadsPerCoreHasBeenSet = true;
    }
  }

  return *this;
}

void VCpuInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_defaultVCpusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultVCpus=" << m_defaultVCpus << "&";
  }

  if(m_defaultCoresHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultCores=" << m_defaultCores << "&";
  }

  if(m_defaultThreadsPerCoreHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultThreadsPerCore=" << m_defaultThreadsPerCore << "&";
  }

  if(m_validCoresHasBeenSet)
  {
      unsigned validCoresIdx = 1;
      for(auto& item : m_validCores)
      {
        oStream << location << index << locationValue << ".ValidCores." << validCoresIdx++ << "=" << item << "&";
      }
  }

  if(m_validThreadsPerCoreHasBeenSet)
  {
      unsigned validThreadsPerCoreIdx = 1;
      for(auto& item : m_validThreadsPerCore)
      {
        oStream << location << index << locationValue << ".ValidThreadsPerCore." << validThreadsPerCoreIdx++ << "=" << item << "&";
      }
  }

}

void VCpuInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_defaultVCpusHasBeenSet)
  {
      oStream << location << ".DefaultVCpus=" << m_defaultVCpus << "&";
  }
  if(m_defaultCoresHasBeenSet)
  {
      oStream << location << ".DefaultCores=" << m_defaultCores << "&";
  }
  if(m_defaultThreadsPerCoreHasBeenSet)
  {
      oStream << location << ".DefaultThreadsPerCore=" << m_defaultThreadsPerCore << "&";
  }
  if(m_validCoresHasBeenSet)
  {
      unsigned validCoresIdx = 1;
      for(auto& item : m_validCores)
      {
        oStream << location << ".ValidCores." << validCoresIdx++ << "=" << item << "&";
      }
  }
  if(m_validThreadsPerCoreHasBeenSet)
  {
      unsigned validThreadsPerCoreIdx = 1;
      for(auto& item : m_validThreadsPerCore)
      {
        oStream << location << ".ValidThreadsPerCore." << validThreadsPerCoreIdx++ << "=" << item << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
