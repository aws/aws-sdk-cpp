/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class ListCapacityProvidersResult {
 public:
  AWS_LAMBDA_API ListCapacityProvidersResult() = default;
  AWS_LAMBDA_API ListCapacityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API ListCapacityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of capacity providers in your account.</p>
   */
  inline const Aws::Vector<CapacityProvider>& GetCapacityProviders() const { return m_capacityProviders; }
  template <typename CapacityProvidersT = Aws::Vector<CapacityProvider>>
  void SetCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders = std::forward<CapacityProvidersT>(value);
  }
  template <typename CapacityProvidersT = Aws::Vector<CapacityProvider>>
  ListCapacityProvidersResult& WithCapacityProviders(CapacityProvidersT&& value) {
    SetCapacityProviders(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  template <typename CapacityProvidersT = CapacityProvider>
  ListCapacityProvidersResult& AddCapacityProviders(CapacityProvidersT&& value) {
    m_capacityProvidersHasBeenSet = true;
    m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that's included if more results are available.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListCapacityProvidersResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  ListCapacityProvidersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CapacityProvider> m_capacityProviders;
  bool m_capacityProvidersHasBeenSet = false;

  Aws::String m_nextMarker;
  bool m_nextMarkerHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
