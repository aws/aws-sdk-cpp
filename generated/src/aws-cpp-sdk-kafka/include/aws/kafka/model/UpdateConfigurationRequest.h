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
    AWS_KAFKA_API UpdateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


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
    inline UpdateConfigurationRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConfigurationRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConfigurationRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline UpdateConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline UpdateConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * 
            <p>The description of the configuration revision.</p>
         
     */
    inline UpdateConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline bool ServerPropertiesHasBeenSet() const { return m_serverPropertiesHasBeenSet; }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline void SetServerProperties(const Aws::Utils::ByteBuffer& value) { m_serverPropertiesHasBeenSet = true; m_serverProperties = value; }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline void SetServerProperties(Aws::Utils::ByteBuffer&& value) { m_serverPropertiesHasBeenSet = true; m_serverProperties = std::move(value); }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline UpdateConfigurationRequest& WithServerProperties(const Aws::Utils::ByteBuffer& value) { SetServerProperties(value); return *this;}

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline UpdateConfigurationRequest& WithServerProperties(Aws::Utils::ByteBuffer&& value) { SetServerProperties(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_serverProperties;
    bool m_serverPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
