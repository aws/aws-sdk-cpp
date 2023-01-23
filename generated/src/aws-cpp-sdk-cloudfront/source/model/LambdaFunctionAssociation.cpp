﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/LambdaFunctionAssociation.h>
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

LambdaFunctionAssociation::LambdaFunctionAssociation() : 
    m_lambdaFunctionARNHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_includeBody(false),
    m_includeBodyHasBeenSet(false)
{
}

LambdaFunctionAssociation::LambdaFunctionAssociation(const XmlNode& xmlNode) : 
    m_lambdaFunctionARNHasBeenSet(false),
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_includeBody(false),
    m_includeBodyHasBeenSet(false)
{
  *this = xmlNode;
}

LambdaFunctionAssociation& LambdaFunctionAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lambdaFunctionARNNode = resultNode.FirstChild("LambdaFunctionARN");
    if(!lambdaFunctionARNNode.IsNull())
    {
      m_lambdaFunctionARN = Aws::Utils::Xml::DecodeEscapedXmlText(lambdaFunctionARNNode.GetText());
      m_lambdaFunctionARNHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("EventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = EventTypeMapper::GetEventTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(eventTypeNode.GetText()).c_str()).c_str());
      m_eventTypeHasBeenSet = true;
    }
    XmlNode includeBodyNode = resultNode.FirstChild("IncludeBody");
    if(!includeBodyNode.IsNull())
    {
      m_includeBody = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeBodyNode.GetText()).c_str()).c_str());
      m_includeBodyHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaFunctionAssociation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_lambdaFunctionARNHasBeenSet)
  {
   XmlNode lambdaFunctionARNNode = parentNode.CreateChildElement("LambdaFunctionARN");
   lambdaFunctionARNNode.SetText(m_lambdaFunctionARN);
  }

  if(m_eventTypeHasBeenSet)
  {
   XmlNode eventTypeNode = parentNode.CreateChildElement("EventType");
   eventTypeNode.SetText(EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_includeBodyHasBeenSet)
  {
   XmlNode includeBodyNode = parentNode.CreateChildElement("IncludeBody");
   ss << std::boolalpha << m_includeBody;
   includeBodyNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
