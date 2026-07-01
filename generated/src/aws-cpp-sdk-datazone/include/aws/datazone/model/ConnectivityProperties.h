/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AuthenticationConfigurationInput.h>
#include <aws/datazone/model/ComputeEnvironments.h>
#include <aws/datazone/model/PhysicalConnectionRequirements.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the network and authentication settings for a connection, including
 * connection credentials, physical network requirements, and compute-environment
 * validation options.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectivityProperties">AWS
 * API Reference</a></p>
 */
class ConnectivityProperties {
 public:
  AWS_DATAZONE_API ConnectivityProperties() = default;
  AWS_DATAZONE_API ConnectivityProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ConnectivityProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connection properties for this configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
  inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
  template <typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetConnectionProperties(ConnectionPropertiesT&& value) {
    m_connectionPropertiesHasBeenSet = true;
    m_connectionProperties = std::forward<ConnectionPropertiesT>(value);
  }
  template <typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
  ConnectivityProperties& WithConnectionProperties(ConnectionPropertiesT&& value) {
    SetConnectionProperties(std::forward<ConnectionPropertiesT>(value));
    return *this;
  }
  template <typename ConnectionPropertiesKeyT = Aws::String, typename ConnectionPropertiesValueT = Aws::String>
  ConnectivityProperties& AddConnectionProperties(ConnectionPropertiesKeyT&& key, ConnectionPropertiesValueT&& value) {
    m_connectionPropertiesHasBeenSet = true;
    m_connectionProperties.emplace(std::forward<ConnectionPropertiesKeyT>(key), std::forward<ConnectionPropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The physical network requirements for the connection, such as the subnet,
   * security group, and VPC settings needed to reach the data source.</p>
   */
  inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const { return m_physicalConnectionRequirements; }
  inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
  template <typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
  void SetPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) {
    m_physicalConnectionRequirementsHasBeenSet = true;
    m_physicalConnectionRequirements = std::forward<PhysicalConnectionRequirementsT>(value);
  }
  template <typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
  ConnectivityProperties& WithPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) {
    SetPhysicalConnectionRequirements(std::forward<PhysicalConnectionRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the connectivity configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConnectivityProperties& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the connectivity configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ConnectivityProperties& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate credentials for the connectivity configuration.
   * Defaults to true if not specified.</p>
   */
  inline bool GetValidateCredentials() const { return m_validateCredentials; }
  inline bool ValidateCredentialsHasBeenSet() const { return m_validateCredentialsHasBeenSet; }
  inline void SetValidateCredentials(bool value) {
    m_validateCredentialsHasBeenSet = true;
    m_validateCredentials = value;
  }
  inline ConnectivityProperties& WithValidateCredentials(bool value) {
    SetValidateCredentials(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute environments to use when validating connectivity. The service
   * validates that the connection is reachable from each specified environment.</p>
   */
  inline const Aws::Vector<ComputeEnvironments>& GetValidateForComputeEnvironments() const { return m_validateForComputeEnvironments; }
  inline bool ValidateForComputeEnvironmentsHasBeenSet() const { return m_validateForComputeEnvironmentsHasBeenSet; }
  template <typename ValidateForComputeEnvironmentsT = Aws::Vector<ComputeEnvironments>>
  void SetValidateForComputeEnvironments(ValidateForComputeEnvironmentsT&& value) {
    m_validateForComputeEnvironmentsHasBeenSet = true;
    m_validateForComputeEnvironments = std::forward<ValidateForComputeEnvironmentsT>(value);
  }
  template <typename ValidateForComputeEnvironmentsT = Aws::Vector<ComputeEnvironments>>
  ConnectivityProperties& WithValidateForComputeEnvironments(ValidateForComputeEnvironmentsT&& value) {
    SetValidateForComputeEnvironments(std::forward<ValidateForComputeEnvironmentsT>(value));
    return *this;
  }
  inline ConnectivityProperties& AddValidateForComputeEnvironments(ComputeEnvironments value) {
    m_validateForComputeEnvironmentsHasBeenSet = true;
    m_validateForComputeEnvironments.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Spark properties for this configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const { return m_sparkProperties; }
  inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
  template <typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetSparkProperties(SparkPropertiesT&& value) {
    m_sparkPropertiesHasBeenSet = true;
    m_sparkProperties = std::forward<SparkPropertiesT>(value);
  }
  template <typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
  ConnectivityProperties& WithSparkProperties(SparkPropertiesT&& value) {
    SetSparkProperties(std::forward<SparkPropertiesT>(value));
    return *this;
  }
  template <typename SparkPropertiesKeyT = Aws::String, typename SparkPropertiesValueT = Aws::String>
  ConnectivityProperties& AddSparkProperties(SparkPropertiesKeyT&& key, SparkPropertiesValueT&& value) {
    m_sparkPropertiesHasBeenSet = true;
    m_sparkProperties.emplace(std::forward<SparkPropertiesKeyT>(key), std::forward<SparkPropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Athena properties for this configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const { return m_athenaProperties; }
  inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
  template <typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetAthenaProperties(AthenaPropertiesT&& value) {
    m_athenaPropertiesHasBeenSet = true;
    m_athenaProperties = std::forward<AthenaPropertiesT>(value);
  }
  template <typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
  ConnectivityProperties& WithAthenaProperties(AthenaPropertiesT&& value) {
    SetAthenaProperties(std::forward<AthenaPropertiesT>(value));
    return *this;
  }
  template <typename AthenaPropertiesKeyT = Aws::String, typename AthenaPropertiesValueT = Aws::String>
  ConnectivityProperties& AddAthenaProperties(AthenaPropertiesKeyT&& key, AthenaPropertiesValueT&& value) {
    m_athenaPropertiesHasBeenSet = true;
    m_athenaProperties.emplace(std::forward<AthenaPropertiesKeyT>(key), std::forward<AthenaPropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Python properties for this configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const { return m_pythonProperties; }
  inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
  template <typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetPythonProperties(PythonPropertiesT&& value) {
    m_pythonPropertiesHasBeenSet = true;
    m_pythonProperties = std::forward<PythonPropertiesT>(value);
  }
  template <typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
  ConnectivityProperties& WithPythonProperties(PythonPropertiesT&& value) {
    SetPythonProperties(std::forward<PythonPropertiesT>(value));
    return *this;
  }
  template <typename PythonPropertiesKeyT = Aws::String, typename PythonPropertiesValueT = Aws::String>
  ConnectivityProperties& AddPythonProperties(PythonPropertiesKeyT&& key, PythonPropertiesValueT&& value) {
    m_pythonPropertiesHasBeenSet = true;
    m_pythonProperties.emplace(std::forward<PythonPropertiesKeyT>(key), std::forward<PythonPropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication settings for this configuration.</p>
   */
  inline const AuthenticationConfigurationInput& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
  inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
  template <typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
  void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) {
    m_authenticationConfigurationHasBeenSet = true;
    m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value);
  }
  template <typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
  ConnectivityProperties& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) {
    SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_connectionProperties;

  PhysicalConnectionRequirements m_physicalConnectionRequirements;

  Aws::String m_name;

  Aws::String m_description;

  bool m_validateCredentials{false};

  Aws::Vector<ComputeEnvironments> m_validateForComputeEnvironments;

  Aws::Map<Aws::String, Aws::String> m_sparkProperties;

  Aws::Map<Aws::String, Aws::String> m_athenaProperties;

  Aws::Map<Aws::String, Aws::String> m_pythonProperties;

  AuthenticationConfigurationInput m_authenticationConfiguration;
  bool m_connectionPropertiesHasBeenSet = false;
  bool m_physicalConnectionRequirementsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_validateCredentialsHasBeenSet = false;
  bool m_validateForComputeEnvironmentsHasBeenSet = false;
  bool m_sparkPropertiesHasBeenSet = false;
  bool m_athenaPropertiesHasBeenSet = false;
  bool m_pythonPropertiesHasBeenSet = false;
  bool m_authenticationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
