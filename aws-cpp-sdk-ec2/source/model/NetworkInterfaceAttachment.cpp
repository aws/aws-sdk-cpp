/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceAttachment.h>
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

NetworkInterfaceAttachment::NetworkInterfaceAttachment() : 
    m_attachTimeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_enaSrdSpecificationHasBeenSet(false)
{
}

NetworkInterfaceAttachment::NetworkInterfaceAttachment(const XmlNode& xmlNode) : 
    m_attachTimeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_enaSrdSpecificationHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfaceAttachment& NetworkInterfaceAttachment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attachTimeNode = resultNode.FirstChild("attachTime");
    if(!attachTimeNode.IsNull())
    {
      m_attachTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attachTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_attachTimeHasBeenSet = true;
    }
    XmlNode attachmentIdNode = resultNode.FirstChild("attachmentId");
    if(!attachmentIdNode.IsNull())
    {
      m_attachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(attachmentIdNode.GetText());
      m_attachmentIdHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode deviceIndexNode = resultNode.FirstChild("deviceIndex");
    if(!deviceIndexNode.IsNull())
    {
      m_deviceIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceIndexNode.GetText()).c_str()).c_str());
      m_deviceIndexHasBeenSet = true;
    }
    XmlNode networkCardIndexNode = resultNode.FirstChild("networkCardIndex");
    if(!networkCardIndexNode.IsNull())
    {
      m_networkCardIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkCardIndexNode.GetText()).c_str()).c_str());
      m_networkCardIndexHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceOwnerIdNode = resultNode.FirstChild("instanceOwnerId");
    if(!instanceOwnerIdNode.IsNull())
    {
      m_instanceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceOwnerIdNode.GetText());
      m_instanceOwnerIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = AttachmentStatusMapper::GetAttachmentStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode enaSrdSpecificationNode = resultNode.FirstChild("enaSrdSpecification");
    if(!enaSrdSpecificationNode.IsNull())
    {
      m_enaSrdSpecification = enaSrdSpecificationNode;
      m_enaSrdSpecificationHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfaceAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_attachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceIndex=" << m_deviceIndex << "&";
  }

  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceOwnerId=" << StringUtils::URLEncode(m_instanceOwnerId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_status) << "&";
  }

  if(m_enaSrdSpecificationHasBeenSet)
  {
      Aws::StringStream enaSrdSpecificationLocationAndMemberSs;
      enaSrdSpecificationLocationAndMemberSs << location << index << locationValue << ".EnaSrdSpecification";
      m_enaSrdSpecification.OutputToStream(oStream, enaSrdSpecificationLocationAndMemberSs.str().c_str());
  }

}

void NetworkInterfaceAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_attachmentIdHasBeenSet)
  {
      oStream << location << ".AttachmentId=" << StringUtils::URLEncode(m_attachmentId.c_str()) << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_deviceIndexHasBeenSet)
  {
      oStream << location << ".DeviceIndex=" << m_deviceIndex << "&";
  }
  if(m_networkCardIndexHasBeenSet)
  {
      oStream << location << ".NetworkCardIndex=" << m_networkCardIndex << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceOwnerIdHasBeenSet)
  {
      oStream << location << ".InstanceOwnerId=" << StringUtils::URLEncode(m_instanceOwnerId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_status) << "&";
  }
  if(m_enaSrdSpecificationHasBeenSet)
  {
      Aws::String enaSrdSpecificationLocationAndMember(location);
      enaSrdSpecificationLocationAndMember += ".EnaSrdSpecification";
      m_enaSrdSpecification.OutputToStream(oStream, enaSrdSpecificationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
