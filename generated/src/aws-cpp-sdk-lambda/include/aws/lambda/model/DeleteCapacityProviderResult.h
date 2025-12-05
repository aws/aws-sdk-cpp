/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProvider.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
class DeleteCapacityProviderResult {
 public:
  AWS_LAMBDA_API DeleteCapacityProviderResult() = default;
  AWS_LAMBDA_API DeleteCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API DeleteCapacityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the deleted capacity provider.</p>
   */
  inline const CapacityProvider& GetCapacityProvider() const { return m_capacityProvider; }
  template <typename CapacityProviderT = CapacityProvider>
  void SetCapacityProvider(CapacityProviderT&& value) {
    m_capacityProviderHasBeenSet = true;
    m_capacityProvider = std::forward<CapacityProviderT>(value);
  }
  template <typename CapacityProviderT = CapacityProvider>
  DeleteCapacityProviderResult& WithCapacityProvider(CapacityProviderT&& value) {
    SetCapacityProvider(std::forward<CapacityProviderT>(value));
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
  DeleteCapacityProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityProvider m_capacityProvider;

  Aws::String m_requestId;
  bool m_capacityProviderHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
