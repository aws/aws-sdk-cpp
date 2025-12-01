/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Lambda {
namespace Model {

/**
 */
class ListFunctionVersionsByCapacityProviderRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API ListFunctionVersionsByCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFunctionVersionsByCapacityProvider"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the capacity provider to list function versions for.</p>
   */
  inline const Aws::String& GetCapacityProviderName() const { return m_capacityProviderName; }
  inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }
  template <typename CapacityProviderNameT = Aws::String>
  void SetCapacityProviderName(CapacityProviderNameT&& value) {
    m_capacityProviderNameHasBeenSet = true;
    m_capacityProviderName = std::forward<CapacityProviderNameT>(value);
  }
  template <typename CapacityProviderNameT = Aws::String>
  ListFunctionVersionsByCapacityProviderRequest& WithCapacityProviderName(CapacityProviderNameT&& value) {
    SetCapacityProviderName(std::forward<CapacityProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the pagination token that's returned by a previous request to
   * retrieve the next page of results.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListFunctionVersionsByCapacityProviderRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of function versions to return in the response.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListFunctionVersionsByCapacityProviderRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderName;
  bool m_capacityProviderNameHasBeenSet = false;

  Aws::String m_marker;
  bool m_markerHasBeenSet = false;

  int m_maxItems{0};
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
