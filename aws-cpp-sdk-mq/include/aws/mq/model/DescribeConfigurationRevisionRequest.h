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
  class AWS_MQ_API DescribeConfigurationRevisionRequest : public MQRequest
  {
  public:
    DescribeConfigurationRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRevision"; }

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
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * The revision of the configuration.
     */
    inline const Aws::String& GetConfigurationRevision() const{ return m_configurationRevision; }

    /**
     * The revision of the configuration.
     */
    inline bool ConfigurationRevisionHasBeenSet() const { return m_configurationRevisionHasBeenSet; }

    /**
     * The revision of the configuration.
     */
    inline void SetConfigurationRevision(const Aws::String& value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = value; }

    /**
     * The revision of the configuration.
     */
    inline void SetConfigurationRevision(Aws::String&& value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = std::move(value); }

    /**
     * The revision of the configuration.
     */
    inline void SetConfigurationRevision(const char* value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision.assign(value); }

    /**
     * The revision of the configuration.
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(const Aws::String& value) { SetConfigurationRevision(value); return *this;}

    /**
     * The revision of the configuration.
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(Aws::String&& value) { SetConfigurationRevision(std::move(value)); return *this;}

    /**
     * The revision of the configuration.
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(const char* value) { SetConfigurationRevision(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet;

    Aws::String m_configurationRevision;
    bool m_configurationRevisionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
