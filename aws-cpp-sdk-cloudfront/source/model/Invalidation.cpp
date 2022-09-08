/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Invalidation.h>
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

Invalidation::Invalidation() : 
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_invalidationBatchHasBeenSet(false)
{
}

Invalidation::Invalidation(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_invalidationBatchHasBeenSet(false)
{
  *this = xmlNode;
}

Invalidation& Invalidation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode invalidationBatchNode = resultNode.FirstChild("InvalidationBatch");
    if(!invalidationBatchNode.IsNull())
    {
      m_invalidationBatch = invalidationBatchNode;
      m_invalidationBatchHasBeenSet = true;
    }
  }

  return *this;
}

void Invalidation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_createTimeHasBeenSet)
  {
   XmlNode createTimeNode = parentNode.CreateChildElement("CreateTime");
   createTimeNode.SetText(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_invalidationBatchHasBeenSet)
  {
   XmlNode invalidationBatchNode = parentNode.CreateChildElement("InvalidationBatch");
   m_invalidationBatch.AddToNode(invalidationBatchNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
