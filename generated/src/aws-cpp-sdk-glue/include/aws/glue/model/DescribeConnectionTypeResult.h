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
    AWS_GLUE_API DescribeConnectionTypeResult();
    AWS_GLUE_API DescribeConnectionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeConnectionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the connection type.</p>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }
    inline void SetConnectionType(const Aws::String& value) { m_connectionType = value; }
    inline void SetConnectionType(Aws::String&& value) { m_connectionType = std::move(value); }
    inline void SetConnectionType(const char* value) { m_connectionType.assign(value); }
    inline DescribeConnectionTypeResult& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}
    inline DescribeConnectionTypeResult& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connection type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeConnectionTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeConnectionTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication types, data interface types (compute
     * environments), and data operations of the connector.</p>
     */
    inline const Capabilities& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const Capabilities& value) { m_capabilities = value; }
    inline void SetCapabilities(Capabilities&& value) { m_capabilities = std::move(value); }
    inline DescribeConnectionTypeResult& WithCapabilities(const Capabilities& value) { SetCapabilities(value); return *this;}
    inline DescribeConnectionTypeResult& WithCapabilities(Capabilities&& value) { SetCapabilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection properties which are common across compute environments.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionProperties() const{ return m_connectionProperties; }
    inline void SetConnectionProperties(const Aws::Map<Aws::String, Property>& value) { m_connectionProperties = value; }
    inline void SetConnectionProperties(Aws::Map<Aws::String, Property>&& value) { m_connectionProperties = std::move(value); }
    inline DescribeConnectionTypeResult& WithConnectionProperties(const Aws::Map<Aws::String, Property>& value) { SetConnectionProperties(value); return *this;}
    inline DescribeConnectionTypeResult& WithConnectionProperties(Aws::Map<Aws::String, Property>&& value) { SetConnectionProperties(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddConnectionProperties(const Aws::String& key, const Property& value) { m_connectionProperties.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionProperties(Aws::String&& key, const Property& value) { m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionProperties(const Aws::String& key, Property&& value) { m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionProperties(Aws::String&& key, Property&& value) { m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionProperties(const char* key, Property&& value) { m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionProperties(const char* key, const Property& value) { m_connectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns properties that can be set when creating a connection in the
     * <code>ConnectionInput.ConnectionProperties</code>.
     * <code>ConnectionOptions</code> defines parameters that can be set in a Spark ETL
     * script in the connection options map passed to a dataframe.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionOptions() const{ return m_connectionOptions; }
    inline void SetConnectionOptions(const Aws::Map<Aws::String, Property>& value) { m_connectionOptions = value; }
    inline void SetConnectionOptions(Aws::Map<Aws::String, Property>&& value) { m_connectionOptions = std::move(value); }
    inline DescribeConnectionTypeResult& WithConnectionOptions(const Aws::Map<Aws::String, Property>& value) { SetConnectionOptions(value); return *this;}
    inline DescribeConnectionTypeResult& WithConnectionOptions(Aws::Map<Aws::String, Property>&& value) { SetConnectionOptions(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddConnectionOptions(const Aws::String& key, const Property& value) { m_connectionOptions.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionOptions(Aws::String&& key, const Property& value) { m_connectionOptions.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionOptions(const Aws::String& key, Property&& value) { m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionOptions(Aws::String&& key, Property&& value) { m_connectionOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionOptions(const char* key, Property&& value) { m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddConnectionOptions(const char* key, const Property& value) { m_connectionOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of authentication used for the connection.</p>
     */
    inline const AuthConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline void SetAuthenticationConfiguration(const AuthConfiguration& value) { m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthConfiguration&& value) { m_authenticationConfiguration = std::move(value); }
    inline DescribeConnectionTypeResult& WithAuthenticationConfiguration(const AuthConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}
    inline DescribeConnectionTypeResult& WithAuthenticationConfiguration(AuthConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute environments that are supported by the connection.</p>
     */
    inline const Aws::Map<Aws::String, ComputeEnvironmentConfiguration>& GetComputeEnvironmentConfigurations() const{ return m_computeEnvironmentConfigurations; }
    inline void SetComputeEnvironmentConfigurations(const Aws::Map<Aws::String, ComputeEnvironmentConfiguration>& value) { m_computeEnvironmentConfigurations = value; }
    inline void SetComputeEnvironmentConfigurations(Aws::Map<Aws::String, ComputeEnvironmentConfiguration>&& value) { m_computeEnvironmentConfigurations = std::move(value); }
    inline DescribeConnectionTypeResult& WithComputeEnvironmentConfigurations(const Aws::Map<Aws::String, ComputeEnvironmentConfiguration>& value) { SetComputeEnvironmentConfigurations(value); return *this;}
    inline DescribeConnectionTypeResult& WithComputeEnvironmentConfigurations(Aws::Map<Aws::String, ComputeEnvironmentConfiguration>&& value) { SetComputeEnvironmentConfigurations(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(const Aws::String& key, const ComputeEnvironmentConfiguration& value) { m_computeEnvironmentConfigurations.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(Aws::String&& key, const ComputeEnvironmentConfiguration& value) { m_computeEnvironmentConfigurations.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(const Aws::String& key, ComputeEnvironmentConfiguration&& value) { m_computeEnvironmentConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(Aws::String&& key, ComputeEnvironmentConfiguration&& value) { m_computeEnvironmentConfigurations.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(const char* key, ComputeEnvironmentConfiguration&& value) { m_computeEnvironmentConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddComputeEnvironmentConfigurations(const char* key, const ComputeEnvironmentConfiguration& value) { m_computeEnvironmentConfigurations.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Physical requirements for a connection, such as VPC, Subnet and Security
     * Group specifications.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }
    inline void SetPhysicalConnectionRequirements(const Aws::Map<Aws::String, Property>& value) { m_physicalConnectionRequirements = value; }
    inline void SetPhysicalConnectionRequirements(Aws::Map<Aws::String, Property>&& value) { m_physicalConnectionRequirements = std::move(value); }
    inline DescribeConnectionTypeResult& WithPhysicalConnectionRequirements(const Aws::Map<Aws::String, Property>& value) { SetPhysicalConnectionRequirements(value); return *this;}
    inline DescribeConnectionTypeResult& WithPhysicalConnectionRequirements(Aws::Map<Aws::String, Property>&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(const Aws::String& key, const Property& value) { m_physicalConnectionRequirements.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(Aws::String&& key, const Property& value) { m_physicalConnectionRequirements.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(const Aws::String& key, Property&& value) { m_physicalConnectionRequirements.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(Aws::String&& key, Property&& value) { m_physicalConnectionRequirements.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(const char* key, Property&& value) { m_physicalConnectionRequirements.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPhysicalConnectionRequirements(const char* key, const Property& value) { m_physicalConnectionRequirements.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Athena compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetAthenaConnectionProperties() const{ return m_athenaConnectionProperties; }
    inline void SetAthenaConnectionProperties(const Aws::Map<Aws::String, Property>& value) { m_athenaConnectionProperties = value; }
    inline void SetAthenaConnectionProperties(Aws::Map<Aws::String, Property>&& value) { m_athenaConnectionProperties = std::move(value); }
    inline DescribeConnectionTypeResult& WithAthenaConnectionProperties(const Aws::Map<Aws::String, Property>& value) { SetAthenaConnectionProperties(value); return *this;}
    inline DescribeConnectionTypeResult& WithAthenaConnectionProperties(Aws::Map<Aws::String, Property>&& value) { SetAthenaConnectionProperties(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(const Aws::String& key, const Property& value) { m_athenaConnectionProperties.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(Aws::String&& key, const Property& value) { m_athenaConnectionProperties.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(const Aws::String& key, Property&& value) { m_athenaConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(Aws::String&& key, Property&& value) { m_athenaConnectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(const char* key, Property&& value) { m_athenaConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddAthenaConnectionProperties(const char* key, const Property& value) { m_athenaConnectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Python compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetPythonConnectionProperties() const{ return m_pythonConnectionProperties; }
    inline void SetPythonConnectionProperties(const Aws::Map<Aws::String, Property>& value) { m_pythonConnectionProperties = value; }
    inline void SetPythonConnectionProperties(Aws::Map<Aws::String, Property>&& value) { m_pythonConnectionProperties = std::move(value); }
    inline DescribeConnectionTypeResult& WithPythonConnectionProperties(const Aws::Map<Aws::String, Property>& value) { SetPythonConnectionProperties(value); return *this;}
    inline DescribeConnectionTypeResult& WithPythonConnectionProperties(Aws::Map<Aws::String, Property>&& value) { SetPythonConnectionProperties(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(const Aws::String& key, const Property& value) { m_pythonConnectionProperties.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(Aws::String&& key, const Property& value) { m_pythonConnectionProperties.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(const Aws::String& key, Property&& value) { m_pythonConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(Aws::String&& key, Property&& value) { m_pythonConnectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(const char* key, Property&& value) { m_pythonConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddPythonConnectionProperties(const char* key, const Property& value) { m_pythonConnectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Spark compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetSparkConnectionProperties() const{ return m_sparkConnectionProperties; }
    inline void SetSparkConnectionProperties(const Aws::Map<Aws::String, Property>& value) { m_sparkConnectionProperties = value; }
    inline void SetSparkConnectionProperties(Aws::Map<Aws::String, Property>&& value) { m_sparkConnectionProperties = std::move(value); }
    inline DescribeConnectionTypeResult& WithSparkConnectionProperties(const Aws::Map<Aws::String, Property>& value) { SetSparkConnectionProperties(value); return *this;}
    inline DescribeConnectionTypeResult& WithSparkConnectionProperties(Aws::Map<Aws::String, Property>&& value) { SetSparkConnectionProperties(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(const Aws::String& key, const Property& value) { m_sparkConnectionProperties.emplace(key, value); return *this; }
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(Aws::String&& key, const Property& value) { m_sparkConnectionProperties.emplace(std::move(key), value); return *this; }
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(const Aws::String& key, Property&& value) { m_sparkConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(Aws::String&& key, Property&& value) { m_sparkConnectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(const char* key, Property&& value) { m_sparkConnectionProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeConnectionTypeResult& AddSparkConnectionProperties(const char* key, const Property& value) { m_sparkConnectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectionTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectionTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectionTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionType;

    Aws::String m_description;

    Capabilities m_capabilities;

    Aws::Map<Aws::String, Property> m_connectionProperties;

    Aws::Map<Aws::String, Property> m_connectionOptions;

    AuthConfiguration m_authenticationConfiguration;

    Aws::Map<Aws::String, ComputeEnvironmentConfiguration> m_computeEnvironmentConfigurations;

    Aws::Map<Aws::String, Property> m_physicalConnectionRequirements;

    Aws::Map<Aws::String, Property> m_athenaConnectionProperties;

    Aws::Map<Aws::String, Property> m_pythonConnectionProperties;

    Aws::Map<Aws::String, Property> m_sparkConnectionProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
