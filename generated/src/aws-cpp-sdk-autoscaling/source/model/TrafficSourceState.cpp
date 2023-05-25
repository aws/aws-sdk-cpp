/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TrafficSourceState.h>
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

TrafficSourceState::TrafficSourceState() : 
    m_stateHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

TrafficSourceState::TrafficSourceState(const XmlNode& xmlNode) : 
    m_stateHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficSourceState& TrafficSourceState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode identifierNode = resultNode.FirstChild("Identifier");
    if(!identifierNode.IsNull())
    {
      m_identifier = Aws::Utils::Xml::DecodeEscapedXmlText(identifierNode.GetText());
      m_identifierHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficSourceState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_identifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".Identifier=" << StringUtils::URLEncode(m_identifier.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

}

void TrafficSourceState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_identifierHasBeenSet)
  {
      oStream << location << ".Identifier=" << StringUtils::URLEncode(m_identifier.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
