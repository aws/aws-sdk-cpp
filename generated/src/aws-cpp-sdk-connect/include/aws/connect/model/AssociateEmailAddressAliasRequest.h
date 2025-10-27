/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AliasConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class AssociateEmailAddressAliasRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API AssociateEmailAddressAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateEmailAddressAlias"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the email address.</p>
   */
  inline const Aws::String& GetEmailAddressId() const { return m_emailAddressId; }
  inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
  template <typename EmailAddressIdT = Aws::String>
  void SetEmailAddressId(EmailAddressIdT&& value) {
    m_emailAddressIdHasBeenSet = true;
    m_emailAddressId = std::forward<EmailAddressIdT>(value);
  }
  template <typename EmailAddressIdT = Aws::String>
  AssociateEmailAddressAliasRequest& WithEmailAddressId(EmailAddressIdT&& value) {
    SetEmailAddressId(std::forward<EmailAddressIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
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
  AssociateEmailAddressAliasRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration object that specifies which email address will serve as the
   * alias. The specified email address must already exist in the Amazon Connect
   * instance and cannot already be configured as an alias or have an alias of its
   * own.</p>
   */
  inline const AliasConfiguration& GetAliasConfiguration() const { return m_aliasConfiguration; }
  inline bool AliasConfigurationHasBeenSet() const { return m_aliasConfigurationHasBeenSet; }
  template <typename AliasConfigurationT = AliasConfiguration>
  void SetAliasConfiguration(AliasConfigurationT&& value) {
    m_aliasConfigurationHasBeenSet = true;
    m_aliasConfiguration = std::forward<AliasConfigurationT>(value);
  }
  template <typename AliasConfigurationT = AliasConfiguration>
  AssociateEmailAddressAliasRequest& WithAliasConfiguration(AliasConfigurationT&& value) {
    SetAliasConfiguration(std::forward<AliasConfigurationT>(value));
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
  AssociateEmailAddressAliasRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailAddressId;
  bool m_emailAddressIdHasBeenSet = false;

  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  AliasConfiguration m_aliasConfiguration;
  bool m_aliasConfigurationHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
