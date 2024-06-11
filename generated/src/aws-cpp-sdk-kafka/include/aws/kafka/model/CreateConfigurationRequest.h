﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class CreateConfigurationRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguration"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const{ return m_kafkaVersions; }
    inline bool KafkaVersionsHasBeenSet() const { return m_kafkaVersionsHasBeenSet; }
    inline void SetKafkaVersions(const Aws::Vector<Aws::String>& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = value; }
    inline void SetKafkaVersions(Aws::Vector<Aws::String>&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = std::move(value); }
    inline CreateConfigurationRequest& WithKafkaVersions(const Aws::Vector<Aws::String>& value) { SetKafkaVersions(value); return *this;}
    inline CreateConfigurationRequest& WithKafkaVersions(Aws::Vector<Aws::String>&& value) { SetKafkaVersions(std::move(value)); return *this;}
    inline CreateConfigurationRequest& AddKafkaVersions(const Aws::String& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(value); return *this; }
    inline CreateConfigurationRequest& AddKafkaVersions(Aws::String&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(std::move(value)); return *this; }
    inline CreateConfigurationRequest& AddKafkaVersions(const char* value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline const Aws::Utils::ByteBuffer& GetServerProperties() const{ return m_serverProperties; }
    inline bool ServerPropertiesHasBeenSet() const { return m_serverPropertiesHasBeenSet; }
    inline void SetServerProperties(const Aws::Utils::ByteBuffer& value) { m_serverPropertiesHasBeenSet = true; m_serverProperties = value; }
    inline void SetServerProperties(Aws::Utils::ByteBuffer&& value) { m_serverPropertiesHasBeenSet = true; m_serverProperties = std::move(value); }
    inline CreateConfigurationRequest& WithServerProperties(const Aws::Utils::ByteBuffer& value) { SetServerProperties(value); return *this;}
    inline CreateConfigurationRequest& WithServerProperties(Aws::Utils::ByteBuffer&& value) { SetServerProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_kafkaVersions;
    bool m_kafkaVersionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverProperties;
    bool m_serverPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
