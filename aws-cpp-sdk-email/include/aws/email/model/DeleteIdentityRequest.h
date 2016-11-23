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
   * <p>Represents a request to delete one of your Amazon SES identities (an email
   * address or domain).</p>
   */
  class AWS_SES_API DeleteIdentityRequest : public SESRequest
  {
  public:
    DeleteIdentityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline DeleteIdentityRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline DeleteIdentityRequest& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>The identity to be removed from the list of identities for the AWS
     * Account.</p>
     */
    inline DeleteIdentityRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
