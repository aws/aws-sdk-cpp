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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to add a custom domain for tracking open and click events to a
   * configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetTrackingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutConfigurationSetTrackingOptionsRequest : public PinpointEmailRequest
  {
  public:
    PutConfigurationSetTrackingOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetTrackingOptions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to add a custom tracking
     * domain to.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline const Aws::String& GetCustomRedirectDomain() const{ return m_customRedirectDomain; }

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline bool CustomRedirectDomainHasBeenSet() const { return m_customRedirectDomainHasBeenSet; }

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const Aws::String& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = value; }

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline void SetCustomRedirectDomain(Aws::String&& value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain = std::move(value); }

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline void SetCustomRedirectDomain(const char* value) { m_customRedirectDomainHasBeenSet = true; m_customRedirectDomain.assign(value); }

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithCustomRedirectDomain(const Aws::String& value) { SetCustomRedirectDomain(value); return *this;}

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithCustomRedirectDomain(Aws::String&& value) { SetCustomRedirectDomain(std::move(value)); return *this;}

    /**
     * <p>The domain that you want to use to track open and click events.</p>
     */
    inline PutConfigurationSetTrackingOptionsRequest& WithCustomRedirectDomain(const char* value) { SetCustomRedirectDomain(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    Aws::String m_customRedirectDomain;
    bool m_customRedirectDomainHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
