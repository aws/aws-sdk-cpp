/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace LambdaCore {
namespace Model {

/**
 */
class ListNetworkConnectorVersionsRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API ListNetworkConnectorVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListNetworkConnectorVersions"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  AWS_LAMBDACORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the network connector whose versions you want to list. You
   * can specify the connector ID, name, or full ARN. Specify an unqualified
   * identifier — this operation lists all versions of the connector, not a specific
   * version.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  ListNetworkConnectorVersionsRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter to return only versions in the specified state (for example,
   * <code>ACTIVE</code> or <code>FAILED</code>).</p>
   */
  inline NetworkConnectorState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(NetworkConnectorState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListNetworkConnectorVersionsRequest& WithState(NetworkConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous
   * <code>ListNetworkConnectorVersions</code> response. Use this value to retrieve
   * the next page of results.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListNetworkConnectorVersionsRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of versions to return per page. Valid range: 1 to 100.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListNetworkConnectorVersionsRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  Aws::String m_marker;

  int m_maxItems{0};
  bool m_identifierHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
