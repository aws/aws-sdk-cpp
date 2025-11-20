/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/VolumeRecycleBinInfo.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

VolumeRecycleBinInfo::VolumeRecycleBinInfo(const XmlNode& xmlNode) { *this = xmlNode; }

VolumeRecycleBinInfo& VolumeRecycleBinInfo::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if (!volumeIdNode.IsNull()) {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode volumeTypeNode = resultNode.FirstChild("volumeType");
    if (!volumeTypeNode.IsNull()) {
      m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeTypeNode.GetText()).c_str()));
      m_volumeTypeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state =
          VolumeStateMapper::GetVolumeStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("size");
    if (!sizeNode.IsNull()) {
      m_size = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("iops");
    if (!iopsNode.IsNull()) {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode throughputNode = resultNode.FirstChild("throughput");
    if (!throughputNode.IsNull()) {
      m_throughput =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(throughputNode.GetText()).c_str()).c_str());
      m_throughputHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if (!outpostArnNode.IsNull()) {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode sourceVolumeIdNode = resultNode.FirstChild("sourceVolumeId");
    if (!sourceVolumeIdNode.IsNull()) {
      m_sourceVolumeId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceVolumeIdNode.GetText());
      m_sourceVolumeIdHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if (!snapshotIdNode.IsNull()) {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("operator");
    if (!operatorNode.IsNull()) {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if (!createTimeNode.IsNull()) {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode recycleBinEnterTimeNode = resultNode.FirstChild("recycleBinEnterTime");
    if (!recycleBinEnterTimeNode.IsNull()) {
      m_recycleBinEnterTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinEnterTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinEnterTimeHasBeenSet = true;
    }
    XmlNode recycleBinExitTimeNode = resultNode.FirstChild("recycleBinExitTime");
    if (!recycleBinExitTimeNode.IsNull()) {
      m_recycleBinExitTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recycleBinExitTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_recycleBinExitTimeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_volumeIdHasBeenSet) {
    oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if (m_volumeTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".VolumeType=" << StringUtils::URLEncode(VolumeTypeMapper::GetNameForVolumeType(m_volumeType)) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(VolumeStateMapper::GetNameForVolumeState(m_state))
            << "&";
  }

  if (m_sizeHasBeenSet) {
    oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

  if (m_iopsHasBeenSet) {
    oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if (m_throughputHasBeenSet) {
    oStream << location << index << locationValue << ".Throughput=" << m_throughput << "&";
  }

  if (m_outpostArnHasBeenSet) {
    oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_sourceVolumeIdHasBeenSet) {
    oStream << location << index << locationValue << ".SourceVolumeId=" << StringUtils::URLEncode(m_sourceVolumeId.c_str()) << "&";
  }

  if (m_snapshotIdHasBeenSet) {
    oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if (m_operatorHasBeenSet) {
    Aws::StringStream operatorLocationAndMemberSs;
    operatorLocationAndMemberSs << location << index << locationValue << ".Operator";
    m_operator.OutputToStream(oStream, operatorLocationAndMemberSs.str().c_str());
  }

  if (m_createTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_recycleBinEnterTimeHasBeenSet) {
    oStream << location << index << locationValue << ".RecycleBinEnterTime="
            << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_recycleBinExitTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

void VolumeRecycleBinInfo::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_volumeIdHasBeenSet) {
    oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if (m_volumeTypeHasBeenSet) {
    oStream << location << ".VolumeType=" << StringUtils::URLEncode(VolumeTypeMapper::GetNameForVolumeType(m_volumeType)) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(VolumeStateMapper::GetNameForVolumeState(m_state)) << "&";
  }
  if (m_sizeHasBeenSet) {
    oStream << location << ".Size=" << m_size << "&";
  }
  if (m_iopsHasBeenSet) {
    oStream << location << ".Iops=" << m_iops << "&";
  }
  if (m_throughputHasBeenSet) {
    oStream << location << ".Throughput=" << m_throughput << "&";
  }
  if (m_outpostArnHasBeenSet) {
    oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_sourceVolumeIdHasBeenSet) {
    oStream << location << ".SourceVolumeId=" << StringUtils::URLEncode(m_sourceVolumeId.c_str()) << "&";
  }
  if (m_snapshotIdHasBeenSet) {
    oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if (m_operatorHasBeenSet) {
    Aws::String operatorLocationAndMember(location);
    operatorLocationAndMember += ".Operator";
    m_operator.OutputToStream(oStream, operatorLocationAndMember.c_str());
  }
  if (m_createTimeHasBeenSet) {
    oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_recycleBinEnterTimeHasBeenSet) {
    oStream << location << ".RecycleBinEnterTime="
            << StringUtils::URLEncode(m_recycleBinEnterTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_recycleBinExitTimeHasBeenSet) {
    oStream << location
            << ".RecycleBinExitTime=" << StringUtils::URLEncode(m_recycleBinExitTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
