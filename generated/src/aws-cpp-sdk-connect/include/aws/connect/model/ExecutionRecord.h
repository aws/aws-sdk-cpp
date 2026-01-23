/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExecutionRecordStatus.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains information about a test case execution record.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExecutionRecord">AWS
 * API Reference</a></p>
 */
class ExecutionRecord {
 public:
  AWS_CONNECT_API ExecutionRecord() = default;
  AWS_CONNECT_API ExecutionRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExecutionRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the execution record.</p>
   */
  inline const Aws::String& GetObservationId() const { return m_observationId; }
  inline bool ObservationIdHasBeenSet() const { return m_observationIdHasBeenSet; }
  template <typename ObservationIdT = Aws::String>
  void SetObservationId(ObservationIdT&& value) {
    m_observationIdHasBeenSet = true;
    m_observationId = std::forward<ObservationIdT>(value);
  }
  template <typename ObservationIdT = Aws::String>
  ExecutionRecord& WithObservationId(ObservationIdT&& value) {
    SetObservationId(std::forward<ObservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the action execution.</p>
   */
  inline ExecutionRecordStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExecutionRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExecutionRecord& WithStatus(ExecutionRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the action was executed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ExecutionRecord& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the executed record.</p>
   */
  inline const Aws::String& GetRecord() const { return m_record; }
  inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
  template <typename RecordT = Aws::String>
  void SetRecord(RecordT&& value) {
    m_recordHasBeenSet = true;
    m_record = std::forward<RecordT>(value);
  }
  template <typename RecordT = Aws::String>
  ExecutionRecord& WithRecord(RecordT&& value) {
    SetRecord(std::forward<RecordT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_observationId;

  ExecutionRecordStatus m_status{ExecutionRecordStatus::NOT_SET};

  Aws::Utils::DateTime m_timestamp{};

  Aws::String m_record;
  bool m_observationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_recordHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
