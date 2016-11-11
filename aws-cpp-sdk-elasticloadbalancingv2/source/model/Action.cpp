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
#include <aws/elasticloadbalancingv2/model/Action.h>
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

Action::Action() : 
    m_type(ActionTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false)
{
}

Action::Action(const XmlNode& xmlNode) : 
    m_type(ActionTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

Action& Action::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = ActionTypeEnumMapper::GetActionTypeEnumForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode targetGroupArnNode = resultNode.FirstChild("TargetGroupArn");
    if(!targetGroupArnNode.IsNull())
    {
      m_targetGroupArn = StringUtils::Trim(targetGroupArnNode.GetText().c_str());
      m_targetGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void Action::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << ActionTypeEnumMapper::GetNameForActionTypeEnum(m_type) << "&";
  }

  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

}

void Action::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << ActionTypeEnumMapper::GetNameForActionTypeEnum(m_type) << "&";
  }
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
