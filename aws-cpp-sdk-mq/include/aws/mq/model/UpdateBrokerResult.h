/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MQ
{
namespace Model
{
  class UpdateBrokerResult
  {
  public:
    AWS_MQ_API UpdateBrokerResult();
    AWS_MQ_API UpdateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API UpdateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline UpdateBrokerResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline UpdateBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>The new boolean value that specifies whether broker engines automatically
     * upgrade to new minor versions as new versions are released and supported by
     * Amazon MQ.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>The new boolean value that specifies whether broker engines automatically
     * upgrade to new minor versions as new versions are released and supported by
     * Amazon MQ.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }

    /**
     * <p>The new boolean value that specifies whether broker engines automatically
     * upgrade to new minor versions as new versions are released and supported by
     * Amazon MQ.</p>
     */
    inline UpdateBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configuration = value; }

    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configuration = std::move(value); }

    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline UpdateBrokerResult& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline UpdateBrokerResult& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The broker engine version to upgrade to. For a list of supported engine
     * versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetLdapServerMetadata(const LdapServerMetadataOutput& value) { m_ldapServerMetadata = value; }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetLdapServerMetadata(LdapServerMetadataOutput&& value) { m_ldapServerMetadata = std::move(value); }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline UpdateBrokerResult& WithLdapServerMetadata(const LdapServerMetadataOutput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline UpdateBrokerResult& WithLdapServerMetadata(LdapServerMetadataOutput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline const Logs& GetLogs() const{ return m_logs; }

    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline void SetLogs(const Logs& value) { m_logs = value; }

    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline void SetLogs(Logs&& value) { m_logs = std::move(value); }

    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline UpdateBrokerResult& WithLogs(const Logs& value) { SetLogs(value); return *this;}

    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline UpdateBrokerResult& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTime = value; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTime = std::move(value); }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline UpdateBrokerResult& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline UpdateBrokerResult& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}


    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }

  private:

    AuthenticationStrategy m_authenticationStrategy;

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerId;

    ConfigurationId m_configuration;

    Aws::String m_engineVersion;

    Aws::String m_hostInstanceType;

    LdapServerMetadataOutput m_ldapServerMetadata;

    Logs m_logs;

    WeeklyStartTime m_maintenanceWindowStartTime;

    Aws::Vector<Aws::String> m_securityGroups;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
