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
#include <aws/pinpoint-email/model/TlsPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Used to associate a configuration set with a dedicated IP pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeliveryOptions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DeliveryOptions
  {
  public:
    DeliveryOptions();
    DeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    DeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Specifies whether Amazon Pinpoint should require that incoming email is
     * delivered over a connection that’s encrypted by using Transport Layer Security
     * (TLS). If this value is set to <code>Require</code>, Amazon Pinpoint will bounce
     * email messages that cannot be delivered over TLS. The default value is
     * <code>Optional</code>.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}


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
    inline DeliveryOptions& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}

  private:

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
