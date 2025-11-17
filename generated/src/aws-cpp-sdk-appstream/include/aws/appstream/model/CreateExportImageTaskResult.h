/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ExportImageTask.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class CreateExportImageTaskResult {
 public:
  AWS_APPSTREAM_API CreateExportImageTaskResult() = default;
  AWS_APPSTREAM_API CreateExportImageTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPSTREAM_API CreateExportImageTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the export image task that was created, including the task
   * ID and initial state.</p>
   */
  inline const ExportImageTask& GetExportImageTask() const { return m_exportImageTask; }
  template <typename ExportImageTaskT = ExportImageTask>
  void SetExportImageTask(ExportImageTaskT&& value) {
    m_exportImageTaskHasBeenSet = true;
    m_exportImageTask = std::forward<ExportImageTaskT>(value);
  }
  template <typename ExportImageTaskT = ExportImageTask>
  CreateExportImageTaskResult& WithExportImageTask(ExportImageTaskT&& value) {
    SetExportImageTask(std::forward<ExportImageTaskT>(value));
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
  CreateExportImageTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ExportImageTask m_exportImageTask;
  bool m_exportImageTaskHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
