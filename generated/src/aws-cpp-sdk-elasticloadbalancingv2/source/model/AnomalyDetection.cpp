/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AnomalyDetection.h>
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

AnomalyDetection::AnomalyDetection(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AnomalyDetection& AnomalyDetection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode anomalyDetectionResultNode = resultNode.FirstChild("Result");
    if(!anomalyDetectionResultNode.IsNull())
    {
      m_result = AnomalyResultEnumMapper::GetAnomalyResultEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(anomalyDetectionResultNode.GetText()).c_str()));
      m_resultHasBeenSet = true;
    }
    XmlNode mitigationInEffectNode = resultNode.FirstChild("MitigationInEffect");
    if(!mitigationInEffectNode.IsNull())
    {
      m_mitigationInEffect = MitigationInEffectEnumMapper::GetMitigationInEffectEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(mitigationInEffectNode.GetText()).c_str()));
      m_mitigationInEffectHasBeenSet = true;
    }
  }

  return *this;
}

void AnomalyDetection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resultHasBeenSet)
  {
      oStream << location << index << locationValue << ".Result=" << StringUtils::URLEncode(AnomalyResultEnumMapper::GetNameForAnomalyResultEnum(m_result)) << "&";
  }

  if(m_mitigationInEffectHasBeenSet)
  {
      oStream << location << index << locationValue << ".MitigationInEffect=" << StringUtils::URLEncode(MitigationInEffectEnumMapper::GetNameForMitigationInEffectEnum(m_mitigationInEffect)) << "&";
  }

}

void AnomalyDetection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resultHasBeenSet)
  {
      oStream << location << ".Result=" << StringUtils::URLEncode(AnomalyResultEnumMapper::GetNameForAnomalyResultEnum(m_result)) << "&";
  }
  if(m_mitigationInEffectHasBeenSet)
  {
      oStream << location << ".MitigationInEffect=" << StringUtils::URLEncode(MitigationInEffectEnumMapper::GetNameForMitigationInEffectEnum(m_mitigationInEffect)) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
