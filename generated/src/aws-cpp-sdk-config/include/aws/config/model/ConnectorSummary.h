/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/Provider.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>A summary of a connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConnectorSummary">AWS
 * API Reference</a></p>
 */
class ConnectorSummary {
 public:
  AWS_CONFIGSERVICE_API ConnectorSummary() = default;
  AWS_CONFIGSERVICE_API ConnectorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ConnectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ConnectorSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConnectorSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The third-party cloud service provider. Currently, <code>AZURE</code> is
   * supported.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline ConnectorSummary& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure tenant identifier for the connector.</p>
   */
  inline const Aws::String& GetTenantIdentifier() const { return m_tenantIdentifier; }
  inline bool TenantIdentifierHasBeenSet() const { return m_tenantIdentifierHasBeenSet; }
  template <typename TenantIdentifierT = Aws::String>
  void SetTenantIdentifier(TenantIdentifierT&& value) {
    m_tenantIdentifierHasBeenSet = true;
    m_tenantIdentifier = std::forward<TenantIdentifierT>(value);
  }
  template <typename TenantIdentifierT = Aws::String>
  ConnectorSummary& WithTenantIdentifier(TenantIdentifierT&& value) {
    SetTenantIdentifier(std::forward<TenantIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  ConnectorSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Provider m_provider{Provider::NOT_SET};

  Aws::String m_tenantIdentifier;

  Aws::Utils::DateTime m_createdTime{};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_tenantIdentifierHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
