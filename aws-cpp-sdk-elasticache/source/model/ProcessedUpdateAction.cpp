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

#include <aws/elasticache/model/ProcessedUpdateAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ProcessedUpdateAction::ProcessedUpdateAction() : 
    m_replicationGroupIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false)
{
}

ProcessedUpdateAction::ProcessedUpdateAction(const XmlNode& xmlNode) : 
    m_replicationGroupIdHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_updateActionStatus(UpdateActionStatus::NOT_SET),
    m_updateActionStatusHasBeenSet(false)
{
  *this = xmlNode;
}

ProcessedUpdateAction& ProcessedUpdateAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replicationGroupIdNode = resultNode.FirstChild("ReplicationGroupId");
    if(!replicationGroupIdNode.IsNull())
    {
      m_replicationGroupId = replicationGroupIdNode.GetText();
      m_replicationGroupIdHasBeenSet = true;
    }
    XmlNode serviceUpdateNameNode = resultNode.FirstChild("ServiceUpdateName");
    if(!serviceUpdateNameNode.IsNull())
    {
      m_serviceUpdateName = serviceUpdateNameNode.GetText();
      m_serviceUpdateNameHasBeenSet = true;
    }
    XmlNode updateActionStatusNode = resultNode.FirstChild("UpdateActionStatus");
    if(!updateActionStatusNode.IsNull())
    {
      m_updateActionStatus = UpdateActionStatusMapper::GetUpdateActionStatusForName(StringUtils::Trim(updateActionStatusNode.GetText().c_str()).c_str());
      m_updateActionStatusHasBeenSet = true;
    }
  }

  return *this;
}

void ProcessedUpdateAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }

  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }

}

void ProcessedUpdateAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replicationGroupIdHasBeenSet)
  {
      oStream << location << ".ReplicationGroupId=" << StringUtils::URLEncode(m_replicationGroupId.c_str()) << "&";
  }
  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }
  if(m_updateActionStatusHasBeenSet)
  {
      oStream << location << ".UpdateActionStatus=" << UpdateActionStatusMapper::GetNameForUpdateActionStatus(m_updateActionStatus) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
