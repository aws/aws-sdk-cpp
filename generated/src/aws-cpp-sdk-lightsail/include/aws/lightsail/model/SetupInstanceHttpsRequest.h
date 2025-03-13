/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/CertificateProvider.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class SetupInstanceHttpsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API SetupInstanceHttpsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetupInstanceHttps"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    SetupInstanceHttpsRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact method for SSL/TLS certificate renewal alerts. You can enter one
     * email address. </p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    SetupInstanceHttpsRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain and subdomains that were specified for the SSL/TLS
     * certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const { return m_domainNames; }
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    void SetDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::forward<DomainNamesT>(value); }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    SetupInstanceHttpsRequest& WithDomainNames(DomainNamesT&& value) { SetDomainNames(std::forward<DomainNamesT>(value)); return *this;}
    template<typename DomainNamesT = Aws::String>
    SetupInstanceHttpsRequest& AddDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames.emplace_back(std::forward<DomainNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The certificate authority that issues the SSL/TLS certificate.</p>
     */
    inline CertificateProvider GetCertificateProvider() const { return m_certificateProvider; }
    inline bool CertificateProviderHasBeenSet() const { return m_certificateProviderHasBeenSet; }
    inline void SetCertificateProvider(CertificateProvider value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = value; }
    inline SetupInstanceHttpsRequest& WithCertificateProvider(CertificateProvider value) { SetCertificateProvider(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    CertificateProvider m_certificateProvider{CertificateProvider::NOT_SET};
    bool m_certificateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
