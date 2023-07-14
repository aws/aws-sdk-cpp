/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NodeConfigurationOption.h>
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

NodeConfigurationOption::NodeConfigurationOption() : 
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_estimatedDiskUtilizationPercent(0.0),
    m_estimatedDiskUtilizationPercentHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

NodeConfigurationOption::NodeConfigurationOption(const XmlNode& xmlNode) : 
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_estimatedDiskUtilizationPercent(0.0),
    m_estimatedDiskUtilizationPercentHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = xmlNode;
}

NodeConfigurationOption& NodeConfigurationOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = Aws::Utils::Xml::DecodeEscapedXmlText(nodeTypeNode.GetText());
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode numberOfNodesNode = resultNode.FirstChild("NumberOfNodes");
    if(!numberOfNodesNode.IsNull())
    {
      m_numberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfNodesNode.GetText()).c_str()).c_str());
      m_numberOfNodesHasBeenSet = true;
    }
    XmlNode estimatedDiskUtilizationPercentNode = resultNode.FirstChild("EstimatedDiskUtilizationPercent");
    if(!estimatedDiskUtilizationPercentNode.IsNull())
    {
      m_estimatedDiskUtilizationPercent = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(estimatedDiskUtilizationPercentNode.GetText()).c_str()).c_str());
      m_estimatedDiskUtilizationPercentHasBeenSet = true;
    }
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = ModeMapper::GetModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()).c_str());
      m_modeHasBeenSet = true;
    }
  }

  return *this;
}

void NodeConfigurationOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_estimatedDiskUtilizationPercentHasBeenSet)
  {
        oStream << location << index << locationValue << ".EstimatedDiskUtilizationPercent=" << StringUtils::URLEncode(m_estimatedDiskUtilizationPercent) << "&";
  }

  if(m_modeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Mode=" << ModeMapper::GetNameForMode(m_mode) << "&";
  }

}

void NodeConfigurationOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_numberOfNodesHasBeenSet)
  {
      oStream << location << ".NumberOfNodes=" << m_numberOfNodes << "&";
  }
  if(m_estimatedDiskUtilizationPercentHasBeenSet)
  {
        oStream << location << ".EstimatedDiskUtilizationPercent=" << StringUtils::URLEncode(m_estimatedDiskUtilizationPercent) << "&";
  }
  if(m_modeHasBeenSet)
  {
      oStream << location << ".Mode=" << ModeMapper::GetNameForMode(m_mode) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
