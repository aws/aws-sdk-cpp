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
   * <p>Represents a request to begin Amazon SES domain verification and to generate
   * the TXT records that you must publish to the DNS server of your domain to
   * complete the verification. For information about domain verification, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-domains.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API VerifyDomainIdentityRequest : public SESRequest
  {
  public:
    VerifyDomainIdentityRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The domain to be verified.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain to be verified.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain to be verified.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain to be verified.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain to be verified.</p>
     */
    inline VerifyDomainIdentityRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain to be verified.</p>
     */
    inline VerifyDomainIdentityRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain to be verified.</p>
     */
    inline VerifyDomainIdentityRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
