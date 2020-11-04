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
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EncryptionOptions.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/LdapServerMetadataInput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mq/model/User.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * Creates a broker using the specified properties.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBrokerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API CreateBrokerRequest : public MQRequest
  {
  public:
    CreateBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBroker"; }

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
    inline CreateBrokerRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * The authentication strategy used to secure the broker.
     */
    inline CreateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * Required. Enables automatic upgrades to new minor versions for brokers, as
     * Apache releases the versions. The automatic upgrades occur during the
     * maintenance window of the broker or after a manual broker reboot.
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * Required. Enables automatic upgrades to new minor versions for brokers, as
     * Apache releases the versions. The automatic upgrades occur during the
     * maintenance window of the broker or after a manual broker reboot.
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * Required. Enables automatic upgrades to new minor versions for brokers, as
     * Apache releases the versions. The automatic upgrades occur during the
     * maintenance window of the broker or after a manual broker reboot.
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * Required. Enables automatic upgrades to new minor versions for brokers, as
     * Apache releases the versions. The automatic upgrades occur during the
     * maintenance window of the broker or after a manual broker reboot.
     */
    inline CreateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline CreateBrokerRequest& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline CreateBrokerRequest& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}

    /**
     * Required. The name of the broker. This value must be unique in your AWS account,
     * 1-50 characters long, must contain only letters, numbers, dashes, and
     * underscores, and must not contain whitespaces, brackets, wildcard characters, or
     * special characters.
     */
    inline CreateBrokerRequest& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}


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
    inline CreateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * A list of information about the configuration.
     */
    inline CreateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline CreateBrokerRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline CreateBrokerRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action. Note: We recommend using a Universally
     * Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.
     */
    inline CreateBrokerRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * Required. The deployment mode of the broker.
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }

    /**
     * Required. The deployment mode of the broker.
     */
    inline CreateBrokerRequest& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}

    /**
     * Required. The deployment mode of the broker.
     */
    inline CreateBrokerRequest& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}


    /**
     * Encryption options for the broker.
     */
    inline const EncryptionOptions& GetEncryptionOptions() const{ return m_encryptionOptions; }

    /**
     * Encryption options for the broker.
     */
    inline bool EncryptionOptionsHasBeenSet() const { return m_encryptionOptionsHasBeenSet; }

    /**
     * Encryption options for the broker.
     */
    inline void SetEncryptionOptions(const EncryptionOptions& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = value; }

    /**
     * Encryption options for the broker.
     */
    inline void SetEncryptionOptions(EncryptionOptions&& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = std::move(value); }

    /**
     * Encryption options for the broker.
     */
    inline CreateBrokerRequest& WithEncryptionOptions(const EncryptionOptions& value) { SetEncryptionOptions(value); return *this;}

    /**
     * Encryption options for the broker.
     */
    inline CreateBrokerRequest& WithEncryptionOptions(EncryptionOptions&& value) { SetEncryptionOptions(std::move(value)); return *this;}


    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline CreateBrokerRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports
     * ACTIVEMQ and RABBITMQ.
     */
    inline CreateBrokerRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline CreateBrokerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline CreateBrokerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * Required. The version of the broker engine. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline CreateBrokerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * Required. The broker's instance type.
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * Required. The broker's instance type.
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * Required. The broker's instance type.
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * Required. The broker's instance type.
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * Required. The broker's instance type.
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * Required. The broker's instance type.
     */
    inline CreateBrokerRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * Required. The broker's instance type.
     */
    inline CreateBrokerRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * Required. The broker's instance type.
     */
    inline CreateBrokerRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


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
    inline CreateBrokerRequest& WithLdapServerMetadata(const LdapServerMetadataInput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * The metadata of the LDAP server used to authenticate and authorize connections
     * to the broker.
     */
    inline CreateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataInput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


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
    inline CreateBrokerRequest& WithLogs(const Logs& value) { SetLogs(value); return *this;}

    /**
     * Enables Amazon CloudWatch logging for brokers.
     */
    inline CreateBrokerRequest& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = value; }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::move(value); }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline CreateBrokerRequest& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline CreateBrokerRequest& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}


    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline CreateBrokerRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


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
    inline CreateBrokerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline CreateBrokerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline CreateBrokerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline CreateBrokerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * The list of security groups (1 minimum, 5 maximum) that authorizes connections
     * to brokers.
     */
    inline CreateBrokerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * The broker's storage type.
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }

    /**
     * The broker's storage type.
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * The broker's storage type.
     */
    inline void SetStorageType(const BrokerStorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * The broker's storage type.
     */
    inline void SetStorageType(BrokerStorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * The broker's storage type.
     */
    inline CreateBrokerRequest& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}

    /**
     * The broker's storage type.
     */
    inline CreateBrokerRequest& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline CreateBrokerRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline CreateBrokerRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline CreateBrokerRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline CreateBrokerRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. A SINGLE_INSTANCE deployment requires one
     * subnet (for example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ deployment
     * (ACTIVEMQ) requires two subnets. A CLUSTER_MULTI_AZ deployment (RABBITMQ) has no
     * subnet requirements when deployed with public accessibility, deployment without
     * public accessibility requires at least one subnet.
     */
    inline CreateBrokerRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * Create tags when creating the broker.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * Create tags when creating the broker.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * Create tags when creating the broker.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * Create tags when creating the broker.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * Create tags when creating the broker.
     */
    inline CreateBrokerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline void SetUsers(const Aws::Vector<User>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline void SetUsers(Aws::Vector<User>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline CreateBrokerRequest& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline CreateBrokerRequest& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline CreateBrokerRequest& AddUsers(const User& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * Required. The list of broker users (persons or applications) who can access
     * queues and topics. For RabbitMQ brokers, one and only one administrative user is
     * accepted and created when a broker is first provisioned. All subsequent broker
     * users are created by making RabbitMQ API calls directly to brokers or via the
     * RabbitMQ Web Console. This value can contain only alphanumeric characters,
     * dashes, periods, underscores, and tildes (- . _ ~). This value must be 2-100
     * characters long.
     */
    inline CreateBrokerRequest& AddUsers(User&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }

  private:

    AuthenticationStrategy m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet;

    EncryptionOptions m_encryptionOptions;
    bool m_encryptionOptionsHasBeenSet;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet;

    LdapServerMetadataInput m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet;

    Logs m_logs;
    bool m_logsHasBeenSet;

    WeeklyStartTime m_maintenanceWindowStartTime;
    bool m_maintenanceWindowStartTimeHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    BrokerStorageType m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<User> m_users;
    bool m_usersHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
