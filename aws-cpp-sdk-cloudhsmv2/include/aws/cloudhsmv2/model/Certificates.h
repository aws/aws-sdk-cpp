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
  class AWS_CLOUDHSMV2_API Certificates
  {
  public:
    Certificates();
    Certificates(Aws::Utils::Json::JsonView jsonValue);
    Certificates& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline const Aws::String& GetClusterCsr() const{ return m_clusterCsr; }

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline bool ClusterCsrHasBeenSet() const { return m_clusterCsrHasBeenSet; }

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline void SetClusterCsr(const Aws::String& value) { m_clusterCsrHasBeenSet = true; m_clusterCsr = value; }

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline void SetClusterCsr(Aws::String&& value) { m_clusterCsrHasBeenSet = true; m_clusterCsr = std::move(value); }

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline void SetClusterCsr(const char* value) { m_clusterCsrHasBeenSet = true; m_clusterCsr.assign(value); }

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline Certificates& WithClusterCsr(const Aws::String& value) { SetClusterCsr(value); return *this;}

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline Certificates& WithClusterCsr(Aws::String&& value) { SetClusterCsr(std::move(value)); return *this;}

    /**
     * <p>The cluster's certificate signing request (CSR). The CSR exists only when the
     * cluster's state is <code>UNINITIALIZED</code>.</p>
     */
    inline Certificates& WithClusterCsr(const char* value) { SetClusterCsr(value); return *this;}


    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline const Aws::String& GetHsmCertificate() const{ return m_hsmCertificate; }

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline bool HsmCertificateHasBeenSet() const { return m_hsmCertificateHasBeenSet; }

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline void SetHsmCertificate(const Aws::String& value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate = value; }

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline void SetHsmCertificate(Aws::String&& value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate = std::move(value); }

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline void SetHsmCertificate(const char* value) { m_hsmCertificateHasBeenSet = true; m_hsmCertificate.assign(value); }

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline Certificates& WithHsmCertificate(const Aws::String& value) { SetHsmCertificate(value); return *this;}

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline Certificates& WithHsmCertificate(Aws::String&& value) { SetHsmCertificate(std::move(value)); return *this;}

    /**
     * <p>The HSM certificate issued (signed) by the HSM hardware.</p>
     */
    inline Certificates& WithHsmCertificate(const char* value) { SetHsmCertificate(value); return *this;}


    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline const Aws::String& GetAwsHardwareCertificate() const{ return m_awsHardwareCertificate; }

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline bool AwsHardwareCertificateHasBeenSet() const { return m_awsHardwareCertificateHasBeenSet; }

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline void SetAwsHardwareCertificate(const Aws::String& value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate = value; }

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline void SetAwsHardwareCertificate(Aws::String&& value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate = std::move(value); }

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline void SetAwsHardwareCertificate(const char* value) { m_awsHardwareCertificateHasBeenSet = true; m_awsHardwareCertificate.assign(value); }

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline Certificates& WithAwsHardwareCertificate(const Aws::String& value) { SetAwsHardwareCertificate(value); return *this;}

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline Certificates& WithAwsHardwareCertificate(Aws::String&& value) { SetAwsHardwareCertificate(std::move(value)); return *this;}

    /**
     * <p>The HSM hardware certificate issued (signed) by AWS CloudHSM.</p>
     */
    inline Certificates& WithAwsHardwareCertificate(const char* value) { SetAwsHardwareCertificate(value); return *this;}


    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline const Aws::String& GetManufacturerHardwareCertificate() const{ return m_manufacturerHardwareCertificate; }

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline bool ManufacturerHardwareCertificateHasBeenSet() const { return m_manufacturerHardwareCertificateHasBeenSet; }

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline void SetManufacturerHardwareCertificate(const Aws::String& value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate = value; }

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline void SetManufacturerHardwareCertificate(Aws::String&& value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate = std::move(value); }

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline void SetManufacturerHardwareCertificate(const char* value) { m_manufacturerHardwareCertificateHasBeenSet = true; m_manufacturerHardwareCertificate.assign(value); }

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline Certificates& WithManufacturerHardwareCertificate(const Aws::String& value) { SetManufacturerHardwareCertificate(value); return *this;}

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline Certificates& WithManufacturerHardwareCertificate(Aws::String&& value) { SetManufacturerHardwareCertificate(std::move(value)); return *this;}

    /**
     * <p>The HSM hardware certificate issued (signed) by the hardware
     * manufacturer.</p>
     */
    inline Certificates& WithManufacturerHardwareCertificate(const char* value) { SetManufacturerHardwareCertificate(value); return *this;}


    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline const Aws::String& GetClusterCertificate() const{ return m_clusterCertificate; }

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline bool ClusterCertificateHasBeenSet() const { return m_clusterCertificateHasBeenSet; }

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline void SetClusterCertificate(const Aws::String& value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate = value; }

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline void SetClusterCertificate(Aws::String&& value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate = std::move(value); }

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline void SetClusterCertificate(const char* value) { m_clusterCertificateHasBeenSet = true; m_clusterCertificate.assign(value); }

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline Certificates& WithClusterCertificate(const Aws::String& value) { SetClusterCertificate(value); return *this;}

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline Certificates& WithClusterCertificate(Aws::String&& value) { SetClusterCertificate(std::move(value)); return *this;}

    /**
     * <p>The cluster certificate issued (signed) by the issuing certificate authority
     * (CA) of the cluster's owner.</p>
     */
    inline Certificates& WithClusterCertificate(const char* value) { SetClusterCertificate(value); return *this;}

  private:

    Aws::String m_clusterCsr;
    bool m_clusterCsrHasBeenSet;

    Aws::String m_hsmCertificate;
    bool m_hsmCertificateHasBeenSet;

    Aws::String m_awsHardwareCertificate;
    bool m_awsHardwareCertificateHasBeenSet;

    Aws::String m_manufacturerHardwareCertificate;
    bool m_manufacturerHardwareCertificateHasBeenSet;

    Aws::String m_clusterCertificate;
    bool m_clusterCertificateHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
