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
    AWS_APPRUNNER_API AssociateCustomDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateCustomDomain"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * associate a custom domain name with.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    AssociateCustomDomainRequest& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom domain endpoint to associate. Specify a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AssociateCustomDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to associate the subdomain
     * <code>www.<i>DomainName</i> </code> with the App Runner service in addition to
     * the base domain.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetEnableWWWSubdomain() const { return m_enableWWWSubdomain; }
    inline bool EnableWWWSubdomainHasBeenSet() const { return m_enableWWWSubdomainHasBeenSet; }
    inline void SetEnableWWWSubdomain(bool value) { m_enableWWWSubdomainHasBeenSet = true; m_enableWWWSubdomain = value; }
    inline AssociateCustomDomainRequest& WithEnableWWWSubdomain(bool value) { SetEnableWWWSubdomain(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableWWWSubdomain{false};
    bool m_enableWWWSubdomainHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
