/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/InvalidationBatch.h>
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

InvalidationBatch::InvalidationBatch() : 
    m_pathsHasBeenSet(false),
    m_callerReferenceHasBeenSet(false)
{
}

InvalidationBatch::InvalidationBatch(const XmlNode& xmlNode) : 
    m_pathsHasBeenSet(false),
    m_callerReferenceHasBeenSet(false)
{
  *this = xmlNode;
}

InvalidationBatch& InvalidationBatch::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathsNode = resultNode.FirstChild("Paths");
    if(!pathsNode.IsNull())
    {
      m_paths = pathsNode;
      m_pathsHasBeenSet = true;
    }
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = Aws::Utils::Xml::DecodeEscapedXmlText(callerReferenceNode.GetText());
      m_callerReferenceHasBeenSet = true;
    }
  }

  return *this;
}

void InvalidationBatch::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_pathsHasBeenSet)
  {
   XmlNode pathsNode = parentNode.CreateChildElement("Paths");
   m_paths.AddToNode(pathsNode);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
