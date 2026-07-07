/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2Configuration.h>
#include <aws/inspector2/model/EcrConfiguration.h>
#include <aws/inspector2/model/UpdateConfigurationInheritance.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class UpdateConfigurationRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API UpdateConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account ID of the member account whose scan
   * configuration you want to update. When specified, you must be the delegated
   * administrator for this member account. If not specified, the operation updates
   * your own configuration and propagates changes to any member accounts that have
   * not been individually configured.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  UpdateConfigurationRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the ECR automated re-scan will be updated for your
   * environment.</p>
   */
  inline const EcrConfiguration& GetEcrConfiguration() const { return m_ecrConfiguration; }
  inline bool EcrConfigurationHasBeenSet() const { return m_ecrConfigurationHasBeenSet; }
  template <typename EcrConfigurationT = EcrConfiguration>
  void SetEcrConfiguration(EcrConfigurationT&& value) {
    m_ecrConfigurationHasBeenSet = true;
    m_ecrConfiguration = std::forward<EcrConfigurationT>(value);
  }
  template <typename EcrConfigurationT = EcrConfiguration>
  UpdateConfigurationRequest& WithEcrConfiguration(EcrConfigurationT&& value) {
    SetEcrConfiguration(std::forward<EcrConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the Amazon EC2 automated scan will be updated for your
   * environment.</p>
   */
  inline const Ec2Configuration& GetEc2Configuration() const { return m_ec2Configuration; }
  inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }
  template <typename Ec2ConfigurationT = Ec2Configuration>
  void SetEc2Configuration(Ec2ConfigurationT&& value) {
    m_ec2ConfigurationHasBeenSet = true;
    m_ec2Configuration = std::forward<Ec2ConfigurationT>(value);
  }
  template <typename Ec2ConfigurationT = Ec2Configuration>
  UpdateConfigurationRequest& WithEc2Configuration(Ec2ConfigurationT&& value) {
    SetEc2Configuration(std::forward<Ec2ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which scan-type configurations to reset to the delegated
   * administrator's inherited values for the targeted member account. Each member of
   * this structure is independently optional. When specified,
   * <code>ec2Configuration</code> and <code>ecrConfiguration</code> must be absent,
   * and <code>accountId</code> must also be present. Only
   * <code>INHERIT_FROM_ADMIN</code> is valid for each member. If not specified, the
   * operation uses the <code>ec2Configuration</code> and
   * <code>ecrConfiguration</code> parameters instead.</p>
   */
  inline const UpdateConfigurationInheritance& GetUpdateConfigurationInheritance() const { return m_updateConfigurationInheritance; }
  inline bool UpdateConfigurationInheritanceHasBeenSet() const { return m_updateConfigurationInheritanceHasBeenSet; }
  template <typename UpdateConfigurationInheritanceT = UpdateConfigurationInheritance>
  void SetUpdateConfigurationInheritance(UpdateConfigurationInheritanceT&& value) {
    m_updateConfigurationInheritanceHasBeenSet = true;
    m_updateConfigurationInheritance = std::forward<UpdateConfigurationInheritanceT>(value);
  }
  template <typename UpdateConfigurationInheritanceT = UpdateConfigurationInheritance>
  UpdateConfigurationRequest& WithUpdateConfigurationInheritance(UpdateConfigurationInheritanceT&& value) {
    SetUpdateConfigurationInheritance(std::forward<UpdateConfigurationInheritanceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  EcrConfiguration m_ecrConfiguration;

  Ec2Configuration m_ec2Configuration;

  UpdateConfigurationInheritance m_updateConfigurationInheritance;
  bool m_accountIdHasBeenSet = false;
  bool m_ecrConfigurationHasBeenSet = false;
  bool m_ec2ConfigurationHasBeenSet = false;
  bool m_updateConfigurationInheritanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
