/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Capability.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {
class DeleteCapabilityResult {
 public:
  AWS_EKS_API DeleteCapabilityResult() = default;
  AWS_EKS_API DeleteCapabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EKS_API DeleteCapabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An object containing information about the deleted capability, including its
   * final status and configuration.</p>
   */
  inline const Capability& GetCapability() const { return m_capability; }
  template <typename CapabilityT = Capability>
  void SetCapability(CapabilityT&& value) {
    m_capabilityHasBeenSet = true;
    m_capability = std::forward<CapabilityT>(value);
  }
  template <typename CapabilityT = Capability>
  DeleteCapabilityResult& WithCapability(CapabilityT&& value) {
    SetCapability(std::forward<CapabilityT>(value));
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
  DeleteCapabilityResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Capability m_capability;
  bool m_capabilityHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
