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
#include <aws/ec2/model/ImportImageTask.h>
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

ImportImageTask::ImportImageTask() : 
    m_importTaskIdHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_hypervisorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_snapshotDetailsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ImportImageTask::ImportImageTask(const XmlNode& xmlNode) : 
    m_importTaskIdHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_hypervisorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_snapshotDetailsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ImportImageTask& ImportImageTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = StringUtils::Trim(importTaskIdNode.GetText().c_str());
      m_importTaskIdHasBeenSet = true;
    }
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = StringUtils::Trim(architectureNode.GetText().c_str());
      m_architectureHasBeenSet = true;
    }
    XmlNode licenseTypeNode = resultNode.FirstChild("licenseType");
    if(!licenseTypeNode.IsNull())
    {
      m_licenseType = StringUtils::Trim(licenseTypeNode.GetText().c_str());
      m_licenseTypeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = StringUtils::Trim(platformNode.GetText().c_str());
      m_platformHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = StringUtils::Trim(hypervisorNode.GetText().c_str());
      m_hypervisorHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode snapshotDetailsNode = resultNode.FirstChild("snapshotDetailSet");
    if(!snapshotDetailsNode.IsNull())
    {
      XmlNode snapshotDetailsMember = snapshotDetailsNode.FirstChild("item");
      while(!snapshotDetailsMember.IsNull())
      {
        m_snapshotDetails.push_back(snapshotDetailsMember);
        snapshotDetailsMember = snapshotDetailsMember.NextNode("item");
      }

      m_snapshotDetailsHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = StringUtils::Trim(imageIdNode.GetText().c_str());
      m_imageIdHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::Trim(progressNode.GetText().c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = StringUtils::Trim(statusMessageNode.GetText().c_str());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ImportImageTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }

  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }

  if(m_licenseTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_snapshotDetailsHasBeenSet)
  {
      unsigned snapshotDetailsIdx = 1;
      for(auto& item : m_snapshotDetails)
      {
        Aws::StringStream snapshotDetailsSs;
        snapshotDetailsSs << location << index << locationValue << ".SnapshotDetailSet." << snapshotDetailsIdx++;
        item.OutputToStream(oStream, snapshotDetailsSs.str().c_str());
      }
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void ImportImageTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }
  if(m_licenseTypeHasBeenSet)
  {
      oStream << location << ".LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_hypervisorHasBeenSet)
  {
      oStream << location << ".Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_snapshotDetailsHasBeenSet)
  {
      unsigned snapshotDetailsIdx = 1;
      for(auto& item : m_snapshotDetails)
      {
        Aws::StringStream snapshotDetailsSs;
        snapshotDetailsSs << location <<  ".item." << snapshotDetailsIdx++;
        item.OutputToStream(oStream, snapshotDetailsSs.str().c_str());
      }
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
