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

#include <aws/rds/model/DBClusterParameterGroup.h>
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

DBClusterParameterGroup::DBClusterParameterGroup() : 
    m_dBClusterParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBClusterParameterGroupArnHasBeenSet(false)
{
}

DBClusterParameterGroup::DBClusterParameterGroup(const XmlNode& xmlNode) : 
    m_dBClusterParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBClusterParameterGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterParameterGroup& DBClusterParameterGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterParameterGroupNameNode = resultNode.FirstChild("DBClusterParameterGroupName");
    if(!dBClusterParameterGroupNameNode.IsNull())
    {
      m_dBClusterParameterGroupName = dBClusterParameterGroupNameNode.GetText();
      m_dBClusterParameterGroupNameHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = dBParameterGroupFamilyNode.GetText();
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode dBClusterParameterGroupArnNode = resultNode.FirstChild("DBClusterParameterGroupArn");
    if(!dBClusterParameterGroupArnNode.IsNull())
    {
      m_dBClusterParameterGroupArn = dBClusterParameterGroupArnNode.GetText();
      m_dBClusterParameterGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dBClusterParameterGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterParameterGroupArn=" << StringUtils::URLEncode(m_dBClusterParameterGroupArn.c_str()) << "&";
  }

}

void DBClusterParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_dBClusterParameterGroupArnHasBeenSet)
  {
      oStream << location << ".DBClusterParameterGroupArn=" << StringUtils::URLEncode(m_dBClusterParameterGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
