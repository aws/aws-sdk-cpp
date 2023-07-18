﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/TlsPolicy.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Used to associate a configuration set with a dedicated IP pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeliveryOptions">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API DeliveryOptions
  {
  public:
    DeliveryOptions();
    DeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    DeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const{ return m_sendingPoolName; }

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline void SetSendingPoolName(const Aws::String& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = value; }

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline void SetSendingPoolName(Aws::String&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline void SetSendingPoolName(const char* value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool to associate with the configuration
     * set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}

  private:

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet;

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
