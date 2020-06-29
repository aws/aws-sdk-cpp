/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FpgaInfo.h>
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

FpgaInfo::FpgaInfo() : 
    m_fpgasHasBeenSet(false),
    m_totalFpgaMemoryInMiB(0),
    m_totalFpgaMemoryInMiBHasBeenSet(false)
{
}

FpgaInfo::FpgaInfo(const XmlNode& xmlNode) : 
    m_fpgasHasBeenSet(false),
    m_totalFpgaMemoryInMiB(0),
    m_totalFpgaMemoryInMiBHasBeenSet(false)
{
  *this = xmlNode;
}

FpgaInfo& FpgaInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fpgasNode = resultNode.FirstChild("fpgas");
    if(!fpgasNode.IsNull())
    {
      XmlNode fpgasMember = fpgasNode.FirstChild("item");
      while(!fpgasMember.IsNull())
      {
        m_fpgas.push_back(fpgasMember);
        fpgasMember = fpgasMember.NextNode("item");
      }

      m_fpgasHasBeenSet = true;
    }
    XmlNode totalFpgaMemoryInMiBNode = resultNode.FirstChild("totalFpgaMemoryInMiB");
    if(!totalFpgaMemoryInMiBNode.IsNull())
    {
      m_totalFpgaMemoryInMiB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalFpgaMemoryInMiBNode.GetText()).c_str()).c_str());
      m_totalFpgaMemoryInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void FpgaInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fpgasHasBeenSet)
  {
      unsigned fpgasIdx = 1;
      for(auto& item : m_fpgas)
      {
        Aws::StringStream fpgasSs;
        fpgasSs << location << index << locationValue << ".Fpgas." << fpgasIdx++;
        item.OutputToStream(oStream, fpgasSs.str().c_str());
      }
  }

  if(m_totalFpgaMemoryInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalFpgaMemoryInMiB=" << m_totalFpgaMemoryInMiB << "&";
  }

}

void FpgaInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fpgasHasBeenSet)
  {
      unsigned fpgasIdx = 1;
      for(auto& item : m_fpgas)
      {
        Aws::StringStream fpgasSs;
        fpgasSs << location <<  ".Fpgas." << fpgasIdx++;
        item.OutputToStream(oStream, fpgasSs.str().c_str());
      }
  }
  if(m_totalFpgaMemoryInMiBHasBeenSet)
  {
      oStream << location << ".TotalFpgaMemoryInMiB=" << m_totalFpgaMemoryInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
