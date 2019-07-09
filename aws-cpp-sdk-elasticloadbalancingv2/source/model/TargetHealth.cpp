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

#include <aws/elasticloadbalancingv2/model/TargetHealth.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetHealth::TargetHealth() : 
    m_state(TargetHealthStateEnum::NOT_SET),
    m_stateHasBeenSet(false),
    m_reason(TargetHealthReasonEnum::NOT_SET),
    m_reasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TargetHealth::TargetHealth(const XmlNode& xmlNode) : 
    m_state(TargetHealthStateEnum::NOT_SET),
    m_stateHasBeenSet(false),
    m_reason(TargetHealthReasonEnum::NOT_SET),
    m_reasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

TargetHealth& TargetHealth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = TargetHealthStateEnumMapper::GetTargetHealthStateEnumForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = TargetHealthReasonEnumMapper::GetTargetHealthReasonEnumForName(StringUtils::Trim(reasonNode.GetText().c_str()).c_str());
      m_reasonHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(m_state) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << TargetHealthReasonEnumMapper::GetNameForTargetHealthReasonEnum(m_reason) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(m_state) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << TargetHealthReasonEnumMapper::GetNameForTargetHealthReasonEnum(m_reason) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
