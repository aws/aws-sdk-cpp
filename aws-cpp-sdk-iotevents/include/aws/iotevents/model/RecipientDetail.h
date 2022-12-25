/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/SSOIdentity.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>The information that identifies the recipient.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/RecipientDetail">AWS
   * API Reference</a></p>
   */
  class RecipientDetail
  {
  public:
    AWS_IOTEVENTS_API RecipientDetail();
    AWS_IOTEVENTS_API RecipientDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API RecipientDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline const SSOIdentity& GetSsoIdentity() const{ return m_ssoIdentity; }

    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline bool SsoIdentityHasBeenSet() const { return m_ssoIdentityHasBeenSet; }

    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline void SetSsoIdentity(const SSOIdentity& value) { m_ssoIdentityHasBeenSet = true; m_ssoIdentity = value; }

    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline void SetSsoIdentity(SSOIdentity&& value) { m_ssoIdentityHasBeenSet = true; m_ssoIdentity = std::move(value); }

    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline RecipientDetail& WithSsoIdentity(const SSOIdentity& value) { SetSsoIdentity(value); return *this;}

    /**
     * <p>The AWS Single Sign-On (AWS SSO) authentication information.</p>
     */
    inline RecipientDetail& WithSsoIdentity(SSOIdentity&& value) { SetSsoIdentity(std::move(value)); return *this;}

  private:

    SSOIdentity m_ssoIdentity;
    bool m_ssoIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
