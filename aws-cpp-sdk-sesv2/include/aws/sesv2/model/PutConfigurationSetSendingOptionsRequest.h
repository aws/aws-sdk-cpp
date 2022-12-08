/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to enable or disable the ability of Amazon SES to send emails that
   * use a specific configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetSendingOptionsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutConfigurationSetSendingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetSendingOptions"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline PutConfigurationSetSendingOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline PutConfigurationSetSendingOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to enable or disable email sending for.</p>
     */
    inline PutConfigurationSetSendingOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline PutConfigurationSetSendingOptionsRequest& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
