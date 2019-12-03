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
