/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatusCheckResponseObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatusCheckResponseObject::ApplicationStatusCheckResponseObject(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatusCheckResponseObject& ApplicationStatusCheckResponseObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode applicationStatusCheckIdNode = resultNode.FirstChild("applicationStatusCheckId");
    if (!applicationStatusCheckIdNode.IsNull()) {
      m_applicationStatusCheckId = Aws::Utils::Xml::DecodeEscapedXmlText(applicationStatusCheckIdNode.GetText());
      m_applicationStatusCheckIdHasBeenSet = true;
    }
    XmlNode aggregationNode = resultNode.FirstChild("aggregation");
    if (!aggregationNode.IsNull()) {
      m_aggregation = AggregationStatusEnumMapper::GetAggregationStatusEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aggregationNode.GetText()).c_str()));
      m_aggregationHasBeenSet = true;
    }
    XmlNode healthCheckPathsNode = resultNode.FirstChild("healthCheckPathSet");
    if (!healthCheckPathsNode.IsNull()) {
      XmlNode healthCheckPathsMember = healthCheckPathsNode.FirstChild("item");
      m_healthCheckPathsHasBeenSet = !healthCheckPathsMember.IsNull();
      while (!healthCheckPathsMember.IsNull()) {
        m_healthCheckPaths.push_back(healthCheckPathsMember);
        healthCheckPathsMember = healthCheckPathsMember.NextNode("item");
      }

      m_healthCheckPathsHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if (!protocolNode.IsNull()) {
      m_protocol = NetworkProtocolEnumMapper::GetNetworkProtocolEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()));
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("port");
    if (!portNode.IsNull()) {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode pathNode = resultNode.FirstChild("path");
    if (!pathNode.IsNull()) {
      m_path = Aws::Utils::Xml::DecodeEscapedXmlText(pathNode.GetText());
      m_pathHasBeenSet = true;
    }
    XmlNode deviceIndexNode = resultNode.FirstChild("deviceIndex");
    if (!deviceIndexNode.IsNull()) {
      m_deviceIndex =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceIndexNode.GetText()).c_str()).c_str());
      m_deviceIndexHasBeenSet = true;
    }
    XmlNode ipVersionNode = resultNode.FirstChild("ipVersion");
    if (!ipVersionNode.IsNull()) {
      m_ipVersion = IpVersionEnumMapper::GetIpVersionEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipVersionNode.GetText()).c_str()));
      m_ipVersionHasBeenSet = true;
    }
    XmlNode ipScopeNode = resultNode.FirstChild("ipScope");
    if (!ipScopeNode.IsNull()) {
      m_ipScope =
          IpScopeEnumMapper::GetIpScopeEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipScopeNode.GetText()).c_str()));
      m_ipScopeHasBeenSet = true;
    }
    XmlNode intervalNode = resultNode.FirstChild("interval");
    if (!intervalNode.IsNull()) {
      m_interval =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(intervalNode.GetText()).c_str()).c_str());
      m_intervalHasBeenSet = true;
    }
    XmlNode timeoutNode = resultNode.FirstChild("timeout");
    if (!timeoutNode.IsNull()) {
      m_timeout =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeoutNode.GetText()).c_str()).c_str());
      m_timeoutHasBeenSet = true;
    }
    XmlNode failureThresholdNode = resultNode.FirstChild("failureThreshold");
    if (!failureThresholdNode.IsNull()) {
      m_failureThreshold = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureThresholdNode.GetText()).c_str()).c_str());
      m_failureThresholdHasBeenSet = true;
    }
    XmlNode successThresholdNode = resultNode.FirstChild("successThreshold");
    if (!successThresholdNode.IsNull()) {
      m_successThreshold = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(successThresholdNode.GetText()).c_str()).c_str());
      m_successThresholdHasBeenSet = true;
    }
    XmlNode statusCodeMatcherNode = resultNode.FirstChild("statusCodeMatcher");
    if (!statusCodeMatcherNode.IsNull()) {
      m_statusCodeMatcher = Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeMatcherNode.GetText());
      m_statusCodeMatcherHasBeenSet = true;
    }
    XmlNode initializationGracePeriodSecondsNode = resultNode.FirstChild("initializationGracePeriodSeconds");
    if (!initializationGracePeriodSecondsNode.IsNull()) {
      m_initializationGracePeriodSeconds = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(initializationGracePeriodSecondsNode.GetText()).c_str()).c_str());
      m_initializationGracePeriodSecondsHasBeenSet = true;
    }
    XmlNode lastUpdatedAtNode = resultNode.FirstChild("lastUpdatedAt");
    if (!lastUpdatedAtNode.IsNull()) {
      m_lastUpdatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedAtNode.GetText()).c_str()).c_str(),
                                 Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedAtHasBeenSet = true;
    }
    XmlNode targetTagAssociationsNode = resultNode.FirstChild("targetTagAssociationSet");
    if (!targetTagAssociationsNode.IsNull()) {
      XmlNode targetTagAssociationsMember = targetTagAssociationsNode.FirstChild("item");
      m_targetTagAssociationsHasBeenSet = !targetTagAssociationsMember.IsNull();
      while (!targetTagAssociationsMember.IsNull()) {
        m_targetTagAssociations.push_back(targetTagAssociationsMember);
        targetTagAssociationsMember = targetTagAssociationsMember.NextNode("item");
      }

      m_targetTagAssociationsHasBeenSet = true;
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
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if (!creationTimeNode.IsNull()) {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode modifyTimeNode = resultNode.FirstChild("modifyTime");
    if (!modifyTimeNode.IsNull()) {
      m_modifyTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modifyTimeNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_modifyTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("deletionTime");
    if (!deletionTimeNode.IsNull()) {
      m_deletionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionTimeNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_deletionTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatusCheckResponseObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }

  if (m_aggregationHasBeenSet) {
    oStream << location << index << locationValue
            << ".Aggregation=" << StringUtils::URLEncode(AggregationStatusEnumMapper::GetNameForAggregationStatusEnum(m_aggregation))
            << "&";
  }

  if (m_healthCheckPathsHasBeenSet) {
    unsigned healthCheckPathsIdx = 1;
    for (auto& item : m_healthCheckPaths) {
      Aws::StringStream healthCheckPathsSs;
      healthCheckPathsSs << location << index << locationValue << ".HealthCheckPathSet." << healthCheckPathsIdx++;
      item.OutputToStream(oStream, healthCheckPathsSs.str().c_str());
    }
  }

  if (m_protocolHasBeenSet) {
    oStream << location << index << locationValue
            << ".Protocol=" << StringUtils::URLEncode(NetworkProtocolEnumMapper::GetNameForNetworkProtocolEnum(m_protocol)) << "&";
  }

  if (m_portHasBeenSet) {
    oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if (m_pathHasBeenSet) {
    oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if (m_deviceIndexHasBeenSet) {
    oStream << location << index << locationValue << ".DeviceIndex=" << m_deviceIndex << "&";
  }

  if (m_ipVersionHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpVersion=" << StringUtils::URLEncode(IpVersionEnumMapper::GetNameForIpVersionEnum(m_ipVersion)) << "&";
  }

  if (m_ipScopeHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpScope=" << StringUtils::URLEncode(IpScopeEnumMapper::GetNameForIpScopeEnum(m_ipScope)) << "&";
  }

  if (m_intervalHasBeenSet) {
    oStream << location << index << locationValue << ".Interval=" << m_interval << "&";
  }

  if (m_timeoutHasBeenSet) {
    oStream << location << index << locationValue << ".Timeout=" << m_timeout << "&";
  }

  if (m_failureThresholdHasBeenSet) {
    oStream << location << index << locationValue << ".FailureThreshold=" << m_failureThreshold << "&";
  }

  if (m_successThresholdHasBeenSet) {
    oStream << location << index << locationValue << ".SuccessThreshold=" << m_successThreshold << "&";
  }

  if (m_statusCodeMatcherHasBeenSet) {
    oStream << location << index << locationValue << ".StatusCodeMatcher=" << StringUtils::URLEncode(m_statusCodeMatcher.c_str()) << "&";
  }

  if (m_initializationGracePeriodSecondsHasBeenSet) {
    oStream << location << index << locationValue << ".InitializationGracePeriodSeconds=" << m_initializationGracePeriodSeconds << "&";
  }

  if (m_lastUpdatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".LastUpdatedAt=" << StringUtils::URLEncode(m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_targetTagAssociationsHasBeenSet) {
    unsigned targetTagAssociationsIdx = 1;
    for (auto& item : m_targetTagAssociations) {
      Aws::StringStream targetTagAssociationsSs;
      targetTagAssociationsSs << location << index << locationValue << ".TargetTagAssociationSet." << targetTagAssociationsIdx++;
      item.OutputToStream(oStream, targetTagAssociationsSs.str().c_str());
    }
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }

  if (m_creationTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_modifyTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ModifyTime=" << StringUtils::URLEncode(m_modifyTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_deletionTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void ApplicationStatusCheckResponseObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }
  if (m_aggregationHasBeenSet) {
    oStream << location
            << ".Aggregation=" << StringUtils::URLEncode(AggregationStatusEnumMapper::GetNameForAggregationStatusEnum(m_aggregation))
            << "&";
  }
  if (m_healthCheckPathsHasBeenSet) {
    unsigned healthCheckPathsIdx = 1;
    for (auto& item : m_healthCheckPaths) {
      Aws::StringStream healthCheckPathsSs;
      healthCheckPathsSs << location << ".HealthCheckPathSet." << healthCheckPathsIdx++;
      item.OutputToStream(oStream, healthCheckPathsSs.str().c_str());
    }
  }
  if (m_protocolHasBeenSet) {
    oStream << location << ".Protocol=" << StringUtils::URLEncode(NetworkProtocolEnumMapper::GetNameForNetworkProtocolEnum(m_protocol))
            << "&";
  }
  if (m_portHasBeenSet) {
    oStream << location << ".Port=" << m_port << "&";
  }
  if (m_pathHasBeenSet) {
    oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if (m_deviceIndexHasBeenSet) {
    oStream << location << ".DeviceIndex=" << m_deviceIndex << "&";
  }
  if (m_ipVersionHasBeenSet) {
    oStream << location << ".IpVersion=" << StringUtils::URLEncode(IpVersionEnumMapper::GetNameForIpVersionEnum(m_ipVersion)) << "&";
  }
  if (m_ipScopeHasBeenSet) {
    oStream << location << ".IpScope=" << StringUtils::URLEncode(IpScopeEnumMapper::GetNameForIpScopeEnum(m_ipScope)) << "&";
  }
  if (m_intervalHasBeenSet) {
    oStream << location << ".Interval=" << m_interval << "&";
  }
  if (m_timeoutHasBeenSet) {
    oStream << location << ".Timeout=" << m_timeout << "&";
  }
  if (m_failureThresholdHasBeenSet) {
    oStream << location << ".FailureThreshold=" << m_failureThreshold << "&";
  }
  if (m_successThresholdHasBeenSet) {
    oStream << location << ".SuccessThreshold=" << m_successThreshold << "&";
  }
  if (m_statusCodeMatcherHasBeenSet) {
    oStream << location << ".StatusCodeMatcher=" << StringUtils::URLEncode(m_statusCodeMatcher.c_str()) << "&";
  }
  if (m_initializationGracePeriodSecondsHasBeenSet) {
    oStream << location << ".InitializationGracePeriodSeconds=" << m_initializationGracePeriodSeconds << "&";
  }
  if (m_lastUpdatedAtHasBeenSet) {
    oStream << location
            << ".LastUpdatedAt=" << StringUtils::URLEncode(m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_targetTagAssociationsHasBeenSet) {
    unsigned targetTagAssociationsIdx = 1;
    for (auto& item : m_targetTagAssociations) {
      Aws::StringStream targetTagAssociationsSs;
      targetTagAssociationsSs << location << ".TargetTagAssociationSet." << targetTagAssociationsIdx++;
      item.OutputToStream(oStream, targetTagAssociationsSs.str().c_str());
    }
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
  if (m_creationTimeHasBeenSet) {
    oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_modifyTimeHasBeenSet) {
    oStream << location << ".ModifyTime=" << StringUtils::URLEncode(m_modifyTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_deletionTimeHasBeenSet) {
    oStream << location << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
