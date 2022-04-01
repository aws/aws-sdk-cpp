/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionAssociation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

FunctionAssociation::FunctionAssociation() : 
    m_functionARNHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false)
{
}

FunctionAssociation::FunctionAssociation(const XmlNode& xmlNode) : 
    m_functionARNHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false)
{
  *this = xmlNode;
}

FunctionAssociation& FunctionAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionARNNode = resultNode.FirstChild("FunctionARN");
    if(!functionARNNode.IsNull())
    {
      m_functionARN = Aws::Utils::Xml::DecodeEscapedXmlText(functionARNNode.GetText());
      m_functionARNHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("EventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = EventTypeMapper::GetEventTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(eventTypeNode.GetText()).c_str()).c_str());
      m_eventTypeHasBeenSet = true;
    }
  }

  return *this;
}

void FunctionAssociation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionARNHasBeenSet)
  {
   XmlNode functionARNNode = parentNode.CreateChildElement("FunctionARN");
   functionARNNode.SetText(m_functionARN);
  }

  if(m_eventTypeHasBeenSet)
  {
   XmlNode eventTypeNode = parentNode.CreateChildElement("EventType");
   eventTypeNode.SetText(EventTypeMapper::GetNameForEventType(m_eventType));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
