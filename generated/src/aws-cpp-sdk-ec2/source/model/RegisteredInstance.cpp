/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/RegisteredInstance.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

RegisteredInstance::RegisteredInstance(const XmlNode& xmlNode) { *this = xmlNode; }

RegisteredInstance& RegisteredInstance::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if (!instanceIdNode.IsNull()) {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode sqlServerLicenseUsageNode = resultNode.FirstChild("sqlServerLicenseUsage");
    if (!sqlServerLicenseUsageNode.IsNull()) {
      m_sqlServerLicenseUsage = SqlServerLicenseUsageMapper::GetSqlServerLicenseUsageForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sqlServerLicenseUsageNode.GetText()).c_str()));
      m_sqlServerLicenseUsageHasBeenSet = true;
    }
    XmlNode haStatusNode = resultNode.FirstChild("haStatus");
    if (!haStatusNode.IsNull()) {
      m_haStatus =
          HaStatusMapper::GetHaStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(haStatusNode.GetText()).c_str()));
      m_haStatusHasBeenSet = true;
    }
    XmlNode processingStatusNode = resultNode.FirstChild("processingStatus");
    if (!processingStatusNode.IsNull()) {
      m_processingStatus = Aws::Utils::Xml::DecodeEscapedXmlText(processingStatusNode.GetText());
      m_processingStatusHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("lastUpdatedTime");
    if (!lastUpdatedTimeNode.IsNull()) {
      m_lastUpdatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimeNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode sqlServerCredentialsNode = resultNode.FirstChild("sqlServerCredentials");
    if (!sqlServerCredentialsNode.IsNull()) {
      m_sqlServerCredentials = Aws::Utils::Xml::DecodeEscapedXmlText(sqlServerCredentialsNode.GetText());
      m_sqlServerCredentialsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void RegisteredInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if (m_sqlServerLicenseUsageHasBeenSet) {
    oStream << location << index << locationValue << ".SqlServerLicenseUsage="
            << StringUtils::URLEncode(SqlServerLicenseUsageMapper::GetNameForSqlServerLicenseUsage(m_sqlServerLicenseUsage)) << "&";
  }

  if (m_haStatusHasBeenSet) {
    oStream << location << index << locationValue << ".HaStatus=" << StringUtils::URLEncode(HaStatusMapper::GetNameForHaStatus(m_haStatus))
            << "&";
  }

  if (m_processingStatusHasBeenSet) {
    oStream << location << index << locationValue << ".ProcessingStatus=" << StringUtils::URLEncode(m_processingStatus.c_str()) << "&";
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_sqlServerCredentialsHasBeenSet) {
    oStream << location << index << locationValue << ".SqlServerCredentials=" << StringUtils::URLEncode(m_sqlServerCredentials.c_str())
            << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void RegisteredInstance::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceIdHasBeenSet) {
    oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if (m_sqlServerLicenseUsageHasBeenSet) {
    oStream << location << ".SqlServerLicenseUsage="
            << StringUtils::URLEncode(SqlServerLicenseUsageMapper::GetNameForSqlServerLicenseUsage(m_sqlServerLicenseUsage)) << "&";
  }
  if (m_haStatusHasBeenSet) {
    oStream << location << ".HaStatus=" << StringUtils::URLEncode(HaStatusMapper::GetNameForHaStatus(m_haStatus)) << "&";
  }
  if (m_processingStatusHasBeenSet) {
    oStream << location << ".ProcessingStatus=" << StringUtils::URLEncode(m_processingStatus.c_str()) << "&";
  }
  if (m_lastUpdatedTimeHasBeenSet) {
    oStream << location
            << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_sqlServerCredentialsHasBeenSet) {
    oStream << location << ".SqlServerCredentials=" << StringUtils::URLEncode(m_sqlServerCredentials.c_str()) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
