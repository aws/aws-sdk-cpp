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
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The CheckDomainTransferability request contains the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferabilityRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityRequest : public Route53DomainsRequest
  {
  public:
    CheckDomainTransferabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckDomainTransferability"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline CheckDomainTransferabilityRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline CheckDomainTransferabilityRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to transfer to Amazon Route 53.</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p>
     */
    inline CheckDomainTransferabilityRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline const Aws::String& GetAuthCode() const{ return m_authCode; }

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline void SetAuthCode(const Aws::String& value) { m_authCodeHasBeenSet = true; m_authCode = value; }

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline void SetAuthCode(Aws::String&& value) { m_authCodeHasBeenSet = true; m_authCode = std::move(value); }

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline void SetAuthCode(const char* value) { m_authCodeHasBeenSet = true; m_authCode.assign(value); }

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline CheckDomainTransferabilityRequest& WithAuthCode(const Aws::String& value) { SetAuthCode(value); return *this;}

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline CheckDomainTransferabilityRequest& WithAuthCode(Aws::String&& value) { SetAuthCode(std::move(value)); return *this;}

    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline CheckDomainTransferabilityRequest& WithAuthCode(const char* value) { SetAuthCode(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
