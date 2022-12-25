/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/ConfigurationSet.h>
#include <utility>

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
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetRequest : public SESRequest
  {
  public:
    AWS_SES_API CreateConfigurationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSet"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline const ConfigurationSet& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline void SetConfigurationSet(const ConfigurationSet& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline void SetConfigurationSet(ConfigurationSet&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSet(const ConfigurationSet& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>A data structure that contains the name of the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSet(ConfigurationSet&& value) { SetConfigurationSet(std::move(value)); return *this;}

  private:

    ConfigurationSet m_configurationSet;
    bool m_configurationSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
