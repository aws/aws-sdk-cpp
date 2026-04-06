/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetSessionActionErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The error details for a session action that could not be retrieved in a batch
 * get operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetSessionActionError">AWS
 * API Reference</a></p>
 */
class BatchGetSessionActionError {
 public:
  AWS_DEADLINE_API BatchGetSessionActionError() = default;
  AWS_DEADLINE_API BatchGetSessionActionError(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetSessionActionError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the session action that could not be retrieved.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetSessionActionError& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the session action that could not be retrieved.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetSessionActionError& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the session action that could not be retrieved.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetSessionActionError& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session action ID of the session action that could not be retrieved.</p>
   */
  inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
  inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
  template <typename SessionActionIdT = Aws::String>
  void SetSessionActionId(SessionActionIdT&& value) {
    m_sessionActionIdHasBeenSet = true;
    m_sessionActionId = std::forward<SessionActionIdT>(value);
  }
  template <typename SessionActionIdT = Aws::String>
  BatchGetSessionActionError& WithSessionActionId(SessionActionIdT&& value) {
    SetSessionActionId(std::forward<SessionActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code.</p>
   */
  inline BatchGetSessionActionErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BatchGetSessionActionErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchGetSessionActionError& WithCode(BatchGetSessionActionErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchGetSessionActionError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_sessionActionId;

  BatchGetSessionActionErrorCode m_code{BatchGetSessionActionErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_sessionActionIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
