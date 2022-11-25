/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotRecycleBinInfo.h>
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

SnapshotRecycleBinInfo::SnapshotRecycleBinInfo() : 
    m_snapshotIdHasBeenSet(false),
    m_recycleBinEnterTimeHasBeenSet(false),
    m_recycleBinExitTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
}

SnapshotRecycleBinInfo::SnapshotRecycleBinInfo(const XmlNode& xmlNode) : 
    m_snapshotIdHasBeenSet(false),
    m_recycleBinEnterTimeHasBeenSet(false),
    m_recycleBinExitTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotRecycleBinInfo& SnapshotRecycleBinInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode recycleBinEnterTimeNode = resultNode.FirstChild("recycleBinEnterTime");
    if(!recycleBinEnterTimeNode.IsNull())
    {
      m_recycleBinEnterTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinEnterTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinEnterTimeHasBeenSet = true;
    }
    XmlNode recycleBinExitTimeNode = resultNode.FirstChild("recycleBinExitTime");
    if(!recycleBinExitTimeNode.IsNull())
    {
      m_recycleBinExitTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinExitTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinExitTimeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_recycleBinEnterTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecycleBinEnterTime=" << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recycleBinExitTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

}

void SnapshotRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_recycleBinEnterTimeHasBeenSet)
  {
      oStream << location << ".RecycleBinEnterTime=" << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_recycleBinExitTimeHasBeenSet)
  {
      oStream << location << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
