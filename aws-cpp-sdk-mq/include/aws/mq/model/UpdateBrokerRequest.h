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
#include <aws/mq/model/ConfigurationId.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * Updates the broker using the specified properties.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBrokerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API UpdateBrokerRequest : public MQRequest
  {
  public:
    UpdateBrokerRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBroker"; }

    Aws::String SerializePayload() const override;


    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline UpdateBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline UpdateBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline UpdateBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * A list of information about the configuration.
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * A list of information about the configuration.
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * A list of information about the configuration.
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * A list of information about the configuration.
     */
    inline UpdateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * A list of information about the configuration.
     */
    inline UpdateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
