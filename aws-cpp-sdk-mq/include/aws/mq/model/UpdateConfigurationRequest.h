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
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * Updates the specified configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API UpdateConfigurationRequest : public MQRequest
  {
  public:
    UpdateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline UpdateConfigurationRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline UpdateConfigurationRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline UpdateConfigurationRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * Required. The base64-encoded XML configuration.
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline UpdateConfigurationRequest& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline UpdateConfigurationRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * Required. The base64-encoded XML configuration.
     */
    inline UpdateConfigurationRequest& WithData(const char* value) { SetData(value); return *this;}


    /**
     * The description of the configuration.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the configuration.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the configuration.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the configuration.
     */
    inline UpdateConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the configuration.
     */
    inline UpdateConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the configuration.
     */
    inline UpdateConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet;

    Aws::String m_data;
    bool m_dataHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
