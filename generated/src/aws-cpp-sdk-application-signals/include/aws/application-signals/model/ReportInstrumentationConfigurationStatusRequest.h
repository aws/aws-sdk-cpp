/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/InstrumentationConfigurationStatusReport.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class ReportInstrumentationConfigurationStatusRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API ReportInstrumentationConfigurationStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ReportInstrumentationConfigurationStatus"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The service that the reported configurations belong to.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  ReportInstrumentationConfigurationStatusRequest& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment that the service is running in.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  ReportInstrumentationConfigurationStatusRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of configuration status reports (up to 100) that include the
   * instrumentation type, signal type, location hash, status, timestamp, and
   * optional error cause.</p>
   */
  inline const Aws::Vector<InstrumentationConfigurationStatusReport>& GetConfigurations() const { return m_configurations; }
  inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
  template <typename ConfigurationsT = Aws::Vector<InstrumentationConfigurationStatusReport>>
  void SetConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations = std::forward<ConfigurationsT>(value);
  }
  template <typename ConfigurationsT = Aws::Vector<InstrumentationConfigurationStatusReport>>
  ReportInstrumentationConfigurationStatusRequest& WithConfigurations(ConfigurationsT&& value) {
    SetConfigurations(std::forward<ConfigurationsT>(value));
    return *this;
  }
  template <typename ConfigurationsT = InstrumentationConfigurationStatusReport>
  ReportInstrumentationConfigurationStatusRequest& AddConfigurations(ConfigurationsT&& value) {
    m_configurationsHasBeenSet = true;
    m_configurations.emplace_back(std::forward<ConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;

  Aws::String m_environment;

  Aws::Vector<InstrumentationConfigurationStatusReport> m_configurations;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_configurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
