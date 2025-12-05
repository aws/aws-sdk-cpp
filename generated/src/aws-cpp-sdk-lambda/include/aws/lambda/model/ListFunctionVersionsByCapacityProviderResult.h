/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionVersionsByCapacityProviderListItem.h>

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
class ListFunctionVersionsByCapacityProviderResult {
 public:
  AWS_LAMBDA_API ListFunctionVersionsByCapacityProviderResult() = default;
  AWS_LAMBDA_API ListFunctionVersionsByCapacityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API ListFunctionVersionsByCapacityProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  ListFunctionVersionsByCapacityProviderResult& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of function versions that use the specified capacity provider.</p>
   */
  inline const Aws::Vector<FunctionVersionsByCapacityProviderListItem>& GetFunctionVersions() const { return m_functionVersions; }
  template <typename FunctionVersionsT = Aws::Vector<FunctionVersionsByCapacityProviderListItem>>
  void SetFunctionVersions(FunctionVersionsT&& value) {
    m_functionVersionsHasBeenSet = true;
    m_functionVersions = std::forward<FunctionVersionsT>(value);
  }
  template <typename FunctionVersionsT = Aws::Vector<FunctionVersionsByCapacityProviderListItem>>
  ListFunctionVersionsByCapacityProviderResult& WithFunctionVersions(FunctionVersionsT&& value) {
    SetFunctionVersions(std::forward<FunctionVersionsT>(value));
    return *this;
  }
  template <typename FunctionVersionsT = FunctionVersionsByCapacityProviderListItem>
  ListFunctionVersionsByCapacityProviderResult& AddFunctionVersions(FunctionVersionsT&& value) {
    m_functionVersionsHasBeenSet = true;
    m_functionVersions.emplace_back(std::forward<FunctionVersionsT>(value));
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
  ListFunctionVersionsByCapacityProviderResult& WithNextMarker(NextMarkerT&& value) {
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
  ListFunctionVersionsByCapacityProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderArn;

  Aws::Vector<FunctionVersionsByCapacityProviderListItem> m_functionVersions;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_functionVersionsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
