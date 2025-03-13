/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Capabilities.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/AuthConfiguration.h>
#include <aws/glue/model/Property.h>
#include <aws/glue/model/ComputeEnvironmentConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class DescribeConnectionTypeResult
  {
  public:
    AWS_GLUE_API DescribeConnectionTypeResult() = default;
    AWS_GLUE_API DescribeConnectionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeConnectionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the connection type.</p>
     */
    inline const Aws::String& GetConnectionType() const { return m_connectionType; }
    template<typename ConnectionTypeT = Aws::String>
    void SetConnectionType(ConnectionTypeT&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::forward<ConnectionTypeT>(value); }
    template<typename ConnectionTypeT = Aws::String>
    DescribeConnectionTypeResult& WithConnectionType(ConnectionTypeT&& value) { SetConnectionType(std::forward<ConnectionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeConnectionTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication types, data interface types (compute
     * environments), and data operations of the connector.</p>
     */
    inline const Capabilities& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Capabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Capabilities>
    DescribeConnectionTypeResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection properties which are common across compute environments.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionProperties() const { return m_connectionProperties; }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    template<typename ConnectionPropertiesKeyT = Aws::String, typename ConnectionPropertiesValueT = Property>
    DescribeConnectionTypeResult& AddConnectionProperties(ConnectionPropertiesKeyT&& key, ConnectionPropertiesValueT&& value) {
      m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::forward<ConnectionPropertiesKeyT>(key), std::forward<ConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returns properties that can be set when creating a connection in the
     * <code>ConnectionInput.ConnectionProperties</code>.
     * <code>ConnectionOptions</code> defines parameters that can be set in a Spark ETL
     * script in the connection options map passed to a dataframe.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionOptions() const { return m_connectionOptions; }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Property>>
    void SetConnectionOptions(ConnectionOptionsT&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::forward<ConnectionOptionsT>(value); }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithConnectionOptions(ConnectionOptionsT&& value) { SetConnectionOptions(std::forward<ConnectionOptionsT>(value)); return *this;}
    template<typename ConnectionOptionsKeyT = Aws::String, typename ConnectionOptionsValueT = Property>
    DescribeConnectionTypeResult& AddConnectionOptions(ConnectionOptionsKeyT&& key, ConnectionOptionsValueT&& value) {
      m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::forward<ConnectionOptionsKeyT>(key), std::forward<ConnectionOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of authentication used for the connection.</p>
     */
    inline const AuthConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    template<typename AuthenticationConfigurationT = AuthConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthConfiguration>
    DescribeConnectionTypeResult& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute environments that are supported by the connection.</p>
     */
    inline const Aws::Map<Aws::String, ComputeEnvironmentConfiguration>& GetComputeEnvironmentConfigurations() const { return m_computeEnvironmentConfigurations; }
    template<typename ComputeEnvironmentConfigurationsT = Aws::Map<Aws::String, ComputeEnvironmentConfiguration>>
    void SetComputeEnvironmentConfigurations(ComputeEnvironmentConfigurationsT&& value) { m_computeEnvironmentConfigurationsHasBeenSet = true; m_computeEnvironmentConfigurations = std::forward<ComputeEnvironmentConfigurationsT>(value); }
    template<typename ComputeEnvironmentConfigurationsT = Aws::Map<Aws::String, ComputeEnvironmentConfiguration>>
    DescribeConnectionTypeResult& WithComputeEnvironmentConfigurations(ComputeEnvironmentConfigurationsT&& value) { SetComputeEnvironmentConfigurations(std::forward<ComputeEnvironmentConfigurationsT>(value)); return *this;}
    template<typename ComputeEnvironmentConfigurationsKeyT = Aws::String, typename ComputeEnvironmentConfigurationsValueT = ComputeEnvironmentConfiguration>
    DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(ComputeEnvironmentConfigurationsKeyT&& key, ComputeEnvironmentConfigurationsValueT&& value) {
      m_computeEnvironmentConfigurationsHasBeenSet = true; m_computeEnvironmentConfigurations.emplace(std::forward<ComputeEnvironmentConfigurationsKeyT>(key), std::forward<ComputeEnvironmentConfigurationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Physical requirements for a connection, such as VPC, Subnet and Security
     * Group specifications.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetPhysicalConnectionRequirements() const { return m_physicalConnectionRequirements; }
    template<typename PhysicalConnectionRequirementsT = Aws::Map<Aws::String, Property>>
    void SetPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::forward<PhysicalConnectionRequirementsT>(value); }
    template<typename PhysicalConnectionRequirementsT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { SetPhysicalConnectionRequirements(std::forward<PhysicalConnectionRequirementsT>(value)); return *this;}
    template<typename PhysicalConnectionRequirementsKeyT = Aws::String, typename PhysicalConnectionRequirementsValueT = Property>
    DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(PhysicalConnectionRequirementsKeyT&& key, PhysicalConnectionRequirementsValueT&& value) {
      m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements.emplace(std::forward<PhysicalConnectionRequirementsKeyT>(key), std::forward<PhysicalConnectionRequirementsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Athena compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetAthenaConnectionProperties() const { return m_athenaConnectionProperties; }
    template<typename AthenaConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    void SetAthenaConnectionProperties(AthenaConnectionPropertiesT&& value) { m_athenaConnectionPropertiesHasBeenSet = true; m_athenaConnectionProperties = std::forward<AthenaConnectionPropertiesT>(value); }
    template<typename AthenaConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithAthenaConnectionProperties(AthenaConnectionPropertiesT&& value) { SetAthenaConnectionProperties(std::forward<AthenaConnectionPropertiesT>(value)); return *this;}
    template<typename AthenaConnectionPropertiesKeyT = Aws::String, typename AthenaConnectionPropertiesValueT = Property>
    DescribeConnectionTypeResult& AddAthenaConnectionProperties(AthenaConnectionPropertiesKeyT&& key, AthenaConnectionPropertiesValueT&& value) {
      m_athenaConnectionPropertiesHasBeenSet = true; m_athenaConnectionProperties.emplace(std::forward<AthenaConnectionPropertiesKeyT>(key), std::forward<AthenaConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Python compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetPythonConnectionProperties() const { return m_pythonConnectionProperties; }
    template<typename PythonConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    void SetPythonConnectionProperties(PythonConnectionPropertiesT&& value) { m_pythonConnectionPropertiesHasBeenSet = true; m_pythonConnectionProperties = std::forward<PythonConnectionPropertiesT>(value); }
    template<typename PythonConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithPythonConnectionProperties(PythonConnectionPropertiesT&& value) { SetPythonConnectionProperties(std::forward<PythonConnectionPropertiesT>(value)); return *this;}
    template<typename PythonConnectionPropertiesKeyT = Aws::String, typename PythonConnectionPropertiesValueT = Property>
    DescribeConnectionTypeResult& AddPythonConnectionProperties(PythonConnectionPropertiesKeyT&& key, PythonConnectionPropertiesValueT&& value) {
      m_pythonConnectionPropertiesHasBeenSet = true; m_pythonConnectionProperties.emplace(std::forward<PythonConnectionPropertiesKeyT>(key), std::forward<PythonConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Spark compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetSparkConnectionProperties() const { return m_sparkConnectionProperties; }
    template<typename SparkConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    void SetSparkConnectionProperties(SparkConnectionPropertiesT&& value) { m_sparkConnectionPropertiesHasBeenSet = true; m_sparkConnectionProperties = std::forward<SparkConnectionPropertiesT>(value); }
    template<typename SparkConnectionPropertiesT = Aws::Map<Aws::String, Property>>
    DescribeConnectionTypeResult& WithSparkConnectionProperties(SparkConnectionPropertiesT&& value) { SetSparkConnectionProperties(std::forward<SparkConnectionPropertiesT>(value)); return *this;}
    template<typename SparkConnectionPropertiesKeyT = Aws::String, typename SparkConnectionPropertiesValueT = Property>
    DescribeConnectionTypeResult& AddSparkConnectionProperties(SparkConnectionPropertiesKeyT&& key, SparkConnectionPropertiesValueT&& value) {
      m_sparkConnectionPropertiesHasBeenSet = true; m_sparkConnectionProperties.emplace(std::forward<SparkConnectionPropertiesKeyT>(key), std::forward<SparkConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectionTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Capabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_connectionOptions;
    bool m_connectionOptionsHasBeenSet = false;

    AuthConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, ComputeEnvironmentConfiguration> m_computeEnvironmentConfigurations;
    bool m_computeEnvironmentConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_athenaConnectionProperties;
    bool m_athenaConnectionPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_pythonConnectionProperties;
    bool m_pythonConnectionPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_sparkConnectionProperties;
    bool m_sparkConnectionPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
