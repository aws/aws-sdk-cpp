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
    AWS_LIGHTSAIL_API SetupInstanceHttpsRequest();

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
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline SetupInstanceHttpsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline SetupInstanceHttpsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline SetupInstanceHttpsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact method for SSL/TLS certificate renewal alerts. You can enter one
     * email address. </p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline SetupInstanceHttpsRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline SetupInstanceHttpsRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline SetupInstanceHttpsRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain and subdomains that were specified for the SSL/TLS
     * certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::move(value); }
    inline SetupInstanceHttpsRequest& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}
    inline SetupInstanceHttpsRequest& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}
    inline SetupInstanceHttpsRequest& AddDomainNames(const Aws::String& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }
    inline SetupInstanceHttpsRequest& AddDomainNames(Aws::String&& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(std::move(value)); return *this; }
    inline SetupInstanceHttpsRequest& AddDomainNames(const char* value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The certificate authority that issues the SSL/TLS certificate.</p>
     */
    inline const CertificateProvider& GetCertificateProvider() const{ return m_certificateProvider; }
    inline bool CertificateProviderHasBeenSet() const { return m_certificateProviderHasBeenSet; }
    inline void SetCertificateProvider(const CertificateProvider& value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = value; }
    inline void SetCertificateProvider(CertificateProvider&& value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = std::move(value); }
    inline SetupInstanceHttpsRequest& WithCertificateProvider(const CertificateProvider& value) { SetCertificateProvider(value); return *this;}
    inline SetupInstanceHttpsRequest& WithCertificateProvider(CertificateProvider&& value) { SetCertificateProvider(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    CertificateProvider m_certificateProvider;
    bool m_certificateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
