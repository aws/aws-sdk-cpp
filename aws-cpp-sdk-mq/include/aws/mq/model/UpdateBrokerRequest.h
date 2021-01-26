/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/LdapServerMetadataInput.h>
#include <aws/mq/model/Logs.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * Updates the broker using the specified properties.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBrokerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API UpdateBrokerRequest : public MQRequest
  {
  public:
    UpdateBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBroker"; }

    Aws::String SerializePayload() const override;


    /**
     * The authentication strategy used to secure the broker.
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::move(value); }

    /**
     * The authentication strategy used to secure the broker.
     */
    inline UpdateBrokerRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * The authentication strategy used to secure the broker.
     */
    inline UpdateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * Enables automatic upgrades to new minor versions for brokers, as Apache releases
     * the versions. The automatic upgrades occur during the maintenance window of the
     * broker or after a manual broker reboot.
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * Enables automatic upgrades to new minor versions for brokers, as Apache releases
     * the versions. The automatic upgrades occur during the maintenance window of the
     * broker or after a manual broker reboot.
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * Enables automatic upgrades to new minor versions for brokers, as Apache releases
     * the versions. The automatic upgrades occur during the maintenance window of the
     * broker or after a manual broker reboot.
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * Enables automatic upgrades to new minor versions for brokers, as Apache releases
     * the versions. The automatic upgrades occur during the maintenance window of the
     * broker or after a manual broker reboot.
     */
    inline UpdateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * A list of information about the configuration.
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * A list of information about the configuration.
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * A list of information about the configuration.
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * A list of information about the configuration.
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * A list of information about the configuration.
     */
    inline UpdateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * A list of information about the configuration.
     */
    inline UpdateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline UpdateBrokerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


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
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * The host instance type of the broker to upgrade to. For a list of supported
     * instance types, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide//broker.html#broker-instance-types
     */
    inline UpdateBrokerRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline const LdapServerMetadataInput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline void SetLdapServerMetadata(const LdapServerMetadataInput& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = value; }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline void SetLdapServerMetadata(LdapServerMetadataInput&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::move(value); }

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline UpdateBrokerRequest& WithLdapServerMetadata(const LdapServerMetadataInput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline UpdateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataInput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline const Logs& GetLogs() const{ return m_logs; }

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline void SetLogs(const Logs& value) { m_logsHasBeenSet = true; m_logs = value; }

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline void SetLogs(Logs&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline UpdateBrokerRequest& WithLogs(const Logs& value) { SetLogs(value); return *this;}

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline UpdateBrokerRequest& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline UpdateBrokerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

  private:

    AuthenticationStrategy m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet;

    LdapServerMetadataInput m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet;

    Logs m_logs;
    bool m_logsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
