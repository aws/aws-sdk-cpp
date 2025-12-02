/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LogFieldsListItem.h>

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
class GetLogFieldsResult {
 public:
  AWS_CLOUDWATCHLOGS_API GetLogFieldsResult() = default;
  AWS_CLOUDWATCHLOGS_API GetLogFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API GetLogFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of log fields for the specified data source, including field names
   * and their data types.</p>
   */
  inline const Aws::Vector<LogFieldsListItem>& GetLogFields() const { return m_logFields; }
  template <typename LogFieldsT = Aws::Vector<LogFieldsListItem>>
  void SetLogFields(LogFieldsT&& value) {
    m_logFieldsHasBeenSet = true;
    m_logFields = std::forward<LogFieldsT>(value);
  }
  template <typename LogFieldsT = Aws::Vector<LogFieldsListItem>>
  GetLogFieldsResult& WithLogFields(LogFieldsT&& value) {
    SetLogFields(std::forward<LogFieldsT>(value));
    return *this;
  }
  template <typename LogFieldsT = LogFieldsListItem>
  GetLogFieldsResult& AddLogFields(LogFieldsT&& value) {
    m_logFieldsHasBeenSet = true;
    m_logFields.emplace_back(std::forward<LogFieldsT>(value));
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
  GetLogFieldsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LogFieldsListItem> m_logFields;
  bool m_logFieldsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
