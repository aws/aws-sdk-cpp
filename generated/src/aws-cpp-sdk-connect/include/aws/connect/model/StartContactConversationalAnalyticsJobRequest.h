/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AnalyticsConfiguration.h>
#include <aws/connect/model/AnalyticsMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class StartContactConversationalAnalyticsJobRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API StartContactConversationalAnalyticsJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartContactConversationalAnalyticsJob"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  StartContactConversationalAnalyticsJobRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the contact in this instance of Connect Customer. </p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  StartContactConversationalAnalyticsJobRequest& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analytics modes to run for the contact. Valid values:
   * <code>PostContact</code>.</p>
   */
  inline const Aws::Vector<AnalyticsMode>& GetAnalyticsModes() const { return m_analyticsModes; }
  inline bool AnalyticsModesHasBeenSet() const { return m_analyticsModesHasBeenSet; }
  template <typename AnalyticsModesT = Aws::Vector<AnalyticsMode>>
  void SetAnalyticsModes(AnalyticsModesT&& value) {
    m_analyticsModesHasBeenSet = true;
    m_analyticsModes = std::forward<AnalyticsModesT>(value);
  }
  template <typename AnalyticsModesT = Aws::Vector<AnalyticsMode>>
  StartContactConversationalAnalyticsJobRequest& WithAnalyticsModes(AnalyticsModesT&& value) {
    SetAnalyticsModes(std::forward<AnalyticsModesT>(value));
    return *this;
  }
  inline StartContactConversationalAnalyticsJobRequest& AddAnalyticsModes(AnalyticsMode value) {
    m_analyticsModesHasBeenSet = true;
    m_analyticsModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the conversational analytics job.</p>
   */
  inline const AnalyticsConfiguration& GetAnalyticsConfiguration() const { return m_analyticsConfiguration; }
  inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  void SetAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    m_analyticsConfigurationHasBeenSet = true;
    m_analyticsConfiguration = std::forward<AnalyticsConfigurationT>(value);
  }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  StartContactConversationalAnalyticsJobRequest& WithAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    SetAnalyticsConfiguration(std::forward<AnalyticsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartContactConversationalAnalyticsJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_contactId;

  Aws::Vector<AnalyticsMode> m_analyticsModes;

  AnalyticsConfiguration m_analyticsConfiguration;

  Aws::String m_clientToken;
  bool m_instanceIdHasBeenSet = false;
  bool m_contactIdHasBeenSet = false;
  bool m_analyticsModesHasBeenSet = false;
  bool m_analyticsConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
