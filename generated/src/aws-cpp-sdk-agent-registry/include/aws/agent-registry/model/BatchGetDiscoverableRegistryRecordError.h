/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/BatchGetDiscoverableRegistryRecordErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistry {
namespace Model {

/**
 * <p> Describes why a requested record could not be retrieved.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/BatchGetDiscoverableRegistryRecordError">AWS
 * API Reference</a></p>
 */
class BatchGetDiscoverableRegistryRecordError {
 public:
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordError() = default;
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordError(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier of the registry the record was requested from, echoed from
   * the request.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  BatchGetDiscoverableRegistryRecordError& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The identifier of the record that could not be retrieved, echoed from the
   * request in the same format that you supplied (ARN or record ID).</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  BatchGetDiscoverableRegistryRecordError& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The machine-readable reason that the record could not be retrieved.</p>
   */
  inline BatchGetDiscoverableRegistryRecordErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(BatchGetDiscoverableRegistryRecordErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline BatchGetDiscoverableRegistryRecordError& WithErrorCode(BatchGetDiscoverableRegistryRecordErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An optional human-readable detail about the error. Do not parse this value
   * programmatically.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchGetDiscoverableRegistryRecordError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_recordId;

  BatchGetDiscoverableRegistryRecordErrorCode m_errorCode{BatchGetDiscoverableRegistryRecordErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_registryIdHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
