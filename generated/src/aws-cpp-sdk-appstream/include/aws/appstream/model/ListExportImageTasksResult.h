/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ExportImageTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {
class ListExportImageTasksResult {
 public:
  AWS_APPSTREAM_API ListExportImageTasksResult() = default;
  AWS_APPSTREAM_API ListExportImageTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPSTREAM_API ListExportImageTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of export image tasks that match the specified criteria.</p>
   */
  inline const Aws::Vector<ExportImageTask>& GetExportImageTasks() const { return m_exportImageTasks; }
  template <typename ExportImageTasksT = Aws::Vector<ExportImageTask>>
  void SetExportImageTasks(ExportImageTasksT&& value) {
    m_exportImageTasksHasBeenSet = true;
    m_exportImageTasks = std::forward<ExportImageTasksT>(value);
  }
  template <typename ExportImageTasksT = Aws::Vector<ExportImageTask>>
  ListExportImageTasksResult& WithExportImageTasks(ExportImageTasksT&& value) {
    SetExportImageTasks(std::forward<ExportImageTasksT>(value));
    return *this;
  }
  template <typename ExportImageTasksT = ExportImageTask>
  ListExportImageTasksResult& AddExportImageTasks(ExportImageTasksT&& value) {
    m_exportImageTasksHasBeenSet = true;
    m_exportImageTasks.emplace_back(std::forward<ExportImageTasksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use for retrieving the next page of results. This
   * field is only present when there are more results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExportImageTasksResult& WithNextToken(NextTokenT&& value) {
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
  ListExportImageTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExportImageTask> m_exportImageTasks;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_exportImageTasksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
