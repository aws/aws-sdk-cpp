/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityType.h>
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
   * <p>Information about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/IdentityInfo">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API IdentityInfo
  {
  public:
    IdentityInfo();
    IdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    IdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline IdentityInfo& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> type is not
     * supported for email identity types.</p>
     */
    inline IdentityInfo& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The address or domain of the identity.</p>
     */
    inline const Aws::String& GetIdentityName() const{ return m_identityName; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(const Aws::String& value) { m_identityNameHasBeenSet = true; m_identityName = value; }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(Aws::String&& value) { m_identityNameHasBeenSet = true; m_identityName = std::move(value); }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline void SetIdentityName(const char* value) { m_identityNameHasBeenSet = true; m_identityName.assign(value); }

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(const Aws::String& value) { SetIdentityName(value); return *this;}

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(Aws::String&& value) { SetIdentityName(std::move(value)); return *this;}

    /**
     * <p>The address or domain of the identity.</p>
     */
    inline IdentityInfo& WithIdentityName(const char* value) { SetIdentityName(value); return *this;}


    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>An
     * <i>identity</i> is an email address or domain that you send email from. Before
     * you can send email from an identity, you have to demostrate that you own the
     * identity, and that you authorize Amazon SES to send email from that
     * identity.</p>
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>An
     * <i>identity</i> is an email address or domain that you send email from. Before
     * you can send email from an identity, you have to demostrate that you own the
     * identity, and that you authorize Amazon SES to send email from that
     * identity.</p>
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>An
     * <i>identity</i> is an email address or domain that you send email from. Before
     * you can send email from an identity, you have to demostrate that you own the
     * identity, and that you authorize Amazon SES to send email from that
     * identity.</p>
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>Indicates whether or not you can send email from the identity.</p> <p>An
     * <i>identity</i> is an email address or domain that you send email from. Before
     * you can send email from an identity, you have to demostrate that you own the
     * identity, and that you authorize Amazon SES to send email from that
     * identity.</p>
     */
    inline IdentityInfo& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet = false;

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
