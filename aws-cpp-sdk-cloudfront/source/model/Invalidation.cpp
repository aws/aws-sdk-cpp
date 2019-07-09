/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
   createTimeNode.SetText(m_createTime.ToGmtString(DateFormat::ISO_8601));
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
