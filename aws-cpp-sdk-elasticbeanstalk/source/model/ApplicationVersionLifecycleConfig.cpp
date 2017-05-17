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

#include <aws/elasticbeanstalk/model/ApplicationVersionLifecycleConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ApplicationVersionLifecycleConfig::ApplicationVersionLifecycleConfig() : 
    m_maxCountRuleHasBeenSet(false),
    m_maxAgeRuleHasBeenSet(false)
{
}

ApplicationVersionLifecycleConfig::ApplicationVersionLifecycleConfig(const XmlNode& xmlNode) : 
    m_maxCountRuleHasBeenSet(false),
    m_maxAgeRuleHasBeenSet(false)
{
  *this = xmlNode;
}

ApplicationVersionLifecycleConfig& ApplicationVersionLifecycleConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maxCountRuleNode = resultNode.FirstChild("MaxCountRule");
    if(!maxCountRuleNode.IsNull())
    {
      m_maxCountRule = maxCountRuleNode;
      m_maxCountRuleHasBeenSet = true;
    }
    XmlNode maxAgeRuleNode = resultNode.FirstChild("MaxAgeRule");
    if(!maxAgeRuleNode.IsNull())
    {
      m_maxAgeRule = maxAgeRuleNode;
      m_maxAgeRuleHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationVersionLifecycleConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maxCountRuleHasBeenSet)
  {
      Aws::StringStream maxCountRuleLocationAndMemberSs;
      maxCountRuleLocationAndMemberSs << location << index << locationValue << ".MaxCountRule";
      m_maxCountRule.OutputToStream(oStream, maxCountRuleLocationAndMemberSs.str().c_str());
  }

  if(m_maxAgeRuleHasBeenSet)
  {
      Aws::StringStream maxAgeRuleLocationAndMemberSs;
      maxAgeRuleLocationAndMemberSs << location << index << locationValue << ".MaxAgeRule";
      m_maxAgeRule.OutputToStream(oStream, maxAgeRuleLocationAndMemberSs.str().c_str());
  }

}

void ApplicationVersionLifecycleConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maxCountRuleHasBeenSet)
  {
      Aws::String maxCountRuleLocationAndMember(location);
      maxCountRuleLocationAndMember += ".MaxCountRule";
      m_maxCountRule.OutputToStream(oStream, maxCountRuleLocationAndMember.c_str());
  }
  if(m_maxAgeRuleHasBeenSet)
  {
      Aws::String maxAgeRuleLocationAndMember(location);
      maxAgeRuleLocationAndMember += ".MaxAgeRule";
      m_maxAgeRule.OutputToStream(oStream, maxAgeRuleLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
