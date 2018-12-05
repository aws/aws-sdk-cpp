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
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/Logs.h>
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

  private:

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerId;

    ConfigurationId m_configuration;

    Aws::String m_engineVersion;

    Logs m_logs;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
