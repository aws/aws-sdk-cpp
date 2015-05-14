/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/ReplicationRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReplicationRule::ReplicationRule() : 
    m_iDHasBeenSet(false)
{
}

ReplicationRule::ReplicationRule(const XmlNode& xmlNode) : 
    m_iDHasBeenSet(false)
{
  *this = xmlNode;
}

ReplicationRule& ReplicationRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode iDNode = resultNode.FirstChild("ID");
    if(!iDNode.IsNull())
    {
      m_iD = StringUtils::Trim(iDNode.GetText().c_str());
      m_iDHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    m_prefix = StringUtils::Trim(prefixNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = ReplicationRuleStatusMapper::GetReplicationRuleStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    XmlNode destinationNode = resultNode.FirstChild("Destination");
    m_destination = destinationNode;
  }

  return *this;
}

void ReplicationRule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_iDHasBeenSet)
  {
   XmlNode iDNode = parentNode.CreateChildElement("ID");
   iDNode.SetText(m_iD);
  }

  XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
  prefixNode.SetText(m_prefix);
  XmlNode statusNode = parentNode.CreateChildElement("Status");
  statusNode.SetText(ReplicationRuleStatusMapper::GetNameForReplicationRuleStatus(m_status));
  XmlNode destinationNode = parentNode.CreateChildElement("Destination");
  m_destination.AddToNode(destinationNode);
}
