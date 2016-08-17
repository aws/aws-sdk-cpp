/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/AvailableCapacity.h>
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

AvailableCapacity::AvailableCapacity() : 
    m_availableInstanceCapacityHasBeenSet(false),
    m_availableVCpus(0),
    m_availableVCpusHasBeenSet(false)
{
}

AvailableCapacity::AvailableCapacity(const XmlNode& xmlNode) : 
    m_availableInstanceCapacityHasBeenSet(false),
    m_availableVCpus(0),
    m_availableVCpusHasBeenSet(false)
{
  *this = xmlNode;
}

AvailableCapacity& AvailableCapacity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availableInstanceCapacityNode = resultNode.FirstChild("availableInstanceCapacity");
    if(!availableInstanceCapacityNode.IsNull())
    {
      XmlNode availableInstanceCapacityMember = availableInstanceCapacityNode.FirstChild("item");
      while(!availableInstanceCapacityMember.IsNull())
      {
        m_availableInstanceCapacity.push_back(availableInstanceCapacityMember);
        availableInstanceCapacityMember = availableInstanceCapacityMember.NextNode("item");
      }

      m_availableInstanceCapacityHasBeenSet = true;
    }
    XmlNode availableVCpusNode = resultNode.FirstChild("availableVCpus");
    if(!availableVCpusNode.IsNull())
    {
      m_availableVCpus = StringUtils::ConvertToInt32(StringUtils::Trim(availableVCpusNode.GetText().c_str()).c_str());
      m_availableVCpusHasBeenSet = true;
    }
  }

  return *this;
}

void AvailableCapacity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availableInstanceCapacityHasBeenSet)
  {
      unsigned availableInstanceCapacityIdx = 1;
      for(auto& item : m_availableInstanceCapacity)
      {
        Aws::StringStream availableInstanceCapacitySs;
        availableInstanceCapacitySs << location << index << locationValue << ".AvailableInstanceCapacity." << availableInstanceCapacityIdx++;
        item.OutputToStream(oStream, availableInstanceCapacitySs.str().c_str());
      }
  }

  if(m_availableVCpusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableVCpus=" << m_availableVCpus << "&";
  }

}

void AvailableCapacity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availableInstanceCapacityHasBeenSet)
  {
      unsigned availableInstanceCapacityIdx = 1;
      for(auto& item : m_availableInstanceCapacity)
      {
        Aws::StringStream availableInstanceCapacitySs;
        availableInstanceCapacitySs << location <<  ".item." << availableInstanceCapacityIdx++;
        item.OutputToStream(oStream, availableInstanceCapacitySs.str().c_str());
      }
  }
  if(m_availableVCpusHasBeenSet)
  {
      oStream << location << ".AvailableVCpus=" << m_availableVCpus << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
