/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TargetTrackingConfiguration.h>
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

TargetTrackingConfiguration::TargetTrackingConfiguration() : 
    m_predefinedMetricSpecificationHasBeenSet(false),
    m_customizedMetricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false)
{
}

TargetTrackingConfiguration::TargetTrackingConfiguration(const XmlNode& xmlNode) : 
    m_predefinedMetricSpecificationHasBeenSet(false),
    m_customizedMetricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false),
    m_disableScaleIn(false),
    m_disableScaleInHasBeenSet(false)
{
  *this = xmlNode;
}

TargetTrackingConfiguration& TargetTrackingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode predefinedMetricSpecificationNode = resultNode.FirstChild("PredefinedMetricSpecification");
    if(!predefinedMetricSpecificationNode.IsNull())
    {
      m_predefinedMetricSpecification = predefinedMetricSpecificationNode;
      m_predefinedMetricSpecificationHasBeenSet = true;
    }
    XmlNode customizedMetricSpecificationNode = resultNode.FirstChild("CustomizedMetricSpecification");
    if(!customizedMetricSpecificationNode.IsNull())
    {
      m_customizedMetricSpecification = customizedMetricSpecificationNode;
      m_customizedMetricSpecificationHasBeenSet = true;
    }
    XmlNode targetValueNode = resultNode.FirstChild("TargetValue");
    if(!targetValueNode.IsNull())
    {
      m_targetValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetValueNode.GetText()).c_str()).c_str());
      m_targetValueHasBeenSet = true;
    }
    XmlNode disableScaleInNode = resultNode.FirstChild("DisableScaleIn");
    if(!disableScaleInNode.IsNull())
    {
      m_disableScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disableScaleInNode.GetText()).c_str()).c_str());
      m_disableScaleInHasBeenSet = true;
    }
  }

  return *this;
}

void TargetTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_predefinedMetricSpecificationHasBeenSet)
  {
      Aws::StringStream predefinedMetricSpecificationLocationAndMemberSs;
      predefinedMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".PredefinedMetricSpecification";
      m_predefinedMetricSpecification.OutputToStream(oStream, predefinedMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_customizedMetricSpecificationHasBeenSet)
  {
      Aws::StringStream customizedMetricSpecificationLocationAndMemberSs;
      customizedMetricSpecificationLocationAndMemberSs << location << index << locationValue << ".CustomizedMetricSpecification";
      m_customizedMetricSpecification.OutputToStream(oStream, customizedMetricSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_targetValueHasBeenSet)
  {
        oStream << location << index << locationValue << ".TargetValue=" << StringUtils::URLEncode(m_targetValue) << "&";
  }

  if(m_disableScaleInHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisableScaleIn=" << std::boolalpha << m_disableScaleIn << "&";
  }

}

void TargetTrackingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_predefinedMetricSpecificationHasBeenSet)
  {
      Aws::String predefinedMetricSpecificationLocationAndMember(location);
      predefinedMetricSpecificationLocationAndMember += ".PredefinedMetricSpecification";
      m_predefinedMetricSpecification.OutputToStream(oStream, predefinedMetricSpecificationLocationAndMember.c_str());
  }
  if(m_customizedMetricSpecificationHasBeenSet)
  {
      Aws::String customizedMetricSpecificationLocationAndMember(location);
      customizedMetricSpecificationLocationAndMember += ".CustomizedMetricSpecification";
      m_customizedMetricSpecification.OutputToStream(oStream, customizedMetricSpecificationLocationAndMember.c_str());
  }
  if(m_targetValueHasBeenSet)
  {
        oStream << location << ".TargetValue=" << StringUtils::URLEncode(m_targetValue) << "&";
  }
  if(m_disableScaleInHasBeenSet)
  {
      oStream << location << ".DisableScaleIn=" << std::boolalpha << m_disableScaleIn << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
