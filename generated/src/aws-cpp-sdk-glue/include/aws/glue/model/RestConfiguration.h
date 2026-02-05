/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/EntityConfiguration.h>
#include <aws/glue/model/SourceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines HTTP request and response handling, validation
 * endpoints, and entity configurations for REST API interactions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RestConfiguration">AWS
 * API Reference</a></p>
 */
class RestConfiguration {
 public:
  AWS_GLUE_API RestConfiguration() = default;
  AWS_GLUE_API RestConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API RestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Global configuration settings that apply to all REST API requests for this
   * connection type, including common request methods, paths, and parameters.</p>
   */
  inline const SourceConfiguration& GetGlobalSourceConfiguration() const { return m_globalSourceConfiguration; }
  inline bool GlobalSourceConfigurationHasBeenSet() const { return m_globalSourceConfigurationHasBeenSet; }
  template <typename GlobalSourceConfigurationT = SourceConfiguration>
  void SetGlobalSourceConfiguration(GlobalSourceConfigurationT&& value) {
    m_globalSourceConfigurationHasBeenSet = true;
    m_globalSourceConfiguration = std::forward<GlobalSourceConfigurationT>(value);
  }
  template <typename GlobalSourceConfigurationT = SourceConfiguration>
  RestConfiguration& WithGlobalSourceConfiguration(GlobalSourceConfigurationT&& value) {
    SetGlobalSourceConfiguration(std::forward<GlobalSourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the endpoint used to validate connection credentials and
   * test connectivity during connection creation.</p>
   */
  inline const SourceConfiguration& GetValidationEndpointConfiguration() const { return m_validationEndpointConfiguration; }
  inline bool ValidationEndpointConfigurationHasBeenSet() const { return m_validationEndpointConfigurationHasBeenSet; }
  template <typename ValidationEndpointConfigurationT = SourceConfiguration>
  void SetValidationEndpointConfiguration(ValidationEndpointConfigurationT&& value) {
    m_validationEndpointConfigurationHasBeenSet = true;
    m_validationEndpointConfiguration = std::forward<ValidationEndpointConfigurationT>(value);
  }
  template <typename ValidationEndpointConfigurationT = SourceConfiguration>
  RestConfiguration& WithValidationEndpointConfiguration(ValidationEndpointConfigurationT&& value) {
    SetValidationEndpointConfiguration(std::forward<ValidationEndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of entity configurations that define how to interact with different
   * data entities available through the REST API, including their schemas and access
   * patterns.</p>
   */
  inline const Aws::Map<Aws::String, EntityConfiguration>& GetEntityConfigurations() const { return m_entityConfigurations; }
  inline bool EntityConfigurationsHasBeenSet() const { return m_entityConfigurationsHasBeenSet; }
  template <typename EntityConfigurationsT = Aws::Map<Aws::String, EntityConfiguration>>
  void SetEntityConfigurations(EntityConfigurationsT&& value) {
    m_entityConfigurationsHasBeenSet = true;
    m_entityConfigurations = std::forward<EntityConfigurationsT>(value);
  }
  template <typename EntityConfigurationsT = Aws::Map<Aws::String, EntityConfiguration>>
  RestConfiguration& WithEntityConfigurations(EntityConfigurationsT&& value) {
    SetEntityConfigurations(std::forward<EntityConfigurationsT>(value));
    return *this;
  }
  template <typename EntityConfigurationsKeyT = Aws::String, typename EntityConfigurationsValueT = EntityConfiguration>
  RestConfiguration& AddEntityConfigurations(EntityConfigurationsKeyT&& key, EntityConfigurationsValueT&& value) {
    m_entityConfigurationsHasBeenSet = true;
    m_entityConfigurations.emplace(std::forward<EntityConfigurationsKeyT>(key), std::forward<EntityConfigurationsValueT>(value));
    return *this;
  }
  ///@}
 private:
  SourceConfiguration m_globalSourceConfiguration;

  SourceConfiguration m_validationEndpointConfiguration;

  Aws::Map<Aws::String, EntityConfiguration> m_entityConfigurations;
  bool m_globalSourceConfigurationHasBeenSet = false;
  bool m_validationEndpointConfigurationHasBeenSet = false;
  bool m_entityConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
