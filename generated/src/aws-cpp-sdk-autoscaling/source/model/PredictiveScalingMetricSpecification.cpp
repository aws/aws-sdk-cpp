/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredictiveScalingMetricSpecification.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

PredictiveScalingMetricSpecification::PredictiveScalingMetricSpecification() : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_predefinedMetricPairSpecificationHasBeenSet(false),
    m_predefinedScalingMetricSpecificationHasBeenSet(false),
    m_predefinedLoadMetricSpecificationHasBeenSet(false),
    m_customizedScalingMetricSpecificationHasBeenSet(false),
    m_customizedLoadMetricSpecificationHasBeenSet(false),
    m_customizedCapacityMetricSpecificationHasBeenSet(false)
{
}

PredictiveScalingMetricSpecification::PredictiveScalingMetricSpecification(const XmlNode& xmlNode) : 
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_predefinedMetricPairSpecificationHasBeenSet(false),
    m_predefinedScalingMetricSpecificationHasBeenSet(false),
    m_predefinedLoadMetricSpecificationHasBeenSet(false),
    m_customizedScalingMetricSpecificationHasBeenSet(false),
    m_customizedLoadMetricSpecificationHasBeenSet(false),
    m_customizedCapacityMetricSpecificationHasBeenSet(false)
{
  *this = xmlNode;
}

PredictiveScalingMetricSpecification& PredictiveScalingMetricSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetValueNode = resultNode.FirstChild("TargetValue");
    if(!targetValueNode.IsNull())
    {
      m_targetValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetValueNode.GetText()).c_str()).c_str());
      m_targetValueHasBeenSet = true;
    }
    XmlNode predefinedMetricPairSpecificationNode = resultNode.FirstChild("PredefinedMetricPairSpecification");
    if(!predefinedMetricPairSpecificationNode.IsNull())
    {
      m_predefinedMetricPairSpecification = predefinedMetricPairSpecificationNode;
      m_predefinedMetricPairSpecificationHasBeenSet = true;
    }
    XmlNode predefinedScalingMetricSpecificationNode = resultNode.FirstChild("PredefinedScalingMetricSpecification");
    if(!predefinedScalingMetricSpecificationNode.IsNull())
    {
      m_predefinedScalingMetricSpecification = predefinedScalingMetricSpecificationNode;
      m_predefinedScalingMetricSpecificationHasBeenSet = true;
    }
    XmlNode predefinedLoadMetricSpecificationNode = resultNode.FirstChild("PredefinedLoadMetricSpecification");
    if(!predefinedLoadMetricSpecificationNode.IsNull())
    {
      m_predefinedLoadMetricSpecification = predefinedLoadMetricSpecificationNode;
      m_predefinedLoadMetricSpecificationHasBeenSet = true;
    }
    XmlNode customizedScalingMetricSpecificationNode = resultNode.FirstChild("CustomizedScalingMetricSpecification");
    if(!customizedScalingMetricSpecificationNode.IsNull())
    {
      m_customizedScalingMetricSpecification = customizedScalingMetricSpecificationNode;
      m_customizedScalingMetricSpecificationHasBeenSet = true;
    }
    XmlNode customizedLoadMetricSpecificationNode = resultNode.FirstChild("CustomizedLoadMetricSpecification");
    if(!customizedLoadMetricSpecificationNode.IsNull())
    {
      m_customizedLoadMetricSpecification = customizedLoadMetricSpecificationNode;
      m_customizedLoadMetricSpecificationHasBeenSet = true;
    }
    XmlNode customizedCapacityMetricSpecificationNode = resultNode.FirstChild("CustomizedCapacityMetricSpecification");
    if(!customizedCapacityMetricSpecificationNode.IsNull())
    {
      m_customizedCapacityMetricSpecification = customizedCapacityMetricSpecificationNode;
      m_customizedCapacityMetricSpecificationHasBeenSet = true;
    }
  }

  return *this;
}

void PredictiveScalingMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetValueHasBeenSet)
  {
        oStream << location << index << locationValue << ".TargetValue=" << StringUtils::URLEncode(m_targetValue) << "&";
  }

  if(m_predefinedMetricPairSpecificationHasBeenSet)
  {
      Aws::StringStream predefinedMetricPairSpecificationLocationAndMemberSs;
      predefinedMetricPairSpecificationLocationAndMemberSs << location << index << locationValue << ".PredefinedMetricPairSpecification";
      m_predefinedMetricPairSpecification.OutputToStream(oStream, predefinedMetricPairSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_predefinedScalingMetricSpecificationHasBeenSet)
  {
      Aws::StringStream predefinedScalingMetricSpecificationLocationAndMemberSs;
      predefinedScalingMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".PredefinedScalingMetricSpecification";
      m_predefinedScalingMetricSpecification.OutputToStream(oStream, predefinedScalingMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_predefinedLoadMetricSpecificationHasBeenSet)
  {
      Aws::StringStream predefinedLoadMetricSpecificationLocationAndMemberSs;
      predefinedLoadMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".PredefinedLoadMetricSpecification";
      m_predefinedLoadMetricSpecification.OutputToStream(oStream, predefinedLoadMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_customizedScalingMetricSpecificationHasBeenSet)
  {
      Aws::StringStream customizedScalingMetricSpecificationLocationAndMemberSs;
      customizedScalingMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".CustomizedScalingMetricSpecification";
      m_customizedScalingMetricSpecification.OutputToStream(oStream, customizedScalingMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_customizedLoadMetricSpecificationHasBeenSet)
  {
      Aws::StringStream customizedLoadMetricSpecificationLocationAndMemberSs;
      customizedLoadMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".CustomizedLoadMetricSpecification";
      m_customizedLoadMetricSpecification.OutputToStream(oStream, customizedLoadMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_customizedCapacityMetricSpecificationHasBeenSet)
  {
      Aws::StringStream customizedCapacityMetricSpecificationLocationAndMemberSs;
      customizedCapacityMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".CustomizedCapacityMetricSpecification";
      m_customizedCapacityMetricSpecification.OutputToStream(oStream, customizedCapacityMetricSpecificationLocationAndMemberSs.str().c_str());
  }

}

void PredictiveScalingMetricSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetValueHasBeenSet)
  {
        oStream << location << ".TargetValue=" << StringUtils::URLEncode(m_targetValue) << "&";
  }
  if(m_predefinedMetricPairSpecificationHasBeenSet)
  {
      Aws::String predefinedMetricPairSpecificationLocationAndMember(location);
      predefinedMetricPairSpecificationLocationAndMember += ".PredefinedMetricPairSpecification";
      m_predefinedMetricPairSpecification.OutputToStream(oStream, predefinedMetricPairSpecificationLocationAndMember.c_str());
  }
  if(m_predefinedScalingMetricSpecificationHasBeenSet)
  {
      Aws::String predefinedScalingMetricSpecificationLocationAndMember(location);
      predefinedScalingMetricSpecificationLocationAndMember += ".PredefinedScalingMetricSpecification";
      m_predefinedScalingMetricSpecification.OutputToStream(oStream, predefinedScalingMetricSpecificationLocationAndMember.c_str());
  }
  if(m_predefinedLoadMetricSpecificationHasBeenSet)
  {
      Aws::String predefinedLoadMetricSpecificationLocationAndMember(location);
      predefinedLoadMetricSpecificationLocationAndMember += ".PredefinedLoadMetricSpecification";
      m_predefinedLoadMetricSpecification.OutputToStream(oStream, predefinedLoadMetricSpecificationLocationAndMember.c_str());
  }
  if(m_customizedScalingMetricSpecificationHasBeenSet)
  {
      Aws::String customizedScalingMetricSpecificationLocationAndMember(location);
      customizedScalingMetricSpecificationLocationAndMember += ".CustomizedScalingMetricSpecification";
      m_customizedScalingMetricSpecification.OutputToStream(oStream, customizedScalingMetricSpecificationLocationAndMember.c_str());
  }
  if(m_customizedLoadMetricSpecificationHasBeenSet)
  {
      Aws::String customizedLoadMetricSpecificationLocationAndMember(location);
      customizedLoadMetricSpecificationLocationAndMember += ".CustomizedLoadMetricSpecification";
      m_customizedLoadMetricSpecification.OutputToStream(oStream, customizedLoadMetricSpecificationLocationAndMember.c_str());
  }
  if(m_customizedCapacityMetricSpecificationHasBeenSet)
  {
      Aws::String customizedCapacityMetricSpecificationLocationAndMember(location);
      customizedCapacityMetricSpecificationLocationAndMember += ".CustomizedCapacityMetricSpecification";
      m_customizedCapacityMetricSpecification.OutputToStream(oStream, customizedCapacityMetricSpecificationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
