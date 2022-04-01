/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReservedNodeConfigurationOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ReservedNodeConfigurationOption::ReservedNodeConfigurationOption() : 
    m_sourceReservedNodeHasBeenSet(false),
    m_targetReservedNodeCount(0),
    m_targetReservedNodeCountHasBeenSet(false),
    m_targetReservedNodeOfferingHasBeenSet(false)
{
}

ReservedNodeConfigurationOption::ReservedNodeConfigurationOption(const XmlNode& xmlNode) : 
    m_sourceReservedNodeHasBeenSet(false),
    m_targetReservedNodeCount(0),
    m_targetReservedNodeCountHasBeenSet(false),
    m_targetReservedNodeOfferingHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedNodeConfigurationOption& ReservedNodeConfigurationOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceReservedNodeNode = resultNode.FirstChild("SourceReservedNode");
    if(!sourceReservedNodeNode.IsNull())
    {
      m_sourceReservedNode = sourceReservedNodeNode;
      m_sourceReservedNodeHasBeenSet = true;
    }
    XmlNode targetReservedNodeCountNode = resultNode.FirstChild("TargetReservedNodeCount");
    if(!targetReservedNodeCountNode.IsNull())
    {
      m_targetReservedNodeCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetReservedNodeCountNode.GetText()).c_str()).c_str());
      m_targetReservedNodeCountHasBeenSet = true;
    }
    XmlNode targetReservedNodeOfferingNode = resultNode.FirstChild("TargetReservedNodeOffering");
    if(!targetReservedNodeOfferingNode.IsNull())
    {
      m_targetReservedNodeOffering = targetReservedNodeOfferingNode;
      m_targetReservedNodeOfferingHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedNodeConfigurationOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceReservedNodeHasBeenSet)
  {
      Aws::StringStream sourceReservedNodeLocationAndMemberSs;
      sourceReservedNodeLocationAndMemberSs << location << index << locationValue << ".SourceReservedNode";
      m_sourceReservedNode.OutputToStream(oStream, sourceReservedNodeLocationAndMemberSs.str().c_str());
  }

  if(m_targetReservedNodeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetReservedNodeCount=" << m_targetReservedNodeCount << "&";
  }

  if(m_targetReservedNodeOfferingHasBeenSet)
  {
      Aws::StringStream targetReservedNodeOfferingLocationAndMemberSs;
      targetReservedNodeOfferingLocationAndMemberSs << location << index << locationValue << ".TargetReservedNodeOffering";
      m_targetReservedNodeOffering.OutputToStream(oStream, targetReservedNodeOfferingLocationAndMemberSs.str().c_str());
  }

}

void ReservedNodeConfigurationOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceReservedNodeHasBeenSet)
  {
      Aws::String sourceReservedNodeLocationAndMember(location);
      sourceReservedNodeLocationAndMember += ".SourceReservedNode";
      m_sourceReservedNode.OutputToStream(oStream, sourceReservedNodeLocationAndMember.c_str());
  }
  if(m_targetReservedNodeCountHasBeenSet)
  {
      oStream << location << ".TargetReservedNodeCount=" << m_targetReservedNodeCount << "&";
  }
  if(m_targetReservedNodeOfferingHasBeenSet)
  {
      Aws::String targetReservedNodeOfferingLocationAndMember(location);
      targetReservedNodeOfferingLocationAndMember += ".TargetReservedNodeOffering";
      m_targetReservedNodeOffering.OutputToStream(oStream, targetReservedNodeOfferingLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
