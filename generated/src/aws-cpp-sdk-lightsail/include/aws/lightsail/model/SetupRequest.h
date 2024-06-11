/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/CertificateProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Returns information that was submitted during the
   * <code>SetupInstanceHttps</code> request. Email information is redacted for
   * privacy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetupRequest">AWS
   * API Reference</a></p>
   */
  class SetupRequest
  {
  public:
    AWS_LIGHTSAIL_API SetupRequest();
    AWS_LIGHTSAIL_API SetupRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline SetupRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline SetupRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline SetupRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain and subdomains that the SSL/TLS certificate
     * secures.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNamesHasBeenSet = true; m_domainNames = value; }
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::move(value); }
    inline SetupRequest& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}
    inline SetupRequest& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}
    inline SetupRequest& AddDomainNames(const Aws::String& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }
    inline SetupRequest& AddDomainNames(Aws::String&& value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(std::move(value)); return *this; }
    inline SetupRequest& AddDomainNames(const char* value) { m_domainNamesHasBeenSet = true; m_domainNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Certificate Authority (CA) that issues the SSL/TLS certificate.</p>
     */
    inline const CertificateProvider& GetCertificateProvider() const{ return m_certificateProvider; }
    inline bool CertificateProviderHasBeenSet() const { return m_certificateProviderHasBeenSet; }
    inline void SetCertificateProvider(const CertificateProvider& value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = value; }
    inline void SetCertificateProvider(CertificateProvider&& value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = std::move(value); }
    inline SetupRequest& WithCertificateProvider(const CertificateProvider& value) { SetCertificateProvider(value); return *this;}
    inline SetupRequest& WithCertificateProvider(CertificateProvider&& value) { SetCertificateProvider(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    CertificateProvider m_certificateProvider;
    bool m_certificateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
