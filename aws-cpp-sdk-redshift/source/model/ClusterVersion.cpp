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

#include <aws/redshift/model/ClusterVersion.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterVersion::ClusterVersion() : 
    m_clusterVersionHasBeenSet(false),
    m_clusterParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ClusterVersion::ClusterVersion(const XmlNode& xmlNode) : 
    m_clusterVersionHasBeenSet(false),
    m_clusterParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterVersion& ClusterVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterVersionNode = resultNode.FirstChild("ClusterVersion");
    if(!clusterVersionNode.IsNull())
    {
      m_clusterVersion = clusterVersionNode.GetText();
      m_clusterVersionHasBeenSet = true;
    }
    XmlNode clusterParameterGroupFamilyNode = resultNode.FirstChild("ClusterParameterGroupFamily");
    if(!clusterParameterGroupFamilyNode.IsNull())
    {
      m_clusterParameterGroupFamily = clusterParameterGroupFamilyNode.GetText();
      m_clusterParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_clusterParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterParameterGroupFamily=" << StringUtils::URLEncode(m_clusterParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void ClusterVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterVersionHasBeenSet)
  {
      oStream << location << ".ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }
  if(m_clusterParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".ClusterParameterGroupFamily=" << StringUtils::URLEncode(m_clusterParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
