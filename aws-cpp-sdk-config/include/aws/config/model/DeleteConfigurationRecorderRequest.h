/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The request object for the <code>DeleteConfigurationRecorder</code>
   * action.</p>
   */
  class AWS_CONFIGSERVICE_API DeleteConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    DeleteConfigurationRecorderRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline const Aws::String& GetConfigurationRecorderName() const{ return m_configurationRecorderName; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(const Aws::String& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(Aws::String&& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline void SetConfigurationRecorderName(const char* value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName.assign(value); }

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(const Aws::String& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(Aws::String&& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the configuration recorder to be deleted. You can retrieve the
     * name of your configuration recorder by using the
     * <code>DescribeConfigurationRecorders</code> action.</p>
     */
    inline DeleteConfigurationRecorderRequest& WithConfigurationRecorderName(const char* value) { SetConfigurationRecorderName(value); return *this;}

  private:
    Aws::String m_configurationRecorderName;
    bool m_configurationRecorderNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
