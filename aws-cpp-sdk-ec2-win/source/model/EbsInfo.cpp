/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EbsInfo.h>
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

EbsInfo::EbsInfo() : 
    m_ebsOptimizedSupport(EbsOptimizedSupport::NOT_SET),
    m_ebsOptimizedSupportHasBeenSet(false),
    m_encryptionSupport(EbsEncryptionSupport::NOT_SET),
    m_encryptionSupportHasBeenSet(false),
    m_ebsOptimizedInfoHasBeenSet(false),
    m_nvmeSupport(EbsNvmeSupport::NOT_SET),
    m_nvmeSupportHasBeenSet(false)
{
}

EbsInfo::EbsInfo(const XmlNode& xmlNode) : 
    m_ebsOptimizedSupport(EbsOptimizedSupport::NOT_SET),
    m_ebsOptimizedSupportHasBeenSet(false),
    m_encryptionSupport(EbsEncryptionSupport::NOT_SET),
    m_encryptionSupportHasBeenSet(false),
    m_ebsOptimizedInfoHasBeenSet(false),
    m_nvmeSupport(EbsNvmeSupport::NOT_SET),
    m_nvmeSupportHasBeenSet(false)
{
  *this = xmlNode;
}

EbsInfo& EbsInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ebsOptimizedSupportNode = resultNode.FirstChild("ebsOptimizedSupport");
    if(!ebsOptimizedSupportNode.IsNull())
    {
      m_ebsOptimizedSupport = EbsOptimizedSupportMapper::GetEbsOptimizedSupportForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedSupportNode.GetText()).c_str()).c_str());
      m_ebsOptimizedSupportHasBeenSet = true;
    }
    XmlNode encryptionSupportNode = resultNode.FirstChild("encryptionSupport");
    if(!encryptionSupportNode.IsNull())
    {
      m_encryptionSupport = EbsEncryptionSupportMapper::GetEbsEncryptionSupportForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptionSupportNode.GetText()).c_str()).c_str());
      m_encryptionSupportHasBeenSet = true;
    }
    XmlNode ebsOptimizedInfoNode = resultNode.FirstChild("ebsOptimizedInfo");
    if(!ebsOptimizedInfoNode.IsNull())
    {
      m_ebsOptimizedInfo = ebsOptimizedInfoNode;
      m_ebsOptimizedInfoHasBeenSet = true;
    }
    XmlNode nvmeSupportNode = resultNode.FirstChild("nvmeSupport");
    if(!nvmeSupportNode.IsNull())
    {
      m_nvmeSupport = EbsNvmeSupportMapper::GetEbsNvmeSupportForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nvmeSupportNode.GetText()).c_str()).c_str());
      m_nvmeSupportHasBeenSet = true;
    }
  }

  return *this;
}

void EbsInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ebsOptimizedSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimizedSupport=" << EbsOptimizedSupportMapper::GetNameForEbsOptimizedSupport(m_ebsOptimizedSupport) << "&";
  }

  if(m_encryptionSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".EncryptionSupport=" << EbsEncryptionSupportMapper::GetNameForEbsEncryptionSupport(m_encryptionSupport) << "&";
  }

  if(m_ebsOptimizedInfoHasBeenSet)
  {
      Aws::StringStream ebsOptimizedInfoLocationAndMemberSs;
      ebsOptimizedInfoLocationAndMemberSs << location << index << locationValue << ".EbsOptimizedInfo";
      m_ebsOptimizedInfo.OutputToStream(oStream, ebsOptimizedInfoLocationAndMemberSs.str().c_str());
  }

  if(m_nvmeSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".NvmeSupport=" << EbsNvmeSupportMapper::GetNameForEbsNvmeSupport(m_nvmeSupport) << "&";
  }

}

void EbsInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ebsOptimizedSupportHasBeenSet)
  {
      oStream << location << ".EbsOptimizedSupport=" << EbsOptimizedSupportMapper::GetNameForEbsOptimizedSupport(m_ebsOptimizedSupport) << "&";
  }
  if(m_encryptionSupportHasBeenSet)
  {
      oStream << location << ".EncryptionSupport=" << EbsEncryptionSupportMapper::GetNameForEbsEncryptionSupport(m_encryptionSupport) << "&";
  }
  if(m_ebsOptimizedInfoHasBeenSet)
  {
      Aws::String ebsOptimizedInfoLocationAndMember(location);
      ebsOptimizedInfoLocationAndMember += ".EbsOptimizedInfo";
      m_ebsOptimizedInfo.OutputToStream(oStream, ebsOptimizedInfoLocationAndMember.c_str());
  }
  if(m_nvmeSupportHasBeenSet)
  {
      oStream << location << ".NvmeSupport=" << EbsNvmeSupportMapper::GetNameForEbsNvmeSupport(m_nvmeSupport) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
