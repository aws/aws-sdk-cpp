/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for Pagerduty integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PagerDutyConfiguration">AWS
 * API Reference</a></p>
 */
class PagerDutyConfiguration {
 public:
  AWS_DEVOPSAGENT_API PagerDutyConfiguration() = default;
  AWS_DEVOPSAGENT_API PagerDutyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PagerDutyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of Pagerduty service available for the association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServices() const { return m_services; }
  inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
  template <typename ServicesT = Aws::Vector<Aws::String>>
  void SetServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services = std::forward<ServicesT>(value);
  }
  template <typename ServicesT = Aws::Vector<Aws::String>>
  PagerDutyConfiguration& WithServices(ServicesT&& value) {
    SetServices(std::forward<ServicesT>(value));
    return *this;
  }
  template <typename ServicesT = Aws::String>
  PagerDutyConfiguration& AddServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services.emplace_back(std::forward<ServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Email to be used in Pagerduty API header</p>
   */
  inline const Aws::String& GetCustomerEmail() const { return m_customerEmail; }
  inline bool CustomerEmailHasBeenSet() const { return m_customerEmailHasBeenSet; }
  template <typename CustomerEmailT = Aws::String>
  void SetCustomerEmail(CustomerEmailT&& value) {
    m_customerEmailHasBeenSet = true;
    m_customerEmail = std::forward<CustomerEmailT>(value);
  }
  template <typename CustomerEmailT = Aws::String>
  PagerDutyConfiguration& WithCustomerEmail(CustomerEmailT&& value) {
    SetCustomerEmail(std::forward<CustomerEmailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_services;

  Aws::String m_customerEmail;
  bool m_servicesHasBeenSet = false;
  bool m_customerEmailHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
