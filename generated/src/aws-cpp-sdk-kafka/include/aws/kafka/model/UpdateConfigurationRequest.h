/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateConfigurationRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateConfigurationRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateConfigurationRequest& WithServerProperties(ServerPropertiesT&& value) { SetServerProperties(std::forward<ServerPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverProperties{};
    bool m_serverPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
