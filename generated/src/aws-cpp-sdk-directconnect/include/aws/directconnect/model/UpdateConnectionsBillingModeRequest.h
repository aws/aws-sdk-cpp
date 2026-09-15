/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/RequestBillingMode.h>

#include <utility>

namespace Aws {
namespace DirectConnect {
namespace Model {

/**
 */
class UpdateConnectionsBillingModeRequest : public DirectConnectRequest {
 public:
  AWS_DIRECTCONNECT_API UpdateConnectionsBillingModeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionsBillingMode"; }

  AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

  AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The IDs of the connections to update. You can specify from 1 to 200
   * connections.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectionIds() const { return m_connectionIds; }
  inline bool ConnectionIdsHasBeenSet() const { return m_connectionIdsHasBeenSet; }
  template <typename ConnectionIdsT = Aws::Vector<Aws::String>>
  void SetConnectionIds(ConnectionIdsT&& value) {
    m_connectionIdsHasBeenSet = true;
    m_connectionIds = std::forward<ConnectionIdsT>(value);
  }
  template <typename ConnectionIdsT = Aws::Vector<Aws::String>>
  UpdateConnectionsBillingModeRequest& WithConnectionIds(ConnectionIdsT&& value) {
    SetConnectionIds(std::forward<ConnectionIdsT>(value));
    return *this;
  }
  template <typename ConnectionIdsT = Aws::String>
  UpdateConnectionsBillingModeRequest& AddConnectionIds(ConnectionIdsT&& value) {
    m_connectionIdsHasBeenSet = true;
    m_connectionIds.emplace_back(std::forward<ConnectionIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing mode to apply to the specified connections. The valid values are
   * <code>PayAsYouGo</code>, <code>FlatRateTier1</code>, <code>FlatRateTier2</code>,
   * <code>FlatRateTier3</code>, <code>FlatRateTier4</code>, and
   * <code>FlatRateTier5</code>.</p>
   */
  inline RequestBillingMode GetBillingMode() const { return m_billingMode; }
  inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
  inline void SetBillingMode(RequestBillingMode value) {
    m_billingModeHasBeenSet = true;
    m_billingMode = value;
  }
  inline UpdateConnectionsBillingModeRequest& WithBillingMode(RequestBillingMode value) {
    SetBillingMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_connectionIds;

  RequestBillingMode m_billingMode{RequestBillingMode::NOT_SET};
  bool m_connectionIdsHasBeenSet = false;
  bool m_billingModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
