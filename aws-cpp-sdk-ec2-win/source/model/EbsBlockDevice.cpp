/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EbsBlockDevice.h>
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

EbsBlockDevice::EbsBlockDevice() : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false)
{
}

EbsBlockDevice::EbsBlockDevice(const XmlNode& xmlNode) : 
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false)
{
  *this = xmlNode;
}

EbsBlockDevice& EbsBlockDevice::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("volumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeSizeNode.GetText()).c_str()).c_str());
      m_volumeSizeHasBeenSet = true;
    }
    XmlNode volumeTypeNode = resultNode.FirstChild("volumeType");
    if(!volumeTypeNode.IsNull())
    {
      m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeTypeNode.GetText()).c_str()).c_str());
      m_volumeTypeHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode throughputNode = resultNode.FirstChild("throughput");
    if(!throughputNode.IsNull())
    {
      m_throughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(throughputNode.GetText()).c_str()).c_str());
      m_throughputHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
  }

  return *this;
}

void EbsBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
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
      oStream << location << index << locationValue << ".VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_throughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".Throughput=" << m_throughput << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

}

void EbsBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
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
      oStream << location << ".VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_throughputHasBeenSet)
  {
      oStream << location << ".Throughput=" << m_throughput << "&";
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
