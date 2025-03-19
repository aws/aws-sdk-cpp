/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CpuPerformanceFactorRequest.h>
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

CpuPerformanceFactorRequest::CpuPerformanceFactorRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CpuPerformanceFactorRequest& CpuPerformanceFactorRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode referencesNode = resultNode.FirstChild("Reference");
    if(!referencesNode.IsNull())
    {
      XmlNode referencesMember = referencesNode.FirstChild("item");
      m_referencesHasBeenSet = !referencesMember.IsNull();
      while(!referencesMember.IsNull())
      {
        m_references.push_back(referencesMember);
        referencesMember = referencesMember.NextNode("item");
      }

      m_referencesHasBeenSet = true;
    }
  }

  return *this;
}

void CpuPerformanceFactorRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_referencesHasBeenSet)
  {
      unsigned referencesIdx = 1;
      for(auto& item : m_references)
      {
        Aws::StringStream referencesSs;
        referencesSs << location << index << locationValue << ".Reference." << referencesIdx++;
        item.OutputToStream(oStream, referencesSs.str().c_str());
      }
  }

}

void CpuPerformanceFactorRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_referencesHasBeenSet)
  {
      unsigned referencesIdx = 1;
      for(auto& item : m_references)
      {
        Aws::StringStream referencesSs;
        referencesSs << location << ".Reference." << referencesIdx++;
        item.OutputToStream(oStream, referencesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
