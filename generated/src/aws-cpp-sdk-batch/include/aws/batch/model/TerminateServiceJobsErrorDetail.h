/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>An object that contains the details of a service job that couldn't be
 * terminated by a <code>TerminateServiceJobs</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TerminateServiceJobsErrorDetail">AWS
 * API Reference</a></p>
 */
class TerminateServiceJobsErrorDetail {
 public:
  AWS_BATCH_API TerminateServiceJobsErrorDetail() = default;
  AWS_BATCH_API TerminateServiceJobsErrorDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API TerminateServiceJobsErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service job ID of the service job that couldn't be terminated.</p>
   */
  inline const Aws::String& GetJob() const { return m_job; }
  inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
  template <typename JobT = Aws::String>
  void SetJob(JobT&& value) {
    m_jobHasBeenSet = true;
    m_job = std::forward<JobT>(value);
  }
  template <typename JobT = Aws::String>
  TerminateServiceJobsErrorDetail& WithJob(JobT&& value) {
    SetJob(std::forward<JobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error code that identifies the reason the service job couldn't be
   * terminated. Valid values are:</p> <ul> <li> <p> <code>ValidationException</code>
   * – A service job identifier in the request is malformed or isn't valid.</p> </li>
   * <li> <p> <code>ClientException</code> – The request failed because of a client
   * error.</p> </li> <li> <p> <code>ThrottlingException</code> – The request was
   * throttled. Retry the request.</p> </li> <li> <p> <code>ServerException</code> –
   * An internal error occurred. Retry the request.</p> </li> <li> <p>
   * <code>AccessDenied</code> – The caller isn't authorized to perform the action on
   * the specified service job.</p> </li> </ul>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  TerminateServiceJobsErrorDetail& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes the reason the service job couldn't be
   * terminated.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TerminateServiceJobsErrorDetail& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_job;

  Aws::String m_code;

  Aws::String m_message;
  bool m_jobHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
