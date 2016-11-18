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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACM
{
namespace Model
{

  /**
   * <p>Structure that contains the domain name, the base validation domain to which
   * validation email is sent, and the email addresses used to validate the domain
   * identity.</p>
   */
  class AWS_ACM_API DomainValidation
  {
  public:
    DomainValidation();
    DomainValidation(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainValidation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline DomainValidation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline DomainValidation& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the form <code>www.example.com or
     * </code> <code>example.com</code>.</p>
     */
    inline DomainValidation& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationEmails() const{ return m_validationEmails; }

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline void SetValidationEmails(const Aws::Vector<Aws::String>& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = value; }

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline void SetValidationEmails(Aws::Vector<Aws::String>&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = value; }

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline DomainValidation& WithValidationEmails(const Aws::Vector<Aws::String>& value) { SetValidationEmails(value); return *this;}

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline DomainValidation& WithValidationEmails(Aws::Vector<Aws::String>&& value) { SetValidationEmails(value); return *this;}

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline DomainValidation& AddValidationEmails(const Aws::String& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline DomainValidation& AddValidationEmails(Aws::String&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }

    /**
     * <p>A list of contact address for the domain registrant.</p>
     */
    inline DomainValidation& AddValidationEmails(const char* value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline const Aws::String& GetValidationDomain() const{ return m_validationDomain; }

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline void SetValidationDomain(const Aws::String& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline void SetValidationDomain(Aws::String&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline void SetValidationDomain(const char* value) { m_validationDomainHasBeenSet = true; m_validationDomain.assign(value); }

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline DomainValidation& WithValidationDomain(const Aws::String& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline DomainValidation& WithValidationDomain(Aws::String&& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The base validation domain that acts as the suffix of the email addresses
     * that are used to send the emails.</p>
     */
    inline DomainValidation& WithValidationDomain(const char* value) { SetValidationDomain(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_validationEmails;
    bool m_validationEmailsHasBeenSet;
    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
