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
#include <aws/email/model/CloudWatchDestination.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

CloudWatchDestination::CloudWatchDestination() : 
    m_dimensionConfigurationsHasBeenSet(false)
{
}

CloudWatchDestination::CloudWatchDestination(const XmlNode& xmlNode) : 
    m_dimensionConfigurationsHasBeenSet(false)
{
  *this = xmlNode;
}

CloudWatchDestination& CloudWatchDestination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dimensionConfigurationsNode = resultNode.FirstChild("DimensionConfigurations");
    if(!dimensionConfigurationsNode.IsNull())
    {
      XmlNode dimensionConfigurationsMember = dimensionConfigurationsNode.FirstChild("member");
      while(!dimensionConfigurationsMember.IsNull())
      {
        m_dimensionConfigurations.push_back(dimensionConfigurationsMember);
        dimensionConfigurationsMember = dimensionConfigurationsMember.NextNode("member");
      }

      m_dimensionConfigurationsHasBeenSet = true;
    }
  }

  return *this;
}

void CloudWatchDestination::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dimensionConfigurationsHasBeenSet)
  {
      unsigned dimensionConfigurationsIdx = 1;
      for(auto& item : m_dimensionConfigurations)
      {
        Aws::StringStream dimensionConfigurationsSs;
        dimensionConfigurationsSs << location << index << locationValue << ".DimensionConfigurations.member." << dimensionConfigurationsIdx++;
        item.OutputToStream(oStream, dimensionConfigurationsSs.str().c_str());
      }
  }

}

void CloudWatchDestination::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dimensionConfigurationsHasBeenSet)
  {
      unsigned dimensionConfigurationsIdx = 1;
      for(auto& item : m_dimensionConfigurations)
      {
        Aws::StringStream dimensionConfigurationsSs;
        dimensionConfigurationsSs << location <<  ".DimensionConfigurations.member." << dimensionConfigurationsIdx++;
        item.OutputToStream(oStream, dimensionConfigurationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
