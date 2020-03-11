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

#include <aws/redshift/model/ScheduledActionType.h>
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

ScheduledActionType::ScheduledActionType() : 
    m_resizeClusterHasBeenSet(false),
    m_pauseClusterHasBeenSet(false),
    m_resumeClusterHasBeenSet(false)
{
}

ScheduledActionType::ScheduledActionType(const XmlNode& xmlNode) : 
    m_resizeClusterHasBeenSet(false),
    m_pauseClusterHasBeenSet(false),
    m_resumeClusterHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledActionType& ScheduledActionType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resizeClusterNode = resultNode.FirstChild("ResizeCluster");
    if(!resizeClusterNode.IsNull())
    {
      m_resizeCluster = resizeClusterNode;
      m_resizeClusterHasBeenSet = true;
    }
    XmlNode pauseClusterNode = resultNode.FirstChild("PauseCluster");
    if(!pauseClusterNode.IsNull())
    {
      m_pauseCluster = pauseClusterNode;
      m_pauseClusterHasBeenSet = true;
    }
    XmlNode resumeClusterNode = resultNode.FirstChild("ResumeCluster");
    if(!resumeClusterNode.IsNull())
    {
      m_resumeCluster = resumeClusterNode;
      m_resumeClusterHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledActionType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resizeClusterHasBeenSet)
  {
      Aws::StringStream resizeClusterLocationAndMemberSs;
      resizeClusterLocationAndMemberSs << location << index << locationValue << ".ResizeCluster";
      m_resizeCluster.OutputToStream(oStream, resizeClusterLocationAndMemberSs.str().c_str());
  }

  if(m_pauseClusterHasBeenSet)
  {
      Aws::StringStream pauseClusterLocationAndMemberSs;
      pauseClusterLocationAndMemberSs << location << index << locationValue << ".PauseCluster";
      m_pauseCluster.OutputToStream(oStream, pauseClusterLocationAndMemberSs.str().c_str());
  }

  if(m_resumeClusterHasBeenSet)
  {
      Aws::StringStream resumeClusterLocationAndMemberSs;
      resumeClusterLocationAndMemberSs << location << index << locationValue << ".ResumeCluster";
      m_resumeCluster.OutputToStream(oStream, resumeClusterLocationAndMemberSs.str().c_str());
  }

}

void ScheduledActionType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resizeClusterHasBeenSet)
  {
      Aws::String resizeClusterLocationAndMember(location);
      resizeClusterLocationAndMember += ".ResizeCluster";
      m_resizeCluster.OutputToStream(oStream, resizeClusterLocationAndMember.c_str());
  }
  if(m_pauseClusterHasBeenSet)
  {
      Aws::String pauseClusterLocationAndMember(location);
      pauseClusterLocationAndMember += ".PauseCluster";
      m_pauseCluster.OutputToStream(oStream, pauseClusterLocationAndMember.c_str());
  }
  if(m_resumeClusterHasBeenSet)
  {
      Aws::String resumeClusterLocationAndMember(location);
      resumeClusterLocationAndMember += ".ResumeCluster";
      m_resumeCluster.OutputToStream(oStream, resumeClusterLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
