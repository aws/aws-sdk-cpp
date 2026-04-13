/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/InterconnectRequest.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPoint.h>
#include <aws/interconnect/model/ConnectionState.h>
#include <aws/interconnect/model/Provider.h>

#include <utility>

namespace Aws {
namespace Interconnect {
namespace Model {

/**
 */
class ListConnectionsRequest : public InterconnectRequest {
 public:
  AWS_INTERCONNECT_API ListConnectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

  AWS_INTERCONNECT_API Aws::String SerializePayload() const override;

  AWS_INTERCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The max number of list results in a single paginated response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token from a previous paginated response indicating you wish to
   * get the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter the results to only include <a>Connection</a> objects in the given
   * <a>Connection$state</a>.</p>
   */
  inline ConnectionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ConnectionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListConnectionsRequest& WithState(ConnectionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter the results to only include <a>Connection</a> objects on the given
   * <a>Environment</a>.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  ListConnectionsRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter the results to only include <a>Connection</a> objects to the given
   * <a>Provider</a>.</p>
   */
  inline const Provider& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Provider>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Provider>
  ListConnectionsRequest& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include <a>Connection</a> objects attached to the
   * given <a>AttachPoint</a>.</p>
   */
  inline const AttachPoint& GetAttachPoint() const { return m_attachPoint; }
  inline bool AttachPointHasBeenSet() const { return m_attachPointHasBeenSet; }
  template <typename AttachPointT = AttachPoint>
  void SetAttachPoint(AttachPointT&& value) {
    m_attachPointHasBeenSet = true;
    m_attachPoint = std::forward<AttachPointT>(value);
  }
  template <typename AttachPointT = AttachPoint>
  ListConnectionsRequest& WithAttachPoint(AttachPointT&& value) {
    SetAttachPoint(std::forward<AttachPointT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  ConnectionState m_state{ConnectionState::NOT_SET};

  Aws::String m_environmentId;

  Provider m_provider;

  AttachPoint m_attachPoint;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_attachPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
