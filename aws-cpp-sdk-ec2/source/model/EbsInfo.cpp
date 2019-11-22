/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_encryptionSupportHasBeenSet(false)
{
}

EbsInfo::EbsInfo(const XmlNode& xmlNode) : 
    m_ebsOptimizedSupport(EbsOptimizedSupport::NOT_SET),
    m_ebsOptimizedSupportHasBeenSet(false),
    m_encryptionSupport(EbsEncryptionSupport::NOT_SET),
    m_encryptionSupportHasBeenSet(false)
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
