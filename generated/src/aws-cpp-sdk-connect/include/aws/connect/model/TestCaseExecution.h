/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains information about a test case execution.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TestCaseExecution">AWS
 * API Reference</a></p>
 */
class TestCaseExecution {
 public:
  AWS_CONNECT_API TestCaseExecution() = default;
  AWS_CONNECT_API TestCaseExecution(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API TestCaseExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the test case execution started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  TestCaseExecution& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test case execution ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  TestCaseExecution& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case execution.</p>
   */
  inline const Aws::String& GetTestCaseExecutionId() const { return m_testCaseExecutionId; }
  inline bool TestCaseExecutionIdHasBeenSet() const { return m_testCaseExecutionIdHasBeenSet; }
  template <typename TestCaseExecutionIdT = Aws::String>
  void SetTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    m_testCaseExecutionIdHasBeenSet = true;
    m_testCaseExecutionId = std::forward<TestCaseExecutionIdT>(value);
  }
  template <typename TestCaseExecutionIdT = Aws::String>
  TestCaseExecution& WithTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    SetTestCaseExecutionId(std::forward<TestCaseExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  inline bool TestCaseIdHasBeenSet() const { return m_testCaseIdHasBeenSet; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  TestCaseExecution& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the test case execution.</p>
   */
  inline TestCaseExecutionStatus GetTestCaseExecutionStatus() const { return m_testCaseExecutionStatus; }
  inline bool TestCaseExecutionStatusHasBeenSet() const { return m_testCaseExecutionStatusHasBeenSet; }
  inline void SetTestCaseExecutionStatus(TestCaseExecutionStatus value) {
    m_testCaseExecutionStatusHasBeenSet = true;
    m_testCaseExecutionStatus = value;
  }
  inline TestCaseExecution& WithTestCaseExecutionStatus(TestCaseExecutionStatus value) {
    SetTestCaseExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  TestCaseExecution& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  TestCaseExecution& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_testCaseExecutionId;

  Aws::String m_testCaseId;

  TestCaseExecutionStatus m_testCaseExecutionStatus{TestCaseExecutionStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_testCaseExecutionIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_testCaseExecutionStatusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
