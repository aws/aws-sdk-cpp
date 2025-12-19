/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/Import.h>

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
class DescribeImportTasksResult {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeImportTasksResult() = default;
  AWS_CLOUDWATCHLOGS_API DescribeImportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API DescribeImportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of import tasks that match the request filters.</p>
   */
  inline const Aws::Vector<Import>& GetImports() const { return m_imports; }
  template <typename ImportsT = Aws::Vector<Import>>
  void SetImports(ImportsT&& value) {
    m_importsHasBeenSet = true;
    m_imports = std::forward<ImportsT>(value);
  }
  template <typename ImportsT = Aws::Vector<Import>>
  DescribeImportTasksResult& WithImports(ImportsT&& value) {
    SetImports(std::forward<ImportsT>(value));
    return *this;
  }
  template <typename ImportsT = Import>
  DescribeImportTasksResult& AddImports(ImportsT&& value) {
    m_importsHasBeenSet = true;
    m_imports.emplace_back(std::forward<ImportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use when requesting the next set of results. Not present if
   * there are no additional results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeImportTasksResult& WithNextToken(NextTokenT&& value) {
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
  DescribeImportTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Import> m_imports;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_importsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
