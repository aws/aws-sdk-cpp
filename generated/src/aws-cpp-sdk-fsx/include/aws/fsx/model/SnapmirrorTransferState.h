/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes the latest transfer of an Amazon FSx for NetApp ONTAP SnapMirror
 * relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorTransferState">AWS
 * API Reference</a></p>
 */
class SnapmirrorTransferState {
 public:
  AWS_FSX_API SnapmirrorTransferState() = default;
  AWS_FSX_API SnapmirrorTransferState(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorTransferState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The state of the transfer that ONTAP reports.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  SnapmirrorTransferState& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the transfer that ONTAP reports.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  SnapmirrorTransferState& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes that the transfer transferred.</p>
   */
  inline long long GetBytesTransferred() const { return m_bytesTransferred; }
  inline bool BytesTransferredHasBeenSet() const { return m_bytesTransferredHasBeenSet; }
  inline void SetBytesTransferred(long long value) {
    m_bytesTransferredHasBeenSet = true;
    m_bytesTransferred = value;
  }
  inline SnapmirrorTransferState& WithBytesTransferred(long long value) {
    SetBytesTransferred(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the transfer, in ISO 8601 duration format.</p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  SnapmirrorTransferState& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the transfer ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  SnapmirrorTransferState& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_state;

  Aws::String m_type;

  long long m_bytesTransferred{0};

  Aws::String m_duration;

  Aws::Utils::DateTime m_endTime{};
  bool m_stateHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_bytesTransferredHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
