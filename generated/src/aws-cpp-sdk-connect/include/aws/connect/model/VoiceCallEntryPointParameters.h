/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Parameters for initiating a voice call test.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/VoiceCallEntryPointParameters">AWS
 * API Reference</a></p>
 */
class VoiceCallEntryPointParameters {
 public:
  AWS_CONNECT_API VoiceCallEntryPointParameters() = default;
  AWS_CONNECT_API VoiceCallEntryPointParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API VoiceCallEntryPointParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source phone number for the test.</p>
   */
  inline const Aws::String& GetSourcePhoneNumber() const { return m_sourcePhoneNumber; }
  inline bool SourcePhoneNumberHasBeenSet() const { return m_sourcePhoneNumberHasBeenSet; }
  template <typename SourcePhoneNumberT = Aws::String>
  void SetSourcePhoneNumber(SourcePhoneNumberT&& value) {
    m_sourcePhoneNumberHasBeenSet = true;
    m_sourcePhoneNumber = std::forward<SourcePhoneNumberT>(value);
  }
  template <typename SourcePhoneNumberT = Aws::String>
  VoiceCallEntryPointParameters& WithSourcePhoneNumber(SourcePhoneNumberT&& value) {
    SetSourcePhoneNumber(std::forward<SourcePhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination phone number for the test.</p>
   */
  inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
  inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
  template <typename DestinationPhoneNumberT = Aws::String>
  void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    m_destinationPhoneNumberHasBeenSet = true;
    m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value);
  }
  template <typename DestinationPhoneNumberT = Aws::String>
  VoiceCallEntryPointParameters& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flow identifier for the test.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  VoiceCallEntryPointParameters& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourcePhoneNumber;

  Aws::String m_destinationPhoneNumber;

  Aws::String m_flowId;
  bool m_sourcePhoneNumberHasBeenSet = false;
  bool m_destinationPhoneNumberHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
