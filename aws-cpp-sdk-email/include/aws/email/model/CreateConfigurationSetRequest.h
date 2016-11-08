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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/ConfigurationSet.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create a configuration set. Configuration sets enable
   * you to publish email sending events. For information about using configuration
   * sets, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API CreateConfigurationSetRequest : public SESRequest
  {
  public:
    CreateConfigurationSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline const ConfigurationSet& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline void SetConfigurationSet(const ConfigurationSet& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline void SetConfigurationSet(ConfigurationSet&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSet(const ConfigurationSet& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSet(ConfigurationSet&& value) { SetConfigurationSet(value); return *this;}

  private:
    ConfigurationSet m_configurationSet;
    bool m_configurationSetHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
