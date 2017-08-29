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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  class AWS_ROUTE53DOMAINS_API ResendContactReachabilityEmailResult
  {
  public:
    ResendContactReachabilityEmailResult();
    ResendContactReachabilityEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResendContactReachabilityEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p> <code>True</code> if the email address for the registrant contact has
     * already been verified, and <code>false</code> otherwise. If the email address
     * has already been verified, we don't send another confirmation email.</p>
     */
    inline bool GetIsAlreadyVerified() const{ return m_isAlreadyVerified; }

    /**
     * <p> <code>True</code> if the email address for the registrant contact has
     * already been verified, and <code>false</code> otherwise. If the email address
     * has already been verified, we don't send another confirmation email.</p>
     */
    inline void SetIsAlreadyVerified(bool value) { m_isAlreadyVerified = value; }

    /**
     * <p> <code>True</code> if the email address for the registrant contact has
     * already been verified, and <code>false</code> otherwise. If the email address
     * has already been verified, we don't send another confirmation email.</p>
     */
    inline ResendContactReachabilityEmailResult& WithIsAlreadyVerified(bool value) { SetIsAlreadyVerified(value); return *this;}

  private:

    Aws::String m_domainName;

    Aws::String m_emailAddress;

    bool m_isAlreadyVerified;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
