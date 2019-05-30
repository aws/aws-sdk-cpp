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
#include <aws/pinpoint-email/model/TlsPolicy.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to associate a configuration set with a dedicated IP
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetDeliveryOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutConfigurationSetDeliveryOptionsRequest : public PinpointEmailRequest
  {
  public:
    PutConfigurationSetDeliveryOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetDeliveryOptions"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to associate with a dedicated
     * IP pool.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Whether Amazon Pinpoint should require that incoming email is delivered over
     * a connection encrypted with Transport Layer Security (TLS).</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const{ return m_sendingPoolName; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const Aws::String& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = value; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(Aws::String&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const char* value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline PutConfigurationSetDeliveryOptionsRequest& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
