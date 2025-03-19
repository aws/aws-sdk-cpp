/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EbsInstanceBlockDevice.h>
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

EbsInstanceBlockDevice::EbsInstanceBlockDevice(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EbsInstanceBlockDevice& EbsInstanceBlockDevice::operator =(const XmlNode& xmlNode)
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
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteOnTerminationNode.GetText()).c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = AttachmentStatusMapper::GetAttachmentStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode associatedResourceNode = resultNode.FirstChild("associatedResource");
    if(!associatedResourceNode.IsNull())
    {
      m_associatedResource = Aws::Utils::Xml::DecodeEscapedXmlText(associatedResourceNode.GetText());
      m_associatedResourceHasBeenSet = true;
    }
    XmlNode volumeOwnerIdNode = resultNode.FirstChild("volumeOwnerId");
    if(!volumeOwnerIdNode.IsNull())
    {
      m_volumeOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeOwnerIdNode.GetText());
      m_volumeOwnerIdHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("operator");
    if(!operatorNode.IsNull())
    {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
  }

  return *this;
}

void EbsInstanceBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(AttachmentStatusMapper::GetNameForAttachmentStatus(m_status)) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }

  if(m_volumeOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeOwnerId=" << StringUtils::URLEncode(m_volumeOwnerId.c_str()) << "&";
  }

  if(m_operatorHasBeenSet)
  {
      Aws::StringStream operatorLocationAndMemberSs;
      operatorLocationAndMemberSs << location << index << locationValue << ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMemberSs.str().c_str());
  }

}

void EbsInstanceBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(AttachmentStatusMapper::GetNameForAttachmentStatus(m_status)) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_associatedResourceHasBeenSet)
  {
      oStream << location << ".AssociatedResource=" << StringUtils::URLEncode(m_associatedResource.c_str()) << "&";
  }
  if(m_volumeOwnerIdHasBeenSet)
  {
      oStream << location << ".VolumeOwnerId=" << StringUtils::URLEncode(m_volumeOwnerId.c_str()) << "&";
  }
  if(m_operatorHasBeenSet)
  {
      Aws::String operatorLocationAndMember(location);
      operatorLocationAndMember += ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
