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
#include <aws/ec2/model/LaunchPermissionModifications.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

LaunchPermissionModifications::LaunchPermissionModifications() : 
    m_addHasBeenSet(false),
    m_removeHasBeenSet(false)
{
}

LaunchPermissionModifications::LaunchPermissionModifications(const XmlNode& xmlNode) : 
    m_addHasBeenSet(false),
    m_removeHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchPermissionModifications& LaunchPermissionModifications::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addNode = resultNode.FirstChild("Add");
    if(!addNode.IsNull())
    {
      XmlNode addMember = addNode.FirstChild("item");
      while(!addMember.IsNull())
      {
        m_add.push_back(addMember);
        addMember = addMember.NextNode("item");
      }

      m_addHasBeenSet = true;
    }
    XmlNode removeNode = resultNode.FirstChild("Remove");
    if(!removeNode.IsNull())
    {
      XmlNode removeMember = removeNode.FirstChild("item");
      while(!removeMember.IsNull())
      {
        m_remove.push_back(removeMember);
        removeMember = removeMember.NextNode("item");
      }

      m_removeHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchPermissionModifications::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addHasBeenSet)
  {
      unsigned addIdx = 1;
      for(auto& item : m_add)
      {
        Aws::StringStream addSs;
        addSs << location << index << locationValue << ".Add." << addIdx++;
        item.OutputToStream(oStream, addSs.str().c_str());
      }
  }

  if(m_removeHasBeenSet)
  {
      unsigned removeIdx = 1;
      for(auto& item : m_remove)
      {
        Aws::StringStream removeSs;
        removeSs << location << index << locationValue << ".Remove." << removeIdx++;
        item.OutputToStream(oStream, removeSs.str().c_str());
      }
  }

}

void LaunchPermissionModifications::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addHasBeenSet)
  {
      unsigned addIdx = 1;
      for(auto& item : m_add)
      {
        Aws::StringStream addSs;
        addSs << location <<  ".item." << addIdx++;
        item.OutputToStream(oStream, addSs.str().c_str());
      }
  }
  if(m_removeHasBeenSet)
  {
      unsigned removeIdx = 1;
      for(auto& item : m_remove)
      {
        Aws::StringStream removeSs;
        removeSs << location <<  ".item." << removeIdx++;
        item.OutputToStream(oStream, removeSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
