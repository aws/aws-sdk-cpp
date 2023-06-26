/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationRevision.h>
#include <aws/kafka/model/ConfigurationState.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Represents an MSK Configuration.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Configuration">AWS
   * API Reference</a></p>
   */
  class Configuration
  {
  public:
    AWS_KAFKA_API Configuration();
    AWS_KAFKA_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline Configuration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline Configuration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline Configuration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline Configuration& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline Configuration& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline Configuration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline Configuration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline Configuration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const{ return m_kafkaVersions; }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline bool KafkaVersionsHasBeenSet() const { return m_kafkaVersionsHasBeenSet; }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline void SetKafkaVersions(const Aws::Vector<Aws::String>& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = value; }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline void SetKafkaVersions(Aws::Vector<Aws::String>&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = std::move(value); }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline Configuration& WithKafkaVersions(const Aws::Vector<Aws::String>& value) { SetKafkaVersions(value); return *this;}

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline Configuration& WithKafkaVersions(Aws::Vector<Aws::String>&& value) { SetKafkaVersions(std::move(value)); return *this;}

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline Configuration& AddKafkaVersions(const Aws::String& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(value); return *this; }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline Configuration& AddKafkaVersions(Aws::String&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>An array of the versions of Apache Kafka with which you can use
     * this MSK configuration. You can use this configuration for an MSK cluster only
     * if the Apache Kafka version specified for the cluster appears in this
     * array.</p>
         
     */
    inline Configuration& AddKafkaVersions(const char* value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(value); return *this; }


    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = value; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::move(value); }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline Configuration& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline Configuration& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline Configuration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline Configuration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline Configuration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline const ConfigurationState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(const ConfigurationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(ConfigurationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline Configuration& WithState(const ConfigurationState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline Configuration& WithState(ConfigurationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_kafkaVersions;
    bool m_kafkaVersionsHasBeenSet = false;

    ConfigurationRevision m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigurationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
