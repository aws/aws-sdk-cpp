/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressPointConfiguration.h>
#include <aws/mailmanager/model/IngressPointStatusToUpdate.h>

#include <utility>

namespace Aws {
namespace MailManager {
namespace Model {

/**
 */
class UpdateIngressPointRequest : public MailManagerRequest {
 public:
  AWS_MAILMANAGER_API UpdateIngressPointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIngressPoint"; }

  AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

  AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier for the ingress endpoint you want to update.</p>
   */
  inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
  inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
  template <typename IngressPointIdT = Aws::String>
  void SetIngressPointId(IngressPointIdT&& value) {
    m_ingressPointIdHasBeenSet = true;
    m_ingressPointId = std::forward<IngressPointIdT>(value);
  }
  template <typename IngressPointIdT = Aws::String>
  UpdateIngressPointRequest& WithIngressPointId(IngressPointIdT&& value) {
    SetIngressPointId(std::forward<IngressPointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A user friendly name for the ingress endpoint resource.</p>
   */
  inline const Aws::String& GetIngressPointName() const { return m_ingressPointName; }
  inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }
  template <typename IngressPointNameT = Aws::String>
  void SetIngressPointName(IngressPointNameT&& value) {
    m_ingressPointNameHasBeenSet = true;
    m_ingressPointName = std::forward<IngressPointNameT>(value);
  }
  template <typename IngressPointNameT = Aws::String>
  UpdateIngressPointRequest& WithIngressPointName(IngressPointNameT&& value) {
    SetIngressPointName(std::forward<IngressPointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The update status of an ingress endpoint.</p>
   */
  inline IngressPointStatusToUpdate GetStatusToUpdate() const { return m_statusToUpdate; }
  inline bool StatusToUpdateHasBeenSet() const { return m_statusToUpdateHasBeenSet; }
  inline void SetStatusToUpdate(IngressPointStatusToUpdate value) {
    m_statusToUpdateHasBeenSet = true;
    m_statusToUpdate = value;
  }
  inline UpdateIngressPointRequest& WithStatusToUpdate(IngressPointStatusToUpdate value) {
    SetStatusToUpdate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of an existing rule set that you attach to an ingress endpoint
   * resource.</p>
   */
  inline const Aws::String& GetRuleSetId() const { return m_ruleSetId; }
  inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
  template <typename RuleSetIdT = Aws::String>
  void SetRuleSetId(RuleSetIdT&& value) {
    m_ruleSetIdHasBeenSet = true;
    m_ruleSetId = std::forward<RuleSetIdT>(value);
  }
  template <typename RuleSetIdT = Aws::String>
  UpdateIngressPointRequest& WithRuleSetId(RuleSetIdT&& value) {
    SetRuleSetId(std::forward<RuleSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of an existing traffic policy that you attach to an ingress
   * endpoint resource.</p>
   */
  inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
  inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
  template <typename TrafficPolicyIdT = Aws::String>
  void SetTrafficPolicyId(TrafficPolicyIdT&& value) {
    m_trafficPolicyIdHasBeenSet = true;
    m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value);
  }
  template <typename TrafficPolicyIdT = Aws::String>
  UpdateIngressPointRequest& WithTrafficPolicyId(TrafficPolicyIdT&& value) {
    SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If you choose an Authenticated ingress endpoint, you must configure either an
   * SMTP password or a secret ARN.</p>
   */
  inline const IngressPointConfiguration& GetIngressPointConfiguration() const { return m_ingressPointConfiguration; }
  inline bool IngressPointConfigurationHasBeenSet() const { return m_ingressPointConfigurationHasBeenSet; }
  template <typename IngressPointConfigurationT = IngressPointConfiguration>
  void SetIngressPointConfiguration(IngressPointConfigurationT&& value) {
    m_ingressPointConfigurationHasBeenSet = true;
    m_ingressPointConfiguration = std::forward<IngressPointConfigurationT>(value);
  }
  template <typename IngressPointConfigurationT = IngressPointConfiguration>
  UpdateIngressPointRequest& WithIngressPointConfiguration(IngressPointConfigurationT&& value) {
    SetIngressPointConfiguration(std::forward<IngressPointConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingressPointId;

  Aws::String m_ingressPointName;

  IngressPointStatusToUpdate m_statusToUpdate{IngressPointStatusToUpdate::NOT_SET};

  Aws::String m_ruleSetId;

  Aws::String m_trafficPolicyId;

  IngressPointConfiguration m_ingressPointConfiguration;
  bool m_ingressPointIdHasBeenSet = false;
  bool m_ingressPointNameHasBeenSet = false;
  bool m_statusToUpdateHasBeenSet = false;
  bool m_ruleSetIdHasBeenSet = false;
  bool m_trafficPolicyIdHasBeenSet = false;
  bool m_ingressPointConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
