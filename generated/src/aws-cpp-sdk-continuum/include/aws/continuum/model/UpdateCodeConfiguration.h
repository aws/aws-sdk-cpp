/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
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
 * <p>Mutable source and operating-policy settings for a code
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateCodeConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateCodeConfiguration {
 public:
  AWS_CONTINUUM_API UpdateCodeConfiguration() = default;
  AWS_CONTINUUM_API UpdateCodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API UpdateCodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Source changes. s3Sources replaces the environment's S3 source, and
   * repositorySources replaces its repository selections.</p>
   */
  inline const EnvironmentSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = EnvironmentSourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = EnvironmentSourceConfiguration>
  UpdateCodeConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operating-policy changes. network replaces the environment's network policy;
   * a network without allowedDomains allows no domains. Builds accepted before the
   * change keep the domains they were accepted with. patchCreationPolicy replaces
   * the patch creation policy. scanFrequency updates scan cadence. Omitted members
   * preserve their stored values.</p>
   */
  inline const EnvironmentConfiguration& GetEnvironmentConfiguration() const { return m_environmentConfiguration; }
  inline bool EnvironmentConfigurationHasBeenSet() const { return m_environmentConfigurationHasBeenSet; }
  template <typename EnvironmentConfigurationT = EnvironmentConfiguration>
  void SetEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    m_environmentConfigurationHasBeenSet = true;
    m_environmentConfiguration = std::forward<EnvironmentConfigurationT>(value);
  }
  template <typename EnvironmentConfigurationT = EnvironmentConfiguration>
  UpdateCodeConfiguration& WithEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    SetEnvironmentConfiguration(std::forward<EnvironmentConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EnvironmentSourceConfiguration m_sourceConfiguration;

  EnvironmentConfiguration m_environmentConfiguration;
  bool m_sourceConfigurationHasBeenSet = false;
  bool m_environmentConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
