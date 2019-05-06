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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainContact request includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainContactRequest : public Route53DomainsRequest
  {
  public:
    UpdateDomainContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainContact"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet;

    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet;

    ContactDetail m_techContact;
    bool m_techContactHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
