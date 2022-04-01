/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/SelectionCriteria.h>
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

SelectionCriteria::SelectionCriteria() : 
    m_delimiterHasBeenSet(false),
    m_maxDepth(0),
    m_maxDepthHasBeenSet(false),
    m_minStorageBytesPercentage(0.0),
    m_minStorageBytesPercentageHasBeenSet(false)
{
}

SelectionCriteria::SelectionCriteria(const XmlNode& xmlNode) : 
    m_delimiterHasBeenSet(false),
    m_maxDepth(0),
    m_maxDepthHasBeenSet(false),
    m_minStorageBytesPercentage(0.0),
    m_minStorageBytesPercentageHasBeenSet(false)
{
  *this = xmlNode;
}

SelectionCriteria& SelectionCriteria::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode delimiterNode = resultNode.FirstChild("Delimiter");
    if(!delimiterNode.IsNull())
    {
      m_delimiter = Aws::Utils::Xml::DecodeEscapedXmlText(delimiterNode.GetText());
      m_delimiterHasBeenSet = true;
    }
    XmlNode maxDepthNode = resultNode.FirstChild("MaxDepth");
    if(!maxDepthNode.IsNull())
    {
      m_maxDepth = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDepthNode.GetText()).c_str()).c_str());
      m_maxDepthHasBeenSet = true;
    }
    XmlNode minStorageBytesPercentageNode = resultNode.FirstChild("MinStorageBytesPercentage");
    if(!minStorageBytesPercentageNode.IsNull())
    {
      m_minStorageBytesPercentage = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageBytesPercentageNode.GetText()).c_str()).c_str());
      m_minStorageBytesPercentageHasBeenSet = true;
    }
  }

  return *this;
}

void SelectionCriteria::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_delimiterHasBeenSet)
  {
   XmlNode delimiterNode = parentNode.CreateChildElement("Delimiter");
   delimiterNode.SetText(m_delimiter);
  }

  if(m_maxDepthHasBeenSet)
  {
   XmlNode maxDepthNode = parentNode.CreateChildElement("MaxDepth");
   ss << m_maxDepth;
   maxDepthNode.SetText(ss.str());
   ss.str("");
  }

  if(m_minStorageBytesPercentageHasBeenSet)
  {
   XmlNode minStorageBytesPercentageNode = parentNode.CreateChildElement("MinStorageBytesPercentage");
   ss << m_minStorageBytesPercentage;
   minStorageBytesPercentageNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
