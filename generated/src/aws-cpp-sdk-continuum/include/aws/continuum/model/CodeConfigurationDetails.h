/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CodeScanSummary.h>
#include <aws/continuum/model/CollectorDetails.h>
#include <aws/continuum/model/EnvironmentConfiguration.h>
#include <aws/continuum/model/EnvironmentSourceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Code-specific environment properties. GetEnvironment returns the source and
 * operating policy; UpdateEnvironment returns Collector details and the latest
 * scan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CodeConfigurationDetails">AWS
 * API Reference</a></p>
 */
class CodeConfigurationDetails {
 public:
  AWS_CONTINUUM_API CodeConfigurationDetails() = default;
  AWS_CONTINUUM_API CodeConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API CodeConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Collector data access configuration. Omitted when no Collector data access
   * role is configured.</p>
   */
  inline const CollectorDetails& GetCollectorDetails() const { return m_collectorDetails; }
  inline bool CollectorDetailsHasBeenSet() const { return m_collectorDetailsHasBeenSet; }
  template <typename CollectorDetailsT = CollectorDetails>
  void SetCollectorDetails(CollectorDetailsT&& value) {
    m_collectorDetailsHasBeenSet = true;
    m_collectorDetails = std::forward<CollectorDetailsT>(value);
  }
  template <typename CollectorDetailsT = CollectorDetails>
  CodeConfigurationDetails& WithCollectorDetails(CollectorDetailsT&& value) {
    SetCollectorDetails(std::forward<CollectorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sources in the shape accepted by CreateEnvironment and UpdateEnvironment.</p>
   */
  inline const EnvironmentSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = EnvironmentSourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = EnvironmentSourceConfiguration>
  CodeConfigurationDetails& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operating policy in the shape accepted by CreateEnvironment and
   * UpdateEnvironment.</p>
   */
  inline const EnvironmentConfiguration& GetEnvironmentConfiguration() const { return m_environmentConfiguration; }
  inline bool EnvironmentConfigurationHasBeenSet() const { return m_environmentConfigurationHasBeenSet; }
  template <typename EnvironmentConfigurationT = EnvironmentConfiguration>
  void SetEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    m_environmentConfigurationHasBeenSet = true;
    m_environmentConfiguration = std::forward<EnvironmentConfigurationT>(value);
  }
  template <typename EnvironmentConfigurationT = EnvironmentConfiguration>
  CodeConfigurationDetails& WithEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    SetEnvironmentConfiguration(std::forward<EnvironmentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The newest scan requested for this environment, if one exists.</p>
   */
  inline const CodeScanSummary& GetLatestScan() const { return m_latestScan; }
  inline bool LatestScanHasBeenSet() const { return m_latestScanHasBeenSet; }
  template <typename LatestScanT = CodeScanSummary>
  void SetLatestScan(LatestScanT&& value) {
    m_latestScanHasBeenSet = true;
    m_latestScan = std::forward<LatestScanT>(value);
  }
  template <typename LatestScanT = CodeScanSummary>
  CodeConfigurationDetails& WithLatestScan(LatestScanT&& value) {
    SetLatestScan(std::forward<LatestScanT>(value));
    return *this;
  }
  ///@}
 private:
  CollectorDetails m_collectorDetails;

  EnvironmentSourceConfiguration m_sourceConfiguration;

  EnvironmentConfiguration m_environmentConfiguration;

  CodeScanSummary m_latestScan;
  bool m_collectorDetailsHasBeenSet = false;
  bool m_sourceConfigurationHasBeenSet = false;
  bool m_environmentConfigurationHasBeenSet = false;
  bool m_latestScanHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
