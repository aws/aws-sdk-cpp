/**
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
    AWS_KAFKA_API CreateConfigurationRequest() = default;

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
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const { return m_kafkaVersions; }
    inline bool KafkaVersionsHasBeenSet() const { return m_kafkaVersionsHasBeenSet; }
    template<typename KafkaVersionsT = Aws::Vector<Aws::String>>
    void SetKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = std::forward<KafkaVersionsT>(value); }
    template<typename KafkaVersionsT = Aws::Vector<Aws::String>>
    CreateConfigurationRequest& WithKafkaVersions(KafkaVersionsT&& value) { SetKafkaVersions(std::forward<KafkaVersionsT>(value)); return *this;}
    template<typename KafkaVersionsT = Aws::String>
    CreateConfigurationRequest& AddKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.emplace_back(std::forward<KafkaVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline const Aws::Utils::ByteBuffer& GetServerProperties() const { return m_serverProperties; }
    inline bool ServerPropertiesHasBeenSet() const { return m_serverPropertiesHasBeenSet; }
    template<typename ServerPropertiesT = Aws::Utils::ByteBuffer>
    void SetServerProperties(ServerPropertiesT&& value) { m_serverPropertiesHasBeenSet = true; m_serverProperties = std::forward<ServerPropertiesT>(value); }
    template<typename ServerPropertiesT = Aws::Utils::ByteBuffer>
    CreateConfigurationRequest& WithServerProperties(ServerPropertiesT&& value) { SetServerProperties(std::forward<ServerPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_kafkaVersions;
    bool m_kafkaVersionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverProperties{};
    bool m_serverPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
