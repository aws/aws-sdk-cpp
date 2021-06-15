/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionSummary.h>
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

FunctionSummary::FunctionSummary() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_functionConfigHasBeenSet(false),
    m_functionMetadataHasBeenSet(false)
{
}

FunctionSummary::FunctionSummary(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_functionConfigHasBeenSet(false),
    m_functionMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

FunctionSummary& FunctionSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode functionConfigNode = resultNode.FirstChild("FunctionConfig");
    if(!functionConfigNode.IsNull())
    {
      m_functionConfig = functionConfigNode;
      m_functionConfigHasBeenSet = true;
    }
    XmlNode functionMetadataNode = resultNode.FirstChild("FunctionMetadata");
    if(!functionMetadataNode.IsNull())
    {
      m_functionMetadata = functionMetadataNode;
      m_functionMetadataHasBeenSet = true;
    }
  }

  return *this;
}

void FunctionSummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_functionConfigHasBeenSet)
  {
   XmlNode functionConfigNode = parentNode.CreateChildElement("FunctionConfig");
   m_functionConfig.AddToNode(functionConfigNode);
  }

  if(m_functionMetadataHasBeenSet)
  {
   XmlNode functionMetadataNode = parentNode.CreateChildElement("FunctionMetadata");
   m_functionMetadata.AddToNode(functionMetadataNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
