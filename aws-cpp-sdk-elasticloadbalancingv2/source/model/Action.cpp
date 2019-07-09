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
    m_targetGroupArnHasBeenSet(false),
    m_authenticateOidcConfigHasBeenSet(false),
    m_authenticateCognitoConfigHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_redirectConfigHasBeenSet(false),
    m_fixedResponseConfigHasBeenSet(false)
{
}

Action::Action(const XmlNode& xmlNode) : 
    m_type(ActionTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false),
    m_authenticateOidcConfigHasBeenSet(false),
    m_authenticateCognitoConfigHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_redirectConfigHasBeenSet(false),
    m_fixedResponseConfigHasBeenSet(false)
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
      m_targetGroupArn = targetGroupArnNode.GetText();
      m_targetGroupArnHasBeenSet = true;
    }
    XmlNode authenticateOidcConfigNode = resultNode.FirstChild("AuthenticateOidcConfig");
    if(!authenticateOidcConfigNode.IsNull())
    {
      m_authenticateOidcConfig = authenticateOidcConfigNode;
      m_authenticateOidcConfigHasBeenSet = true;
    }
    XmlNode authenticateCognitoConfigNode = resultNode.FirstChild("AuthenticateCognitoConfig");
    if(!authenticateCognitoConfigNode.IsNull())
    {
      m_authenticateCognitoConfig = authenticateCognitoConfigNode;
      m_authenticateCognitoConfigHasBeenSet = true;
    }
    XmlNode orderNode = resultNode.FirstChild("Order");
    if(!orderNode.IsNull())
    {
      m_order = StringUtils::ConvertToInt32(StringUtils::Trim(orderNode.GetText().c_str()).c_str());
      m_orderHasBeenSet = true;
    }
    XmlNode redirectConfigNode = resultNode.FirstChild("RedirectConfig");
    if(!redirectConfigNode.IsNull())
    {
      m_redirectConfig = redirectConfigNode;
      m_redirectConfigHasBeenSet = true;
    }
    XmlNode fixedResponseConfigNode = resultNode.FirstChild("FixedResponseConfig");
    if(!fixedResponseConfigNode.IsNull())
    {
      m_fixedResponseConfig = fixedResponseConfigNode;
      m_fixedResponseConfigHasBeenSet = true;
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

  if(m_authenticateOidcConfigHasBeenSet)
  {
      Aws::StringStream authenticateOidcConfigLocationAndMemberSs;
      authenticateOidcConfigLocationAndMemberSs << location << index << locationValue << ".AuthenticateOidcConfig";
      m_authenticateOidcConfig.OutputToStream(oStream, authenticateOidcConfigLocationAndMemberSs.str().c_str());
  }

  if(m_authenticateCognitoConfigHasBeenSet)
  {
      Aws::StringStream authenticateCognitoConfigLocationAndMemberSs;
      authenticateCognitoConfigLocationAndMemberSs << location << index << locationValue << ".AuthenticateCognitoConfig";
      m_authenticateCognitoConfig.OutputToStream(oStream, authenticateCognitoConfigLocationAndMemberSs.str().c_str());
  }

  if(m_orderHasBeenSet)
  {
      oStream << location << index << locationValue << ".Order=" << m_order << "&";
  }

  if(m_redirectConfigHasBeenSet)
  {
      Aws::StringStream redirectConfigLocationAndMemberSs;
      redirectConfigLocationAndMemberSs << location << index << locationValue << ".RedirectConfig";
      m_redirectConfig.OutputToStream(oStream, redirectConfigLocationAndMemberSs.str().c_str());
  }

  if(m_fixedResponseConfigHasBeenSet)
  {
      Aws::StringStream fixedResponseConfigLocationAndMemberSs;
      fixedResponseConfigLocationAndMemberSs << location << index << locationValue << ".FixedResponseConfig";
      m_fixedResponseConfig.OutputToStream(oStream, fixedResponseConfigLocationAndMemberSs.str().c_str());
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
  if(m_authenticateOidcConfigHasBeenSet)
  {
      Aws::String authenticateOidcConfigLocationAndMember(location);
      authenticateOidcConfigLocationAndMember += ".AuthenticateOidcConfig";
      m_authenticateOidcConfig.OutputToStream(oStream, authenticateOidcConfigLocationAndMember.c_str());
  }
  if(m_authenticateCognitoConfigHasBeenSet)
  {
      Aws::String authenticateCognitoConfigLocationAndMember(location);
      authenticateCognitoConfigLocationAndMember += ".AuthenticateCognitoConfig";
      m_authenticateCognitoConfig.OutputToStream(oStream, authenticateCognitoConfigLocationAndMember.c_str());
  }
  if(m_orderHasBeenSet)
  {
      oStream << location << ".Order=" << m_order << "&";
  }
  if(m_redirectConfigHasBeenSet)
  {
      Aws::String redirectConfigLocationAndMember(location);
      redirectConfigLocationAndMember += ".RedirectConfig";
      m_redirectConfig.OutputToStream(oStream, redirectConfigLocationAndMember.c_str());
  }
  if(m_fixedResponseConfigHasBeenSet)
  {
      Aws::String fixedResponseConfigLocationAndMember(location);
      fixedResponseConfigLocationAndMember += ".FixedResponseConfig";
      m_fixedResponseConfig.OutputToStream(oStream, fixedResponseConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
