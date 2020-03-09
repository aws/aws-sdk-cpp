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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes an Apache Kafka endpoint. This
   * information includes the output format of records applied to the endpoint and
   * details of transaction and control table data information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KafkaSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API KafkaSettings
  {
  public:
    KafkaSettings();
    KafkaSettings(Aws::Utils::Json::JsonView jsonValue);
    KafkaSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline const Aws::String& GetBroker() const{ return m_broker; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline bool BrokerHasBeenSet() const { return m_brokerHasBeenSet; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(const Aws::String& value) { m_brokerHasBeenSet = true; m_broker = value; }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(Aws::String&& value) { m_brokerHasBeenSet = true; m_broker = std::move(value); }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline void SetBroker(const char* value) { m_brokerHasBeenSet = true; m_broker.assign(value); }

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(const Aws::String& value) { SetBroker(value); return *this;}

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(Aws::String&& value) { SetBroker(std::move(value)); return *this;}

    /**
     * <p>The broker location and port of the Kafka broker that hosts your Kafka
     * instance. Specify the broker in the form <code>
     * <i>broker-hostname-or-ip</i>:<i>port</i> </code>. For example,
     * <code>"ec2-12-345-678-901.compute-1.amazonaws.com:2345"</code>.</p>
     */
    inline KafkaSettings& WithBroker(const char* value) { SetBroker(value); return *this;}


    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic to which you migrate the data. If you don't specify a topic, AWS
     * DMS specifies <code>"kafka-default-topic"</code> as the migration topic.</p>
     */
    inline KafkaSettings& WithTopic(const char* value) { SetTopic(value); return *this;}

  private:

    Aws::String m_broker;
    bool m_brokerHasBeenSet;

    Aws::String m_topic;
    bool m_topicHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
