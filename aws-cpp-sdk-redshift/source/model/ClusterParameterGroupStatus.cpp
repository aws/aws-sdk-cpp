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

#include <aws/redshift/model/ClusterParameterGroupStatus.h>
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

ClusterParameterGroupStatus::ClusterParameterGroupStatus() : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_clusterParameterStatusListHasBeenSet(false)
{
}

ClusterParameterGroupStatus::ClusterParameterGroupStatus(const XmlNode& xmlNode) : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_clusterParameterStatusListHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterParameterGroupStatus& ClusterParameterGroupStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterGroupNameNode = resultNode.FirstChild("ParameterGroupName");
    if(!parameterGroupNameNode.IsNull())
    {
      m_parameterGroupName = parameterGroupNameNode.GetText();
      m_parameterGroupNameHasBeenSet = true;
    }
    XmlNode parameterApplyStatusNode = resultNode.FirstChild("ParameterApplyStatus");
    if(!parameterApplyStatusNode.IsNull())
    {
      m_parameterApplyStatus = parameterApplyStatusNode.GetText();
      m_parameterApplyStatusHasBeenSet = true;
    }
    XmlNode clusterParameterStatusListNode = resultNode.FirstChild("ClusterParameterStatusList");
    if(!clusterParameterStatusListNode.IsNull())
    {
      XmlNode clusterParameterStatusListMember = clusterParameterStatusListNode.FirstChild("member");
      while(!clusterParameterStatusListMember.IsNull())
      {
        m_clusterParameterStatusList.push_back(clusterParameterStatusListMember);
        clusterParameterStatusListMember = clusterParameterStatusListMember.NextNode("member");
      }

      m_clusterParameterStatusListHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterGroupName=" << StringUtils::URLEncode(m_parameterGroupName.c_str()) << "&";
  }

  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }

  if(m_clusterParameterStatusListHasBeenSet)
  {
      unsigned clusterParameterStatusListIdx = 1;
      for(auto& item : m_clusterParameterStatusList)
      {
        Aws::StringStream clusterParameterStatusListSs;
        clusterParameterStatusListSs << location << index << locationValue << ".ClusterParameterStatusList.member." << clusterParameterStatusListIdx++;
        item.OutputToStream(oStream, clusterParameterStatusListSs.str().c_str());
      }
  }

}

void ClusterParameterGroupStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterGroupNameHasBeenSet)
  {
      oStream << location << ".ParameterGroupName=" << StringUtils::URLEncode(m_parameterGroupName.c_str()) << "&";
  }
  if(m_parameterApplyStatusHasBeenSet)
  {
      oStream << location << ".ParameterApplyStatus=" << StringUtils::URLEncode(m_parameterApplyStatus.c_str()) << "&";
  }
  if(m_clusterParameterStatusListHasBeenSet)
  {
      unsigned clusterParameterStatusListIdx = 1;
      for(auto& item : m_clusterParameterStatusList)
      {
        Aws::StringStream clusterParameterStatusListSs;
        clusterParameterStatusListSs << location <<  ".ClusterParameterStatusList.member." << clusterParameterStatusListIdx++;
        item.OutputToStream(oStream, clusterParameterStatusListSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
