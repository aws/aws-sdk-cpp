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
   * <p>The input for the <a>StopConfigurationRecorder</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API StopConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    StopConfigurationRecorderRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline const Aws::String& GetConfigurationRecorderName() const{ return m_configurationRecorderName; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(const Aws::String& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(Aws::String&& value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName = value; }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorderName(const char* value) { m_configurationRecorderNameHasBeenSet = true; m_configurationRecorderName.assign(value); }

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(const Aws::String& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(Aws::String&& value) { SetConfigurationRecorderName(value); return *this;}

    /**
     * <p>The name of the recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline StopConfigurationRecorderRequest& WithConfigurationRecorderName(const char* value) { SetConfigurationRecorderName(value); return *this;}

  private:
    Aws::String m_configurationRecorderName;
    bool m_configurationRecorderNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
