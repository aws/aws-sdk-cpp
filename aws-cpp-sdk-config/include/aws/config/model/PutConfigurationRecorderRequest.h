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
#include <aws/config/model/ConfigurationRecorder.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>PutConfigurationRecorder</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API PutConfigurationRecorderRequest : public ConfigServiceRequest
  {
  public:
    PutConfigurationRecorderRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The configuration recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline const ConfigurationRecorder& GetConfigurationRecorder() const{ return m_configurationRecorder; }

    /**
     * <p>The configuration recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorder(const ConfigurationRecorder& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = value; }

    /**
     * <p>The configuration recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline void SetConfigurationRecorder(ConfigurationRecorder&& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = value; }

    /**
     * <p>The configuration recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(const ConfigurationRecorder& value) { SetConfigurationRecorder(value); return *this;}

    /**
     * <p>The configuration recorder object that records each configuration change made
     * to the resources.</p>
     */
    inline PutConfigurationRecorderRequest& WithConfigurationRecorder(ConfigurationRecorder&& value) { SetConfigurationRecorder(value); return *this;}

  private:
    ConfigurationRecorder m_configurationRecorder;
    bool m_configurationRecorderHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
