/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/PhysicalConnectionRequirements.h>
#include <aws/glue/model/AuthenticationConfigurationInput.h>
#include <aws/glue/model/ConnectionPropertyKey.h>
#include <aws/glue/model/ComputeEnvironment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that is used to specify a connection to create or
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionInput">AWS
   * API Reference</a></p>
   */
  class ConnectionInput
  {
  public:
    AWS_GLUE_API ConnectionInput();
    AWS_GLUE_API ConnectionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConnectionInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConnectionInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConnectionInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConnectionInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConnectionInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConnectionInput& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the connection. Currently, these types are supported:</p> <ul>
     * <li> <p> <code>JDBC</code> - Designates a connection to a database through Java
     * Database Connectivity (JDBC).</p> <p> <code>JDBC</code> Connections use the
     * following ConnectionParameters.</p> <ul> <li> <p>Required: All of
     * (<code>HOST</code>, <code>PORT</code>, <code>JDBC_ENGINE</code>) or
     * <code>JDBC_CONNECTION_URL</code>.</p> </li> <li> <p>Required: All of
     * (<code>USERNAME</code>, <code>PASSWORD</code>) or <code>SECRET_ID</code>.</p>
     * </li> <li> <p>Optional: <code>JDBC_ENFORCE_SSL</code>,
     * <code>CUSTOM_JDBC_CERT</code>, <code>CUSTOM_JDBC_CERT_STRING</code>,
     * <code>SKIP_CUSTOM_JDBC_CERT_VALIDATION</code>. These parameters are used to
     * configure SSL with JDBC.</p> </li> </ul> </li> <li> <p> <code>KAFKA</code> -
     * Designates a connection to an Apache Kafka streaming platform.</p> <p>
     * <code>KAFKA</code> Connections use the following ConnectionParameters.</p> <ul>
     * <li> <p>Required: <code>KAFKA_BOOTSTRAP_SERVERS</code>.</p> </li> <li>
     * <p>Optional: <code>KAFKA_SSL_ENABLED</code>, <code>KAFKA_CUSTOM_CERT</code>,
     * <code>KAFKA_SKIP_CUSTOM_CERT_VALIDATION</code>. These parameters are used to
     * configure SSL with <code>KAFKA</code>.</p> </li> <li> <p>Optional:
     * <code>KAFKA_CLIENT_KEYSTORE</code>, <code>KAFKA_CLIENT_KEYSTORE_PASSWORD</code>,
     * <code>KAFKA_CLIENT_KEY_PASSWORD</code>,
     * <code>ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD</code>,
     * <code>ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD</code>. These parameters are used to
     * configure TLS client configuration with SSL in <code>KAFKA</code>.</p> </li>
     * <li> <p>Optional: <code>KAFKA_SASL_MECHANISM</code>. Can be specified as
     * <code>SCRAM-SHA-512</code>, <code>GSSAPI</code>, or
     * <code>AWS_MSK_IAM</code>.</p> </li> <li> <p>Optional:
     * <code>KAFKA_SASL_SCRAM_USERNAME</code>, <code>KAFKA_SASL_SCRAM_PASSWORD</code>,
     * <code>ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD</code>. These parameters are used to
     * configure SASL/SCRAM-SHA-512 authentication with <code>KAFKA</code>.</p> </li>
     * <li> <p>Optional: <code>KAFKA_SASL_GSSAPI_KEYTAB</code>,
     * <code>KAFKA_SASL_GSSAPI_KRB5_CONF</code>,
     * <code>KAFKA_SASL_GSSAPI_SERVICE</code>,
     * <code>KAFKA_SASL_GSSAPI_PRINCIPAL</code>. These parameters are used to configure
     * SASL/GSSAPI authentication with <code>KAFKA</code>.</p> </li> </ul> </li> <li>
     * <p> <code>MONGODB</code> - Designates a connection to a MongoDB document
     * database.</p> <p> <code>MONGODB</code> Connections use the following
     * ConnectionParameters.</p> <ul> <li> <p>Required:
     * <code>CONNECTION_URL</code>.</p> </li> <li> <p>Required: All of
     * (<code>USERNAME</code>, <code>PASSWORD</code>) or <code>SECRET_ID</code>.</p>
     * </li> </ul> </li> <li> <p> <code>VIEW_VALIDATION_REDSHIFT</code> - Designates a
     * connection used for view validation by Amazon Redshift.</p> </li> <li> <p>
     * <code>VIEW_VALIDATION_ATHENA</code> - Designates a connection used for view
     * validation by Amazon Athena.</p> </li> <li> <p> <code>NETWORK</code> -
     * Designates a network connection to a data source within an Amazon Virtual
     * Private Cloud environment (Amazon VPC).</p> <p> <code>NETWORK</code> Connections
     * do not require ConnectionParameters. Instead, provide a
     * PhysicalConnectionRequirements.</p> </li> <li> <p> <code>MARKETPLACE</code> -
     * Uses configuration settings contained in a connector purchased from Amazon Web
     * Services Marketplace to read from and write to data stores that are not natively
     * supported by Glue.</p> <p> <code>MARKETPLACE</code> Connections use the
     * following ConnectionParameters.</p> <ul> <li> <p>Required:
     * <code>CONNECTOR_TYPE</code>, <code>CONNECTOR_URL</code>,
     * <code>CONNECTOR_CLASS_NAME</code>, <code>CONNECTION_URL</code>.</p> </li> <li>
     * <p>Required for <code>JDBC</code> <code>CONNECTOR_TYPE</code> connections: All
     * of (<code>USERNAME</code>, <code>PASSWORD</code>) or <code>SECRET_ID</code>.</p>
     * </li> </ul> </li> <li> <p> <code>CUSTOM</code> - Uses configuration settings
     * contained in a custom connector to read from and write to data stores that are
     * not natively supported by Glue.</p> </li> </ul> <p>Additionally, a
     * <code>ConnectionType</code> for the following SaaS connectors is supported:</p>
     * <ul> <li> <p> <code>FACEBOOKADS</code> - Designates a connection to Facebook
     * Ads.</p> </li> <li> <p> <code>GOOGLEADS</code> - Designates a connection to
     * Google Ads.</p> </li> <li> <p> <code>GOOGLESHEETS</code> - Designates a
     * connection to Google Sheets.</p> </li> <li> <p> <code>GOOGLEANALYTICS4</code> -
     * Designates a connection to Google Analytics 4.</p> </li> <li> <p>
     * <code>HUBSPOT</code> - Designates a connection to HubSpot.</p> </li> <li> <p>
     * <code>INSTAGRAMADS</code> - Designates a connection to Instagram Ads.</p> </li>
     * <li> <p> <code>INTERCOM</code> - Designates a connection to Intercom.</p> </li>
     * <li> <p> <code>JIRACLOUD</code> - Designates a connection to Jira Cloud.</p>
     * </li> <li> <p> <code>MARKETO</code> - Designates a connection to Adobe Marketo
     * Engage.</p> </li> <li> <p> <code>NETSUITEERP</code> - Designates a connection to
     * Oracle NetSuite.</p> </li> <li> <p> <code>SALESFORCE</code> - Designates a
     * connection to Salesforce using OAuth authentication.</p> </li> <li> <p>
     * <code>SALESFORCEMARKETINGCLOUD</code> - Designates a connection to Salesforce
     * Marketing Cloud.</p> </li> <li> <p> <code>SALESFORCEPARDOT</code> - Designates a
     * connection to Salesforce Marketing Cloud Account Engagement (MCAE).</p> </li>
     * <li> <p> <code>SAPODATA</code> - Designates a connection to SAP OData.</p> </li>
     * <li> <p> <code>SERVICENOW</code> - Designates a connection to ServiceNow.</p>
     * </li> <li> <p> <code>SLACK</code> - Designates a connection to Slack.</p> </li>
     * <li> <p> <code>SNAPCHATADS</code> - Designates a connection to Snapchat Ads.</p>
     * </li> <li> <p> <code>STRIPE</code> - Designates a connection to Stripe.</p>
     * </li> <li> <p> <code>ZENDESK</code> - Designates a connection to Zendesk.</p>
     * </li> <li> <p> <code>ZOHOCRM</code> - Designates a connection to Zoho CRM.</p>
     * </li> </ul> <p>For more information on the connection parameters needed for a
     * particular connector, see the documentation for the connector in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/console-connections.html">Adding
     * an Glue connection</a>in the Glue User Guide.</p> <p> <code>SFTP</code> is not
     * supported.</p> <p>For more information about how optional ConnectionProperties
     * are used to configure features in Glue, consult <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/connection-defining.html">Glue
     * connection properties</a>.</p> <p>For more information about how optional
     * ConnectionProperties are used to configure features in Glue Studio, consult <a
     * href="https://docs.aws.amazon.com/glue/latest/ug/connectors-chapter.html">Using
     * connectors and connections</a>.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline ConnectionInput& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline ConnectionInput& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }
    inline ConnectionInput& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}
    inline ConnectionInput& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}
    inline ConnectionInput& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    inline ConnectionInput& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }
    inline ConnectionInput& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline ConnectionInput& WithConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { SetConnectionProperties(value); return *this;}
    inline ConnectionInput& WithConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddConnectionProperties(const ConnectionPropertyKey& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Spark compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const{ return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    inline void SetSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = value; }
    inline void SetSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::move(value); }
    inline ConnectionInput& WithSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetSparkProperties(value); return *this;}
    inline ConnectionInput& WithSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetSparkProperties(std::move(value)); return *this;}
    inline ConnectionInput& AddSparkProperties(const Aws::String& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    inline ConnectionInput& AddSparkProperties(Aws::String&& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddSparkProperties(const Aws::String& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddSparkProperties(Aws::String&& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ConnectionInput& AddSparkProperties(const char* key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddSparkProperties(Aws::String&& key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddSparkProperties(const char* key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Athena compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline ConnectionInput& WithAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetAthenaProperties(value); return *this;}
    inline ConnectionInput& WithAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetAthenaProperties(std::move(value)); return *this;}
    inline ConnectionInput& AddAthenaProperties(const Aws::String& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    inline ConnectionInput& AddAthenaProperties(Aws::String&& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddAthenaProperties(const Aws::String& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddAthenaProperties(Aws::String&& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ConnectionInput& AddAthenaProperties(const char* key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddAthenaProperties(Aws::String&& key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddAthenaProperties(const char* key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Python compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const{ return m_pythonProperties; }
    inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
    inline void SetPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = value; }
    inline void SetPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = std::move(value); }
    inline ConnectionInput& WithPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPythonProperties(value); return *this;}
    inline ConnectionInput& WithPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPythonProperties(std::move(value)); return *this;}
    inline ConnectionInput& AddPythonProperties(const Aws::String& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    inline ConnectionInput& AddPythonProperties(Aws::String&& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddPythonProperties(const Aws::String& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddPythonProperties(Aws::String&& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ConnectionInput& AddPythonProperties(const char* key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline ConnectionInput& AddPythonProperties(Aws::String&& key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline ConnectionInput& AddPythonProperties(const char* key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements, such as virtual private cloud (VPC) and
     * <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    inline void SetPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = value; }
    inline void SetPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::move(value); }
    inline ConnectionInput& WithPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { SetPhysicalConnectionRequirements(value); return *this;}
    inline ConnectionInput& WithPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication properties of the connection.</p>
     */
    inline const AuthenticationConfigurationInput& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfigurationInput& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfigurationInput&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline ConnectionInput& WithAuthenticationConfiguration(const AuthenticationConfigurationInput& value) { SetAuthenticationConfiguration(value); return *this;}
    inline ConnectionInput& WithAuthenticationConfiguration(AuthenticationConfigurationInput&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to validate the credentials during create connection. Default is true.
     * </p>
     */
    inline bool GetValidateCredentials() const{ return m_validateCredentials; }
    inline bool ValidateCredentialsHasBeenSet() const { return m_validateCredentialsHasBeenSet; }
    inline void SetValidateCredentials(bool value) { m_validateCredentialsHasBeenSet = true; m_validateCredentials = value; }
    inline ConnectionInput& WithValidateCredentials(bool value) { SetValidateCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute environments that the specified connection properties are
     * validated against.</p>
     */
    inline const Aws::Vector<ComputeEnvironment>& GetValidateForComputeEnvironments() const{ return m_validateForComputeEnvironments; }
    inline bool ValidateForComputeEnvironmentsHasBeenSet() const { return m_validateForComputeEnvironmentsHasBeenSet; }
    inline void SetValidateForComputeEnvironments(const Aws::Vector<ComputeEnvironment>& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments = value; }
    inline void SetValidateForComputeEnvironments(Aws::Vector<ComputeEnvironment>&& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments = std::move(value); }
    inline ConnectionInput& WithValidateForComputeEnvironments(const Aws::Vector<ComputeEnvironment>& value) { SetValidateForComputeEnvironments(value); return *this;}
    inline ConnectionInput& WithValidateForComputeEnvironments(Aws::Vector<ComputeEnvironment>&& value) { SetValidateForComputeEnvironments(std::move(value)); return *this;}
    inline ConnectionInput& AddValidateForComputeEnvironments(const ComputeEnvironment& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments.push_back(value); return *this; }
    inline ConnectionInput& AddValidateForComputeEnvironments(ComputeEnvironment&& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet = false;

    Aws::Map<ConnectionPropertyKey, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sparkProperties;
    bool m_sparkPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pythonProperties;
    bool m_pythonPropertiesHasBeenSet = false;

    PhysicalConnectionRequirements m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet = false;

    AuthenticationConfigurationInput m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    bool m_validateCredentials;
    bool m_validateCredentialsHasBeenSet = false;

    Aws::Vector<ComputeEnvironment> m_validateForComputeEnvironments;
    bool m_validateForComputeEnvironmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
