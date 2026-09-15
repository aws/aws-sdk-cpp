/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DirectConnect {
namespace Model {

/**
 */
class UpdateResiliencyGroupRequest : public DirectConnectRequest {
 public:
  AWS_DIRECTCONNECT_API UpdateResiliencyGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResiliencyGroup"; }

  AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

  AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  UpdateResiliencyGroupRequest& WithResiliencyGroupId(ResiliencyGroupIdT&& value) {
    SetResiliencyGroupId(std::forward<ResiliencyGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the resiliency group.</p>
   */
  inline const Aws::String& GetResiliencyGroupName() const { return m_resiliencyGroupName; }
  inline bool ResiliencyGroupNameHasBeenSet() const { return m_resiliencyGroupNameHasBeenSet; }
  template <typename ResiliencyGroupNameT = Aws::String>
  void SetResiliencyGroupName(ResiliencyGroupNameT&& value) {
    m_resiliencyGroupNameHasBeenSet = true;
    m_resiliencyGroupName = std::forward<ResiliencyGroupNameT>(value);
  }
  template <typename ResiliencyGroupNameT = Aws::String>
  UpdateResiliencyGroupRequest& WithResiliencyGroupName(ResiliencyGroupNameT&& value) {
    SetResiliencyGroupName(std::forward<ResiliencyGroupNameT>(value));
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
  UpdateResiliencyGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resiliencyGroupId;

  Aws::String m_resiliencyGroupName;

  Aws::String m_clientToken;
  bool m_resiliencyGroupIdHasBeenSet = false;
  bool m_resiliencyGroupNameHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
