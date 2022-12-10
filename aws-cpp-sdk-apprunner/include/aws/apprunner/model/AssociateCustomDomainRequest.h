/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class AssociateCustomDomainRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API AssociateCustomDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateCustomDomain"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline AssociateCustomDomainRequest& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline AssociateCustomDomainRequest& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline AssociateCustomDomainRequest& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline AssociateCustomDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline AssociateCustomDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline AssociateCustomDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Set to <code>true</code> to associate the subdomain
     * <code>www.<i>DomainName</i> </code> with the App Runner service in addition to
     * the base domain.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetEnableWWWSubdomain() const{ return m_enableWWWSubdomain; }

    /**
     * <p>Set to <code>true</code> to associate the subdomain
     * <code>www.<i>DomainName</i> </code> with the App Runner service in addition to
     * the base domain.</p> <p>Default: <code>true</code> </p>
     */
    inline bool EnableWWWSubdomainHasBeenSet() const { return m_enableWWWSubdomainHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to associate the subdomain
     * <code>www.<i>DomainName</i> </code> with the App Runner service in addition to
     * the base domain.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetEnableWWWSubdomain(bool value) { m_enableWWWSubdomainHasBeenSet = true; m_enableWWWSubdomain = value; }

    /**
     * <p>Set to <code>true</code> to associate the subdomain
     * <code>www.<i>DomainName</i> </code> with the App Runner service in addition to
     * the base domain.</p> <p>Default: <code>true</code> </p>
     */
    inline AssociateCustomDomainRequest& WithEnableWWWSubdomain(bool value) { SetEnableWWWSubdomain(value); return *this;}

  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableWWWSubdomain;
    bool m_enableWWWSubdomainHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
