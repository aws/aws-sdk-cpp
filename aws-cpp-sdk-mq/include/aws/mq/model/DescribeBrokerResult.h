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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/mq/model/Configurations.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/LogsSummary.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mq/model/BrokerInstance.h>
#include <aws/mq/model/UserSummary.h>
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
  class AWS_MQ_API DescribeBrokerResult
  {
  public:
    DescribeBrokerResult();
    DescribeBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }

    /**
     * Required. Enables automatic upgrades to new minor versions for brokers, as
     * Apache releases the versions. The automatic upgrades occur during the
     * maintenance window of the broker or after a manual broker reboot.
     */
    inline DescribeBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const char* value) { m_brokerArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline DescribeBrokerResult& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline DescribeBrokerResult& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline DescribeBrokerResult& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline DescribeBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * A list of information about allocated brokers.
     */
    inline const Aws::Vector<BrokerInstance>& GetBrokerInstances() const{ return m_brokerInstances; }

    /**
     * A list of information about allocated brokers.
     */
    inline void SetBrokerInstances(const Aws::Vector<BrokerInstance>& value) { m_brokerInstances = value; }

    /**
     * A list of information about allocated brokers.
     */
    inline void SetBrokerInstances(Aws::Vector<BrokerInstance>&& value) { m_brokerInstances = std::move(value); }

    /**
     * A list of information about allocated brokers.
     */
    inline DescribeBrokerResult& WithBrokerInstances(const Aws::Vector<BrokerInstance>& value) { SetBrokerInstances(value); return *this;}

    /**
     * A list of information about allocated brokers.
     */
    inline DescribeBrokerResult& WithBrokerInstances(Aws::Vector<BrokerInstance>&& value) { SetBrokerInstances(std::move(value)); return *this;}

    /**
     * A list of information about allocated brokers.
     */
    inline DescribeBrokerResult& AddBrokerInstances(const BrokerInstance& value) { m_brokerInstances.push_back(value); return *this; }

    /**
     * A list of information about allocated brokers.
     */
    inline DescribeBrokerResult& AddBrokerInstances(BrokerInstance&& value) { m_brokerInstances.push_back(std::move(value)); return *this; }


    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(const Aws::String& value) { m_brokerName = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(Aws::String&& value) { m_brokerName = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(const char* value) { m_brokerName.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerResult& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerResult& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline DescribeBrokerResult& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}


    /**
     * The status of the broker.
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }

    /**
     * The status of the broker.
     */
    inline void SetBrokerState(const BrokerState& value) { m_brokerState = value; }

    /**
     * The status of the broker.
     */
    inline void SetBrokerState(BrokerState&& value) { m_brokerState = std::move(value); }

    /**
     * The status of the broker.
     */
    inline DescribeBrokerResult& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}

    /**
     * The status of the broker.
     */
    inline DescribeBrokerResult& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}


    /**
     * The list of all revisions for the specified configuration.
     */
    inline const Configurations& GetConfigurations() const{ return m_configurations; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetConfigurations(const Configurations& value) { m_configurations = value; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetConfigurations(Configurations&& value) { m_configurations = std::move(value); }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline DescribeBrokerResult& WithConfigurations(const Configurations& value) { SetConfigurations(value); return *this;}

    /**
     * The list of all revisions for the specified configuration.
     */
    inline DescribeBrokerResult& WithConfigurations(Configurations&& value) { SetConfigurations(std::move(value)); return *this;}


    /**
     * The time when the broker was created.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * The time when the broker was created.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * The time when the broker was created.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * The time when the broker was created.
     */
    inline DescribeBrokerResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * The time when the broker was created.
     */
    inline DescribeBrokerResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The deployment mode of the broker.
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentMode = value; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentMode = std::move(value); }

    /**
     * Required. The deployment mode of the broker.
     */
    inline DescribeBrokerResult& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}

    /**
     * Required. The deployment mode of the broker.
     */
    inline DescribeBrokerResult& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}


    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline DescribeBrokerResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * Required. The type of broker engine. Note: Currently, Amazon MQ supports only
     * ACTIVEMQ.
     */
    inline DescribeBrokerResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * The version of the broker engine. For a list of supported engine versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * The broker's instance type.
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }

    /**
     * The broker's instance type.
     */
    inline DescribeBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * The broker's instance type.
     */
    inline DescribeBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * The broker's instance type.
     */
    inline DescribeBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * The list of information about logs currently enabled and pending to be deployed
     * for the specified broker.
     */
    inline const LogsSummary& GetLogs() const{ return m_logs; }

    /**
     * The list of information about logs currently enabled and pending to be deployed
     * for the specified broker.
     */
    inline void SetLogs(const LogsSummary& value) { m_logs = value; }

    /**
     * The list of information about logs currently enabled and pending to be deployed
     * for the specified broker.
     */
    inline void SetLogs(LogsSummary&& value) { m_logs = std::move(value); }

    /**
     * The list of information about logs currently enabled and pending to be deployed
     * for the specified broker.
     */
    inline DescribeBrokerResult& WithLogs(const LogsSummary& value) { SetLogs(value); return *this;}

    /**
     * The list of information about logs currently enabled and pending to be deployed
     * for the specified broker.
     */
    inline DescribeBrokerResult& WithLogs(LogsSummary&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTime = value; }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTime = std::move(value); }

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}

    /**
     * The parameters that determine the WeeklyStartTime.
     */
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}


    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline const Aws::String& GetPendingEngineVersion() const{ return m_pendingEngineVersion; }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetPendingEngineVersion(const Aws::String& value) { m_pendingEngineVersion = value; }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetPendingEngineVersion(Aws::String&& value) { m_pendingEngineVersion = std::move(value); }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline void SetPendingEngineVersion(const char* value) { m_pendingEngineVersion.assign(value); }

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(const Aws::String& value) { SetPendingEngineVersion(value); return *this;}

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(Aws::String&& value) { SetPendingEngineVersion(std::move(value)); return *this;}

    /**
     * The version of the broker engine to upgrade to. For a list of supported engine
     * versions, see
     * https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/broker-engine.html
     */
    inline DescribeBrokerResult& WithPendingEngineVersion(const char* value) { SetPendingEngineVersion(value); return *this;}


    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }

    /**
     * Required. Enables connections from applications outside of the VPC that hosts
     * the broker's subnets.
     */
    inline DescribeBrokerResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline DescribeBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline DescribeBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline DescribeBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline DescribeBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * Required. The list of rules (1 minimum, 125 maximum) that authorize connections
     * to brokers.
     */
    inline DescribeBrokerResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }


    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline DescribeBrokerResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline DescribeBrokerResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline DescribeBrokerResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline DescribeBrokerResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * The list of groups (2 maximum) that define which subnets and IP ranges the
     * broker can use from different Availability Zones. A SINGLE_INSTANCE deployment
     * requires one subnet (for example, the default subnet). An
     * ACTIVE_STANDBY_MULTI_AZ deployment requires two subnets.
     */
    inline DescribeBrokerResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * The list of all tags associated with this broker.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The list of all tags associated with this broker.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * The list of all tags associated with this broker.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The list of all tags associated with this broker.
     */
    inline DescribeBrokerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline DescribeBrokerResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline DescribeBrokerResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline DescribeBrokerResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }

    /**
     * The list of all ActiveMQ usernames for the specified broker.
     */
    inline DescribeBrokerResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }

  private:

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerArn;

    Aws::String m_brokerId;

    Aws::Vector<BrokerInstance> m_brokerInstances;

    Aws::String m_brokerName;

    BrokerState m_brokerState;

    Configurations m_configurations;

    Aws::Utils::DateTime m_created;

    DeploymentMode m_deploymentMode;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_hostInstanceType;

    LogsSummary m_logs;

    WeeklyStartTime m_maintenanceWindowStartTime;

    Aws::String m_pendingEngineVersion;

    bool m_publiclyAccessible;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<UserSummary> m_users;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
