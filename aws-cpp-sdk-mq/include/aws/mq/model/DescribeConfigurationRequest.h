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
   */
  class AWS_MQ_API DescribeConfigurationRequest : public MQRequest
  {
  public:
    DescribeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfiguration"; }

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
    inline DescribeConfigurationRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
