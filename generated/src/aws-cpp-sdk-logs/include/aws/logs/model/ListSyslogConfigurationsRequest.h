/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class ListSyslogConfigurationsRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API ListSyslogConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSyslogConfigurations"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or ARN of the log group to filter syslog configurations for.</p>
   */
  inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
  inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
  template <typename LogGroupIdentifierT = Aws::String>
  void SetLogGroupIdentifier(LogGroupIdentifierT&& value) {
    m_logGroupIdentifierHasBeenSet = true;
    m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value);
  }
  template <typename LogGroupIdentifierT = Aws::String>
  ListSyslogConfigurationsRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) {
    SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint to filter syslog configurations for.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  ListSyslogConfigurationsRequest& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of items to return. You received this token from a
   * previous call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSyslogConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of syslog configurations to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSyslogConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupIdentifier;

  Aws::String m_vpcEndpointId;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_logGroupIdentifierHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
