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
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ConnectionStatus.h>
#include <aws/glue/model/AuthenticationConfiguration.h>
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
   * <p>Defines a connection to a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Connection">AWS API
   * Reference</a></p>
   */
  class Connection
  {
  public:
    AWS_GLUE_API Connection() = default;
    AWS_GLUE_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Connection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    Connection& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the connection. Currently, SFTP is not supported.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline Connection& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
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
    Connection& WithMatchCriteria(MatchCriteriaT&& value) { SetMatchCriteria(std::forward<MatchCriteriaT>(value)); return *this;}
    template<typename MatchCriteriaT = Aws::String>
    Connection& AddMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.emplace_back(std::forward<MatchCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define parameters for the connection when using the
     * version 1 Connection schema:</p> <ul> <li> <p> <code>HOST</code> - The host URI:
     * either the fully qualified domain name (FQDN) or the IPv4 address of the
     * database host.</p> </li> <li> <p> <code>PORT</code> - The port number, between
     * 1024 and 65535, of the port on which the database host is listening for database
     * connections.</p> </li> <li> <p> <code>USER_NAME</code> - The name under which to
     * log in to the database. The value string for <code>USER_NAME</code> is
     * "<code>USERNAME</code>".</p> </li> <li> <p> <code>PASSWORD</code> - A password,
     * if one is used, for the user name.</p> </li> <li> <p>
     * <code>ENCRYPTED_PASSWORD</code> - When you enable connection password protection
     * by setting <code>ConnectionPasswordEncryption</code> in the Data Catalog
     * encryption settings, this field stores the encrypted password.</p> </li> <li>
     * <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon Simple Storage Service (Amazon
     * S3) path of the JAR file that contains the JDBC driver to use.</p> </li> <li>
     * <p> <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use.)</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for
     * connecting to a JDBC data source.</p> </li> <li> <p>
     * <code>JDBC_ENFORCE_SSL</code> - A case-insensitive Boolean string (true, false)
     * specifying whether Secure Sockets Layer (SSL) with hostname matching is enforced
     * for the JDBC connection on the client. The default is false.</p> </li> <li> <p>
     * <code>CUSTOM_JDBC_CERT</code> - An Amazon S3 location specifying the customer's
     * root certificate. Glue uses this root certificate to validate the customer’s
     * certificate when connecting to the customer database. Glue only handles X.509
     * certificates. The certificate provided must be DER-encoded and supplied in
     * Base64 encoding PEM format.</p> </li> <li> <p>
     * <code>SKIP_CUSTOM_JDBC_CERT_VALIDATION</code> - By default, this is
     * <code>false</code>. Glue validates the Signature algorithm and Subject Public
     * Key Algorithm for the customer certificate. The only permitted algorithms for
     * the Signature algorithm are SHA256withRSA, SHA384withRSA or SHA512withRSA. For
     * the Subject Public Key Algorithm, the key length must be at least 2048. You can
     * set the value of this property to <code>true</code> to skip Glue’s validation of
     * the customer certificate.</p> </li> <li> <p>
     * <code>CUSTOM_JDBC_CERT_STRING</code> - A custom JDBC certificate string which is
     * used for domain match or distinguished name match to prevent a man-in-the-middle
     * attack. In Oracle database, this is used as the <code>SSL_SERVER_CERT_DN</code>;
     * in Microsoft SQL Server, this is used as the
     * <code>hostNameInCertificate</code>.</p> </li> <li> <p>
     * <code>CONNECTION_URL</code> - The URL for connecting to a general (non-JDBC)
     * data source.</p> </li> <li> <p> <code>SECRET_ID</code> - The secret ID used for
     * the secret manager of credentials.</p> </li> <li> <p> <code>CONNECTOR_URL</code>
     * - The connector URL for a MARKETPLACE or CUSTOM connection.</p> </li> <li> <p>
     * <code>CONNECTOR_TYPE</code> - The connector type for a MARKETPLACE or CUSTOM
     * connection.</p> </li> <li> <p> <code>CONNECTOR_CLASS_NAME</code> - The connector
     * class name for a MARKETPLACE or CUSTOM connection.</p> </li> <li> <p>
     * <code>KAFKA_BOOTSTRAP_SERVERS</code> - A comma-separated list of host and port
     * pairs that are the addresses of the Apache Kafka brokers in a Kafka cluster to
     * which a Kafka client will connect to and bootstrap itself.</p> </li> <li> <p>
     * <code>KAFKA_SSL_ENABLED</code> - Whether to enable or disable SSL on an Apache
     * Kafka connection. Default value is "true".</p> </li> <li> <p>
     * <code>KAFKA_CUSTOM_CERT</code> - The Amazon S3 URL for the private CA cert file
     * (.pem format). The default is an empty string.</p> </li> <li> <p>
     * <code>KAFKA_SKIP_CUSTOM_CERT_VALIDATION</code> - Whether to skip the validation
     * of the CA cert file or not. Glue validates for three algorithms: SHA256withRSA,
     * SHA384withRSA and SHA512withRSA. Default value is "false".</p> </li> <li> <p>
     * <code>KAFKA_CLIENT_KEYSTORE</code> - The Amazon S3 location of the client
     * keystore file for Kafka client side authentication (Optional).</p> </li> <li>
     * <p> <code>KAFKA_CLIENT_KEYSTORE_PASSWORD</code> - The password to access the
     * provided keystore (Optional).</p> </li> <li> <p>
     * <code>KAFKA_CLIENT_KEY_PASSWORD</code> - A keystore can consist of multiple
     * keys, so this is the password to access the client key to be used with the Kafka
     * server side key (Optional).</p> </li> <li> <p>
     * <code>ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD</code> - The encrypted version of
     * the Kafka client keystore password (if the user has the Glue encrypt passwords
     * setting selected).</p> </li> <li> <p>
     * <code>ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD</code> - The encrypted version of the
     * Kafka client key password (if the user has the Glue encrypt passwords setting
     * selected).</p> </li> <li> <p> <code>KAFKA_SASL_MECHANISM</code> -
     * <code>"SCRAM-SHA-512"</code>, <code>"GSSAPI"</code>, <code>"AWS_MSK_IAM"</code>,
     * or <code>"PLAIN"</code>. These are the supported <a
     * href="https://www.iana.org/assignments/sasl-mechanisms/sasl-mechanisms.xhtml">SASL
     * Mechanisms</a>.</p> </li> <li> <p> <code>KAFKA_SASL_PLAIN_USERNAME</code> - A
     * plaintext username used to authenticate with the "PLAIN" mechanism.</p> </li>
     * <li> <p> <code>KAFKA_SASL_PLAIN_PASSWORD</code> - A plaintext password used to
     * authenticate with the "PLAIN" mechanism.</p> </li> <li> <p>
     * <code>ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD</code> - The encrypted version of the
     * Kafka SASL PLAIN password (if the user has the Glue encrypt passwords setting
     * selected).</p> </li> <li> <p> <code>KAFKA_SASL_SCRAM_USERNAME</code> - A
     * plaintext username used to authenticate with the "SCRAM-SHA-512" mechanism.</p>
     * </li> <li> <p> <code>KAFKA_SASL_SCRAM_PASSWORD</code> - A plaintext password
     * used to authenticate with the "SCRAM-SHA-512" mechanism.</p> </li> <li> <p>
     * <code>ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD</code> - The encrypted version of the
     * Kafka SASL SCRAM password (if the user has the Glue encrypt passwords setting
     * selected).</p> </li> <li> <p> <code>KAFKA_SASL_SCRAM_SECRETS_ARN</code> - The
     * Amazon Resource Name of a secret in Amazon Web Services Secrets Manager.</p>
     * </li> <li> <p> <code>KAFKA_SASL_GSSAPI_KEYTAB</code> - The S3 location of a
     * Kerberos <code>keytab</code> file. A keytab stores long-term keys for one or
     * more principals. For more information, see <a
     * href="https://web.mit.edu/kerberos/krb5-latest/doc/basic/keytab_def.html">MIT
     * Kerberos Documentation: Keytab</a>.</p> </li> <li> <p>
     * <code>KAFKA_SASL_GSSAPI_KRB5_CONF</code> - The S3 location of a Kerberos
     * <code>krb5.conf</code> file. A krb5.conf stores Kerberos configuration
     * information, such as the location of the KDC server. For more information, see
     * <a
     * href="https://web.mit.edu/kerberos/krb5-1.12/doc/admin/conf_files/krb5_conf.html">MIT
     * Kerberos Documentation: krb5.conf</a>.</p> </li> <li> <p>
     * <code>KAFKA_SASL_GSSAPI_SERVICE</code> - The Kerberos service name, as set with
     * <code>sasl.kerberos.service.name</code> in your <a
     * href="https://kafka.apache.org/documentation/#brokerconfigs_sasl.kerberos.service.name">Kafka
     * Configuration</a>.</p> </li> <li> <p> <code>KAFKA_SASL_GSSAPI_PRINCIPAL</code> -
     * The name of the Kerberos princial used by Glue. For more information, see <a
     * href="https://kafka.apache.org/documentation/#security_sasl_kerberos_clientconfig">Kafka
     * Documentation: Configuring Kafka Brokers</a>.</p> </li> <li> <p>
     * <code>ROLE_ARN</code> - The role to be used for running queries.</p> </li> <li>
     * <p> <code>REGION</code> - The Amazon Web Services Region where queries will be
     * run.</p> </li> <li> <p> <code>WORKGROUP_NAME</code> - The name of an Amazon
     * Redshift serverless workgroup or Amazon Athena workgroup in which queries will
     * run.</p> </li> <li> <p> <code>CLUSTER_IDENTIFIER</code> - The cluster identifier
     * of an Amazon Redshift cluster in which queries will run.</p> </li> <li> <p>
     * <code>DATABASE</code> - The Amazon Redshift database that you are connecting
     * to.</p> </li> </ul>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<ConnectionPropertyKey, Aws::String>>
    Connection& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    inline Connection& AddConnectionProperties(ConnectionPropertyKey key, Aws::String value) {
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
    Connection& WithSparkProperties(SparkPropertiesT&& value) { SetSparkProperties(std::forward<SparkPropertiesT>(value)); return *this;}
    template<typename SparkPropertiesKeyT = Aws::String, typename SparkPropertiesValueT = Aws::String>
    Connection& AddSparkProperties(SparkPropertiesKeyT&& key, SparkPropertiesValueT&& value) {
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
    Connection& WithAthenaProperties(AthenaPropertiesT&& value) { SetAthenaProperties(std::forward<AthenaPropertiesT>(value)); return *this;}
    template<typename AthenaPropertiesKeyT = Aws::String, typename AthenaPropertiesValueT = Aws::String>
    Connection& AddAthenaProperties(AthenaPropertiesKeyT&& key, AthenaPropertiesValueT&& value) {
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
    Connection& WithPythonProperties(PythonPropertiesT&& value) { SetPythonProperties(std::forward<PythonPropertiesT>(value)); return *this;}
    template<typename PythonPropertiesKeyT = Aws::String, typename PythonPropertiesValueT = Aws::String>
    Connection& AddPythonProperties(PythonPropertiesKeyT&& key, PythonPropertiesValueT&& value) {
      m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::forward<PythonPropertiesKeyT>(key), std::forward<PythonPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements, such as virtual private cloud (VPC) and
     * <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const { return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    void SetPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::forward<PhysicalConnectionRequirementsT>(value); }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    Connection& WithPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { SetPhysicalConnectionRequirements(std::forward<PhysicalConnectionRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time that this connection definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Connection& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last time the connection definition was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Connection& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    Connection& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connection. Can be one of: <code>READY</code>,
     * <code>IN_PROGRESS</code>, or <code>FAILED</code>.</p>
     */
    inline ConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Connection& WithStatus(ConnectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the connection status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Connection& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the time this connection was last validated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionValidationTime() const { return m_lastConnectionValidationTime; }
    inline bool LastConnectionValidationTimeHasBeenSet() const { return m_lastConnectionValidationTimeHasBeenSet; }
    template<typename LastConnectionValidationTimeT = Aws::Utils::DateTime>
    void SetLastConnectionValidationTime(LastConnectionValidationTimeT&& value) { m_lastConnectionValidationTimeHasBeenSet = true; m_lastConnectionValidationTime = std::forward<LastConnectionValidationTimeT>(value); }
    template<typename LastConnectionValidationTimeT = Aws::Utils::DateTime>
    Connection& WithLastConnectionValidationTime(LastConnectionValidationTimeT&& value) { SetLastConnectionValidationTime(std::forward<LastConnectionValidationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication properties of the connection.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    Connection& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the connection schema for this connection. Version 2 supports
     * properties for specific compute environments.</p>
     */
    inline int GetConnectionSchemaVersion() const { return m_connectionSchemaVersion; }
    inline bool ConnectionSchemaVersionHasBeenSet() const { return m_connectionSchemaVersionHasBeenSet; }
    inline void SetConnectionSchemaVersion(int value) { m_connectionSchemaVersionHasBeenSet = true; m_connectionSchemaVersion = value; }
    inline Connection& WithConnectionSchemaVersion(int value) { SetConnectionSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of compute environments compatible with the connection.</p>
     */
    inline const Aws::Vector<ComputeEnvironment>& GetCompatibleComputeEnvironments() const { return m_compatibleComputeEnvironments; }
    inline bool CompatibleComputeEnvironmentsHasBeenSet() const { return m_compatibleComputeEnvironmentsHasBeenSet; }
    template<typename CompatibleComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    void SetCompatibleComputeEnvironments(CompatibleComputeEnvironmentsT&& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments = std::forward<CompatibleComputeEnvironmentsT>(value); }
    template<typename CompatibleComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    Connection& WithCompatibleComputeEnvironments(CompatibleComputeEnvironmentsT&& value) { SetCompatibleComputeEnvironments(std::forward<CompatibleComputeEnvironmentsT>(value)); return *this;}
    inline Connection& AddCompatibleComputeEnvironments(ComputeEnvironment value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments.push_back(value); return *this; }
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    ConnectionStatus m_status{ConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectionValidationTime{};
    bool m_lastConnectionValidationTimeHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    int m_connectionSchemaVersion{0};
    bool m_connectionSchemaVersionHasBeenSet = false;

    Aws::Vector<ComputeEnvironment> m_compatibleComputeEnvironments;
    bool m_compatibleComputeEnvironmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
