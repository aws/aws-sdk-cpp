﻿/*
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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53DOMAINS_API ResendContactReachabilityEmailRequest : public Route53DomainsRequest
  {
  public:
    ResendContactReachabilityEmailRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ResendContactReachabilityEmailRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ResendContactReachabilityEmailRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain for which you want Amazon Route 53 to resend a
     * confirmation email to the registrant contact.</p> <p>Type: String</p>
     * <p>Default: None</p> <p>Required: Yes</p>
     */
    inline ResendContactReachabilityEmailRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
