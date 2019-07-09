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

#include <aws/rds/model/ResourcePendingMaintenanceActions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ResourcePendingMaintenanceActions::ResourcePendingMaintenanceActions() : 
    m_resourceIdentifierHasBeenSet(false),
    m_pendingMaintenanceActionDetailsHasBeenSet(false)
{
}

ResourcePendingMaintenanceActions::ResourcePendingMaintenanceActions(const XmlNode& xmlNode) : 
    m_resourceIdentifierHasBeenSet(false),
    m_pendingMaintenanceActionDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

ResourcePendingMaintenanceActions& ResourcePendingMaintenanceActions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdentifierNode = resultNode.FirstChild("ResourceIdentifier");
    if(!resourceIdentifierNode.IsNull())
    {
      m_resourceIdentifier = resourceIdentifierNode.GetText();
      m_resourceIdentifierHasBeenSet = true;
    }
    XmlNode pendingMaintenanceActionDetailsNode = resultNode.FirstChild("PendingMaintenanceActionDetails");
    if(!pendingMaintenanceActionDetailsNode.IsNull())
    {
      XmlNode pendingMaintenanceActionDetailsMember = pendingMaintenanceActionDetailsNode.FirstChild("PendingMaintenanceAction");
      while(!pendingMaintenanceActionDetailsMember.IsNull())
      {
        m_pendingMaintenanceActionDetails.push_back(pendingMaintenanceActionDetailsMember);
        pendingMaintenanceActionDetailsMember = pendingMaintenanceActionDetailsMember.NextNode("PendingMaintenanceAction");
      }

      m_pendingMaintenanceActionDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ResourcePendingMaintenanceActions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
      unsigned pendingMaintenanceActionDetailsIdx = 1;
      for(auto& item : m_pendingMaintenanceActionDetails)
      {
        Aws::StringStream pendingMaintenanceActionDetailsSs;
        pendingMaintenanceActionDetailsSs << location << index << locationValue << ".PendingMaintenanceAction." << pendingMaintenanceActionDetailsIdx++;
        item.OutputToStream(oStream, pendingMaintenanceActionDetailsSs.str().c_str());
      }
  }

}

void ResourcePendingMaintenanceActions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }
  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
      unsigned pendingMaintenanceActionDetailsIdx = 1;
      for(auto& item : m_pendingMaintenanceActionDetails)
      {
        Aws::StringStream pendingMaintenanceActionDetailsSs;
        pendingMaintenanceActionDetailsSs << location <<  ".PendingMaintenanceAction." << pendingMaintenanceActionDetailsIdx++;
        item.OutputToStream(oStream, pendingMaintenanceActionDetailsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
