/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class UpdateCapacityManagerMonitoredTagKeysRequest : public EC2Request {
 public:
  AWS_EC2_API UpdateCapacityManagerMonitoredTagKeysRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityManagerMonitoredTagKeys"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The tag keys to activate for monitoring. Once activated, these tag keys will
   * be included as dimensions in capacity metric data. </p>
   */
  inline const Aws::Vector<Aws::String>& GetActivateTagKeys() const { return m_activateTagKeys; }
  inline bool ActivateTagKeysHasBeenSet() const { return m_activateTagKeysHasBeenSet; }
  template <typename ActivateTagKeysT = Aws::Vector<Aws::String>>
  void SetActivateTagKeys(ActivateTagKeysT&& value) {
    m_activateTagKeysHasBeenSet = true;
    m_activateTagKeys = std::forward<ActivateTagKeysT>(value);
  }
  template <typename ActivateTagKeysT = Aws::Vector<Aws::String>>
  UpdateCapacityManagerMonitoredTagKeysRequest& WithActivateTagKeys(ActivateTagKeysT&& value) {
    SetActivateTagKeys(std::forward<ActivateTagKeysT>(value));
    return *this;
  }
  template <typename ActivateTagKeysT = Aws::String>
  UpdateCapacityManagerMonitoredTagKeysRequest& AddActivateTagKeys(ActivateTagKeysT&& value) {
    m_activateTagKeysHasBeenSet = true;
    m_activateTagKeys.emplace_back(std::forward<ActivateTagKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tag keys to deactivate. Deactivated tag keys will no longer be included
   * as dimensions in capacity metric data. </p>
   */
  inline const Aws::Vector<Aws::String>& GetDeactivateTagKeys() const { return m_deactivateTagKeys; }
  inline bool DeactivateTagKeysHasBeenSet() const { return m_deactivateTagKeysHasBeenSet; }
  template <typename DeactivateTagKeysT = Aws::Vector<Aws::String>>
  void SetDeactivateTagKeys(DeactivateTagKeysT&& value) {
    m_deactivateTagKeysHasBeenSet = true;
    m_deactivateTagKeys = std::forward<DeactivateTagKeysT>(value);
  }
  template <typename DeactivateTagKeysT = Aws::Vector<Aws::String>>
  UpdateCapacityManagerMonitoredTagKeysRequest& WithDeactivateTagKeys(DeactivateTagKeysT&& value) {
    SetDeactivateTagKeys(std::forward<DeactivateTagKeysT>(value));
    return *this;
  }
  template <typename DeactivateTagKeysT = Aws::String>
  UpdateCapacityManagerMonitoredTagKeysRequest& AddDeactivateTagKeys(DeactivateTagKeysT&& value) {
    m_deactivateTagKeysHasBeenSet = true;
    m_deactivateTagKeys.emplace_back(std::forward<DeactivateTagKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>. </p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateCapacityManagerMonitoredTagKeysRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateCapacityManagerMonitoredTagKeysRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_activateTagKeys;

  Aws::Vector<Aws::String> m_deactivateTagKeys;

  bool m_dryRun{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_activateTagKeysHasBeenSet = false;
  bool m_deactivateTagKeysHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
