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
    AWS_GLUE_API ConnectionInput() = default;
    AWS_GLUE_API ConnectionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectionInput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the connection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConnectionInput& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline ConnectionInput& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const { return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    template<typename MatchCriteriaT = Aws::Vector<Aws::String>>
    void SetMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::forward<MatchCriteriaT>(value); }
    template<typename MatchCriteriaT = Aws::Vector<Aws::String>>
    ConnectionInput& WithMatchCriteria(MatchCriteriaT&& value) { SetMatchCriteria(std::forward<MatchCriteriaT>(value)); return *this;}
    template<typename MatchCriteriaT = Aws::String>
    ConnectionInput& AddMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.emplace_back(std::forward<MatchCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define parameters for the connection.</p>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    ConnectionInput& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    inline ConnectionInput& AddConnectionProperties(ConnectionPropertyKey key, Aws::String value) {
      m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Spark compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const { return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetSparkProperties(SparkPropertiesT&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::forward<SparkPropertiesT>(value); }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    ConnectionInput& WithSparkProperties(SparkPropertiesT&& value) { SetSparkProperties(std::forward<SparkPropertiesT>(value)); return *this;}
    template<typename SparkPropertiesKeyT = Aws::String, typename SparkPropertiesValueT = Aws::String>
    ConnectionInput& AddSparkProperties(SparkPropertiesKeyT&& key, SparkPropertiesValueT&& value) {
      m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::forward<SparkPropertiesKeyT>(key), std::forward<SparkPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Athena compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const { return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    template<typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetAthenaProperties(AthenaPropertiesT&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::forward<AthenaPropertiesT>(value); }
    template<typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
    ConnectionInput& WithAthenaProperties(AthenaPropertiesT&& value) { SetAthenaProperties(std::forward<AthenaPropertiesT>(value)); return *this;}
    template<typename AthenaPropertiesKeyT = Aws::String, typename AthenaPropertiesValueT = Aws::String>
    ConnectionInput& AddAthenaProperties(AthenaPropertiesKeyT&& key, AthenaPropertiesValueT&& value) {
      m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::forward<AthenaPropertiesKeyT>(key), std::forward<AthenaPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Connection properties specific to the Python compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const { return m_pythonProperties; }
    inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
    template<typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetPythonProperties(PythonPropertiesT&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = std::forward<PythonPropertiesT>(value); }
    template<typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
    ConnectionInput& WithPythonProperties(PythonPropertiesT&& value) { SetPythonProperties(std::forward<PythonPropertiesT>(value)); return *this;}
    template<typename PythonPropertiesKeyT = Aws::String, typename PythonPropertiesValueT = Aws::String>
    ConnectionInput& AddPythonProperties(PythonPropertiesKeyT&& key, PythonPropertiesValueT&& value) {
      m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::forward<PythonPropertiesKeyT>(key), std::forward<PythonPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements, such as virtual private cloud (VPC) and
     * <code>SecurityGroup</code>, that are needed to successfully make this
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const { return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    void SetPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::forward<PhysicalConnectionRequirementsT>(value); }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    ConnectionInput& WithPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { SetPhysicalConnectionRequirements(std::forward<PhysicalConnectionRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication properties of the connection.</p>
     */
    inline const AuthenticationConfigurationInput& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationInput>
    ConnectionInput& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to validate the credentials during create connection. Default is true.
     * </p>
     */
    inline bool GetValidateCredentials() const { return m_validateCredentials; }
    inline bool ValidateCredentialsHasBeenSet() const { return m_validateCredentialsHasBeenSet; }
    inline void SetValidateCredentials(bool value) { m_validateCredentialsHasBeenSet = true; m_validateCredentials = value; }
    inline ConnectionInput& WithValidateCredentials(bool value) { SetValidateCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute environments that the specified connection properties are
     * validated against.</p>
     */
    inline const Aws::Vector<ComputeEnvironment>& GetValidateForComputeEnvironments() const { return m_validateForComputeEnvironments; }
    inline bool ValidateForComputeEnvironmentsHasBeenSet() const { return m_validateForComputeEnvironmentsHasBeenSet; }
    template<typename ValidateForComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    void SetValidateForComputeEnvironments(ValidateForComputeEnvironmentsT&& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments = std::forward<ValidateForComputeEnvironmentsT>(value); }
    template<typename ValidateForComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    ConnectionInput& WithValidateForComputeEnvironments(ValidateForComputeEnvironmentsT&& value) { SetValidateForComputeEnvironments(std::forward<ValidateForComputeEnvironmentsT>(value)); return *this;}
    inline ConnectionInput& AddValidateForComputeEnvironments(ComputeEnvironment value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
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

    bool m_validateCredentials{false};
    bool m_validateCredentialsHasBeenSet = false;

    Aws::Vector<ComputeEnvironment> m_validateForComputeEnvironments;
    bool m_validateForComputeEnvironmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
