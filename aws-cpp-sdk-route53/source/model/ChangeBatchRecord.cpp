/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/model/ChangeBatchRecord.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ChangeBatchRecord::ChangeBatchRecord() : 
    m_idHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_submitterHasBeenSet(false),
    m_changesHasBeenSet(false)
{
}

ChangeBatchRecord::ChangeBatchRecord(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_submitterHasBeenSet(false),
    m_changesHasBeenSet(false)
{
  *this = xmlNode;
}

ChangeBatchRecord& ChangeBatchRecord::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
    XmlNode submittedAtNode = resultNode.FirstChild("SubmittedAt");
    if(!submittedAtNode.IsNull())
    {
      m_submittedAt = DateTime(StringUtils::Trim(submittedAtNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_submittedAtHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeStatusMapper::GetChangeStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = StringUtils::Trim(commentNode.GetText().c_str());
      m_commentHasBeenSet = true;
    }
    XmlNode submitterNode = resultNode.FirstChild("Submitter");
    if(!submitterNode.IsNull())
    {
      m_submitter = StringUtils::Trim(submitterNode.GetText().c_str());
      m_submitterHasBeenSet = true;
    }
    XmlNode changesNode = resultNode.FirstChild("Changes");
    if(!changesNode.IsNull())
    {
      XmlNode changesMember = changesNode.FirstChild("Change");
      while(!changesMember.IsNull())
      {
        m_changes.push_back(changesMember);
        changesMember = changesMember.NextNode("Change");
      }

      m_changesHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeBatchRecord::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_submittedAtHasBeenSet)
  {
     XmlNode submittedAtNode = parentNode.CreateChildElement("SubmittedAt");
     submittedAtNode.SetText(m_submittedAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(ChangeStatusMapper::GetNameForChangeStatus(m_status));
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_submitterHasBeenSet)
  {
   XmlNode submitterNode = parentNode.CreateChildElement("Submitter");
   submitterNode.SetText(m_submitter);
  }

  if(m_changesHasBeenSet)
  {
   XmlNode changesParentNode = parentNode.CreateChildElement("Changes");
   for(const auto& item : m_changes)
   {
     XmlNode changesNode = changesParentNode.CreateChildElement("Change");
     item.AddToNode(changesNode);
   }
  }

}
