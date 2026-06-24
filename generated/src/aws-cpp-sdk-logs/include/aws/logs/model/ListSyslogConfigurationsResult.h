/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/SyslogConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class ListSyslogConfigurationsResult {
 public:
  AWS_CLOUDWATCHLOGS_API ListSyslogConfigurationsResult() = default;
  AWS_CLOUDWATCHLOGS_API ListSyslogConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API ListSyslogConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of syslog configurations.</p>
   */
  inline const Aws::Vector<SyslogConfiguration>& GetSyslogConfigurations() const { return m_syslogConfigurations; }
  template <typename SyslogConfigurationsT = Aws::Vector<SyslogConfiguration>>
  void SetSyslogConfigurations(SyslogConfigurationsT&& value) {
    m_syslogConfigurationsHasBeenSet = true;
    m_syslogConfigurations = std::forward<SyslogConfigurationsT>(value);
  }
  template <typename SyslogConfigurationsT = Aws::Vector<SyslogConfiguration>>
  ListSyslogConfigurationsResult& WithSyslogConfigurations(SyslogConfigurationsT&& value) {
    SetSyslogConfigurations(std::forward<SyslogConfigurationsT>(value));
    return *this;
  }
  template <typename SyslogConfigurationsT = SyslogConfiguration>
  ListSyslogConfigurationsResult& AddSyslogConfigurations(SyslogConfigurationsT&& value) {
    m_syslogConfigurationsHasBeenSet = true;
    m_syslogConfigurations.emplace_back(std::forward<SyslogConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of items to return. The token expires after 24
   * hours.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSyslogConfigurationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListSyslogConfigurationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SyslogConfiguration> m_syslogConfigurations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_syslogConfigurationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
