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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to enable or disable Amazon SES Easy DKIM signing for an
   * identity. For more information about setting up Easy DKIM, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API SetIdentityDkimEnabledRequest : public SESRequest
  {
  public:
    SetIdentityDkimEnabledRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline SetIdentityDkimEnabledRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline SetIdentityDkimEnabledRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity for which DKIM signing should be enabled or disabled.</p>
     */
    inline SetIdentityDkimEnabledRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>Sets whether DKIM signing is enabled for an identity. Set to
     * <code>true</code> to enable DKIM signing for this identity; <code>false</code>
     * to disable it. </p>
     */
    inline bool GetDkimEnabled() const{ return m_dkimEnabled; }

    /**
     * <p>Sets whether DKIM signing is enabled for an identity. Set to
     * <code>true</code> to enable DKIM signing for this identity; <code>false</code>
     * to disable it. </p>
     */
    inline void SetDkimEnabled(bool value) { m_dkimEnabledHasBeenSet = true; m_dkimEnabled = value; }

    /**
     * <p>Sets whether DKIM signing is enabled for an identity. Set to
     * <code>true</code> to enable DKIM signing for this identity; <code>false</code>
     * to disable it. </p>
     */
    inline SetIdentityDkimEnabledRequest& WithDkimEnabled(bool value) { SetDkimEnabled(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    bool m_dkimEnabled;
    bool m_dkimEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
