/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetExportJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * &lt;p&gt;Contains summary information about a dataset export
 * job.&lt;/p&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ExportJobSummary">AWS
 * API Reference</a></p>
 */
class ExportJobSummary {
 public:
  AWS_IOTSITEWISE_API ExportJobSummary() = default;
  AWS_IOTSITEWISE_API ExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;The unique identifier for the dataset export job.&lt;/p&gt;
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  ExportJobSummary& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The current status of the dataset export job.&lt;/p&gt;
   */
  inline DatasetExportJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DatasetExportJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExportJobSummary& WithStatus(DatasetExportJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The timestamp when the job started processing.&lt;/p&gt;
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ExportJobSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The timestamp when the job completed, or null if the job is still
   * running.&lt;/p&gt;
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  ExportJobSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;The S3 URI where output clips are written.&lt;/p&gt;
   */
  inline const Aws::String& GetDestinationS3Uri() const { return m_destinationS3Uri; }
  inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }
  template <typename DestinationS3UriT = Aws::String>
  void SetDestinationS3Uri(DestinationS3UriT&& value) {
    m_destinationS3UriHasBeenSet = true;
    m_destinationS3Uri = std::forward<DestinationS3UriT>(value);
  }
  template <typename DestinationS3UriT = Aws::String>
  ExportJobSummary& WithDestinationS3Uri(DestinationS3UriT&& value) {
    SetDestinationS3Uri(std::forward<DestinationS3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  DatasetExportJobStatus m_status{DatasetExportJobStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_destinationS3Uri;
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_destinationS3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
