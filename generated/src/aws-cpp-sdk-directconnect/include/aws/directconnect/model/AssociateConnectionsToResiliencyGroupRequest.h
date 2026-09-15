/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DirectConnect {
namespace Model {

/**
 */
class AssociateConnectionsToResiliencyGroupRequest : public DirectConnectRequest {
 public:
  AWS_DIRECTCONNECT_API AssociateConnectionsToResiliencyGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateConnectionsToResiliencyGroup"; }

  AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

  AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The IDs or ARNs of the connections to associate with the resiliency
   * group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectionIdentifiers() const { return m_connectionIdentifiers; }
  inline bool ConnectionIdentifiersHasBeenSet() const { return m_connectionIdentifiersHasBeenSet; }
  template <typename ConnectionIdentifiersT = Aws::Vector<Aws::String>>
  void SetConnectionIdentifiers(ConnectionIdentifiersT&& value) {
    m_connectionIdentifiersHasBeenSet = true;
    m_connectionIdentifiers = std::forward<ConnectionIdentifiersT>(value);
  }
  template <typename ConnectionIdentifiersT = Aws::Vector<Aws::String>>
  AssociateConnectionsToResiliencyGroupRequest& WithConnectionIdentifiers(ConnectionIdentifiersT&& value) {
    SetConnectionIdentifiers(std::forward<ConnectionIdentifiersT>(value));
    return *this;
  }
  template <typename ConnectionIdentifiersT = Aws::String>
  AssociateConnectionsToResiliencyGroupRequest& AddConnectionIdentifiers(ConnectionIdentifiersT&& value) {
    m_connectionIdentifiersHasBeenSet = true;
    m_connectionIdentifiers.emplace_back(std::forward<ConnectionIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupId() const { return m_resiliencyGroupId; }
  inline bool ResiliencyGroupIdHasBeenSet() const { return m_resiliencyGroupIdHasBeenSet; }
  template <typename ResiliencyGroupIdT = Aws::String>
  void SetResiliencyGroupId(ResiliencyGroupIdT&& value) {
    m_resiliencyGroupIdHasBeenSet = true;
    m_resiliencyGroupId = std::forward<ResiliencyGroupIdT>(value);
  }
  template <typename ResiliencyGroupIdT = Aws::String>
  AssociateConnectionsToResiliencyGroupRequest& WithResiliencyGroupId(ResiliencyGroupIdT&& value) {
    SetResiliencyGroupId(std::forward<ResiliencyGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociateConnectionsToResiliencyGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_connectionIdentifiers;

  Aws::String m_resiliencyGroupId;

  Aws::String m_clientToken;
  bool m_connectionIdentifiersHasBeenSet = false;
  bool m_resiliencyGroupIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
