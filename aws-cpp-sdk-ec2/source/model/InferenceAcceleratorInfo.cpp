/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InferenceAcceleratorInfo.h>
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

InferenceAcceleratorInfo::InferenceAcceleratorInfo() : 
    m_acceleratorsHasBeenSet(false)
{
}

InferenceAcceleratorInfo::InferenceAcceleratorInfo(const XmlNode& xmlNode) : 
    m_acceleratorsHasBeenSet(false)
{
  *this = xmlNode;
}

InferenceAcceleratorInfo& InferenceAcceleratorInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode acceleratorsNode = resultNode.FirstChild("accelerators");
    if(!acceleratorsNode.IsNull())
    {
      XmlNode acceleratorsMember = acceleratorsNode.FirstChild("member");
      while(!acceleratorsMember.IsNull())
      {
        m_accelerators.push_back(acceleratorsMember);
        acceleratorsMember = acceleratorsMember.NextNode("member");
      }

      m_acceleratorsHasBeenSet = true;
    }
  }

  return *this;
}

void InferenceAcceleratorInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_acceleratorsHasBeenSet)
  {
      unsigned acceleratorsIdx = 1;
      for(auto& item : m_accelerators)
      {
        Aws::StringStream acceleratorsSs;
        acceleratorsSs << location << index << locationValue << ".Accelerators." << acceleratorsIdx++;
        item.OutputToStream(oStream, acceleratorsSs.str().c_str());
      }
  }

}

void InferenceAcceleratorInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_acceleratorsHasBeenSet)
  {
      unsigned acceleratorsIdx = 1;
      for(auto& item : m_accelerators)
      {
        Aws::StringStream acceleratorsSs;
        acceleratorsSs << location <<  ".Accelerators." << acceleratorsIdx++;
        item.OutputToStream(oStream, acceleratorsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
