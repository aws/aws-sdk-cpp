/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AsyncErrorDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AsyncErrorDetails::AsyncErrorDetails() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

AsyncErrorDetails::AsyncErrorDetails(const XmlNode& xmlNode) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
  *this = xmlNode;
}

AsyncErrorDetails& AsyncErrorDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("Code");
    if(!codeNode.IsNull())
    {
      m_code = Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText());
      m_codeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode resourceNode = resultNode.FirstChild("Resource");
    if(!resourceNode.IsNull())
    {
      m_resource = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNode.GetText());
      m_resourceHasBeenSet = true;
    }
    XmlNode requestIdNode = resultNode.FirstChild("RequestId");
    if(!requestIdNode.IsNull())
    {
      m_requestId = Aws::Utils::Xml::DecodeEscapedXmlText(requestIdNode.GetText());
      m_requestIdHasBeenSet = true;
    }
  }

  return *this;
}

void AsyncErrorDetails::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_codeHasBeenSet)
  {
   XmlNode codeNode = parentNode.CreateChildElement("Code");
   codeNode.SetText(m_code);
  }

  if(m_messageHasBeenSet)
  {
   XmlNode messageNode = parentNode.CreateChildElement("Message");
   messageNode.SetText(m_message);
  }

  if(m_resourceHasBeenSet)
  {
   XmlNode resourceNode = parentNode.CreateChildElement("Resource");
   resourceNode.SetText(m_resource);
  }

  if(m_requestIdHasBeenSet)
  {
   XmlNode requestIdNode = parentNode.CreateChildElement("RequestId");
   requestIdNode.SetText(m_requestId);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
