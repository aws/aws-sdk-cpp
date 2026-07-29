/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetExportJobStatus.h>
#include <aws/iotsitewise/model/ExportErrorReportLocation.h>
#include <aws/iotsitewise/model/ProcessingInput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Response for describe dataset export job request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeDatasetExportJobResponse">AWS
 * API Reference</a></p>
 */
class DescribeDatasetExportJobResult {
 public:
  AWS_IOTSITEWISE_API DescribeDatasetExportJobResult() = default;
  AWS_IOTSITEWISE_API DescribeDatasetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeDatasetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the dataset export job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  DescribeDatasetExportJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace that contains the dataset export job.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeDatasetExportJobResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the dataset export job.</p>
   */
  inline DatasetExportJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetExportJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeDatasetExportJobResult& WithStatus(DatasetExportJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job started processing.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DescribeDatasetExportJobResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job completed, or null if the job is still
   * running.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  DescribeDatasetExportJobResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI where output clips are written.</p>
   */
  inline const Aws::String& GetDestinationS3Uri() const { return m_destinationS3Uri; }
  template <typename DestinationS3UriT = Aws::String>
  void SetDestinationS3Uri(DestinationS3UriT&& value) {
    m_destinationS3UriHasBeenSet = true;
    m_destinationS3Uri = std::forward<DestinationS3UriT>(value);
  }
  template <typename DestinationS3UriT = Aws::String>
  DescribeDatasetExportJobResult& WithDestinationS3Uri(DestinationS3UriT&& value) {
    SetDestinationS3Uri(std::forward<DestinationS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where the error report will be written on failure.</p>
   */
  inline const ExportErrorReportLocation& GetErrorReportLocation() const { return m_errorReportLocation; }
  template <typename ErrorReportLocationT = ExportErrorReportLocation>
  void SetErrorReportLocation(ErrorReportLocationT&& value) {
    m_errorReportLocationHasBeenSet = true;
    m_errorReportLocation = std::forward<ErrorReportLocationT>(value);
  }
  template <typename ErrorReportLocationT = ExportErrorReportLocation>
  DescribeDatasetExportJobResult& WithErrorReportLocation(ErrorReportLocationT&& value) {
    SetErrorReportLocation(std::forward<ErrorReportLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing input that was provided in the CreateDatasetExportJob
   * request.</p>
   */
  inline const ProcessingInput& GetInput() const { return m_input; }
  template <typename InputT = ProcessingInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = ProcessingInput>
  DescribeDatasetExportJobResult& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
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
  DescribeDatasetExportJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  Aws::String m_workspaceName;

  DatasetExportJobStatus m_status{DatasetExportJobStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_destinationS3Uri;

  ExportErrorReportLocation m_errorReportLocation;

  ProcessingInput m_input;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_destinationS3UriHasBeenSet = false;
  bool m_errorReportLocationHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
