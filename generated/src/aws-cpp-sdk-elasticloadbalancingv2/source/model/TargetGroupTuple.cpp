/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetGroupTuple.h>
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

TargetGroupTuple::TargetGroupTuple() : 
    m_targetGroupArnHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

TargetGroupTuple::TargetGroupTuple(const XmlNode& xmlNode) : 
    m_targetGroupArnHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = xmlNode;
}

TargetGroupTuple& TargetGroupTuple::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetGroupArnNode = resultNode.FirstChild("TargetGroupArn");
    if(!targetGroupArnNode.IsNull())
    {
      m_targetGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetGroupArnNode.GetText());
      m_targetGroupArnHasBeenSet = true;
    }
    XmlNode weightNode = resultNode.FirstChild("Weight");
    if(!weightNode.IsNull())
    {
      m_weight = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(weightNode.GetText()).c_str()).c_str());
      m_weightHasBeenSet = true;
    }
  }

  return *this;
}

void TargetGroupTuple::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_weightHasBeenSet)
  {
      oStream << location << index << locationValue << ".Weight=" << m_weight << "&";
  }

}

void TargetGroupTuple::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }
  if(m_weightHasBeenSet)
  {
      oStream << location << ".Weight=" << m_weight << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
