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

#include <aws/ec2/model/TargetConfiguration.h>
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

TargetConfiguration::TargetConfiguration() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
}

TargetConfiguration::TargetConfiguration(const XmlNode& xmlNode) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
  *this = xmlNode;
}

TargetConfiguration& TargetConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(instanceCountNode.GetText().c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode offeringIdNode = resultNode.FirstChild("offeringId");
    if(!offeringIdNode.IsNull())
    {
      m_offeringId = offeringIdNode.GetText();
      m_offeringIdHasBeenSet = true;
    }
  }

  return *this;
}

void TargetConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_offeringIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

}

void TargetConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_offeringIdHasBeenSet)
  {
      oStream << location << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
