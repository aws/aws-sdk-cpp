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
    AWS_CLOUDHSMV2_API Certificates();
    AWS_CLOUDHSMV2_API Certificates(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Certificates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline const Aws::String& GetClusterCsr() const{ return m_clusterCsr; }
    inline bool ClusterCsrHasBeenSet() const { return m_clusterCsrHasBeenSet; }
    inline void SetClusterCsr(const Aws::String& value) { m_clusterCsrHasBeenSet = true; m_clusterCsr = value; }
    inline void SetClusterCsr(Aws::String&& value) { m_clusterCsrHasBeenSet = true; m_clusterCsr = std::move(value); }
    inline void SetClusterCsr(const char* value) { m_clusterCsrHasBeenSet = true; m_clusterCsr.assign(value); }
    inline Certificates& WithClusterCsr(const Aws::String& value) { SetClusterCsr(value); return *this;}
    inline Certificates& WithClusterCsr(Aws::String&& value) { SetClusterCsr(std::move(value)); return *this;}
    inline Certificates& WithClusterCsr(const char* value) { SetClusterCsr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline const Aws::String& GetHsmCertificate() const{ return m_hsmCertificate; }
    inline bool HsmCertificateHasBeenSet() const { return m_hsmCertificateHasBeenSet; }
    inline void SetHsmCertificate(const Aws::String& value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate = value; }
    inline void SetHsmCertificate(Aws::String&& value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate = std::move(value); }
    inline void SetHsmCertificate(const char* value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate.assign(value); }
    inline Certificates& WithHsmCertificate(const Aws::String& value) { SetHsmCertificate(value); return *this;}
    inline Certificates& WithHsmCertificate(Aws::String&& value) { SetHsmCertificate(std::move(value)); return *this;}
    inline Certificates& WithHsmCertificate(const char* value) { SetHsmCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM hardware certificate issued (signed) by CloudHSM.</p>
     */
    inline const Aws::String& GetAwsHardwareCertificate() const{ return m_awsHardwareCertificate; }
    inline bool AwsHardwareCertificateHasBeenSet() const { return m_awsHardwareCertificateHasBeenSet; }
    inline void SetAwsHardwareCertificate(const Aws::String& value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate = value; }
    inline void SetAwsHardwareCertificate(Aws::String&& value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate = std::move(value); }
    inline void SetAwsHardwareCertificate(const char* value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate.assign(value); }
    inline Certificates& WithAwsHardwareCertificate(const Aws::String& value) { SetAwsHardwareCertificate(value); return *this;}
    inline Certificates& WithAwsHardwareCertificate(Aws::String&& value) { SetAwsHardwareCertificate(std::move(value)); return *this;}
    inline Certificates& WithAwsHardwareCertificate(const char* value) { SetAwsHardwareCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline const Aws::String& GetManufacturerHardwareCertificate() const{ return m_manufacturerHardwareCertificate; }
    inline bool ManufacturerHardwareCertificateHasBeenSet() const { return m_manufacturerHardwareCertificateHasBeenSet; }
    inline void SetManufacturerHardwareCertificate(const Aws::String& value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate = value; }
    inline void SetManufacturerHardwareCertificate(Aws::String&& value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate = std::move(value); }
    inline void SetManufacturerHardwareCertificate(const char* value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate.assign(value); }
    inline Certificates& WithManufacturerHardwareCertificate(const Aws::String& value) { SetManufacturerHardwareCertificate(value); return *this;}
    inline Certificates& WithManufacturerHardwareCertificate(Aws::String&& value) { SetManufacturerHardwareCertificate(std::move(value)); return *this;}
    inline Certificates& WithManufacturerHardwareCertificate(const char* value) { SetManufacturerHardwareCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline const Aws::String& GetClusterCertificate() const{ return m_clusterCertificate; }
    inline bool ClusterCertificateHasBeenSet() const { return m_clusterCertificateHasBeenSet; }
    inline void SetClusterCertificate(const Aws::String& value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate = value; }
    inline void SetClusterCertificate(Aws::String&& value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate = std::move(value); }
    inline void SetClusterCertificate(const char* value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate.assign(value); }
    inline Certificates& WithClusterCertificate(const Aws::String& value) { SetClusterCertificate(value); return *this;}
    inline Certificates& WithClusterCertificate(Aws::String&& value) { SetClusterCertificate(std::move(value)); return *this;}
    inline Certificates& WithClusterCertificate(const char* value) { SetClusterCertificate(value); return *this;}
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
