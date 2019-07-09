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

#include <aws/ec2/model/BundleTask.h>
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

BundleTask::BundleTask() : 
    m_bundleIdHasBeenSet(false),
    m_bundleTaskErrorHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(BundleTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

BundleTask::BundleTask(const XmlNode& xmlNode) : 
    m_bundleIdHasBeenSet(false),
    m_bundleTaskErrorHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(BundleTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = xmlNode;
}

BundleTask& BundleTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bundleIdNode = resultNode.FirstChild("bundleId");
    if(!bundleIdNode.IsNull())
    {
      m_bundleId = bundleIdNode.GetText();
      m_bundleIdHasBeenSet = true;
    }
    XmlNode bundleTaskErrorNode = resultNode.FirstChild("error");
    if(!bundleTaskErrorNode.IsNull())
    {
      m_bundleTaskError = bundleTaskErrorNode;
      m_bundleTaskErrorHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = progressNode.GetText();
      m_progressHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = BundleTaskStateMapper::GetBundleTaskStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode storageNode = resultNode.FirstChild("storage");
    if(!storageNode.IsNull())
    {
      m_storage = storageNode;
      m_storageHasBeenSet = true;
    }
    XmlNode updateTimeNode = resultNode.FirstChild("updateTime");
    if(!updateTimeNode.IsNull())
    {
      m_updateTime = DateTime(StringUtils::Trim(updateTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_updateTimeHasBeenSet = true;
    }
  }

  return *this;
}

void BundleTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bundleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".BundleId=" << StringUtils::URLEncode(m_bundleId.c_str()) << "&";
  }

  if(m_bundleTaskErrorHasBeenSet)
  {
      Aws::StringStream bundleTaskErrorLocationAndMemberSs;
      bundleTaskErrorLocationAndMemberSs << location << index << locationValue << ".BundleTaskError";
      m_bundleTaskError.OutputToStream(oStream, bundleTaskErrorLocationAndMemberSs.str().c_str());
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << BundleTaskStateMapper::GetNameForBundleTaskState(m_state) << "&";
  }

  if(m_storageHasBeenSet)
  {
      Aws::StringStream storageLocationAndMemberSs;
      storageLocationAndMemberSs << location << index << locationValue << ".Storage";
      m_storage.OutputToStream(oStream, storageLocationAndMemberSs.str().c_str());
  }

  if(m_updateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void BundleTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bundleIdHasBeenSet)
  {
      oStream << location << ".BundleId=" << StringUtils::URLEncode(m_bundleId.c_str()) << "&";
  }
  if(m_bundleTaskErrorHasBeenSet)
  {
      Aws::String bundleTaskErrorLocationAndMember(location);
      bundleTaskErrorLocationAndMember += ".BundleTaskError";
      m_bundleTaskError.OutputToStream(oStream, bundleTaskErrorLocationAndMember.c_str());
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << BundleTaskStateMapper::GetNameForBundleTaskState(m_state) << "&";
  }
  if(m_storageHasBeenSet)
  {
      Aws::String storageLocationAndMember(location);
      storageLocationAndMember += ".Storage";
      m_storage.OutputToStream(oStream, storageLocationAndMember.c_str());
  }
  if(m_updateTimeHasBeenSet)
  {
      oStream << location << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
