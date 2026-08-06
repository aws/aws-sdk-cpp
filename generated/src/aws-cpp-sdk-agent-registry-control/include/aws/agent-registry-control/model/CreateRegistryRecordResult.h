/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>Response structure for creating a registry record</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreateRegistryRecordResponse">AWS
 * API Reference</a></p>
 */
class CreateRegistryRecordResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryRecordResult() = default;
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API CreateRegistryRecordResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the created registry record</p>
   */
  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  CreateRegistryRecordResult& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the registry record, set to CREATING while the asynchronous
   * workflow is in progress</p>
   */
  inline RegistryRecordStatus GetStatus() const { return m_status; }
  inline void SetStatus(RegistryRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateRegistryRecordResult& WithStatus(RegistryRecordStatus value) {
    SetStatus(value);
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
  CreateRegistryRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recordArn;

  RegistryRecordStatus m_status{RegistryRecordStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recordArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
