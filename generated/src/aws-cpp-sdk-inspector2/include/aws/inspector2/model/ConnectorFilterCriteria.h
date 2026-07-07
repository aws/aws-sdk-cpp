/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AwsConfigConnectorArnFilter.h>
#include <aws/inspector2/model/ConnectorArnFilter.h>
#include <aws/inspector2/model/ConnectorTypeFilter.h>
#include <aws/inspector2/model/ProviderFilter.h>
#include <aws/inspector2/model/StringFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains the filter criteria for narrowing the results returned by a
 * <code>ListConnectors</code> request. You can filter by connector ARN, Amazon Web
 * Services account ID, Amazon Web Services Config connector ARN, connector type,
 * or cloud provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ConnectorFilterCriteria">AWS
 * API Reference</a></p>
 */
class ConnectorFilterCriteria {
 public:
  AWS_INSPECTOR2_API ConnectorFilterCriteria() = default;
  AWS_INSPECTOR2_API ConnectorFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ConnectorFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by connector ARNs.</p>
   */
  inline const Aws::Vector<ConnectorArnFilter>& GetConnectorArns() const { return m_connectorArns; }
  inline bool ConnectorArnsHasBeenSet() const { return m_connectorArnsHasBeenSet; }
  template <typename ConnectorArnsT = Aws::Vector<ConnectorArnFilter>>
  void SetConnectorArns(ConnectorArnsT&& value) {
    m_connectorArnsHasBeenSet = true;
    m_connectorArns = std::forward<ConnectorArnsT>(value);
  }
  template <typename ConnectorArnsT = Aws::Vector<ConnectorArnFilter>>
  ConnectorFilterCriteria& WithConnectorArns(ConnectorArnsT&& value) {
    SetConnectorArns(std::forward<ConnectorArnsT>(value));
    return *this;
  }
  template <typename ConnectorArnsT = ConnectorArnFilter>
  ConnectorFilterCriteria& AddConnectorArns(ConnectorArnsT&& value) {
    m_connectorArnsHasBeenSet = true;
    m_connectorArns.emplace_back(std::forward<ConnectorArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by Amazon Web Services account IDs.</p>
   */
  inline const Aws::Vector<StringFilter>& GetAccounts() const { return m_accounts; }
  inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
  template <typename AccountsT = Aws::Vector<StringFilter>>
  void SetAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts = std::forward<AccountsT>(value);
  }
  template <typename AccountsT = Aws::Vector<StringFilter>>
  ConnectorFilterCriteria& WithAccounts(AccountsT&& value) {
    SetAccounts(std::forward<AccountsT>(value));
    return *this;
  }
  template <typename AccountsT = StringFilter>
  ConnectorFilterCriteria& AddAccounts(AccountsT&& value) {
    m_accountsHasBeenSet = true;
    m_accounts.emplace_back(std::forward<AccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by Amazon Web Services Config connector ARNs.</p>
   */
  inline const Aws::Vector<AwsConfigConnectorArnFilter>& GetAwsConfigConnectorArns() const { return m_awsConfigConnectorArns; }
  inline bool AwsConfigConnectorArnsHasBeenSet() const { return m_awsConfigConnectorArnsHasBeenSet; }
  template <typename AwsConfigConnectorArnsT = Aws::Vector<AwsConfigConnectorArnFilter>>
  void SetAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    m_awsConfigConnectorArnsHasBeenSet = true;
    m_awsConfigConnectorArns = std::forward<AwsConfigConnectorArnsT>(value);
  }
  template <typename AwsConfigConnectorArnsT = Aws::Vector<AwsConfigConnectorArnFilter>>
  ConnectorFilterCriteria& WithAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    SetAwsConfigConnectorArns(std::forward<AwsConfigConnectorArnsT>(value));
    return *this;
  }
  template <typename AwsConfigConnectorArnsT = AwsConfigConnectorArnFilter>
  ConnectorFilterCriteria& AddAwsConfigConnectorArns(AwsConfigConnectorArnsT&& value) {
    m_awsConfigConnectorArnsHasBeenSet = true;
    m_awsConfigConnectorArns.emplace_back(std::forward<AwsConfigConnectorArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by connector type.</p>
   */
  inline const Aws::Vector<ConnectorTypeFilter>& GetConnectorType() const { return m_connectorType; }
  inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
  template <typename ConnectorTypeT = Aws::Vector<ConnectorTypeFilter>>
  void SetConnectorType(ConnectorTypeT&& value) {
    m_connectorTypeHasBeenSet = true;
    m_connectorType = std::forward<ConnectorTypeT>(value);
  }
  template <typename ConnectorTypeT = Aws::Vector<ConnectorTypeFilter>>
  ConnectorFilterCriteria& WithConnectorType(ConnectorTypeT&& value) {
    SetConnectorType(std::forward<ConnectorTypeT>(value));
    return *this;
  }
  template <typename ConnectorTypeT = ConnectorTypeFilter>
  ConnectorFilterCriteria& AddConnectorType(ConnectorTypeT&& value) {
    m_connectorTypeHasBeenSet = true;
    m_connectorType.emplace_back(std::forward<ConnectorTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by cloud provider.</p>
   */
  inline const Aws::Vector<ProviderFilter>& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Aws::Vector<ProviderFilter>>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::Vector<ProviderFilter>>
  ConnectorFilterCriteria& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  template <typename ProviderT = ProviderFilter>
  ConnectorFilterCriteria& AddProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider.emplace_back(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConnectorArnFilter> m_connectorArns;

  Aws::Vector<StringFilter> m_accounts;

  Aws::Vector<AwsConfigConnectorArnFilter> m_awsConfigConnectorArns;

  Aws::Vector<ConnectorTypeFilter> m_connectorType;

  Aws::Vector<ProviderFilter> m_provider;
  bool m_connectorArnsHasBeenSet = false;
  bool m_accountsHasBeenSet = false;
  bool m_awsConfigConnectorArnsHasBeenSet = false;
  bool m_connectorTypeHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
