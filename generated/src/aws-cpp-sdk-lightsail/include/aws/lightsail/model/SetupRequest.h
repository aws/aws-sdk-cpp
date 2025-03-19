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
    AWS_LIGHTSAIL_API SetupRequest() = default;
    AWS_LIGHTSAIL_API SetupRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API SetupRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Lightsail instance.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    SetupRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain and subdomains that the SSL/TLS certificate
     * secures.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const { return m_domainNames; }
    inline bool DomainNamesHasBeenSet() const { return m_domainNamesHasBeenSet; }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    void SetDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames = std::forward<DomainNamesT>(value); }
    template<typename DomainNamesT = Aws::Vector<Aws::String>>
    SetupRequest& WithDomainNames(DomainNamesT&& value) { SetDomainNames(std::forward<DomainNamesT>(value)); return *this;}
    template<typename DomainNamesT = Aws::String>
    SetupRequest& AddDomainNames(DomainNamesT&& value) { m_domainNamesHasBeenSet = true; m_domainNames.emplace_back(std::forward<DomainNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Certificate Authority (CA) that issues the SSL/TLS certificate.</p>
     */
    inline CertificateProvider GetCertificateProvider() const { return m_certificateProvider; }
    inline bool CertificateProviderHasBeenSet() const { return m_certificateProviderHasBeenSet; }
    inline void SetCertificateProvider(CertificateProvider value) { m_certificateProviderHasBeenSet = true; m_certificateProvider = value; }
    inline SetupRequest& WithCertificateProvider(CertificateProvider value) { SetCertificateProvider(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainNames;
    bool m_domainNamesHasBeenSet = false;

    CertificateProvider m_certificateProvider{CertificateProvider::NOT_SET};
    bool m_certificateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
