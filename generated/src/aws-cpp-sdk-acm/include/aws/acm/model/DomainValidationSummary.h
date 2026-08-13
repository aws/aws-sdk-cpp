/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ValidationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains per-domain validation information for a certificate. This structure
 * is returned as a member of the <a>ListCertificateDomainValidations</a>
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainValidationSummary">AWS
 * API Reference</a></p>
 */
class DomainValidationSummary {
 public:
  AWS_ACM_API DomainValidationSummary() = default;
  AWS_ACM_API DomainValidationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DomainValidationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fully qualified domain name (FQDN) in the certificate for which this
   * validation summary applies.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  DomainValidationSummary& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation configuration currently in effect for this domain. This
   * reflects the validation method that ACM is currently using to validate domain
   * ownership (for example, email or DNS).</p>
   */
  inline const ValidationConfiguration& GetActiveValidationConfiguration() const { return m_activeValidationConfiguration; }
  inline bool ActiveValidationConfigurationHasBeenSet() const { return m_activeValidationConfigurationHasBeenSet; }
  template <typename ActiveValidationConfigurationT = ValidationConfiguration>
  void SetActiveValidationConfiguration(ActiveValidationConfigurationT&& value) {
    m_activeValidationConfigurationHasBeenSet = true;
    m_activeValidationConfiguration = std::forward<ActiveValidationConfigurationT>(value);
  }
  template <typename ActiveValidationConfigurationT = ValidationConfiguration>
  DomainValidationSummary& WithActiveValidationConfiguration(ActiveValidationConfigurationT&& value) {
    SetActiveValidationConfiguration(std::forward<ActiveValidationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation configuration for a pending validation method migration. This
   * field is present only when a migration is in progress (for example, from email
   * to DNS validation). It contains the target validation method, the current
   * validation status, and the validation challenge details (such as the CNAME
   * record to add to your DNS configuration).</p>
   */
  inline const ValidationConfiguration& GetRequestedValidationConfiguration() const { return m_requestedValidationConfiguration; }
  inline bool RequestedValidationConfigurationHasBeenSet() const { return m_requestedValidationConfigurationHasBeenSet; }
  template <typename RequestedValidationConfigurationT = ValidationConfiguration>
  void SetRequestedValidationConfiguration(RequestedValidationConfigurationT&& value) {
    m_requestedValidationConfigurationHasBeenSet = true;
    m_requestedValidationConfiguration = std::forward<RequestedValidationConfigurationT>(value);
  }
  template <typename RequestedValidationConfigurationT = ValidationConfiguration>
  DomainValidationSummary& WithRequestedValidationConfiguration(RequestedValidationConfigurationT&& value) {
    SetRequestedValidationConfiguration(std::forward<RequestedValidationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  ValidationConfiguration m_activeValidationConfiguration;

  ValidationConfiguration m_requestedValidationConfiguration;
  bool m_domainNameHasBeenSet = false;
  bool m_activeValidationConfigurationHasBeenSet = false;
  bool m_requestedValidationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
