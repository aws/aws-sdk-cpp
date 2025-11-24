/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {
class CreateContactFlowModuleVersionResult {
 public:
  AWS_CONNECT_API CreateContactFlowModuleVersionResult() = default;
  AWS_CONNECT_API CreateContactFlowModuleVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateContactFlowModuleVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleArn() const { return m_contactFlowModuleArn; }
  template <typename ContactFlowModuleArnT = Aws::String>
  void SetContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    m_contactFlowModuleArnHasBeenSet = true;
    m_contactFlowModuleArn = std::forward<ContactFlowModuleArnT>(value);
  }
  template <typename ContactFlowModuleArnT = Aws::String>
  CreateContactFlowModuleVersionResult& WithContactFlowModuleArn(ContactFlowModuleArnT&& value) {
    SetContactFlowModuleArn(std::forward<ContactFlowModuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow module.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline CreateContactFlowModuleVersionResult& WithVersion(long long value) {
    SetVersion(value);
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
  CreateContactFlowModuleVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactFlowModuleArn;
  bool m_contactFlowModuleArnHasBeenSet = false;

  long long m_version{0};
  bool m_versionHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
