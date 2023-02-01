/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class CreateWorkerConfigurationRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API CreateWorkerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkerConfiguration"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline CreateWorkerConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline const Aws::String& GetPropertiesFileContent() const{ return m_propertiesFileContent; }

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline bool PropertiesFileContentHasBeenSet() const { return m_propertiesFileContentHasBeenSet; }

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(const Aws::String& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = value; }

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(Aws::String&& value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent = std::move(value); }

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline void SetPropertiesFileContent(const char* value) { m_propertiesFileContentHasBeenSet = true; m_propertiesFileContent.assign(value); }

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(const Aws::String& value) { SetPropertiesFileContent(value); return *this;}

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(Aws::String&& value) { SetPropertiesFileContent(std::move(value)); return *this;}

    /**
     * <p>Base64 encoded contents of connect-distributed.properties file.</p>
     */
    inline CreateWorkerConfigurationRequest& WithPropertiesFileContent(const char* value) { SetPropertiesFileContent(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_propertiesFileContent;
    bool m_propertiesFileContentHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
