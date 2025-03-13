/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains one or more certificates or a certificate signing request
   * (CSR).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Certificates">AWS
   * API Reference</a></p>
   */
  class Certificates
  {
  public:
    AWS_CLOUDHSMV2_API Certificates() = default;
    AWS_CLOUDHSMV2_API Certificates(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Certificates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline const Aws::String& GetClusterCsr() const { return m_clusterCsr; }
    inline bool ClusterCsrHasBeenSet() const { return m_clusterCsrHasBeenSet; }
    template<typename ClusterCsrT = Aws::String>
    void SetClusterCsr(ClusterCsrT&& value) { m_clusterCsrHasBeenSet = true; m_clusterCsr = std::forward<ClusterCsrT>(value); }
    template<typename ClusterCsrT = Aws::String>
    Certificates& WithClusterCsr(ClusterCsrT&& value) { SetClusterCsr(std::forward<ClusterCsrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline const Aws::String& GetHsmCertificate() const { return m_hsmCertificate; }
    inline bool HsmCertificateHasBeenSet() const { return m_hsmCertificateHasBeenSet; }
    template<typename HsmCertificateT = Aws::String>
    void SetHsmCertificate(HsmCertificateT&& value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate = std::forward<HsmCertificateT>(value); }
    template<typename HsmCertificateT = Aws::String>
    Certificates& WithHsmCertificate(HsmCertificateT&& value) { SetHsmCertificate(std::forward<HsmCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM hardware certificate issued (signed) by CloudHSM.</p>
     */
    inline const Aws::String& GetAwsHardwareCertificate() const { return m_awsHardwareCertificate; }
    inline bool AwsHardwareCertificateHasBeenSet() const { return m_awsHardwareCertificateHasBeenSet; }
    template<typename AwsHardwareCertificateT = Aws::String>
    void SetAwsHardwareCertificate(AwsHardwareCertificateT&& value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate = std::forward<AwsHardwareCertificateT>(value); }
    template<typename AwsHardwareCertificateT = Aws::String>
    Certificates& WithAwsHardwareCertificate(AwsHardwareCertificateT&& value) { SetAwsHardwareCertificate(std::forward<AwsHardwareCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline const Aws::String& GetManufacturerHardwareCertificate() const { return m_manufacturerHardwareCertificate; }
    inline bool ManufacturerHardwareCertificateHasBeenSet() const { return m_manufacturerHardwareCertificateHasBeenSet; }
    template<typename ManufacturerHardwareCertificateT = Aws::String>
    void SetManufacturerHardwareCertificate(ManufacturerHardwareCertificateT&& value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate = std::forward<ManufacturerHardwareCertificateT>(value); }
    template<typename ManufacturerHardwareCertificateT = Aws::String>
    Certificates& WithManufacturerHardwareCertificate(ManufacturerHardwareCertificateT&& value) { SetManufacturerHardwareCertificate(std::forward<ManufacturerHardwareCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline const Aws::String& GetClusterCertificate() const { return m_clusterCertificate; }
    inline bool ClusterCertificateHasBeenSet() const { return m_clusterCertificateHasBeenSet; }
    template<typename ClusterCertificateT = Aws::String>
    void SetClusterCertificate(ClusterCertificateT&& value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate = std::forward<ClusterCertificateT>(value); }
    template<typename ClusterCertificateT = Aws::String>
    Certificates& WithClusterCertificate(ClusterCertificateT&& value) { SetClusterCertificate(std::forward<ClusterCertificateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterCsr;
    bool m_clusterCsrHasBeenSet = false;

    Aws::String m_hsmCertificate;
    bool m_hsmCertificateHasBeenSet = false;

    Aws::String m_awsHardwareCertificate;
    bool m_awsHardwareCertificateHasBeenSet = false;

    Aws::String m_manufacturerHardwareCertificate;
    bool m_manufacturerHardwareCertificateHasBeenSet = false;

    Aws::String m_clusterCertificate;
    bool m_clusterCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
