/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BundleTask::BundleTask(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

BundleTask& BundleTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode bundleIdNode = resultNode.FirstChild("bundleId");
    if(!bundleIdNode.IsNull())
    {
      m_bundleId = Aws::Utils::Xml::DecodeEscapedXmlText(bundleIdNode.GetText());
      m_bundleIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = BundleTaskStateMapper::GetBundleTaskStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode updateTimeNode = resultNode.FirstChild("updateTime");
    if(!updateTimeNode.IsNull())
    {
      m_updateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updateTimeHasBeenSet = true;
    }
    XmlNode storageNode = resultNode.FirstChild("storage");
    if(!storageNode.IsNull())
    {
      m_storage = storageNode;
      m_storageHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
      m_progressHasBeenSet = true;
    }
    XmlNode bundleTaskErrorNode = resultNode.FirstChild("error");
    if(!bundleTaskErrorNode.IsNull())
    {
      m_bundleTaskError = bundleTaskErrorNode;
      m_bundleTaskErrorHasBeenSet = true;
    }
  }

  return *this;
}

void BundleTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_bundleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".BundleId=" << StringUtils::URLEncode(m_bundleId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(BundleTaskStateMapper::GetNameForBundleTaskState(m_state)) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_storageHasBeenSet)
  {
      Aws::StringStream storageLocationAndMemberSs;
      storageLocationAndMemberSs << location << index << locationValue << ".Storage";
      m_storage.OutputToStream(oStream, storageLocationAndMemberSs.str().c_str());
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_bundleTaskErrorHasBeenSet)
  {
      Aws::StringStream bundleTaskErrorLocationAndMemberSs;
      bundleTaskErrorLocationAndMemberSs << location << index << locationValue << ".BundleTaskError";
      m_bundleTaskError.OutputToStream(oStream, bundleTaskErrorLocationAndMemberSs.str().c_str());
  }

}

void BundleTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_bundleIdHasBeenSet)
  {
      oStream << location << ".BundleId=" << StringUtils::URLEncode(m_bundleId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(BundleTaskStateMapper::GetNameForBundleTaskState(m_state)) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updateTimeHasBeenSet)
  {
      oStream << location << ".UpdateTime=" << StringUtils::URLEncode(m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_storageHasBeenSet)
  {
      Aws::String storageLocationAndMember(location);
      storageLocationAndMember += ".Storage";
      m_storage.OutputToStream(oStream, storageLocationAndMember.c_str());
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_bundleTaskErrorHasBeenSet)
  {
      Aws::String bundleTaskErrorLocationAndMember(location);
      bundleTaskErrorLocationAndMember += ".BundleTaskError";
      m_bundleTaskError.OutputToStream(oStream, bundleTaskErrorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
