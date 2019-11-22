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

#include <aws/ec2/model/PlacementGroupInfo.h>
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

PlacementGroupInfo::PlacementGroupInfo() : 
    m_supportedStrategiesHasBeenSet(false)
{
}

PlacementGroupInfo::PlacementGroupInfo(const XmlNode& xmlNode) : 
    m_supportedStrategiesHasBeenSet(false)
{
  *this = xmlNode;
}

PlacementGroupInfo& PlacementGroupInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode supportedStrategiesNode = resultNode.FirstChild("supportedStrategies");
    if(!supportedStrategiesNode.IsNull())
    {
      XmlNode supportedStrategiesMember = supportedStrategiesNode.FirstChild("item");
      while(!supportedStrategiesMember.IsNull())
      {
        m_supportedStrategies.push_back(PlacementGroupStrategyMapper::GetPlacementGroupStrategyForName(StringUtils::Trim(supportedStrategiesMember.GetText().c_str())));
        supportedStrategiesMember = supportedStrategiesMember.NextNode("item");
      }

      m_supportedStrategiesHasBeenSet = true;
    }
  }

  return *this;
}

void PlacementGroupInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_supportedStrategiesHasBeenSet)
  {
      unsigned supportedStrategiesIdx = 1;
      for(auto& item : m_supportedStrategies)
      {
        oStream << location << index << locationValue << ".SupportedStrategies." << supportedStrategiesIdx++ << "=" << PlacementGroupStrategyMapper::GetNameForPlacementGroupStrategy(item) << "&";
      }
  }

}

void PlacementGroupInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_supportedStrategiesHasBeenSet)
  {
      unsigned supportedStrategiesIdx = 1;
      for(auto& item : m_supportedStrategies)
      {
        oStream << location << ".SupportedStrategies." << supportedStrategiesIdx++ << "=" << PlacementGroupStrategyMapper::GetNameForPlacementGroupStrategy(item) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
