/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateApplicationStatusCheckRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateApplicationStatusCheckRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateApplicationStatusCheck&";
  if (m_healthCheckPathsHasBeenSet) {
    unsigned healthCheckPathsCount = 1;
    for (auto& item : m_healthCheckPaths) {
      item.OutputToStream(ss, "HealthCheckPath.", healthCheckPathsCount, "");
      healthCheckPathsCount++;
    }
  }

  if (m_aggregationHasBeenSet) {
    ss << "Aggregation=" << StringUtils::URLEncode(AggregationStatusEnumMapper::GetNameForAggregationStatusEnum(m_aggregation)) << "&";
  }

  if (m_protocolHasBeenSet) {
    ss << "Protocol=" << StringUtils::URLEncode(NetworkProtocolEnumMapper::GetNameForNetworkProtocolEnum(m_protocol)) << "&";
  }

  if (m_portHasBeenSet) {
    ss << "Port=" << m_port << "&";
  }

  if (m_pathHasBeenSet) {
    ss << "Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if (m_deviceIndexHasBeenSet) {
    ss << "DeviceIndex=" << m_deviceIndex << "&";
  }

  if (m_ipVersionHasBeenSet) {
    ss << "IpVersion=" << StringUtils::URLEncode(IpVersionEnumMapper::GetNameForIpVersionEnum(m_ipVersion)) << "&";
  }

  if (m_ipScopeHasBeenSet) {
    ss << "IpScope=" << StringUtils::URLEncode(IpScopeEnumMapper::GetNameForIpScopeEnum(m_ipScope)) << "&";
  }

  if (m_intervalHasBeenSet) {
    ss << "Interval=" << m_interval << "&";
  }

  if (m_timeoutHasBeenSet) {
    ss << "Timeout=" << m_timeout << "&";
  }

  if (m_failureThresholdHasBeenSet) {
    ss << "FailureThreshold=" << m_failureThreshold << "&";
  }

  if (m_successThresholdHasBeenSet) {
    ss << "SuccessThreshold=" << m_successThreshold << "&";
  }

  if (m_statusCodeMatcherHasBeenSet) {
    ss << "StatusCodeMatcher=" << StringUtils::URLEncode(m_statusCodeMatcher.c_str()) << "&";
  }

  if (m_initializationGracePeriodSecondsHasBeenSet) {
    ss << "InitializationGracePeriodSeconds=" << m_initializationGracePeriodSeconds << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateApplicationStatusCheckRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
