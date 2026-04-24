/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

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
 * <p>The identifiers for a session action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetSessionActionIdentifier">AWS
 * API Reference</a></p>
 */
class BatchGetSessionActionIdentifier {
 public:
  AWS_DEADLINE_API BatchGetSessionActionIdentifier() = default;
  AWS_DEADLINE_API BatchGetSessionActionIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetSessionActionIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the session action.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetSessionActionIdentifier& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the session action.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetSessionActionIdentifier& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the session action.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetSessionActionIdentifier& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session action ID.</p>
   */
  inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
  inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
  template <typename SessionActionIdT = Aws::String>
  void SetSessionActionId(SessionActionIdT&& value) {
    m_sessionActionIdHasBeenSet = true;
    m_sessionActionId = std::forward<SessionActionIdT>(value);
  }
  template <typename SessionActionIdT = Aws::String>
  BatchGetSessionActionIdentifier& WithSessionActionId(SessionActionIdT&& value) {
    SetSessionActionId(std::forward<SessionActionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_sessionActionId;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_sessionActionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
