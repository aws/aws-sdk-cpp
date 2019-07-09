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

#include <aws/neptune/model/DBParameterGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBParameterGroup::DBParameterGroup() : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBParameterGroupArnHasBeenSet(false)
{
}

DBParameterGroup::DBParameterGroup(const XmlNode& xmlNode) : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBParameterGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBParameterGroup& DBParameterGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBParameterGroupNameNode = resultNode.FirstChild("DBParameterGroupName");
    if(!dBParameterGroupNameNode.IsNull())
    {
      m_dBParameterGroupName = dBParameterGroupNameNode.GetText();
      m_dBParameterGroupNameHasBeenSet = true;
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
    XmlNode dBParameterGroupArnNode = resultNode.FirstChild("DBParameterGroupArn");
    if(!dBParameterGroupArnNode.IsNull())
    {
      m_dBParameterGroupArn = dBParameterGroupArnNode.GetText();
      m_dBParameterGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dBParameterGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupArn=" << StringUtils::URLEncode(m_dBParameterGroupArn.c_str()) << "&";
  }

}

void DBParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_dBParameterGroupArnHasBeenSet)
  {
      oStream << location << ".DBParameterGroupArn=" << StringUtils::URLEncode(m_dBParameterGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
