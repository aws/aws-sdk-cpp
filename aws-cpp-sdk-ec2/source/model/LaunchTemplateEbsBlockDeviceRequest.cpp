﻿/*
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

#include <aws/ec2/model/LaunchTemplateEbsBlockDeviceRequest.h>
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

LaunchTemplateEbsBlockDeviceRequest::LaunchTemplateEbsBlockDeviceRequest() : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
}

LaunchTemplateEbsBlockDeviceRequest::LaunchTemplateEbsBlockDeviceRequest(const XmlNode& xmlNode) : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateEbsBlockDeviceRequest& LaunchTemplateEbsBlockDeviceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(encryptedNode.GetText().c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("DeleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(deleteOnTerminationNode.GetText().c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(iopsNode.GetText().c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = StringUtils::Trim(kmsKeyIdNode.GetText().c_str());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("SnapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = StringUtils::Trim(snapshotIdNode.GetText().c_str());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("VolumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(volumeSizeNode.GetText().c_str()).c_str());
      m_volumeSizeHasBeenSet = true;
    }
    XmlNode volumeTypeNode = resultNode.FirstChild("VolumeType");
    if(!volumeTypeNode.IsNull())
    {
      m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(volumeTypeNode.GetText().c_str()).c_str());
      m_volumeTypeHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateEbsBlockDeviceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
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
      oStream << location << index << locationValue << ".VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }

}

void LaunchTemplateEbsBlockDeviceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
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
      oStream << location << ".VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
