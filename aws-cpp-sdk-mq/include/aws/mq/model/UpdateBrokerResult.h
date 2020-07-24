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
  class AWS_MQ_API UpdateBrokerResult
  {
  public:
    UpdateBrokerResult();
    UpdateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The authentication strategy used to secure the broker.
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline UpdateBrokerResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * The authentication strategy used to secure the broker.
     */
    inline UpdateBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * The new value of automatic upgrades to new minor version for brokers.
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * The new value of automatic upgrades to new minor version for brokers.
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }

    /**
     * The new value of automatic upgrades to new minor version for brokers.
     */
    inline UpdateBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * The ID of the updated configuration.
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * The ID of the updated configuration.
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configuration = value; }

    /**
     * The ID of the updated configuration.
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configuration = std::move(value); }

    /**
     * The ID of the updated configuration.
     */
    inline UpdateBrokerResult& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * The ID of the updated configuration.
     */
    inline UpdateBrokerResult& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline void SetLdapServerMetadata(const LdapServerMetadataOutput& value) { m_ldapServerMetadata = value; }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline void SetLdapServerMetadata(LdapServerMetadataOutput&& value) { m_ldapServerMetadata = std::move(value); }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline UpdateBrokerResult& WithLdapServerMetadata(const LdapServerMetadataOutput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline UpdateBrokerResult& WithLdapServerMetadata(LdapServerMetadataOutput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


    /**
     * The list of information about logs to be enabled for the specified broker.
     */
    inline const Logs& GetLogs() const{ return m_logs; }

    /**
     * The list of information about logs to be enabled for the specified broker.
     */
    inline void SetLogs(const Logs& value) { m_logs = value; }

    /**
     * The list of information about logs to be enabled for the specified broker.
     */
    inline void SetLogs(Logs&& value) { m_logs = std::move(value); }

    /**
     * The list of information about logs to be enabled for the specified broker.
     */
    inline UpdateBrokerResult& WithLogs(const Logs& value) { SetLogs(value); return *this;}

    /**
     * The list of information about logs to be enabled for the specified broker.
     */
    inline UpdateBrokerResult& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
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

    Aws::Vector<Aws::String> m_securityGroups;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
