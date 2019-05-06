/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/Logs.h>
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
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline UpdateBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline UpdateBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
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

  private:

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Logs m_logs;
    bool m_logsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
