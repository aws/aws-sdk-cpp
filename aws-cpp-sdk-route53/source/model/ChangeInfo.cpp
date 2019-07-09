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

#include <aws/route53/model/ChangeInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

ChangeInfo::ChangeInfo() : 
    m_idHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

ChangeInfo::ChangeInfo(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_commentHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeInfo& ChangeInfo::operator =(const XmlNode& xmlNode)
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
      m_status = ChangeStatusMapper::GetChangeStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode submittedAtNode = resultNode.FirstChild("SubmittedAt");
    if(!submittedAtNode.IsNull())
    {
      m_submittedAt = DateTime(StringUtils::Trim(submittedAtNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_submittedAtHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = commentNode.GetText();
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeInfo::AddToNode(XmlNode& parentNode) const
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
   statusNode.SetText(ChangeStatusMapper::GetNameForChangeStatus(m_status));
  }

  if(m_submittedAtHasBeenSet)
  {
   XmlNode submittedAtNode = parentNode.CreateChildElement("SubmittedAt");
   submittedAtNode.SetText(m_submittedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
