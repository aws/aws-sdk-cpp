﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ScheduledInstancesEbs.h>
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

ScheduledInstancesEbs::ScheduledInstancesEbs() : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
}

ScheduledInstancesEbs::ScheduledInstancesEbs(const XmlNode& xmlNode) : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstancesEbs& ScheduledInstancesEbs::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("DeleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("SnapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("VolumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeSizeNode.GetText()).c_str()).c_str());
      m_volumeSizeHasBeenSet = true;
    }
    XmlNode volumeTypeNode = resultNode.FirstChild("VolumeType");
    if(!volumeTypeNode.IsNull())
    {
      m_volumeType = Aws::Utils::Xml::DecodeEscapedXmlText(volumeTypeNode.GetText());
      m_volumeTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesEbs::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_volumeSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeSize=" << m_volumeSize << "&";
  }

  if(m_volumeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeType=" << StringUtils::URLEncode(m_volumeType.c_str()) << "&";
  }

}

void ScheduledInstancesEbs::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_volumeSizeHasBeenSet)
  {
      oStream << location << ".VolumeSize=" << m_volumeSize << "&";
  }
  if(m_volumeTypeHasBeenSet)
  {
      oStream << location << ".VolumeType=" << StringUtils::URLEncode(m_volumeType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
