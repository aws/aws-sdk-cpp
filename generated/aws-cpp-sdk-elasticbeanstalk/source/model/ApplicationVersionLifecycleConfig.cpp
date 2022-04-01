/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
